#pragma once
#include <math.h>
#include <vector>
#include <iostream>
#include "Lab1.h"

using namespace std;
using MyPoint = pair<double, double>;


namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace ZedGraph;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:


		MyForm() {
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	protected:

	protected:

	private: System::Windows::Forms::Button^ butt_draw;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label_e;
	private: System::Windows::Forms::TextBox^ textBox_e;
	private: System::Windows::Forms::Label^ label_u0;
	private: System::Windows::Forms::TextBox^ textBox_u0;
	private: System::Windows::Forms::Label^ label_x0;
	private: System::Windows::Forms::TextBox^ textBox_x0;









	private: System::Windows::Forms::Button^ butt_zoom;
	private: System::Windows::Forms::TextBox^ textBox_kol_vo_shag;
	private: System::Windows::Forms::Label^ label_kol_vo_shagov;
	private: System::Windows::Forms::TextBox^ textBox_h;





	private: System::Windows::Forms::Label^ label_h;





	protected:
	private: System::ComponentModel::IContainer^ components;

	private:






	private: System::Windows::Forms::Label^ label_Xmax;
	private: System::Windows::Forms::TextBox^ textBox_Xmax;














	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idXi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idVi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vi2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ui;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Abs;
















		   double e;

		   /// <summary>
		   /// Required designer variable.
		   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			   this->butt_draw = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->idXi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->idVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->V2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Vi2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->ui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Abs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->label_e = (gcnew System::Windows::Forms::Label());
			   this->textBox_e = (gcnew System::Windows::Forms::TextBox());
			   this->label_u0 = (gcnew System::Windows::Forms::Label());
			   this->textBox_u0 = (gcnew System::Windows::Forms::TextBox());
			   this->label_x0 = (gcnew System::Windows::Forms::Label());
			   this->textBox_x0 = (gcnew System::Windows::Forms::TextBox());
			   this->butt_zoom = (gcnew System::Windows::Forms::Button());
			   this->textBox_kol_vo_shag = (gcnew System::Windows::Forms::TextBox());
			   this->label_kol_vo_shagov = (gcnew System::Windows::Forms::Label());
			   this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			   this->label_h = (gcnew System::Windows::Forms::Label());
			   this->label_Xmax = (gcnew System::Windows::Forms::Label());
			   this->textBox_Xmax = (gcnew System::Windows::Forms::TextBox());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // zedGraphControl1
			   // 
			   this->zedGraphControl1->Location = System::Drawing::Point(-2, 11);
			   this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			   this->zedGraphControl1->Name = L"zedGraphControl1";
			   this->zedGraphControl1->ScrollGrace = 0;
			   this->zedGraphControl1->ScrollMaxX = 0;
			   this->zedGraphControl1->ScrollMaxY = 0;
			   this->zedGraphControl1->ScrollMaxY2 = 0;
			   this->zedGraphControl1->ScrollMinX = 0;
			   this->zedGraphControl1->ScrollMinY = 0;
			   this->zedGraphControl1->ScrollMinY2 = 0;
			   this->zedGraphControl1->Size = System::Drawing::Size(513, 394);
			   this->zedGraphControl1->TabIndex = 0;
			   this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			   // 
			   // butt_draw
			   // 
			   this->butt_draw->BackColor = System::Drawing::Color::Aquamarine;
			   this->butt_draw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butt_draw->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->butt_draw->Location = System::Drawing::Point(548, 442);
			   this->butt_draw->Name = L"butt_draw";
			   this->butt_draw->Size = System::Drawing::Size(239, 32);
			   this->butt_draw->TabIndex = 1;
			   this->butt_draw->Text = L"Нарисовать";
			   this->butt_draw->UseVisualStyleBackColor = false;
			   this->butt_draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				   this->i, this->idXi,
					   this->idVi, this->V2i, this->Vi2i, this->OLP, this->Hi, this->C1, this->C2, this->ui, this->Abs
			   });
			   this->dataGridView1->Location = System::Drawing::Point(548, 11);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersVisible = false;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->Size = System::Drawing::Size(529, 394);
			   this->dataGridView1->TabIndex = 2;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			   // 
			   // i
			   // 
			   this->i->HeaderText = L"i";
			   this->i->MinimumWidth = 6;
			   this->i->Name = L"i";
			   this->i->ReadOnly = true;
			   this->i->Width = 45;
			   // 
			   // idXi
			   // 
			   this->idXi->HeaderText = L"Xi";
			   this->idXi->MinimumWidth = 6;
			   this->idXi->Name = L"idXi";
			   this->idXi->ReadOnly = true;
			   this->idXi->Width = 45;
			   // 
			   // idVi
			   // 
			   this->idVi->HeaderText = L"Vi";
			   this->idVi->MinimumWidth = 6;
			   this->idVi->Name = L"idVi";
			   this->idVi->ReadOnly = true;
			   this->idVi->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			   this->idVi->Width = 45;
			   // 
			   // V2i
			   // 
			   this->V2i->HeaderText = L"V2i";
			   this->V2i->MinimumWidth = 6;
			   this->V2i->Name = L"V2i";
			   this->V2i->Width = 45;
			   // 
			   // Vi2i
			   // 
			   this->Vi2i->HeaderText = L"Vi-V2i";
			   this->Vi2i->MinimumWidth = 6;
			   this->Vi2i->Name = L"Vi2i";
			   this->Vi2i->Width = 45;
			   // 
			   // OLP
			   // 
			   this->OLP->HeaderText = L"OLP";
			   this->OLP->MinimumWidth = 6;
			   this->OLP->Name = L"OLP";
			   this->OLP->Width = 45;
			   // 
			   // Hi
			   // 
			   this->Hi->HeaderText = L"Hi";
			   this->Hi->MinimumWidth = 6;
			   this->Hi->Name = L"Hi";
			   this->Hi->Width = 45;
			   // 
			   // C1
			   // 
			   this->C1->HeaderText = L"C1";
			   this->C1->MinimumWidth = 6;
			   this->C1->Name = L"C1";
			   this->C1->Width = 45;
			   // 
			   // C2
			   // 
			   this->C2->HeaderText = L"C2";
			   this->C2->MinimumWidth = 6;
			   this->C2->Name = L"C2";
			   this->C2->Width = 45;
			   // 
			   // ui
			   // 
			   this->ui->HeaderText = L"ui";
			   this->ui->MinimumWidth = 6;
			   this->ui->Name = L"ui";
			   this->ui->Width = 45;
			   // 
			   // Abs
			   // 
			   this->Abs->HeaderText = L"Abs(Ui-Vi)";
			   this->Abs->MinimumWidth = 6;
			   this->Abs->Name = L"Abs";
			   this->Abs->Width = 75;
			   // 
			   // label_e
			   // 
			   this->label_e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_e->Location = System::Drawing::Point(185, 532);
			   this->label_e->Name = L"label_e";
			   this->label_e->Size = System::Drawing::Size(38, 18);
			   this->label_e->TabIndex = 3;
			   this->label_e->Text = L"eps";
			   this->label_e->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			   // 
			   // textBox_e
			   // 
			   this->textBox_e->Location = System::Drawing::Point(259, 532);
			   this->textBox_e->Name = L"textBox_e";
			   this->textBox_e->Size = System::Drawing::Size(60, 20);
			   this->textBox_e->TabIndex = 4;
			   this->textBox_e->Text = L"0";
			   this->textBox_e->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			   // 
			   // label_u0
			   // 
			   this->label_u0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_u0->Location = System::Drawing::Point(185, 439);
			   this->label_u0->MaximumSize = System::Drawing::Size(22, 24);
			   this->label_u0->Name = L"label_u0";
			   this->label_u0->Size = System::Drawing::Size(22, 17);
			   this->label_u0->TabIndex = 5;
			   this->label_u0->Text = L"u₀";
			   this->label_u0->Click += gcnew System::EventHandler(this, &MyForm::label_u0_Click);
			   // 
			   // textBox_u0
			   // 
			   this->textBox_u0->Location = System::Drawing::Point(259, 442);
			   this->textBox_u0->Name = L"textBox_u0";
			   this->textBox_u0->Size = System::Drawing::Size(60, 20);
			   this->textBox_u0->TabIndex = 6;
			   this->textBox_u0->Text = L"1";
			   // 
			   // label_x0
			   // 
			   this->label_x0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_x0->Location = System::Drawing::Point(16, 535);
			   this->label_x0->Name = L"label_x0";
			   this->label_x0->Size = System::Drawing::Size(22, 18);
			   this->label_x0->TabIndex = 7;
			   this->label_x0->Text = L"x₀";
			   // 
			   // textBox_x0
			   // 
			   this->textBox_x0->Location = System::Drawing::Point(56, 535);
			   this->textBox_x0->Name = L"textBox_x0";
			   this->textBox_x0->Size = System::Drawing::Size(109, 20);
			   this->textBox_x0->TabIndex = 8;
			   this->textBox_x0->Text = L"0,1";
			   // 
			   // butt_zoom
			   // 
			   this->butt_zoom->BackColor = System::Drawing::Color::Fuchsia;
			   this->butt_zoom->Location = System::Drawing::Point(818, 438);
			   this->butt_zoom->Name = L"butt_zoom";
			   this->butt_zoom->Size = System::Drawing::Size(259, 37);
			   this->butt_zoom->TabIndex = 9;
			   this->butt_zoom->Text = L"Приблизить";
			   this->butt_zoom->UseVisualStyleBackColor = false;
			   this->butt_zoom->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // textBox_kol_vo_shag
			   // 
			   this->textBox_kol_vo_shag->Location = System::Drawing::Point(56, 442);
			   this->textBox_kol_vo_shag->Name = L"textBox_kol_vo_shag";
			   this->textBox_kol_vo_shag->Size = System::Drawing::Size(109, 20);
			   this->textBox_kol_vo_shag->TabIndex = 13;
			   this->textBox_kol_vo_shag->Text = L"1";
			   // 
			   // label_kol_vo_shagov
			   // 
			   this->label_kol_vo_shagov->AutoSize = true;
			   this->label_kol_vo_shagov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			   this->label_kol_vo_shagov->Location = System::Drawing::Point(16, 436);
			   this->label_kol_vo_shagov->Name = L"label_kol_vo_shagov";
			   this->label_kol_vo_shagov->Size = System::Drawing::Size(18, 20);
			   this->label_kol_vo_shagov->TabIndex = 12;
			   this->label_kol_vo_shagov->Text = L"n";
			   // 
			   // textBox_h
			   // 
			   this->textBox_h->Location = System::Drawing::Point(56, 485);
			   this->textBox_h->Name = L"textBox_h";
			   this->textBox_h->Size = System::Drawing::Size(109, 20);
			   this->textBox_h->TabIndex = 11;
			   this->textBox_h->Text = L"0";
			   this->textBox_h->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			   // 
			   // label_h
			   // 
			   this->label_h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_h->Location = System::Drawing::Point(17, 482);
			   this->label_h->Name = L"label_h";
			   this->label_h->Size = System::Drawing::Size(16, 18);
			   this->label_h->TabIndex = 10;
			   this->label_h->Text = L"h";
			   // 
			   // label_Xmax
			   // 
			   this->label_Xmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_Xmax->Location = System::Drawing::Point(185, 482);
			   this->label_Xmax->Name = L"label_Xmax";
			   this->label_Xmax->Size = System::Drawing::Size(56, 18);
			   this->label_Xmax->TabIndex = 16;
			   this->label_Xmax->Text = L"Xmax";
			   // 
			   // textBox_Xmax
			   // 
			   this->textBox_Xmax->Location = System::Drawing::Point(259, 485);
			   this->textBox_Xmax->Name = L"textBox_Xmax";
			   this->textBox_Xmax->Size = System::Drawing::Size(60, 20);
			   this->textBox_Xmax->TabIndex = 17;
			   this->textBox_Xmax->Text = L"0";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая_задача", L"Задача_1 ", L"Задача_2" });
			   this->comboBox1->Location = System::Drawing::Point(349, 442);
			   this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(146, 28);
			   this->comboBox1->TabIndex = 22;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			   // 
			   // label1
			   // 
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(345, 410);
			   this->label1->MaximumSize = System::Drawing::Size(188, 122);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(146, 18);
			   this->label1->TabIndex = 23;
			   this->label1->Text = L"Выберите задачу";
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			   // 
			   // label2
			   // 
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(349, 493);
			   this->label2->MaximumSize = System::Drawing::Size(188, 122);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(146, 18);
			   this->label2->TabIndex = 24;
			   this->label2->Text = L"Версия";
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->comboBox2->FormattingEnabled = true;
			   this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Без_контроля_ЛП", L"С_контролем_ЛП" });
			   this->comboBox2->Location = System::Drawing::Point(349, 523);
			   this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			   this->comboBox2->Name = L"comboBox2";
			   this->comboBox2->Size = System::Drawing::Size(146, 28);
			   this->comboBox2->TabIndex = 25;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(1086, 574);
			   this->Controls->Add(this->comboBox2);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->textBox_Xmax);
			   this->Controls->Add(this->label_Xmax);
			   this->Controls->Add(this->textBox_kol_vo_shag);
			   this->Controls->Add(this->label_kol_vo_shagov);
			   this->Controls->Add(this->textBox_h);
			   this->Controls->Add(this->label_h);
			   this->Controls->Add(this->butt_zoom);
			   this->Controls->Add(this->textBox_x0);
			   this->Controls->Add(this->label_x0);
			   this->Controls->Add(this->textBox_u0);
			   this->Controls->Add(this->label_u0);
			   this->Controls->Add(this->textBox_e);
			   this->Controls->Add(this->label_e);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->butt_draw);
			   this->Controls->Add(this->zedGraphControl1);
			   this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private:
		double f2(double x, double h) {
			return exp(3 * x) / exp(3 * h);
		}

		double f2(double x) {
			return exp(3 * x);
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int num_task = comboBox1->SelectedIndex;
		int err_check = comboBox2->SelectedIndex;

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		double eps = Convert::ToDouble(textBox_e->Text);
		double u0 = Convert::ToDouble(textBox_u0->Text);

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox_x0->Text);
		double xmax = Convert::ToDouble(textBox_Xmax->Text);

		double h = Convert::ToDouble(textBox_h->Text);
		int n = Convert::ToInt32(textBox_kol_vo_shag->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
		double x = xmin;

		// +++++++++++++++++++++++++++

		Lab1 l(MyPoint(xmin, u0), h, num_task, err_check);

		dataGridView1->Rows->Clear();
		for (int i = 0; (i < n) && (l.getPointFirst() < xmax); i++) {
			double xi, vi, v2i, dif_viv2i, olp, hi;
			int c1, c2;

			tie(xi, vi, v2i, dif_viv2i, olp, hi, c1, c2) = l.Solution(n, xmax, eps);
			double ui = f2(xi, h);

			f1_list->Add(xi, vi);
			if (num_task == 0)
				f2_list->Add(xi, ui);

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = xi;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(vi * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[3]->Value = floor(v2i * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[4]->Value = floor(dif_viv2i * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[5]->Value = olp;
			dataGridView1->Rows[i]->Cells[6]->Value = hi;
			dataGridView1->Rows[i]->Cells[7]->Value = c1;
			dataGridView1->Rows[i]->Cells[8]->Value = c2;
			dataGridView1->Rows[i]->Cells[9]->Value = (num_task == 0) ? floor(ui * 1000) / 1000 : NULL;
			dataGridView1->Rows[i]->Cells[10]->Value = (num_task == 0) ? floor(abs(ui - vi) * 1000) / 1000 : NULL;
		}

		/*
		for (int i = 0; i < n; i++) {
			f1_list->Add(RK[i].first, RK[i].second);
			if (num_task == 0)
				f2_list->Add(RK[i].first, f2(RK[i].first));

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = RK[i].first;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(RK[i].second * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[3]->Value = floor( * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[4]->Value = nullptr;// floor((RK[i].second - l.V()[i].second) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[5]->Value = nullptr;// l.solp()[i];
			dataGridView1->Rows[i]->Cells[6]->Value = h;
			dataGridView1->Rows[i]->Cells[7]->Value = l.countup();
			dataGridView1->Rows[i]->Cells[8]->Value = l.countdown();
			dataGridView1->Rows[i]->Cells[9]->Value = u0;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(f2(RK[i].first) - u0);
		}
		*/

		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		/*
				// Устанавливаем интересующий нас интервал по оси Y
				panel->YAxis->Scale->Min = ymin_limit;
				panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //функция zoom
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox_x0->Text);
		double xmax = Convert::ToDouble(textBox_Xmax->Text);
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: void DrawGraph()
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;

		panel->XAxis->Title->Text = "Ось X";
		panel->YAxis->Title->Text = "Ось Y";

		panel->Title->Text = "Рисунок";

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_u0_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}