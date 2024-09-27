#pragma once

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "data_format.h"
#include "game_lib.h"

struct profile tank_profile;
struct enemy_profile obs[5];
struct item_profile item[3];
struct enemy_profile boss;
struct weapon_profile bosswea[wea_SIZE];
struct weapon_profile wea[wea_SIZE];
struct weapon_profile wea1[wea_SIZE];
struct weapon_profile protect;
struct magic_profile mag;
struct magic_profile frez;
struct level_system level;
//struct weapon_profile frez;
bool tracking_enable = 0;
tracking_data tk;
int system_counter = 0;

int wea_count = 0;
int wea_up = wea_SIZE;




float X = 0;
float Y = 0;
float Theta = 1.57;
float V = 0;
float W = 0;
float dt = 0.1;







namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::ProgressBar^ progressBar5;

	private: System::Windows::Forms::ProgressBar^ progressBar6;
	private: System::Windows::Forms::ProgressBar^ progressBar7;
	private: System::Windows::Forms::ProgressBar^ progressBar8;
	private: System::Windows::Forms::ProgressBar^ progressBar9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(591, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(695, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(510, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(591, 387);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(591, 331);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->progressBar2);
			this->panel1->Controls->Add(this->progressBar3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(510, 82);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(260, 174);
			this->panel1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(112, 66);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 6;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(112, 100);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(100, 23);
			this->progressBar2->TabIndex = 7;
			this->progressBar2->Click += gcnew System::EventHandler(this, &Form1::progressBar2_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(112, 138);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(100, 23);
			this->progressBar3->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(429, 331);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Gun";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(429, 387);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"missile";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(429, 174);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"heal";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(429, 204);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"fire";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(429, 233);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"wave";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(534, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(622, 45);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(74, 23);
			this->progressBar4->TabIndex = 12;
			this->progressBar4->Click += gcnew System::EventHandler(this, &Form1::progressBar4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(534, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 15);
			this->label6->TabIndex = 13;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(426, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(695, 279);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 15;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(999, 999);
			this->progressBar5->Maximum = 20;
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(100, 23);
			this->progressBar5->TabIndex = 16;
			this->progressBar5->Click += gcnew System::EventHandler(this, &Form1::progressBar5_Click);
			// 
			// progressBar6
			// 
			this->progressBar6->Location = System::Drawing::Point(999, 999);
			this->progressBar6->Maximum = 20;
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(100, 23);
			this->progressBar6->TabIndex = 18;
			// 
			// progressBar7
			// 
			this->progressBar7->Location = System::Drawing::Point(999, 999);
			this->progressBar7->Maximum = 20;
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(100, 23);
			this->progressBar7->TabIndex = 19;
			// 
			// progressBar8
			// 
			this->progressBar8->Location = System::Drawing::Point(999, 999);
			this->progressBar8->Maximum = 20;
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(100, 23);
			this->progressBar8->TabIndex = 20;
			// 
			// progressBar9
			// 
			this->progressBar9->Location = System::Drawing::Point(999, 999);
			this->progressBar9->Maximum = 20;
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(100, 23);
			this->progressBar9->TabIndex = 21;
			this->progressBar9->Click += gcnew System::EventHandler(this, &Form1::progressBar9_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(429, 45);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 22;
			this->button12->Text = L"save";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(429, 82);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 23;
			this->button13->Text = L"load";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(429, 279);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 24;
			this->button14->Text = L"freeze";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 510);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->progressBar9);
			this->Controls->Add(this->progressBar8);
			this->Controls->Add(this->progressBar7);
			this->Controls->Add(this->progressBar6);
			this->Controls->Add(this->progressBar5);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void Motion_Model(void)
		{
			//坦克的移動
			if (level.level==1)
			{
				tank_profile.pos.X = tank_profile.pos.X +
					tank_profile.vel.V * cos(tank_profile.pos.Theta) * dt;
				tank_profile.pos.Y = tank_profile.pos.Y +
					tank_profile.vel.V * sin(tank_profile.pos.Theta) * dt;
				tank_profile.pos.Theta = tank_profile.pos.Theta +
					tank_profile.vel.W * dt;
			}
			else
			{
				tank_profile.pos.X = tank_profile.pos.X +
					tank_profile.vel.V *2* cos(tank_profile.pos.Theta) * dt;
				tank_profile.pos.Y = tank_profile.pos.Y +
					tank_profile.vel.V *2* sin(tank_profile.pos.Theta) * dt;
				tank_profile.pos.Theta = tank_profile.pos.Theta +
					tank_profile.vel.W * dt;
			}
			

			//敵人的移動  
			for (int i = 0; i < 5; i++)
			{
				if (obs[i].enable == 1 && frez.enable==0)
				{
					obs[i].pos.X = obs[i].pos.X + obs[i].V.Vx * dt; //X=X+Vxdt
					obs[i].pos.Y = obs[i].pos.Y + obs[i].V.Vy * dt; //Y=Y+Vydt
					if (obs[i].pos.X > 300)  //為了不要超出視窗
					{
						obs[i].pos.X = 0;    //X座標超出300就回到0
					}
					if (obs[i].pos.X < 0)
					{
						obs[i].pos.X = 300;
					}
					if (obs[i].pos.Y > 300)
					{
						obs[i].pos.Y = 0;
					}
					if (obs[i].pos.Y < 0)
					{
						obs[i].pos.Y = 300;
					}
				}
				
				
			}
			// boss 的移動
			boss.pos.X = boss.pos.X + boss.V.Vx * dt; //boss
			boss.pos.Y = boss.pos.Y + boss.V.Vy * dt;
			boss.pos.Theta = atan(fabs(boss.pos.X - tank_profile.pos.X) / fabs(boss.pos.Y - tank_profile.pos.Y)); //算出boss與tank的角度 //fabs為取絕對值
			boss.pos.X = int(boss.pos.X) % 300;
			boss.pos.Y = int(boss.pos.Y) % 300;
			/*
			// weapon motion of boss_weapon
			if (bosswea.bosswea_enable == 1 && bosswea.counter > 0)  //counter與range相關(射程)
			{
				bosswea.pos.X = bosswea.pos.X + bosswea.V.Vx;
				bosswea.pos.Y = bosswea.pos.Y + bosswea.V.Vy;
				bosswea.counter--;
			}
			else
			{
				bosswea.enable = 0;
			}
			*/
			// weapon motion of gun
			for (int i = 0;i < wea_SIZE;i++)
			{
				if (wea[i].enable == 1 && wea[i].counter > 0)  //counter與range相關(射程)
				{
					wea[i].pos.X = wea[i].pos.X + wea[i].V.Vx;
					wea[i].pos.Y = wea[i].pos.Y + wea[i].V.Vy;
					wea[i].counter--;
				}
				else
				{
					wea[i].enable = 0;
				}
			}
			//boss 子彈的移動
			for (int i = 0;i < wea_SIZE;i++)
			{
				if (bosswea[i].counter > 0 && bosswea[i].bosswea_enable == 1)
				{
					bosswea[i].pos.X = bosswea[i].pos.X + bosswea[i].V.Vx;
					bosswea[i].pos.Y = bosswea[i].pos.Y + bosswea[i].V.Vy;
					bosswea[i].counter--;
				}
				else
				{
					bosswea[i].bosswea_enable = 1;
					bosswea[i].pos.X = boss.pos.X;
					bosswea[i].pos.Y = boss.pos.Y;
					//tank_profile.point.SP = tank_profile.point.SP - wea.point.SP;
					bosswea[i].V.Vx = bosswea[i].Velocity * cos(4.71 - boss.pos.Theta) * dt;
					bosswea[i].V.Vy = bosswea[i].Velocity * sin(4.71 - boss.pos.Theta) * dt;
					bosswea[i].counter = int((bosswea[i].range / bosswea[i].Velocity) * (1 / dt));
				}
			}
			// weapon motion of missile
			for (int i = 0;i < wea_SIZE;i++)
			{
				if (wea1[i].enable == 1 && wea1[i].counter > 0)  //counter與range相關(射程)
				{
					wea1[i].pos.X = wea1[i].pos.X + wea1[i].V.Vx;
					wea1[i].pos.Y = wea1[i].pos.Y + wea1[i].V.Vy;
					wea1[i].counter--;
				}
				else
				{
					wea1[i].enable = 0;
				}
			}
			// weapon motion of protect
			/*
			if (protect.enable == 1 && protect.counter > 0)  //counter與range相關(射程)
			{
				protect.pos.X = protect.pos.X + protect.V.Vx;
				protect.pos.Y = protect.pos.Y + protect.V.Vy;
				protect.counter--;
			}
			else
			{
				protect.enable = 0;
			}
			*/




			// magic motion
			if (mag.enable == 1 && mag.counter > 0)
			{
				mag.counter--;
			}
			else
			{
				mag.enable = 0;
			}

			//freeze motion
			if (frez.enable == 1 && frez.counter > 0)
			{
				obs[0].V.Vx = 0;
				obs[0].V.Vy = 0;
				obs[1].V.Vx = 0;
				obs[1].V.Vy = 0;
				obs[2].V.Vx = 0;
				obs[2].V.Vy = 0;
				obs[3].V.Vx = 0;
				obs[3].V.Vy = 0;
				obs[4].V.Vx = 0;
				obs[4].V.Vy = 0;
				frez.counter --;
			}
			else
			{
				obs[0].V.Vx = 5;
				obs[0].V.Vy = 5;
				frez.enable = 0;
			}
			

			//protect
			if (protect.enable == 1 && protect.counter > 0)  //counter與range相關(射程)
			{
				protect.pos.X = tank_profile.pos.X + 100*cos(protect.pos.Theta)*1/2;  //80為繞圈的大小 
				protect.pos.Y = tank_profile.pos.Y + 100*sin(protect.pos.Theta)*1/2;  
				protect.pos.Theta = protect.pos.Theta + 1.75 * 0.5;  //theta = theta + w*dt
				protect.counter--;
			}
			else
			{
				protect.enable = 0;
			}

			//lock_system
			if (tracking_enable == 1)
			{
				tk = lock_system(tank_profile, obs);
				tank_profile.pos.Theta = tk.pos.Theta;
			}
			tank_profile.pos.X = tank_profile.pos.X + tank_profile.vel.V * cos(tank_profile.pos.Theta) * dt;
			tank_profile.pos.Y = tank_profile.pos.Y + tank_profile.vel.V * sin(tank_profile.pos.Theta) * dt;
			tank_profile.pos.Theta = tank_profile.pos.Theta + tank_profile.vel.W * dt;

			//

			/*
			if (obs[0].enable == 1 && obs[0].obs_counter > 0)
			{
				obs[0].obs_counter--;
			}
			else
			{
				obs[0].enable == 0;
			}
			*/
			//顯示敵人血條
			obs[0].obs_counter = 3;
			obs[1].obs_counter = 30;
			obs[2].obs_counter = 30;
			obs[3].obs_counter = 30;
			obs[4].obs_counter = 30;
			if ( obs[0].point.HP < 20 && obs[0].obs_counter>0)
			{
				this->progressBar5->Location = System::Drawing::Point(23, 133);
				obs[0].obs_counter--;
			}
			else if (obs[0].obs_counter<=0)
			{
				this->progressBar5->Location = System::Drawing::Point(990, 990);
			}

			if (obs[1].point.HP < 20 && obs[1].obs_counter>0)
			{
				this->progressBar6->Location = System::Drawing::Point(23, 174);
				obs[1].obs_counter--;
			}

			if (obs[2].point.HP < 20 && obs[2].obs_counter>0)
			{
				this->progressBar7->Location = System::Drawing::Point(23, 212);
				obs[2].obs_counter--;
			}
			if (obs[3].point.HP < 20 && obs[3].obs_counter>0)
			{
				this->progressBar8->Location = System::Drawing::Point(23, 253);
				obs[3].obs_counter--;
			}
			if (obs[4].point.HP < 20 && obs[4].obs_counter>0)
			{
				this->progressBar9->Location = System::Drawing::Point(23, 291);
				obs[4].obs_counter--;
			}

			

			

		}

		void plot_HMI(void)
		{
			//畫坦克車
			Graphics^ e1 = this->CreateGraphics();
			e1->Clear(Color::WhiteSmoke);
			Pen^ pen_B = gcnew Pen(Color::Red, 2);  //坦克車
			Pen^ pen_k = gcnew Pen(Color::Black, 1);  //敵人
			Pen^ pen_y = gcnew Pen(Color::Yellow, 2); //生命藥水
			Pen^ pen_g = gcnew Pen(Color::Green, 2);  //魔法藥水
			
			
			int R_size = 20;     //tank_size
			int grid_width = 400;
			int grid_height = 400;
			int grid_resolution = 1;  //解析度
			int shift_x = (grid_width / 2); //
			int shift_y = (grid_height)+0;
			int Y_shift = 0;

			if (level.level >= 2)
			{
				R_size = R_size * 2;
			}
			else
			{
				R_size = 20;
			}
			// plot tank position 
			
			int x1 = (tank_profile.pos.X) / grid_resolution;
			int y1 = (tank_profile.pos.Y + Y_shift) / grid_resolution;
			e1->DrawEllipse(pen_B, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2, R_size, R_size);  //戰車車身
			int dir_x = 15 * cos(tank_profile.pos.Theta);
			int dir_y = 15 * sin(tank_profile.pos.Theta);
			e1->DrawLine(pen_B, shift_x + 0 + x1, shift_y - y1, shift_x + x1 + 0 + dir_x, shift_y - y1 - dir_y); //砲管
		



			//用for loop 畫敵人 和藥水
			for (int i = 0; i < 5; i++)
			{
				
				if (obs[i].enable == 1)  //障礙物存在
				{
					x1 = (obs[i].pos.X) / grid_resolution;
					y1 = (obs[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawRectangle(pen_k, shift_x + 0 + x1, shift_y - y1, 20, 20);
				}

				
				if (obs[i].enable == 0)          //障礙物死亡
				{
					
					if (obs[i].potion_enble==1 )   //藥水存在
					{
						x1 = (obs[i].pos.X) / grid_resolution;
						y1 = (obs[i].pos.Y + Y_shift) / grid_resolution;
						e1->DrawRectangle(pen_y, shift_x + 0 + x1, shift_y - y1, 20, 20);																								
					}
					
				}				
			}

			//plot boss
			if (boss.enable == 1)
			{
				x1 = (boss.pos.X) / grid_resolution;
				y1 = (boss.pos.Y + Y_shift) / grid_resolution;
				e1->DrawRectangle(pen_k, shift_x + 0 + x1, shift_y - y1, 40, 40);
			}


			//----------------------------------------------------------------------

			Pen^ pen_B5 = gcnew Pen(Color::Blue, 10);
			Pen^ pen_B6 = gcnew Pen(Color::Red, 10);
			// weapon boss
			for (int i = 0;i < wea_SIZE;i++)
			{
				if (bosswea[i].bosswea_enable == 1 && bosswea[i].counter > 0) //如果魔王武器存在 且 魔王武器射程時間>0
				{

					R_size = bosswea[i].diameter;
					x1 = (bosswea[i].pos.X) / grid_resolution;
					y1 = (bosswea[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawEllipse(pen_B5, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
						R_size, R_size);
				}
				if (boss.enable == 0)  //如果魔王死掉
				{
					bosswea[i].bosswea_enable = 0; //武器消失
				}
			}
			// weapon gun

			for (int i = 0;i < wea_SIZE;i++)
			{
				if (wea[i].enable == 1 && wea[i].counter > 0)
				{

					R_size = wea[i].diameter;
					x1 = (wea[i].pos.X) / grid_resolution;
					y1 = (wea[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawEllipse(pen_B5, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
						R_size, R_size);
				}
				if (wea[i].enable == 1 && wea[i].counter > 0 && level.level >= 2)  //如果升級 子彈變大顆
				{

					R_size = 2 * wea[i].diameter;
					x1 = (wea[i].pos.X) / grid_resolution;
					y1 = (wea[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawEllipse(pen_B5, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
						R_size, R_size);
				}
			}
	


			// weapon ruffle
			for (int i = 0;i < wea_SIZE;i++)
			{
				if (wea1[i].enable == 1 && wea1[i].counter > 0)
				{
					R_size = wea1[i].diameter;
					x1 = (wea1[i].pos.X) / grid_resolution;
					y1 = (wea1[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawEllipse(pen_B5, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
						R_size, R_size);
				}
				if (wea1[i].enable == 1 && wea1[i].counter > 0 && level.level >= 2)  //如果升級 子彈變大顆
				{
					R_size = 2 * wea1[i].diameter;
					x1 = (wea1[i].pos.X) / grid_resolution;
					y1 = (wea1[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawEllipse(pen_B5, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
						R_size, R_size);
				}
			}


			// weapon protect
			if (protect.enable == 1 && protect.counter > 0)
			{
				R_size = protect.diameter;
				x1 = (protect.pos.X) / grid_resolution;
				y1 = (protect.pos.Y + Y_shift) / grid_resolution;
				e1->DrawEllipse(pen_B5, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
					R_size, R_size);
			}


			Pen^ pen_r = gcnew Pen(Color::Red, 3);
			// magic fire
			if (mag.enable == 1)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						R_size = mag.diameter;
						x1 = (mag.pos[i][j].X) / grid_resolution;
						y1 = (mag.pos[i][j].Y + Y_shift) / grid_resolution;
						e1->DrawEllipse(pen_r, shift_x + x1 - R_size / 2, shift_y - y1 -
							R_size / 2, R_size, R_size);
					}
				}
			}

			//frezze

			// items
			for (int i = 0; i < 3; i++)
			{
				if (item[i].enable == 1)
				{
					R_size = item[i].diameter;
					x1 = (item[i].pos.X) / grid_resolution;
					y1 = (item[i].pos.Y + Y_shift) / grid_resolution;
					e1->DrawEllipse(pen_B, shift_x + x1 - R_size / 2, shift_y - y1 - R_size / 2,
						R_size, R_size);
				}
			}


			

		}



		void initialize()
		{
			srand(time(NULL));   //讓敵人初始位置與速度隨機
			tank_profile.pos.X = 0;    //坦克車初始位置
			tank_profile.pos.Y = 0;
			tank_profile.pos.Theta = 1.57;

			for (int i = 0; i < 5; i++)    //obs 初始位置(隨機)
			{
				obs[i].pos.X = rand() % 200 - 100;
				obs[i].pos.Y = rand() % 200 - 100;
				obs[i].V.Vx = rand() % 20 - 10 ;
				obs[i].V.Vy = rand() % 20 - 10;
				obs[i].point.HP = 20;								
			}

			//boss 初始位置
			boss.pos.X = 300;
			boss.pos.Y = 500;
			boss.pos.Theta = atan(fabs(boss.pos.X - tank_profile.pos.X) / fabs(boss.pos.Y - tank_profile.pos.Y));//計算boss與tank的角度
			boss.V.Vx = rand() % 20 - 10;  //boss 固定不動
			boss.V.Vy = rand() % 20 - 10;
			boss.point.HP = 40;


			//weapon boss
			for (int i = 0; i < wea_SIZE;i++)
			{
				bosswea[i].point.HP = 1;   //傷害
				bosswea[i].range = 300;    //射程
				bosswea[i].Velocity = 50;  //速度

				//bosswea.bosswea_enable = 1;    //boss武器一直開啟
				bosswea[i].pos.X = boss.pos.X;
				bosswea[i].pos.Y = boss.pos.Y;
				bosswea[i].V.Vx = bosswea[i].Velocity * cos(4.71 - boss.pos.Theta) * dt;
				bosswea[i].V.Vy = bosswea[i].Velocity * sin(4.71 - boss.pos.Theta) * dt;
				bosswea[i].counter = int((bosswea[i].range / bosswea[i].Velocity) * (1 / dt));
			}

			//weapon gun
			for (int i = 0;i < wea_SIZE;i++)
			{
				wea[i].point.HP = 10;   //傷害
				wea[i].point.SP = 5;    //體力
				wea[i].range = 100;    //射程
				wea[i].Velocity = 50;  //速度
				wea[i].enable = 0;
			}
			//weapon missile
			for (int i = 0;i < wea_SIZE;i++)
			{
				wea1[i].point.HP = 20;   //傷害
				wea1[i].point.SP = 10;    //體力
				wea1[i].range = 200;    //射程
				wea1[i].Velocity = 100;  //速度
				wea1[i].enable = 0;
			}

			//weapon protect
			protect.point.HP = 20;   //傷害
			protect.point.MP = 10;    //體力
			protect.range = 100;    //射程
			protect.Velocity = 100;  //速度
			protect.enable = 0;

			//obsdead  敵人死亡數
			level.obsdead = 0;

			//item
			item[0].pos.X = 50;
			item[0].pos.Y = 0;
			item[1].pos.X = 100;
			item[1].pos.Y = 0;
			item[2].pos.X = 120;
			item[2].pos.Y = 0;
			item[0].c = 'H';
			item[1].c = 'S';
			item[2].c = 'M';
			item[0].enable = 1;
			item[1].enable = 1;
			item[2].enable = 1;


			
			
			
		}

		void collsion_detection()
		{
			// collsion between tank and obstacles
			
			for (int i = 0; i < 5; i++)
			{
				float dis = sqrt((tank_profile.pos.X - obs[i].pos.X) * (tank_profile.pos.X -    //歐式距離
					obs[i].pos.X) + (tank_profile.pos.Y - obs[i].pos.Y) * (tank_profile.pos.Y -
						obs[i].pos.Y));
				if (dis < obs[i].width && obs[i].enable == 1)           //如果 坦克與障礙物距離小於障礙物寬度 和 障礙物為生存狀態
				{
					if (tank_profile.point.HP > obs[i].point.HP )    //判斷血條  //為了防止run time error
					{

						tank_profile.point.HP -= obs[i].point.HP ; 
						obs[i].point.HP = 0;
						

					}
					else
					{
						obs[i].enable = 0;  // obstacle disappear
					}

				}
				
			}


			// collsion between weapon gun and obstacles
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0;j < wea_SIZE;j++)
				{
					float dis = sqrt((wea[j].pos.X - obs[i].pos.X) * (wea[j].pos.X - obs[i].pos.X) +
						(wea[j].pos.Y - obs[i].pos.Y) * (wea[j].pos.Y - obs[i].pos.Y));
					if (dis < obs[i].width && obs[i].enable == 1 && wea[j].enable == 1)
					{


						if (obs[i].point.HP - wea[j].point.HP > 0)           //判斷寫條
						{

							obs[i].point.HP = obs[i].point.HP - wea[j].point.HP; //wea.point.HP為武器傷害

						}
						else
						{
							obs[i].point.HP = 0;
						}
						wea[j].enable = 0; // weapon disappear
						if (obs[i].point.HP == 0)
						{
							obs[i].enable = 0; // obstacle disappear
						}
					}
				}

			}

			// collsion between weapon ruffle and obstacles
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0;j < wea_SIZE;j++)
				{
					float dis = sqrt((wea1[j].pos.X - obs[i].pos.X) * (wea1[j].pos.X - obs[i].pos.X) +
						(wea1[j].pos.Y - obs[i].pos.Y) * (wea1[j].pos.Y - obs[i].pos.Y));
					if (dis < obs[i].width && obs[i].enable == 1 && wea1[j].enable == 1)
					{
						if (obs[i].point.HP - wea1[j].point.HP > 0)
						{

							obs[i].point.HP = obs[i].point.HP - wea1[j].point.HP; //wea.point.HP為武器傷害

						}
						else
						{
							obs[i].point.HP = 0;
						}
						wea1[j].enable = 0; // weapon disappear
						if (obs[i].point.HP == 0)
						{
							obs[i].enable = 0; // obstacle disappear
						}
					}
				}
			}

			
			

		

			// collision between magic and obs
			if (mag.enable == 1)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						for (int n = 0; n < 5; n++)
						{
							float dis = sqrt((mag.pos[i][j].X - obs[n].pos.X) * (mag.pos[i][j].X - obs[n].pos.X) +
								(mag.pos[i][j].Y - obs[n].pos.Y) * (mag.pos[i][j].Y - obs[n].pos.Y));
							if (dis < 2 * mag.diameter)
							{
								

								if (obs[n].point.HP > mag.point.HP)                      //先判斷血條
								{
									obs[n].point.HP = obs[n].point.HP - mag.point.HP;	

								}
								else
								{
									obs[n].point.HP = 0;
								}

								if (obs[n].point.HP == 0)
								{
									obs[n].enable = 0; // obstacle disapear
								}
							}
						}
					}
				}
			}
			//frezze
			

			// collsion between tank and potion
			for (int i = 0; i < 5; i++)
			{
				float dis = sqrt((tank_profile.pos.X - obs[i].pos.X) * (tank_profile.pos.X -    //歐式距離
					obs[i].pos.X) + (tank_profile.pos.Y - obs[i].pos.Y) * (tank_profile.pos.Y -
						obs[i].pos.Y));
				int random = rand() % 2;  //藥水與魔力個別50%
				if (dis < obs[i].width && obs[i].enable == 0 && obs[i].potion_enble==1  && random ==0)           //如果 坦克與障礙物距離小於障礙物寬度 和 障礙物的藥水為生存狀態為1
				{                                                                                 //和 障礙物為死亡狀態
					tank_profile.point.HP = tank_profile.point.HP + obs[i].potion_HP;   //加坦克車的HP
					obs[i].potion_enble = 0;                                                 //藥水消失
					
				}
				else if (dis < obs[i].width && obs[i].enable == 0 && obs[i].potion_enble == 1  && random ==1)
				{
					tank_profile.point.MP = tank_profile.point.MP + 5;   //加坦克車的MP
					obs[i].potion_enble = 0;                             //藥水消失
				}
			}


			// collsion between protect system and obstacles
			for (int i = 0; i < 5; i++)
			{
				float dis = sqrt((protect.pos.X - obs[i].pos.X) * (protect.pos.X - obs[i].pos.X) +
					(protect.pos.Y - obs[i].pos.Y) * (protect.pos.Y - obs[i].pos.Y));
				if (dis < obs[i].width && obs[i].enable == 1 && protect.enable == 1)  
				{
					obs[i].point.HP = obs[i].point.HP - protect.point.HP;   //wea.point.HP為武器傷害
					//protect.enable = 0; // weapon disappear
					if (obs[i].point.HP <= 0)
					{
						obs[i].enable = 0; // obstacle disappear
						
					}
				}
				else if (obs[i].point.HP - protect.point.HP < 0)
				{
					obs[i].enable = 0;
				}
			}

			//kill  計算敵人死亡數
			int kill_count=0;
			for (int i = 0;i < 5;i++)
			{	
				kill_count = kill_count + obs[i].enable ;	 //obs.enable一開始為1
			}
			kill_count = kill_count + boss.enable;
			
			level.obsdead = 5+1  - kill_count ;         //五個敵人+一個魔王 

			//計算 經驗值 升等系統
			
			level.exp = int(level.obsdead * 10) ;       //敵人殺一隻 +10 exp  
			level.level = int(level.obsdead / 3) + 1;   //exp為30時升級，等同於殺三個敵人

			// collsion between weapon gun and obstacles (有問題)
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0;j < wea_SIZE;j++)
				{
					float dis = sqrt((wea[j].pos.X - obs[i].pos.X) * (wea[j].pos.X - obs[i].pos.X) +
						(wea[j].pos.Y - obs[i].pos.Y) * (wea[j].pos.Y - obs[i].pos.Y));
					if (dis < obs[i].width && obs[i].enable == 1 && wea[j].enable == 1)
					{


						if (obs[i].point.HP - wea[j].point.HP > 0)       //判斷寫條
						{

							obs[i].point.HP = obs[i].point.HP - wea[j].point.HP; //wea.point.HP為武器傷害

						}
						else
						{
							obs[i].point.HP = 0;
						}
						wea[j].enable = 0; // weapon disappear
						if (obs[i].point.HP == 0)
						{
							obs[i].enable = 0; // obstacle disappear
						}
					}
				}

			}
			//--------------------------------------------------------------------------------------------------------------------boss system
			//collsion between weapon gun and boss
			for (int i = 0;i < wea_SIZE;i++)
			{
				float dis1 = sqrt((wea[i].pos.X - boss.pos.X) * (wea[i].pos.X - boss.pos.X) +
					(wea[i].pos.Y - boss.pos.Y) * (wea[i].pos.Y - boss.pos.Y));
				if (dis1 < boss.width && boss.enable == 1 && wea[i].enable == 1)
				{


					if (boss.point.HP - wea[i].point.HP > 0)     //先判斷血條
					{

						boss.point.HP = boss.point.HP - wea[i].point.HP; //wea.point.HP為武器傷害

					}
					else
					{
						boss.point.HP = 0;
					}
					wea[i].enable = 0; // weapon disappear
					if (boss.point.HP == 0)
					{
						boss.enable = 0; // boss disappear
					}
				}
			}
			//collsion between weapon ruffle and boss
			for (int i = 0;i < wea_SIZE;i++)
			{
				float dis2 = sqrt((wea1[i].pos.X - boss.pos.X) * (wea1[i].pos.X - boss.pos.X) +
					(wea1[i].pos.Y - boss.pos.Y) * (wea1[i].pos.Y - boss.pos.Y));
				if (dis2 < boss.width && boss.enable == 1 && wea1[i].enable == 1)
				{


					if (boss.point.HP - wea1[i].point.HP > 0)
					{

						boss.point.HP = boss.point.HP - wea1[i].point.HP; //wea.point.HP為武器傷害

					}
					else
					{
						boss.point.HP = 0;
					}
					wea1[i].enable = 0; // weapon disappear
					if (boss.point.HP == 0)
					{
						boss.enable = 0; // boss disappear
					}
				}
			}
			//collsion between tank and boss
			float dis3 = sqrt((tank_profile.pos.X - boss.pos.X) * (tank_profile.pos.X -    //歐式距離
				boss.pos.X) + (tank_profile.pos.Y - boss.pos.Y) * (tank_profile.pos.Y -
					boss.pos.Y));
			if (dis3 < boss.width && boss.enable == 1)           //如果 坦克與障礙物距離小於障礙物寬度 和 障礙物為生存狀態
			{
				if (tank_profile.point.HP > boss.point.HP)    //判斷血條
				{

					tank_profile.point.HP -= boss.point.HP;
					boss.point.HP = 0;


				}
				else
				{
					boss.enable = 0; // obstacle disappear
				}

			}
			//collsion between fire and boss
			if (mag.enable == 1)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						
						float dis = sqrt((mag.pos[i][j].X - boss.pos.X) * (mag.pos[i][j].X - boss.pos.X) +
							(mag.pos[i][j].Y - boss.pos.Y) * (mag.pos[i][j].Y - boss.pos.Y));
						if (dis < 2 * mag.diameter)
						{

							if (boss.point.HP > mag.point.HP)                      //先判斷血條
							{
								boss.point.HP = boss.point.HP - mag.point.HP;
							}
							else
							{
								boss.point.HP = 0;
							}
							if (boss.point.HP == 0)
							{
								boss.enable = 0; // obstacle disapear
							}
						}
					}
				}
			}

			//collision between boss weapon and  tank
			for (int i = 0;i < wea_SIZE;i++)
			{
				if (bosswea[i].bosswea_enable == 1)
				{
					float dis = sqrt((bosswea[i].pos.X - tank_profile.pos.X) * (bosswea[i].pos.X - tank_profile.pos.X) + (bosswea[i].pos.Y - tank_profile.pos.Y) * (bosswea[i].pos.Y - tank_profile.pos.Y));
					if (dis < 20 && bosswea[i].bosswea_enable == 1)
					{


						if (tank_profile.point.HP - bosswea[i].point.HP > 0)
						{

							tank_profile.point.HP = tank_profile.point.HP - bosswea[i].point.HP; //wea.point.HP為武器傷害

						}
						else
						{
							tank_profile.point.HP = 0;
						}

						bosswea[i].bosswea_enable = 0;    // weapon disappear
						if (tank_profile.point.HP == 0)
						{
							tank_profile.point.HP = 0;    // obstacle disappear
						}
					}
				}

				if (boss.point.HP == 0)
				{
					bosswea[i].bosswea_enable = 0;
				}
			}
			//-------------------------------------------------------------------------------------------

			// collision between tank and items
			for (int i = 0; i < 3; i++)
			{
				float dis = sqrt((tank_profile.pos.X - item[i].pos.X) * (tank_profile.pos.X - item[i].pos.X) + (tank_profile.pos.Y-
					item[i].pos.Y) * (tank_profile.pos.Y - item[i].pos.Y));
				if (dis < 30 && item[i].enable == 1)
				{
					switch (item[i].c)
					{
					case 'H':
						if (tank_profile.point.HP < 100)
							tank_profile.point.HP+=5;
						break;
					case 'S':
						if (tank_profile.point.SP < 100)
							tank_profile.point.SP+=5;
						break;
					case 'M':
						if (tank_profile.point.MP < 100)
							tank_profile.point.MP+=5;
						break;
					default:
						break;
					}
				}
			}

		}

		void Load_profile()
		{
			FILE* pFile;
			pFile = fopen("profile1.dat", "r");
			fscanf(pFile, "%s", tank_profile.name);
			fscanf(pFile, "%f", &tank_profile.pos.X);
			fscanf(pFile, "%f", &tank_profile.pos.Y);
			fscanf(pFile, "%f", &tank_profile.pos.Theta);
			fscanf(pFile, "%f", &tank_profile.t);
			fscanf(pFile, "%f",&tank_profile.point.HP);
			fscanf(pFile, "%f",&tank_profile.point.SP);
			fscanf(pFile, "%f",&tank_profile.point.MP);
			fscanf(pFile, "%f", &level.level);
			fscanf(pFile, "%f", &level.exp);
			fclose(pFile);
		}

		void text_displayer(void)  //顯示lable的文字
		{
			String^ str = gcnew String(tank_profile.name);
			this->label1->Text = str;
			this->progressBar1->Value = tank_profile.point.HP;
			this->label2->Text = ("HP:" + Convert::ToString(tank_profile.point.HP) + "/100");
			this->progressBar2->Value = tank_profile.point.SP;
			this->label3->Text = ("SP:" + Convert::ToString(tank_profile.point.SP) + "/100");
			this->progressBar3->Value = tank_profile.point.MP;
			this->label4->Text = ("MP:" + Convert::ToString(tank_profile.point.MP) + "/100");
			this->progressBar4->Value = level.exp;
			this->label5->Text = ("Level:" + Convert::ToString(level.level));
			this->label6->Text = ("EXP:" + Convert::ToString(level.exp ) + "/30"); //經驗值
			this->label7->Text = ("kill:" + Convert::ToString(level.obsdead) );  //計算敵人死亡數
			/*
			for (int i = 0;i < 5;i++)
			{
				if (1< obs[i].point.HP < 20 && obs[i].point.HP != 0)
				{
					this->label8->Text = ("enemy:" + Convert::ToString(obs[i].point.HP)+"/20");
					this->progressBar5->Value = obs[i].point.HP;
				}
			}
			*/
			this->progressBar5->Value = obs[0].point.HP;   //顯示敵人的血條
			this->progressBar6->Value = obs[1].point.HP;
			this->progressBar7->Value = obs[2].point.HP;
			this->progressBar8->Value = obs[3].point.HP;
			this->progressBar9->Value = obs[4].point.HP;
			
		};

		void save_data(void)
		{
			FILE* pFile;
			pFile = fopen("save.dat", "w");
			fprintf(pFile, "%s\n", tank_profile.name);
			fprintf(pFile, "%f\n", tank_profile.pos.X);
			fprintf(pFile, "%f\n", tank_profile.pos.Y);
			fprintf(pFile, "%f\n", tank_profile.pos.Theta);
			fprintf(pFile, "%f\n", tank_profile.t);
			fprintf(pFile, "%f\n", tank_profile.point.HP);
			fprintf(pFile, "%f\n", tank_profile.point.SP);
			fprintf(pFile, "%f\n", tank_profile.point.MP);
			fclose(pFile);
		};

		void load_data(void)
		{
			FILE* pFile;
			pFile = fopen("save.dat", "r");
			fscanf(pFile, "%s", tank_profile.name);
			fscanf(pFile, "%f", &tank_profile.pos.X);
			fscanf(pFile, "%f", &tank_profile.pos.Y);
			fscanf(pFile, "%f", &tank_profile.pos.Theta);
			fscanf(pFile, "%f", &tank_profile.t);
			fscanf(pFile, "%f", &tank_profile.point.HP);
			fscanf(pFile, "%f", &tank_profile.point.SP);
			fscanf(pFile, "%f", &tank_profile.point.MP);
			fclose(pFile);
		};

#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (system_counter == 0)
		{
			initialize();
			Load_profile();
		}
		Motion_Model();
		collsion_detection();
		text_displayer();
		plot_HMI();


		system_counter++;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tank_profile.vel.V = 5 * 5;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		tank_profile.vel.V = -5 * 5;

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tank_profile.vel.W = 0.174 * 5;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tank_profile.vel.W = -0.174 * 5;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		tank_profile.vel.V = 0;
		tank_profile.vel.W = 0;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		wea_count = wea_count + 1;
		int i = wea_count % wea_up;
		if (level.level == 1)
		{
			wea[i].enable = 1;
			wea[i].pos.X = tank_profile.pos.X;
			wea[i].pos.Y = tank_profile.pos.Y;
			tank_profile.point.SP = tank_profile.point.SP - wea[i].point.SP;
			wea[i].V.Vx = wea[i].Velocity * cos(tank_profile.pos.Theta) * dt;
			wea[i].V.Vy = wea[i].Velocity * sin(tank_profile.pos.Theta) * dt;
			wea[i].counter = int((wea[i].range / wea[i].Velocity) * (1 / dt));
		}
		else
		{
			wea[i].enable = 1;
			wea[i].pos.X = tank_profile.pos.X;
			wea[i].pos.Y = tank_profile.pos.Y;
			tank_profile.point.SP = tank_profile.point.SP - wea[i].point.SP;
			wea[i].V.Vx = wea[i].Velocity * 2 * cos(tank_profile.pos.Theta) * dt;
			wea[i].V.Vy = wea[i].Velocity * 2 * sin(tank_profile.pos.Theta) * dt;
			wea[i].counter = int((wea[i].range / wea[i].Velocity) * (1 / dt));
		}
		
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		
		wea_count = wea_count + 1;
		int i = wea_count % wea_up;
		tracking_enable = 1;
		if (level.level == 1)
		{
			wea1[i].enable = 1;
			wea1[i].pos.X = tank_profile.pos.X;
			wea1[i].pos.Y = tank_profile.pos.Y;
			tank_profile.point.SP = tank_profile.point.SP - wea1[i].point.SP;
			wea1[i].V.Vx = wea1[i].Velocity * cos(tank_profile.pos.Theta) * dt;
			wea1[i].V.Vy = wea1[i].Velocity * sin(tank_profile.pos.Theta) * dt;
			wea1[i].counter = int((wea1[i].range / wea1[i].Velocity) * (1 / dt));
		}
		else
		{
			wea1[i].enable = 1;
			wea1[i].pos.X = tank_profile.pos.X;
			wea1[i].pos.Y = tank_profile.pos.Y;
			tank_profile.point.SP = tank_profile.point.SP - wea1[i].point.SP;
			wea1[i].V.Vx = wea1[i].Velocity * 2 * cos(tank_profile.pos.Theta) * dt;
			wea1[i].V.Vy = wea1[i].Velocity * 2 * sin(tank_profile.pos.Theta) * dt;
			wea1[i].counter = int((wea1[i].range / wea1[i].Velocity) * (1 / dt));
		}
		
		
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tank_profile.point.HP < 100)
		{
			tank_profile.point.HP = tank_profile.point.HP + 10;
			tank_profile.point.MP = tank_profile.point.MP - 5;
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		//Trigger magic attack
		mag.enable = 1;
		mag.counter = 30; // Keep 3 seconds
		mag.point.HP = 20;
		mag.point.MP = 5;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				float dx = 5 * mag.diameter * cos(tank_profile.pos.Theta);
				float dy = 5 * mag.diameter * sin(tank_profile.pos.Theta);
				mag.pos[i][j].X = tank_profile.pos.X + dx + mag.diameter * i - 2.5 * mag.diameter + 10;
				mag.pos[i][j].Y = tank_profile.pos.Y + dy + mag.diameter * j - 2.5 * mag.diameter + 10;
			}
		}
		tank_profile.point.MP = tank_profile.point.MP - mag.point.MP;

	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		protect.enable = 1;                                                              //開啟保護系統
		//protect.pos.X = tank_profile.pos.X +cos(protect.pos.Theta);
		//protect.pos.Y = tank_profile.pos.Y +sin(protect.pos.Theta);
		protect.counter = 30;
		for (int i = 0;i < 3;i++)
		{
			tank_profile.point.MP = tank_profile.point.MP - 10;
		}
			                             //消耗系統開啟的魔量
		//protect.V.Vx = protect.Velocity * cos(tank_profile.pos.Theta) * dt;
		//protect.V.Vy = protect.Velocity * sin(tank_profile.pos.Theta) * dt;
		                                                         //for 3 second
		//tank_profile.vel.W = 0.174 * 5;
	};

	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void progressBar2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tracking_enable == 0)
	{
		tracking_enable = 1;
		button11->Text = "Lock";
	}
	else
	{
		tracking_enable = 0;
		button11->Text = "Unlock";
	}
}
private: System::Void progressBar5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	save_data();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	load_data();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	//Trigger magic attack
	frez.enable = 1;
	frez.counter = 50; // Keep 5 seconds
	frez.point.MP = 5;
	
	
	
	tank_profile.point.MP -= frez.point.MP;
	

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};


};