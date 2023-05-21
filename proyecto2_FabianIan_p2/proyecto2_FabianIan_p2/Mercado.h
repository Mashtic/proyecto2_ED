#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mercado
	/// </summary>
	public ref class Mercado : public System::Windows::Forms::Form
	{
	public:
		Mercado(void)
		{
			InitializeComponent();
			InitImages();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mercado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_CantComprarArbolAB;
	private: System::Windows::Forms::TextBox^ txt_CantComprarArbolAVL;
	private: System::Windows::Forms::TextBox^ txt_CantComprarArbolHEAP;
	private: System::Windows::Forms::TextBox^ textBox4txt_CantComprarArbolSPLAY;
	private: System::Windows::Forms::TextBox^ txt_CantComprarEspanta;
	private: System::Windows::Forms::Button^ btn_ComprarArbolAB;
	private: System::Windows::Forms::Button^ btn_ComprarArbolAVL;
	private: System::Windows::Forms::Button^ btn_ComprarArbolHEAP;
	private: System::Windows::Forms::Button^ btn_ComprarArbolSPLAY;
	private: System::Windows::Forms::Button^ btn_ComprarEspanta;
	private: System::Windows::Forms::Button^ btn_VenderFrutaSPLAY;

















	private: System::Windows::Forms::Button^ btn_VenderFrutaHEAP;

	private: System::Windows::Forms::Button^ btn_VenderFrutaAVL;

	private: System::Windows::Forms::Button^ btn_VenderFrutaAB;


	private: System::Windows::Forms::Label^ lbl_cantBodegaFrutaSPLAY;

	private: System::Windows::Forms::Label^ lbl_cantBodegaFrutaHEAP;

	private: System::Windows::Forms::Label^ lbl_cantBodegaFrutaAVL;


	private: System::Windows::Forms::Label^ lbl_cantBodegaFrutaAB;
	private: System::Windows::Forms::TextBox^ txt_CantVenderFrutaSPLAY;


	private: System::Windows::Forms::TextBox^ textBoxtxt_CantVenderFrutaHEAP;

	private: System::Windows::Forms::TextBox^ txt_CantVenderFrutaAVL;

	private: System::Windows::Forms::TextBox^ txt_CantVenderFrutaAB;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::PictureBox^ pb_VentaFrutaAB;
	private: System::Windows::Forms::PictureBox^ pb_VentaFrutaAVL;
	private: System::Windows::Forms::PictureBox^ pb_VentaFrutaHEAP;
	private: System::Windows::Forms::PictureBox^ pb_VentaFrutaSPLAY;




	private: System::Windows::Forms::PictureBox^ pb_ComprarArbolSPLAY;

	private: System::Windows::Forms::PictureBox^ pb_ComprarArbolHEAP;



	private: System::Windows::Forms::PictureBox^ pb_ComprarArbolAVL;


	private: System::Windows::Forms::PictureBox^ pb_ComprarArbolAB;
private: System::Windows::Forms::PictureBox^ pb_ComprarEspanta;
private: System::Windows::Forms::Label^ lbl_TiempoRestante;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		void InitImages() {
			this->BackgroundImage = Image::FromFile("img//transparente.png");
			this->pb_ComprarArbolAB->BackgroundImage= Image::FromFile("img//arbolManzana.png");
			this->pb_ComprarArbolAVL->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
			this->pb_ComprarArbolHEAP->BackgroundImage = Image::FromFile("img//arbolChiva.png");
			this->pb_ComprarArbolSPLAY->BackgroundImage = Image::FromFile("img//arbolLimones.png");
			this->pb_ComprarEspanta->BackgroundImage = Image::FromFile("img//espanta.png");
			this->pb_VentaFrutaAB->BackgroundImage= Image::FromFile("img//manzana.png");
			this->pb_VentaFrutaAVL->BackgroundImage = Image::FromFile("img//fruta.png");
			this->pb_VentaFrutaHEAP->BackgroundImage = Image::FromFile("img//chiva.png");
			this->pb_VentaFrutaSPLAY->BackgroundImage = Image::FromFile("img//limon.png");
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_CantComprarArbolAB = (gcnew System::Windows::Forms::TextBox());
			this->txt_CantComprarArbolAVL = (gcnew System::Windows::Forms::TextBox());
			this->txt_CantComprarArbolHEAP = (gcnew System::Windows::Forms::TextBox());
			this->textBox4txt_CantComprarArbolSPLAY = (gcnew System::Windows::Forms::TextBox());
			this->txt_CantComprarEspanta = (gcnew System::Windows::Forms::TextBox());
			this->btn_ComprarArbolAB = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarArbolAVL = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarArbolHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarArbolSPLAY = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarEspanta = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutaSPLAY = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutaHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutaAVL = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutaAB = (gcnew System::Windows::Forms::Button());
			this->lbl_cantBodegaFrutaSPLAY = (gcnew System::Windows::Forms::Label());
			this->lbl_cantBodegaFrutaHEAP = (gcnew System::Windows::Forms::Label());
			this->lbl_cantBodegaFrutaAVL = (gcnew System::Windows::Forms::Label());
			this->lbl_cantBodegaFrutaAB = (gcnew System::Windows::Forms::Label());
			this->txt_CantVenderFrutaSPLAY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtxt_CantVenderFrutaHEAP = (gcnew System::Windows::Forms::TextBox());
			this->txt_CantVenderFrutaAVL = (gcnew System::Windows::Forms::TextBox());
			this->txt_CantVenderFrutaAB = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pb_VentaFrutaAB = (gcnew System::Windows::Forms::PictureBox());
			this->pb_VentaFrutaAVL = (gcnew System::Windows::Forms::PictureBox());
			this->pb_VentaFrutaHEAP = (gcnew System::Windows::Forms::PictureBox());
			this->pb_VentaFrutaSPLAY = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ComprarArbolSPLAY = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ComprarArbolHEAP = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ComprarArbolAVL = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ComprarArbolAB = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ComprarEspanta = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_TiempoRestante = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaAB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaAVL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaHEAP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaSPLAY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolSPLAY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolHEAP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolAVL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolAB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarEspanta))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(178, 69);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(70, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Comprar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(747, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Vender";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Arbol AB";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Arbol AVL";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Arbol HEAP";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 378);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Arbol SPLAY";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 463);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Espantapajaros";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(615, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Fruta AB";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(615, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Fruta AVL";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(615, 302);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Fruta HEAP";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(615, 384);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 20);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Fruta SPLAY";
			// 
			// txt_CantComprarArbolAB
			// 
			this->txt_CantComprarArbolAB->Location = System::Drawing::Point(302, 134);
			this->txt_CantComprarArbolAB->Name = L"txt_CantComprarArbolAB";
			this->txt_CantComprarArbolAB->Size = System::Drawing::Size(100, 26);
			this->txt_CantComprarArbolAB->TabIndex = 11;
			// 
			// txt_CantComprarArbolAVL
			// 
			this->txt_CantComprarArbolAVL->Location = System::Drawing::Point(302, 210);
			this->txt_CantComprarArbolAVL->Name = L"txt_CantComprarArbolAVL";
			this->txt_CantComprarArbolAVL->Size = System::Drawing::Size(100, 26);
			this->txt_CantComprarArbolAVL->TabIndex = 12;
			// 
			// txt_CantComprarArbolHEAP
			// 
			this->txt_CantComprarArbolHEAP->Location = System::Drawing::Point(302, 293);
			this->txt_CantComprarArbolHEAP->Name = L"txt_CantComprarArbolHEAP";
			this->txt_CantComprarArbolHEAP->Size = System::Drawing::Size(100, 26);
			this->txt_CantComprarArbolHEAP->TabIndex = 13;
			// 
			// textBox4txt_CantComprarArbolSPLAY
			// 
			this->textBox4txt_CantComprarArbolSPLAY->Location = System::Drawing::Point(302, 375);
			this->textBox4txt_CantComprarArbolSPLAY->Name = L"textBox4txt_CantComprarArbolSPLAY";
			this->textBox4txt_CantComprarArbolSPLAY->Size = System::Drawing::Size(100, 26);
			this->textBox4txt_CantComprarArbolSPLAY->TabIndex = 14;
			// 
			// txt_CantComprarEspanta
			// 
			this->txt_CantComprarEspanta->Location = System::Drawing::Point(302, 457);
			this->txt_CantComprarEspanta->Name = L"txt_CantComprarEspanta";
			this->txt_CantComprarEspanta->Size = System::Drawing::Size(100, 26);
			this->txt_CantComprarEspanta->TabIndex = 15;
			// 
			// btn_ComprarArbolAB
			// 
			this->btn_ComprarArbolAB->Location = System::Drawing::Point(420, 134);
			this->btn_ComprarArbolAB->Name = L"btn_ComprarArbolAB";
			this->btn_ComprarArbolAB->Size = System::Drawing::Size(88, 26);
			this->btn_ComprarArbolAB->TabIndex = 21;
			this->btn_ComprarArbolAB->Text = L"Comprar";
			this->btn_ComprarArbolAB->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarArbolAVL
			// 
			this->btn_ComprarArbolAVL->Location = System::Drawing::Point(420, 213);
			this->btn_ComprarArbolAVL->Name = L"btn_ComprarArbolAVL";
			this->btn_ComprarArbolAVL->Size = System::Drawing::Size(88, 26);
			this->btn_ComprarArbolAVL->TabIndex = 22;
			this->btn_ComprarArbolAVL->Text = L"Comprar";
			this->btn_ComprarArbolAVL->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarArbolHEAP
			// 
			this->btn_ComprarArbolHEAP->Location = System::Drawing::Point(420, 296);
			this->btn_ComprarArbolHEAP->Name = L"btn_ComprarArbolHEAP";
			this->btn_ComprarArbolHEAP->Size = System::Drawing::Size(88, 26);
			this->btn_ComprarArbolHEAP->TabIndex = 23;
			this->btn_ComprarArbolHEAP->Text = L"Comprar";
			this->btn_ComprarArbolHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarArbolSPLAY
			// 
			this->btn_ComprarArbolSPLAY->Location = System::Drawing::Point(420, 378);
			this->btn_ComprarArbolSPLAY->Name = L"btn_ComprarArbolSPLAY";
			this->btn_ComprarArbolSPLAY->Size = System::Drawing::Size(88, 26);
			this->btn_ComprarArbolSPLAY->TabIndex = 24;
			this->btn_ComprarArbolSPLAY->Text = L"Comprar";
			this->btn_ComprarArbolSPLAY->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarEspanta
			// 
			this->btn_ComprarEspanta->Location = System::Drawing::Point(420, 460);
			this->btn_ComprarEspanta->Name = L"btn_ComprarEspanta";
			this->btn_ComprarEspanta->Size = System::Drawing::Size(88, 29);
			this->btn_ComprarEspanta->TabIndex = 25;
			this->btn_ComprarEspanta->Text = L"Comprar";
			this->btn_ComprarEspanta->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutaSPLAY
			// 
			this->btn_VenderFrutaSPLAY->Location = System::Drawing::Point(1069, 374);
			this->btn_VenderFrutaSPLAY->Name = L"btn_VenderFrutaSPLAY";
			this->btn_VenderFrutaSPLAY->Size = System::Drawing::Size(75, 35);
			this->btn_VenderFrutaSPLAY->TabIndex = 37;
			this->btn_VenderFrutaSPLAY->Text = L"Vender";
			this->btn_VenderFrutaSPLAY->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutaHEAP
			// 
			this->btn_VenderFrutaHEAP->Location = System::Drawing::Point(1069, 289);
			this->btn_VenderFrutaHEAP->Name = L"btn_VenderFrutaHEAP";
			this->btn_VenderFrutaHEAP->Size = System::Drawing::Size(75, 35);
			this->btn_VenderFrutaHEAP->TabIndex = 36;
			this->btn_VenderFrutaHEAP->Text = L"Vender";
			this->btn_VenderFrutaHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutaAVL
			// 
			this->btn_VenderFrutaAVL->Location = System::Drawing::Point(1069, 206);
			this->btn_VenderFrutaAVL->Name = L"btn_VenderFrutaAVL";
			this->btn_VenderFrutaAVL->Size = System::Drawing::Size(75, 35);
			this->btn_VenderFrutaAVL->TabIndex = 35;
			this->btn_VenderFrutaAVL->Text = L"Vender";
			this->btn_VenderFrutaAVL->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutaAB
			// 
			this->btn_VenderFrutaAB->Location = System::Drawing::Point(1069, 134);
			this->btn_VenderFrutaAB->Name = L"btn_VenderFrutaAB";
			this->btn_VenderFrutaAB->Size = System::Drawing::Size(75, 33);
			this->btn_VenderFrutaAB->TabIndex = 34;
			this->btn_VenderFrutaAB->Text = L"Vender";
			this->btn_VenderFrutaAB->UseVisualStyleBackColor = true;
			// 
			// lbl_cantBodegaFrutaSPLAY
			// 
			this->lbl_cantBodegaFrutaSPLAY->AutoSize = true;
			this->lbl_cantBodegaFrutaSPLAY->Location = System::Drawing::Point(849, 384);
			this->lbl_cantBodegaFrutaSPLAY->Name = L"lbl_cantBodegaFrutaSPLAY";
			this->lbl_cantBodegaFrutaSPLAY->Size = System::Drawing::Size(96, 20);
			this->lbl_cantBodegaFrutaSPLAY->TabIndex = 33;
			this->lbl_cantBodegaFrutaSPLAY->Text = L"cantBodega";
			// 
			// lbl_cantBodegaFrutaHEAP
			// 
			this->lbl_cantBodegaFrutaHEAP->AutoSize = true;
			this->lbl_cantBodegaFrutaHEAP->Location = System::Drawing::Point(849, 302);
			this->lbl_cantBodegaFrutaHEAP->Name = L"lbl_cantBodegaFrutaHEAP";
			this->lbl_cantBodegaFrutaHEAP->Size = System::Drawing::Size(96, 20);
			this->lbl_cantBodegaFrutaHEAP->TabIndex = 32;
			this->lbl_cantBodegaFrutaHEAP->Text = L"cantBodega";
			// 
			// lbl_cantBodegaFrutaAVL
			// 
			this->lbl_cantBodegaFrutaAVL->AutoSize = true;
			this->lbl_cantBodegaFrutaAVL->Location = System::Drawing::Point(849, 219);
			this->lbl_cantBodegaFrutaAVL->Name = L"lbl_cantBodegaFrutaAVL";
			this->lbl_cantBodegaFrutaAVL->Size = System::Drawing::Size(96, 20);
			this->lbl_cantBodegaFrutaAVL->TabIndex = 31;
			this->lbl_cantBodegaFrutaAVL->Text = L"cantBodega";
			// 
			// lbl_cantBodegaFrutaAB
			// 
			this->lbl_cantBodegaFrutaAB->AutoSize = true;
			this->lbl_cantBodegaFrutaAB->Location = System::Drawing::Point(849, 143);
			this->lbl_cantBodegaFrutaAB->Name = L"lbl_cantBodegaFrutaAB";
			this->lbl_cantBodegaFrutaAB->Size = System::Drawing::Size(96, 20);
			this->lbl_cantBodegaFrutaAB->TabIndex = 30;
			this->lbl_cantBodegaFrutaAB->Text = L"cantBodega";
			// 
			// txt_CantVenderFrutaSPLAY
			// 
			this->txt_CantVenderFrutaSPLAY->Location = System::Drawing::Point(951, 378);
			this->txt_CantVenderFrutaSPLAY->Name = L"txt_CantVenderFrutaSPLAY";
			this->txt_CantVenderFrutaSPLAY->Size = System::Drawing::Size(100, 26);
			this->txt_CantVenderFrutaSPLAY->TabIndex = 29;
			// 
			// textBoxtxt_CantVenderFrutaHEAP
			// 
			this->textBoxtxt_CantVenderFrutaHEAP->Location = System::Drawing::Point(951, 296);
			this->textBoxtxt_CantVenderFrutaHEAP->Name = L"textBoxtxt_CantVenderFrutaHEAP";
			this->textBoxtxt_CantVenderFrutaHEAP->Size = System::Drawing::Size(100, 26);
			this->textBoxtxt_CantVenderFrutaHEAP->TabIndex = 28;
			// 
			// txt_CantVenderFrutaAVL
			// 
			this->txt_CantVenderFrutaAVL->Location = System::Drawing::Point(951, 213);
			this->txt_CantVenderFrutaAVL->Name = L"txt_CantVenderFrutaAVL";
			this->txt_CantVenderFrutaAVL->Size = System::Drawing::Size(100, 26);
			this->txt_CantVenderFrutaAVL->TabIndex = 27;
			// 
			// txt_CantVenderFrutaAB
			// 
			this->txt_CantVenderFrutaAB->Location = System::Drawing::Point(951, 137);
			this->txt_CantVenderFrutaAB->Name = L"txt_CantVenderFrutaAB";
			this->txt_CantVenderFrutaAB->Size = System::Drawing::Size(100, 26);
			this->txt_CantVenderFrutaAB->TabIndex = 26;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(532, 9);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(71, 20);
			this->label21->TabIndex = 38;
			this->label21->Text = L"Mercado";
			// 
			// pb_VentaFrutaAB
			// 
			this->pb_VentaFrutaAB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_VentaFrutaAB->Location = System::Drawing::Point(737, 123);
			this->pb_VentaFrutaAB->Name = L"pb_VentaFrutaAB";
			this->pb_VentaFrutaAB->Size = System::Drawing::Size(61, 57);
			this->pb_VentaFrutaAB->TabIndex = 39;
			this->pb_VentaFrutaAB->TabStop = false;
			// 
			// pb_VentaFrutaAVL
			// 
			this->pb_VentaFrutaAVL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_VentaFrutaAVL->Location = System::Drawing::Point(737, 206);
			this->pb_VentaFrutaAVL->Name = L"pb_VentaFrutaAVL";
			this->pb_VentaFrutaAVL->Size = System::Drawing::Size(61, 57);
			this->pb_VentaFrutaAVL->TabIndex = 40;
			this->pb_VentaFrutaAVL->TabStop = false;
			// 
			// pb_VentaFrutaHEAP
			// 
			this->pb_VentaFrutaHEAP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_VentaFrutaHEAP->Location = System::Drawing::Point(737, 289);
			this->pb_VentaFrutaHEAP->Name = L"pb_VentaFrutaHEAP";
			this->pb_VentaFrutaHEAP->Size = System::Drawing::Size(61, 57);
			this->pb_VentaFrutaHEAP->TabIndex = 41;
			this->pb_VentaFrutaHEAP->TabStop = false;
			// 
			// pb_VentaFrutaSPLAY
			// 
			this->pb_VentaFrutaSPLAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_VentaFrutaSPLAY->Location = System::Drawing::Point(737, 374);
			this->pb_VentaFrutaSPLAY->Name = L"pb_VentaFrutaSPLAY";
			this->pb_VentaFrutaSPLAY->Size = System::Drawing::Size(61, 57);
			this->pb_VentaFrutaSPLAY->TabIndex = 42;
			this->pb_VentaFrutaSPLAY->TabStop = false;
			// 
			// pb_ComprarArbolSPLAY
			// 
			this->pb_ComprarArbolSPLAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ComprarArbolSPLAY->Location = System::Drawing::Point(182, 362);
			this->pb_ComprarArbolSPLAY->Name = L"pb_ComprarArbolSPLAY";
			this->pb_ComprarArbolSPLAY->Size = System::Drawing::Size(61, 57);
			this->pb_ComprarArbolSPLAY->TabIndex = 46;
			this->pb_ComprarArbolSPLAY->TabStop = false;
			// 
			// pb_ComprarArbolHEAP
			// 
			this->pb_ComprarArbolHEAP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ComprarArbolHEAP->Location = System::Drawing::Point(182, 280);
			this->pb_ComprarArbolHEAP->Name = L"pb_ComprarArbolHEAP";
			this->pb_ComprarArbolHEAP->Size = System::Drawing::Size(61, 57);
			this->pb_ComprarArbolHEAP->TabIndex = 45;
			this->pb_ComprarArbolHEAP->TabStop = false;
			// 
			// pb_ComprarArbolAVL
			// 
			this->pb_ComprarArbolAVL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ComprarArbolAVL->Location = System::Drawing::Point(182, 195);
			this->pb_ComprarArbolAVL->Name = L"pb_ComprarArbolAVL";
			this->pb_ComprarArbolAVL->Size = System::Drawing::Size(61, 57);
			this->pb_ComprarArbolAVL->TabIndex = 44;
			this->pb_ComprarArbolAVL->TabStop = false;
			// 
			// pb_ComprarArbolAB
			// 
			this->pb_ComprarArbolAB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ComprarArbolAB->Location = System::Drawing::Point(182, 123);
			this->pb_ComprarArbolAB->Name = L"pb_ComprarArbolAB";
			this->pb_ComprarArbolAB->Size = System::Drawing::Size(61, 57);
			this->pb_ComprarArbolAB->TabIndex = 43;
			this->pb_ComprarArbolAB->TabStop = false;
			// 
			// pb_ComprarEspanta
			// 
			this->pb_ComprarEspanta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ComprarEspanta->Location = System::Drawing::Point(182, 446);
			this->pb_ComprarEspanta->Name = L"pb_ComprarEspanta";
			this->pb_ComprarEspanta->Size = System::Drawing::Size(61, 57);
			this->pb_ComprarEspanta->TabIndex = 47;
			this->pb_ComprarEspanta->TabStop = false;
			// 
			// lbl_TiempoRestante
			// 
			this->lbl_TiempoRestante->AutoSize = true;
			this->lbl_TiempoRestante->Location = System::Drawing::Point(506, 41);
			this->lbl_TiempoRestante->Name = L"lbl_TiempoRestante";
			this->lbl_TiempoRestante->Size = System::Drawing::Size(123, 20);
			this->lbl_TiempoRestante->TabIndex = 48;
			this->lbl_TiempoRestante->Text = L"tiempoRestante";
			// 
			// Mercado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1178, 546);
			this->Controls->Add(this->lbl_TiempoRestante);
			this->Controls->Add(this->pb_ComprarEspanta);
			this->Controls->Add(this->pb_ComprarArbolSPLAY);
			this->Controls->Add(this->pb_ComprarArbolHEAP);
			this->Controls->Add(this->pb_ComprarArbolAVL);
			this->Controls->Add(this->pb_ComprarArbolAB);
			this->Controls->Add(this->pb_VentaFrutaSPLAY);
			this->Controls->Add(this->pb_VentaFrutaHEAP);
			this->Controls->Add(this->pb_VentaFrutaAVL);
			this->Controls->Add(this->pb_VentaFrutaAB);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_VenderFrutaSPLAY);
			this->Controls->Add(this->btn_VenderFrutaHEAP);
			this->Controls->Add(this->btn_VenderFrutaAVL);
			this->Controls->Add(this->btn_VenderFrutaAB);
			this->Controls->Add(this->lbl_cantBodegaFrutaSPLAY);
			this->Controls->Add(this->lbl_cantBodegaFrutaHEAP);
			this->Controls->Add(this->lbl_cantBodegaFrutaAVL);
			this->Controls->Add(this->lbl_cantBodegaFrutaAB);
			this->Controls->Add(this->txt_CantVenderFrutaSPLAY);
			this->Controls->Add(this->textBoxtxt_CantVenderFrutaHEAP);
			this->Controls->Add(this->txt_CantVenderFrutaAVL);
			this->Controls->Add(this->txt_CantVenderFrutaAB);
			this->Controls->Add(this->btn_ComprarEspanta);
			this->Controls->Add(this->btn_ComprarArbolSPLAY);
			this->Controls->Add(this->btn_ComprarArbolHEAP);
			this->Controls->Add(this->btn_ComprarArbolAVL);
			this->Controls->Add(this->btn_ComprarArbolAB);
			this->Controls->Add(this->txt_CantComprarEspanta);
			this->Controls->Add(this->textBox4txt_CantComprarArbolSPLAY);
			this->Controls->Add(this->txt_CantComprarArbolHEAP);
			this->Controls->Add(this->txt_CantComprarArbolAVL);
			this->Controls->Add(this->txt_CantComprarArbolAB);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Mercado";
			this->Text = L"Mercado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaAB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaAVL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaHEAP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_VentaFrutaSPLAY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolSPLAY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolHEAP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolAVL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarArbolAB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ComprarEspanta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
