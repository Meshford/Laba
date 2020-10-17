#pragma once

#include <iostream>
#include <cmath>
#include <vector>
#include <tuple>
#include <utility>

using namespace std;
using MyPoint = pair<double, double>;
// Ïîðÿäîê ìåòîäà
const int P = 4;

class Lab1 {
private:
	// point (x, v)
	MyPoint point;
	// point (x, v+0.5)
	MyPoint point2i;

	// step of integrate
	double h;

	// flag for num_task and loccerr
	int tasknum, locerr;

	// êîëè÷åñòâî óâåëè÷åíèé è óìåíüøåíèÿ øàãà
	int count_up, count_down;
	double S_olp;

	// Ðåøåíèå î êîððåêòèðîâêå øàãà ÷èñëåííîãî èíòåãðèðîâàíèÿ
	bool ControlCompare_(double S, double eps);

public:
	// Èíèöèàëèçàöèÿ ïîëåé
	Lab1(const MyPoint& init_point, const double h_, int tasknum_, int locerr_);

	// Ðåàëèçàöèÿ ìåòîäà Ðóíãå-Êóòòû 4îãî ïîðÿäêà
	MyPoint& RK_IV(MyPoint& p, double h);

	// Íàøà du/dx
	double f(const MyPoint& p);

	// Êîíòðîëü ëîêàëüíîé ïîãðåøíîñòè
	bool ControlLocErr(MyPoint& p, double h, double eps);

	// Ðåøåíèå çàäà÷è íà îñíîâå ïàðàìåòðîâ âûáîðà çàäà÷è è ó÷åòà ëï
	tuple<double, double, double, double, double, double, int, int> Solution(int n, double xMax, double eps);

	double getPointFirst() const {
		return point.first;
	}
};