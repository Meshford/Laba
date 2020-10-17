#include "Lab1.h"

Lab1::Lab1(const MyPoint& init_point, const double h_, int tasknum_, int locerr_) :
	point(init_point),
	h(h_),
	tasknum(tasknum_),
	locerr(locerr_),
	count_up(0),
	count_down(0),
	S_olp(0.)
{
}

double Lab1::f(const MyPoint& p) {
	switch (tasknum) {
	case 0:
		return p.first + 3 * p.second;

	case 1: {
		double func = 1 / (2 * p.first + pow(p.first, 2) + 1);
		return func * pow(p.second, 2) + p.second - pow(p.second, 3) * sin(10 * p.first);
	}

		  // Íå îïðåäåëåííàÿ çàäà÷à
	default:
		throw exception();
	}
}

MyPoint& Lab1::RK_IV(MyPoint& p, double h) {
	double k1 = f(p);
	double k2 = f(make_pair(p.first + h / 2.0, p.second + (h / 2.0) * k1));
	double k3 = f(make_pair(p.first + h / 2.0, p.second + (h / 2.0) * k2));
	double k4 = f(make_pair(p.first + h, p.second + h * k3));

	// (xn+1, vn+1)
	point = make_pair(p.first + h, p.second + h / 6.0 * (k1 + 2.0 * k2 + 2.0 * k3 + k4));

	return point;
}

/*
MyPoint Lab1::RK_IV(MyPoint& p, double h) {
	double k1 = f(p);
	double k2 = f(make_pair(p.first + h / 2.0, p.second + (h / 2.0) * k1));
	double k3 = f(make_pair(p.first + h / 2.0, p.second + (h / 2.0) * k2));
	double k4 = f(make_pair(p.first + h, p.second + h * k3));
	// (xn+1, vn+1)
	return make_pair(p.first + h, p.second + h / 6.0 * (k1 + 2.0 * k2 + 2.0 * k3 + k4));
}*/

bool Lab1::ControlLocErr(MyPoint& p, double h, double eps) {
	// Point p = (xn, vn)
	MyPoint p_next = RK_IV(p, h);
	point2i = RK_IV(p, h / 2);
	MyPoint p_new = RK_IV(point2i, h / 2);

	S_olp = (p_new.second - p_next.second) / (pow(2, P) - 1);
	return ControlCompare_(S_olp, eps);
}

bool Lab1::ControlCompare_(double S, double eps) {
	S = fabs(S);
	if ((eps / (pow(2, P + 1)) <= S) && (S <= eps)) {
		// Äàëåå ñ÷åò ïðîäîëæàåòñÿ ñ òåì æå øàãîì h
		return true;
	}
	else if (S < (eps / pow(2, P + 1))) {
		// Óäâàèâàåì øàã
		h *= 2;
		count_up++;
		return true;
	}
	else if (S > eps) {
		// Ðàññ÷åòû ãðóáûå -> óìåíüøàåì øàã â äâà ðàçà + ïåðåñ÷èòûâàåì òî÷êó xn, vn
		h /= 2;
		count_down++;
		return false;
	}

	throw exception();
}

tuple<double, double, double, double, double, double, int, int> Lab1::Solution(int n, double xMax, double eps) {
	point = RK_IV(point, h);

	switch (locerr) {
		// áåç êîíòðîëÿ ËÏ
	case 0: {
		break;
	}
		  // ñ êîíòðîëåì ËÏ
	case 1: {
		// 1 ñïîñîá
		if (!ControlLocErr(point, h, eps))
			ControlLocErr(point, h, eps);
		// // 2 ñïîñîá
		// ControlLocErr(point, h, eps);
		break;
	}
		  // íåîïðåäåëåííîñòü
	default:
		throw exception();
	}

	return make_tuple(point.first, point.second, point2i.second, point.second - point2i.second, S_olp, h, count_up, count_down);
}