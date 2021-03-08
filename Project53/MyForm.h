#pragma once


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

namespace Project53 {

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
		}
	public:

		int glob_rez = 0;			// результат для MainTextBox
		int skolko_cifr = 0;		// подсчет каличества цифр в числе
		bool minus_ch = false;		// bool для перевода значения в отрицательный при нажатии кнопки "-"
		int stnd_znac = 100;

		// bool для замены положительного значения в отрицательное при нажатии кнопки "-"
		bool minus_check()
		{
			return minus_ch;
		}
		// переход на следующую цифру в числе
		void plus_cifra()
		{
			skolko_cifr++;
		}

		// возврат к предидущей цифре в числе
		void minus_cifra()
		{
			skolko_cifr--;
		}

		// функционал к кнопке "clr"
		void clear_cifra()
		{
			skolko_cifr = 0;
			glob_rez = 0;
		}

		//
		int back_cifra()
		{
			return skolko_cifr;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ OneNumberButton;
	private: System::Windows::Forms::Button^ TwoNumberButton;

	protected:


	private: System::Windows::Forms::Button^ ThreeNumberButton;
	private: System::Windows::Forms::Button^ FourNumberButton;
	private: System::Windows::Forms::Button^ FiveNumberButton;
	private: System::Windows::Forms::Button^ SixNumberButton;
	private: System::Windows::Forms::Button^ SevenNumberButton;
	private: System::Windows::Forms::Button^ EightNumberButton;
	private: System::Windows::Forms::Button^ NineNumberButton;
	private: System::Windows::Forms::Button^ MinusButton;
	private: System::Windows::Forms::Button^ CommaButton;












	private: System::Windows::Forms::Button^ ZeroNumberButton;

	private: System::Windows::Forms::Button^ EnterTextBoxButton;
	private: System::Windows::Forms::Button^ CancelWindowButton;


	private: System::Windows::Forms::Button^ ClearTextBoxButton;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ MaxNumberButton;


	private: System::Windows::Forms::Button^ MidiumBumberButton;

	private: System::Windows::Forms::Button^ MinimumNumberButton;

	private: System::Windows::Forms::TextBox^ MainTextBox;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OneNumberButton = (gcnew System::Windows::Forms::Button());
			this->TwoNumberButton = (gcnew System::Windows::Forms::Button());
			this->ThreeNumberButton = (gcnew System::Windows::Forms::Button());
			this->FourNumberButton = (gcnew System::Windows::Forms::Button());
			this->FiveNumberButton = (gcnew System::Windows::Forms::Button());
			this->SixNumberButton = (gcnew System::Windows::Forms::Button());
			this->SevenNumberButton = (gcnew System::Windows::Forms::Button());
			this->EightNumberButton = (gcnew System::Windows::Forms::Button());
			this->NineNumberButton = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->CommaButton = (gcnew System::Windows::Forms::Button());
			this->ZeroNumberButton = (gcnew System::Windows::Forms::Button());
			this->EnterTextBoxButton = (gcnew System::Windows::Forms::Button());
			this->CancelWindowButton = (gcnew System::Windows::Forms::Button());
			this->ClearTextBoxButton = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->MaxNumberButton = (gcnew System::Windows::Forms::Button());
			this->MidiumBumberButton = (gcnew System::Windows::Forms::Button());
			this->MinimumNumberButton = (gcnew System::Windows::Forms::Button());
			this->MainTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Set to...";
			// 
			// OneNumberButton
			// 
			this->OneNumberButton->Location = System::Drawing::Point(28, 176);
			this->OneNumberButton->Name = L"OneNumberButton";
			this->OneNumberButton->Size = System::Drawing::Size(48, 23);
			this->OneNumberButton->TabIndex = 1;
			this->OneNumberButton->Text = L"1";
			this->OneNumberButton->UseVisualStyleBackColor = true;
			this->OneNumberButton->Click += gcnew System::EventHandler(this, &MyForm::OneNumberButton_Click);
			// 
			// TwoNumberButton
			// 
			this->TwoNumberButton->Location = System::Drawing::Point(73, 176);
			this->TwoNumberButton->Name = L"TwoNumberButton";
			this->TwoNumberButton->Size = System::Drawing::Size(48, 23);
			this->TwoNumberButton->TabIndex = 2;
			this->TwoNumberButton->Text = L"2";
			this->TwoNumberButton->UseVisualStyleBackColor = true;
			this->TwoNumberButton->Click += gcnew System::EventHandler(this, &MyForm::TwoNumberButton_Click);
			// 
			// ThreeNumberButton
			// 
			this->ThreeNumberButton->Location = System::Drawing::Point(118, 176);
			this->ThreeNumberButton->Name = L"ThreeNumberButton";
			this->ThreeNumberButton->Size = System::Drawing::Size(48, 23);
			this->ThreeNumberButton->TabIndex = 3;
			this->ThreeNumberButton->Text = L"3";
			this->ThreeNumberButton->UseVisualStyleBackColor = true;
			this->ThreeNumberButton->Click += gcnew System::EventHandler(this, &MyForm::ThreeNumberButton_Click);
			// 
			// FourNumberButton
			// 
			this->FourNumberButton->Location = System::Drawing::Point(28, 156);
			this->FourNumberButton->Name = L"FourNumberButton";
			this->FourNumberButton->Size = System::Drawing::Size(48, 23);
			this->FourNumberButton->TabIndex = 6;
			this->FourNumberButton->Text = L"4";
			this->FourNumberButton->UseVisualStyleBackColor = true;
			this->FourNumberButton->Click += gcnew System::EventHandler(this, &MyForm::FourNumberButton_Click);
			// 
			// FiveNumberButton
			// 
			this->FiveNumberButton->Location = System::Drawing::Point(73, 156);
			this->FiveNumberButton->Name = L"FiveNumberButton";
			this->FiveNumberButton->Size = System::Drawing::Size(48, 23);
			this->FiveNumberButton->TabIndex = 5;
			this->FiveNumberButton->Text = L"5";
			this->FiveNumberButton->UseVisualStyleBackColor = true;
			this->FiveNumberButton->Click += gcnew System::EventHandler(this, &MyForm::FiveNumberButton_Click);
			// 
			// SixNumberButton
			// 
			this->SixNumberButton->Location = System::Drawing::Point(118, 156);
			this->SixNumberButton->Name = L"SixNumberButton";
			this->SixNumberButton->Size = System::Drawing::Size(48, 23);
			this->SixNumberButton->TabIndex = 4;
			this->SixNumberButton->Text = L"6";
			this->SixNumberButton->UseVisualStyleBackColor = true;
			this->SixNumberButton->Click += gcnew System::EventHandler(this, &MyForm::SixNumberButton_Click);
			// 
			// SevenNumberButton
			// 
			this->SevenNumberButton->Location = System::Drawing::Point(28, 136);
			this->SevenNumberButton->Name = L"SevenNumberButton";
			this->SevenNumberButton->Size = System::Drawing::Size(48, 23);
			this->SevenNumberButton->TabIndex = 9;
			this->SevenNumberButton->Text = L"7";
			this->SevenNumberButton->UseVisualStyleBackColor = true;
			this->SevenNumberButton->Click += gcnew System::EventHandler(this, &MyForm::SevenNumberButton_Click);
			// 
			// EightNumberButton
			// 
			this->EightNumberButton->Location = System::Drawing::Point(73, 136);
			this->EightNumberButton->Name = L"EightNumberButton";
			this->EightNumberButton->Size = System::Drawing::Size(48, 23);
			this->EightNumberButton->TabIndex = 8;
			this->EightNumberButton->Text = L"8";
			this->EightNumberButton->UseVisualStyleBackColor = true;
			this->EightNumberButton->Click += gcnew System::EventHandler(this, &MyForm::EightNumberButton_Click);
			// 
			// NineNumberButton
			// 
			this->NineNumberButton->Location = System::Drawing::Point(118, 136);
			this->NineNumberButton->Name = L"NineNumberButton";
			this->NineNumberButton->Size = System::Drawing::Size(48, 23);
			this->NineNumberButton->TabIndex = 7;
			this->NineNumberButton->Text = L"9";
			this->NineNumberButton->UseVisualStyleBackColor = true;
			this->NineNumberButton->Click += gcnew System::EventHandler(this, &MyForm::NineNumberButton_Click);
			// 
			// MinusButton
			// 
			this->MinusButton->Location = System::Drawing::Point(118, 205);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(48, 23);
			this->MinusButton->TabIndex = 12;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = true;
			this->MinusButton->Click += gcnew System::EventHandler(this, &MyForm::MinusButton_Click);
			// 
			// CommaButton
			// 
			this->CommaButton->Location = System::Drawing::Point(73, 205);
			this->CommaButton->Name = L"CommaButton";
			this->CommaButton->Size = System::Drawing::Size(48, 23);
			this->CommaButton->TabIndex = 11;
			this->CommaButton->Text = L",";
			this->CommaButton->UseVisualStyleBackColor = true;
			this->CommaButton->Click += gcnew System::EventHandler(this, &MyForm::CommaButton_Click);
			// 
			// ZeroNumberButton
			// 
			this->ZeroNumberButton->Location = System::Drawing::Point(28, 205);
			this->ZeroNumberButton->Name = L"ZeroNumberButton";
			this->ZeroNumberButton->Size = System::Drawing::Size(48, 23);
			this->ZeroNumberButton->TabIndex = 10;
			this->ZeroNumberButton->Text = L"0";
			this->ZeroNumberButton->UseVisualStyleBackColor = true;
			this->ZeroNumberButton->Click += gcnew System::EventHandler(this, &MyForm::ZeroNumberButton_Click);
			// 
			// EnterTextBoxButton
			// 
			this->EnterTextBoxButton->Location = System::Drawing::Point(28, 236);
			this->EnterTextBoxButton->Name = L"EnterTextBoxButton";
			this->EnterTextBoxButton->Size = System::Drawing::Size(105, 37);
			this->EnterTextBoxButton->TabIndex = 13;
			this->EnterTextBoxButton->Text = L"Enter";
			this->EnterTextBoxButton->UseVisualStyleBackColor = true;
			this->EnterTextBoxButton->Click += gcnew System::EventHandler(this, &MyForm::EnterTextBoxButton_Click);
			// 
			// CancelWindowButton
			// 
			this->CancelWindowButton->Location = System::Drawing::Point(150, 236);
			this->CancelWindowButton->Name = L"CancelWindowButton";
			this->CancelWindowButton->Size = System::Drawing::Size(105, 37);
			this->CancelWindowButton->TabIndex = 14;
			this->CancelWindowButton->Text = L"Cancel";
			this->CancelWindowButton->UseVisualStyleBackColor = true;
			this->CancelWindowButton->Click += gcnew System::EventHandler(this, &MyForm::CancelWindowButton_Click);
			// 
			// ClearTextBoxButton
			// 
			this->ClearTextBoxButton->Location = System::Drawing::Point(180, 147);
			this->ClearTextBoxButton->Name = L"ClearTextBoxButton";
			this->ClearTextBoxButton->Size = System::Drawing::Size(75, 23);
			this->ClearTextBoxButton->TabIndex = 15;
			this->ClearTextBoxButton->Text = L"Clr";
			this->ClearTextBoxButton->UseVisualStyleBackColor = true;
			this->ClearTextBoxButton->Click += gcnew System::EventHandler(this, &MyForm::ClearTextBoxButton_Click);
			// 
			// ClearLastOneButton
			// 
			this->button16->Location = System::Drawing::Point(180, 176);
			this->button16->Name = L"ClearLastOneButton";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 16;
			this->button16->Text = L"<-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::ClearLastOneButton_Click);
			// 
			// MaxNumberButton
			// 
			this->MaxNumberButton->Location = System::Drawing::Point(177, 103);
			this->MaxNumberButton->Name = L"MaxNumberButton";
			this->MaxNumberButton->Size = System::Drawing::Size(78, 23);
			this->MaxNumberButton->TabIndex = 20;
			this->MaxNumberButton->Text = L"Max";
			this->MaxNumberButton->UseVisualStyleBackColor = true;
			this->MaxNumberButton->Click += gcnew System::EventHandler(this, &MyForm::MaxNumberButton_Click);
			// 
			// MidiumBumberButton
			// 
			this->MidiumBumberButton->Location = System::Drawing::Point(102, 103);
			this->MidiumBumberButton->Name = L"MidiumBumberButton";
			this->MidiumBumberButton->Size = System::Drawing::Size(78, 23);
			this->MidiumBumberButton->TabIndex = 19;
			this->MidiumBumberButton->Text = L"Mid";
			this->MidiumBumberButton->UseVisualStyleBackColor = true;
			this->MidiumBumberButton->Click += gcnew System::EventHandler(this, &MyForm::MidiumNumberButton_Click);
			// 
			// MinimumNumberButton
			// 
			this->MinimumNumberButton->Location = System::Drawing::Point(28, 103);
			this->MinimumNumberButton->Name = L"MinimumNumberButton";
			this->MinimumNumberButton->Size = System::Drawing::Size(78, 23);
			this->MinimumNumberButton->TabIndex = 18;
			this->MinimumNumberButton->Text = L"Min";
			this->MinimumNumberButton->UseVisualStyleBackColor = true;
			this->MinimumNumberButton->Click += gcnew System::EventHandler(this, &MyForm::MinimumNumberButton_Click);
			// 
			// MainTextBox
			// 
			this->MainTextBox->Location = System::Drawing::Point(28, 52);
			this->MainTextBox->Name = L"MainTextBox";
			this->MainTextBox->ReadOnly = true;
			this->MainTextBox->Size = System::Drawing::Size(227, 20);
			this->MainTextBox->TabIndex = 21;
			this->MainTextBox->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(276, 304);
			this->Controls->Add(this->MainTextBox);
			this->Controls->Add(this->MaxNumberButton);
			this->Controls->Add(this->MidiumBumberButton);
			this->Controls->Add(this->MinimumNumberButton);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->ClearTextBoxButton);
			this->Controls->Add(this->CancelWindowButton);
			this->Controls->Add(this->EnterTextBoxButton);
			this->Controls->Add(this->MinusButton);
			this->Controls->Add(this->CommaButton);
			this->Controls->Add(this->ZeroNumberButton);
			this->Controls->Add(this->SevenNumberButton);
			this->Controls->Add(this->EightNumberButton);
			this->Controls->Add(this->NineNumberButton);
			this->Controls->Add(this->FourNumberButton);
			this->Controls->Add(this->FiveNumberButton);
			this->Controls->Add(this->SixNumberButton);
			this->Controls->Add(this->ThreeNumberButton);
			this->Controls->Add(this->TwoNumberButton);
			this->Controls->Add(this->OneNumberButton);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*1*/private: System::Void OneNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("1"); glob_rez = (pow(10, back_cifra() - 1)) * 1; }
	else MainTextBox->Text += System::Convert::ToString("1"); glob_rez += (pow(10, back_cifra() - 1)) * 1;
}
/*2*/private: System::Void TwoNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("2"); glob_rez += (pow(10, back_cifra() - 1)) * 2; }
	else MainTextBox->Text += System::Convert::ToString("2"); glob_rez += (pow(10, back_cifra() - 1)) * 2;
}
/*3*/private: System::Void ThreeNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
		if (result == 0) { MainTextBox->Text = System::Convert::ToString("3"); glob_rez += (pow(10,back_cifra()-1)) * 3; }
		else MainTextBox->Text += System::Convert::ToString("3"); glob_rez += (pow(10, back_cifra() - 1)) * 3;
}
/*4*/private: System::Void FourNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("4"); glob_rez += (pow(10, back_cifra() - 1)) * 4; }
	else MainTextBox->Text += System::Convert::ToString("4"); glob_rez += (pow(10, back_cifra() - 1)) * 4;
}
/*5*/private: System::Void FiveNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("5"); glob_rez += (pow(10, back_cifra() - 1)) * 5; }
	else MainTextBox->Text += System::Convert::ToString("5"); glob_rez += (pow(10, back_cifra() - 1)) * 5;
}
/*6*/private: System::Void SixNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("6"); glob_rez += (pow(10, back_cifra() - 1)) * 6; }
	else MainTextBox->Text += System::Convert::ToString("6"); glob_rez += (pow(10, back_cifra() - 1)) * 6;
}
/*7*/private: System::Void SevenNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("7"); glob_rez += (pow(10, back_cifra() - 1)) * 7; }
	else MainTextBox->Text += System::Convert::ToString("7"); glob_rez += (pow(10, back_cifra() - 1)) * 7;
}
/*8*/private: System::Void EightNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("8"); glob_rez += (pow(10, back_cifra() - 1)) * 8; }
	else MainTextBox->Text += System::Convert::ToString("8"); glob_rez += (pow(10, back_cifra() - 1)) * 8;
}
/*9*/private: System::Void NineNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
	plus_cifra();
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("9"); glob_rez += (pow(10, back_cifra() - 1)) * 9; }
	else MainTextBox->Text += System::Convert::ToString("9"); glob_rez += (pow(10, back_cifra() - 1)) * 9;
}
/*0*/private: System::Void ZeroNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		double result = (double)glob_rez;
		if (result == 0) { MainTextBox->Text = System::Convert::ToString("0"); glob_rez += (pow(10, back_cifra() - 1)); }
		else { MainTextBox->Text += System::Convert::ToString("0"); plus_cifra(); glob_rez += (pow(10, back_cifra() - 1)); }
}
/*,*/private: System::Void CommaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int result;
	result = System::Convert::ToDouble(MainTextBox->Text);
	if (result % 1 != 0){}
	else { MainTextBox->Text += System::Convert::ToString(","); }
}
/*-*/private: System::Void MinusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		double result;
		if (minus_check() == false) {
			minus_ch = true; glob_rez = glob_rez * (-1);
		}
		result = System::Convert::ToDouble(MainTextBox->Text);
		MainTextBox->Text = System::Convert::ToString(glob_rez);
	}
	/*Enter*/private: System::Void EnterTextBoxButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(" ", "Answer");
		double rezult = (double)glob_rez;
	}
	/*Close*/private: System::Void CancelWindowButton_Click(System::Object^ sender, System::EventArgs^ e){
	Application::Exit();
	}
/*<-*/private: System::Void ClearLastOneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	double result = (double)glob_rez;
	if (result == 0) { MainTextBox->Text = System::Convert::ToString("0"); glob_rez = 0; }
	else;
}
	/*clr*/private: System::Void ClearTextBoxButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clear_cifra();
		MainTextBox->Text = System::Convert::ToString("0");

	}
	/*Max*/private: System::Void MaxNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MainTextBox->Text = System::Convert::ToString("250");
		glob_rez = 250;
		skolko_cifr = 3;
		
	}
	/*Mid*/private: System::Void MidiumNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MainTextBox->Text = System::Convert::ToString("100");
		glob_rez = 100;
		skolko_cifr = 3;
	}
	/*Min*/private: System::Void MinimumNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MainTextBox->Text = System::Convert::ToString("10"); 
		glob_rez = 10;
		skolko_cifr = 2;

	}
};
}
