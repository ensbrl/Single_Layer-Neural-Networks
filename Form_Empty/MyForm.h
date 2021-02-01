#pragma once
#include <windows.h>
#include <iomanip>
#include <iostream>
#include <time.h>
#include "Resources.h"
#include "Matris.h"
#include "Function.h"
#include <math.h>

namespace Form_Empty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SizeT = Size1 = Size2 = 0;
			w = gcnew Matrix(3, 1);
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		samples* p;
		int SizeT, Size1, Size2 ;
	private: System::Windows::Forms::CheckBox^ chck_class1;
	private: System::Windows::Forms::CheckBox^ chck_class2;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ randomDrawLineToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ deltaLearningRuleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rESETToolStripMenuItem;
	private: System::Windows::Forms::Label^ lb_error;
	private: System::Windows::Forms::Label^ lb_cycle;
	private: System::Windows::Forms::ToolStripMenuItem^ perceptronRuleToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ norm;
	private: System::Windows::Forms::TrackBar^ trackBar1;




		Matrix^ w; 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chck_class1 = (gcnew System::Windows::Forms::CheckBox());
			this->chck_class2 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomDrawLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deltaLearningRuleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perceptronRuleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rESETToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lb_error = (gcnew System::Windows::Forms::Label());
			this->lb_cycle = (gcnew System::Windows::Forms::Label());
			this->norm = (gcnew System::Windows::Forms::CheckBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(12, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// chck_class1
			// 
			this->chck_class1->AutoSize = true;
			this->chck_class1->Location = System::Drawing::Point(468, 27);
			this->chck_class1->Name = L"chck_class1";
			this->chck_class1->Size = System::Drawing::Size(56, 17);
			this->chck_class1->TabIndex = 1;
			this->chck_class1->Text = L"class1";
			this->chck_class1->UseVisualStyleBackColor = true;
			// 
			// chck_class2
			// 
			this->chck_class2->AutoSize = true;
			this->chck_class2->Location = System::Drawing::Point(468, 50);
			this->chck_class2->Name = L"chck_class2";
			this->chck_class2->Size = System::Drawing::Size(56, 17);
			this->chck_class2->TabIndex = 2;
			this->chck_class2->Text = L"class2";
			this->chck_class2->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->processToolStripMenuItem,
					this->rESETToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(998, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->randomDrawLineToolStripMenuItem,
					this->deltaLearningRuleToolStripMenuItem, this->perceptronRuleToolStripMenuItem
			});
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// randomDrawLineToolStripMenuItem
			// 
			this->randomDrawLineToolStripMenuItem->Name = L"randomDrawLineToolStripMenuItem";
			this->randomDrawLineToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->randomDrawLineToolStripMenuItem->Text = L"Random Draw Line";
			this->randomDrawLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::randomDrawLineToolStripMenuItem_Click);
			// 
			// deltaLearningRuleToolStripMenuItem
			// 
			this->deltaLearningRuleToolStripMenuItem->Name = L"deltaLearningRuleToolStripMenuItem";
			this->deltaLearningRuleToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->deltaLearningRuleToolStripMenuItem->Text = L"Delta Learning Rule";
			this->deltaLearningRuleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deltaLearningRuleToolStripMenuItem_Click);
			// 
			// perceptronRuleToolStripMenuItem
			// 
			this->perceptronRuleToolStripMenuItem->Name = L"perceptronRuleToolStripMenuItem";
			this->perceptronRuleToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->perceptronRuleToolStripMenuItem->Text = L"Perceptron Rule";
			this->perceptronRuleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::perceptronRuleToolStripMenuItem_Click);
			// 
			// rESETToolStripMenuItem
			// 
			this->rESETToolStripMenuItem->Name = L"rESETToolStripMenuItem";
			this->rESETToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->rESETToolStripMenuItem->Text = L"RESET ";
			this->rESETToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rESETToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(468, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(468, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// lb_error
			// 
			this->lb_error->AutoSize = true;
			this->lb_error->Location = System::Drawing::Point(468, 139);
			this->lb_error->Name = L"lb_error";
			this->lb_error->Size = System::Drawing::Size(35, 13);
			this->lb_error->TabIndex = 7;
			this->lb_error->Text = L"label3";
			// 
			// lb_cycle
			// 
			this->lb_cycle->AutoSize = true;
			this->lb_cycle->Location = System::Drawing::Point(468, 165);
			this->lb_cycle->Name = L"lb_cycle";
			this->lb_cycle->Size = System::Drawing::Size(35, 13);
			this->lb_cycle->TabIndex = 8;
			this->lb_cycle->Text = L"label3";
			// 
			// norm
			// 
			this->norm->AutoSize = true;
			this->norm->Location = System::Drawing::Point(521, 215);
			this->norm->Name = L"norm";
			this->norm->Size = System::Drawing::Size(125, 17);
			this->norm->TabIndex = 9;
			this->norm->Text = L"Batch Normalizasyon";
			this->norm->UseVisualStyleBackColor = true;
			this->norm->CheckedChanged += gcnew System::EventHandler(this, &MyForm::norm_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(503, 256);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(181, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 545);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->norm);
			this->Controls->Add(this->lb_cycle);
			this->Controls->Add(this->lb_error);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chck_class2);
			this->Controls->Add(this->chck_class1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (chck_class1->Checked || chck_class2->Checked)
		{
			if (chck_class1->Checked && chck_class2->Checked)
			{
				MessageBox::Show("her iki sýnýf türünü ayný anda seçilemez");
				chck_class1->Checked = false;
				chck_class2->Checked = false;

			}
			else {
				if (chck_class1->Checked) {
					Pen^ pen = gcnew Pen(Color::Black, 3.0f);
					int temp_x, temp_y;
					double x1, x2;
					temp_x = (Convert::ToInt32(e->X));
					//listBox1->Items->Add(temp_x);
					temp_y = (Convert::ToInt32(e->Y));
					//listBox1->Items->Add(temp_y);
					x1 = e->X - (pictureBox1->Width /2);
					x2 = (pictureBox1->Width / 2) - e->Y;
					if (SizeT == 0) {
						SizeT = Size1 = 1;
						p = new samples[1];
						p[0].x1 = x1;
						p[0].x2 = x2; p[0].id = CLASS1;
					}
					else {
						samples* temp;
						temp = p;
						Size1++;
						SizeT++;
						p = new samples[SizeT];
						for (int i = 0; i < SizeT; i++)
						{
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].id = temp[i].id;
						}
						p[SizeT - 1].x1 = x1;
						p[SizeT - 1].x2 = x2;
						p[SizeT - 1].id = CLASS1;
						delete temp;
					}
					label1->Text = "x1: " + Convert::ToString(p[SizeT - 1].x1) + "x2: " + Convert::ToString(p[SizeT - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
					label2->Text = "Samples TOTAL : " + Convert::ToString(SizeT) + "Class 1 :" + Convert::ToString(Size1);
				}
				else {
					if (chck_class2->Checked) {
						Pen^ pen = gcnew Pen(Color::Red, 3.0f);
						int temp_x, temp_y;
						double x1, x2;
						temp_x = (Convert::ToInt32(e->X));
						temp_y = (Convert::ToInt32(e->Y));
						x1 = (double)(temp_x - (pictureBox1->Width >> 1));
						x2 = (double)((pictureBox1->Height >> 1) - temp_y);
						if (SizeT == 0) {
							SizeT = Size2 = 1;
							p = new samples[1];
							p[0].x1 = x1;
							p[0].x2 = x2; p[0].id = CLASS2;
						}
						else {
							samples* temp;
							temp = p;
							Size2++;
							SizeT++;
							p = new samples[SizeT];
							for (int i = 0; i < SizeT; i++)
							{
								p[i].x1 = temp[i].x1;
								p[i].x2 = temp[i].x2;
								p[i].id = temp[i].id;
							}
							p[SizeT - 1].x1 = x1;
							p[SizeT - 1].x2 = x2;
							p[SizeT - 1].id = CLASS2;
							delete temp;
						}
						label1->Text = "x: " + Convert::ToString(p[SizeT - 1].x1) + "x2: " + Convert::ToString(p[SizeT - 1].x2);
						pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
						pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
						label2->Text = "Samples TOTAL : " + Convert::ToString(SizeT) + "Class 2 :" + Convert::ToString(Size2);




					}
				}

			}
		}
		else
		{
			MessageBox::Show("Lutfen Bir Tür Seciniz....");
		}
		pictureBox1->Refresh();

	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = "Samples TOTAL : " + Convert::ToString(Size);
		label1->Text = "";
		this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
	}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//draw coor_line
		zoom =1+ trackBar1->Value;
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		Pen^ penn = gcnew Pen(Color::Black, 2.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width) / 2;
		center_height = (int)(pictureBox1->Height) / 2;

		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
		
		//draw example
		if (SizeT != 0)
		{
			for (int i = 0; i < SizeT; i++)
			{
				if (p[i].id == 1)
				{
					penn->Color = Color::Black;
				
				}
				else
				{
					penn->Color = Color::Red;
					 
				}
				int x, y = 0;
				x = (int)(p[i].x1*zoom + (pictureBox1->Width / 2));
				y = (int)((pictureBox1->Height / 2) - p[i].x2*zoom);

				//listBox1->Items->Add("x : " + x + "y: " + y);
				e->Graphics->DrawLine(penn, x - 5, y, x + 5, y);
				e->Graphics->DrawLine(penn, x, y - 5, x, y + 5);
			}

		}

		//draw line
		if (drawWeight) {
			double x, y, s;
			pen->Color = Color::Blue;
			x = w->get(0, 0);
			y = w->get(1, 0);
			s = w->get(2, 0)*zoom;

			int x1, x2, y1, y2 = 0;
			x1 = 0;
			y1 = Ypoint(x1, w, (pictureBox1->Width / 2));

			x2 = (int)(pictureBox1->Width) ;
			y2 = Ypoint(x2, w, (pictureBox1->Width / 2));


			
			e->Graphics->DrawLine(pen, x1,  y1,  x2, y2);
			drawWeight = false;

		}
		//pictureBox1->Refresh();

	}
private: System::Void randomDrawLineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawWeight == true)
		{
			w->~Matrix();

			w = gcnew Matrix(3, 1);

		}

		
		w->randomD();

		drawWeight = true;
		pictureBox1->Refresh();

	}
private: System::Void deltaLearningRuleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// 2 class ve 1 nöron ile iki sýnýfýn  birbirinden
	// ayrýlma iþlemi sürekli fonk ile yapýlacaktýr.
	
	int cycle = 0;
	double error;

	if (SizeT == 0)
	{
		MessageBox::Show("Lutfen Bir En Ornek  Ekleyiniz....");
	}
	
	else {
		do //error deðeri 0.1 den küçük olana kadar iþlemler tekrarlandý
		{
			error = 0;

			for (int i = 0; i < SizeT; i++)//tüm örnekler üzerinde iþlemler uygulanacak
			{
				Matrix^ x = gcnew Matrix(3, 1); //örnekler aða verilemeye baþlandý.
				x->set(p[i].x1, 0, 0); //Batch normalizasyon uygulandý.
				x->set(p[i].x2, 1, 0); //Batch normalizasyon uygulandý.
				x->set(1, 2, 0);
				Matrix^ wtranspoze = w->transpoz();
				Matrix^ wx = wtranspoze * x; //net deðeri hesaplandý
				double netD = 0;
				netD = wx->get(0, 0); 
				double fnet = 0;
				fnet = activationFunction(netD); //f(net) deðeri hesaplandý. Ayrýca bu aðýn çýkýþýna eþit(0).
				double fTurev = turev(netD);//türev hesaplandý.
				double sabit = 0.1 * (p[i].id - fnet) *fTurev; //gradyant deðeri hesaplandý.
				for (int j = 0; j < 3; j++) //w aðýrlýklarý güncellendi.
				{
					w->set(w->get(j, 0) + sabit*x->get(j,0), j, 0);
				}
				error =error+ ((pow((p[i].id - fnet), 2)) / 2);//toplam hata hesaplandý.
				
				wtranspoze->~Matrix();
				wx->~Matrix();
				
			}
			cycle++;

			drawWeight = true;
			pictureBox1->Refresh();
			
		} while (error > 0.01);

	}
	
	lb_error->Text = "error" + Convert::ToString(error);
	lb_cycle->Text = "Cycle : " + Convert::ToString(cycle);
}
private: System::Void rESETToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	drawWeight = false;
	SizeT = Size1 = Size2 = 0;
	label1->Text = "";
	label2->Text = "Samples TOTAL : " + Convert::ToString(SizeT);
	lb_cycle->Text = "";
	pictureBox1->Refresh();
}

private: System::Void perceptronRuleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int cycle = 0;
	double error=1;
	if (SizeT == 0)
	{
		MessageBox::Show("Lutfen Bir En Ornek  Ekleyiniz....");
	}
	else {

		while(error!=0)
			{
			error = 0;

			for (int i = 0; i < SizeT; i++)
			{
				Matrix^ x = gcnew Matrix(3, 1);
				x->set((p[i].x1), 0, 0);
				x->set((p[i].x2), 1, 0);
				x->set(1, 2, 0);			
				Matrix^ wtranspoze = w->transpoz();
				Matrix^ wx = wtranspoze * x;
				double netD = 0;
				netD = wx->get(0, 0);
				double fnet = 0;
				fnet = netD >= 0 ? 1 : -1;				
				if (fnet != p[i].id)
				{
					Matrix^ dw = x * (c * (p[i].id - fnet));
					w += dw;
					error += abs(p[i].id - fnet) / 2;
				}
				wtranspoze->~Matrix();
				wx->~Matrix();
				pictureBox1->Refresh();
				drawWeight = true;
			}
			cycle++;

		} 

	}
	pictureBox1->Refresh();
	drawWeight = true;
	lb_error->Text = "error" + Convert::ToString(error);
	lb_cycle->Text = "Cycle : " + Convert::ToString(cycle);
}
private: System::Void norm_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	meanX = 0, meanY = 0;
	//  Batch Normalizasyon uygulanacak. 
	//Formul kýsaca verilerin ortalamasý alýndý.Standart sapma hesaplandý.
	//xNormal=(x-ortalama)/standartSapma
	for (int i = 0; i < SizeT; i++)
	{
		meanX += p[i].x1;
		meanY += p[i].x2;
	}
	meanX /= SizeT;
	meanY /= SizeT;

	double sumX = 0, sumY = 0;
	for (int i = 0; i < SizeT; i++)
	{
		sumX += pow((p[i].x1 - meanX), 2);
		sumY += pow((p[i].x2 - meanY), 2);
	}
	sSX = 0, sSY = 0;
	sSX = sqrt(sumX / (SizeT - 1));
	sSY = sqrt(sumY / (SizeT - 1));

	for (int i = 0; i < SizeT; i++)
	{
		p[i].x1 = (p[i].x1 - meanX) / sSX;
		p[i].x2 = (p[i].x2 - meanY) / sSY;
	}
	
	pictureBox1->Refresh();
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	drawWeight = true;
	pictureBox1->Refresh();
}
};
}
