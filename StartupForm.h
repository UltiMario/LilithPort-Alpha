#pragma once

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LilithPort {

	/// <summary>
	/// StartupForm の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class StartupForm : public System::Windows::Forms::Form
	{
	public:
		StartupForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~StartupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButtonServer;
	private: System::Windows::Forms::RadioButton^  radioButtonHost;
	private: System::Windows::Forms::RadioButton^  radioButtonClient;
	private: System::Windows::Forms::Label^  labelServerName;
	private: System::Windows::Forms::TextBox^  textBoxIP;
	private: System::Windows::Forms::Label^  labelOpenPort;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownOpenPort;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::TextBox^  textBoxName;



	private: System::Windows::Forms::Label^  labelComment;
	private: System::Windows::Forms::TextBox^  textBoxComment;
	private: System::Windows::Forms::GroupBox^  groupBoxStartMode;
	private: System::Windows::Forms::TextBox^  textBoxServerName;
	private: System::Windows::Forms::GroupBox^  groupBoxConnection;


	private: System::Windows::Forms::GroupBox^  groupBoxProfile;
	private: System::Windows::Forms::GroupBox^  groupBoxWelcome;
	private: System::Windows::Forms::RichTextBox^  textBoxWelcome;
	private: System::Windows::Forms::ToolTip^  toolTipStartupForm;
	private: System::Windows::Forms::Button^  buttonConnect;
	private: System::Windows::Forms::Button^  buttonOpenPortUPnP;
	private: System::Windows::Forms::Button^  buttonClosePortUPnP;
	private: System::Windows::Forms::Label^  labelButtonUPnP;







	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartupForm::typeid));
			this->radioButtonServer = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonHost = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonClient = (gcnew System::Windows::Forms::RadioButton());
			this->labelServerName = (gcnew System::Windows::Forms::Label());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->labelOpenPort = (gcnew System::Windows::Forms::Label());
			this->numericUpDownOpenPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
			this->labelComment = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->groupBoxStartMode = (gcnew System::Windows::Forms::GroupBox());
			this->labelButtonUPnP = (gcnew System::Windows::Forms::Label());
			this->buttonClosePortUPnP = (gcnew System::Windows::Forms::Button());
			this->buttonOpenPortUPnP = (gcnew System::Windows::Forms::Button());
			this->textBoxServerName = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxConnection = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxProfile = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxWelcome = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxWelcome = (gcnew System::Windows::Forms::RichTextBox());
			this->toolTipStartupForm = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOpenPort))->BeginInit();
			this->groupBoxStartMode->SuspendLayout();
			this->groupBoxConnection->SuspendLayout();
			this->groupBoxProfile->SuspendLayout();
			this->groupBoxWelcome->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonServer
			// 
			this->radioButtonServer->AutoSize = true;
			this->radioButtonServer->Location = System::Drawing::Point(8, 18);
			this->radioButtonServer->Name = L"radioButtonServer";
			this->radioButtonServer->Size = System::Drawing::Size(56, 16);
			this->radioButtonServer->TabIndex = 4;
			this->radioButtonServer->Text = L"Server";
			this->toolTipStartupForm->SetToolTip(this->radioButtonServer, L"Create a Server");
			this->radioButtonServer->UseVisualStyleBackColor = true;
			this->radioButtonServer->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonServer_CheckedChanged);
			// 
			// radioButtonHost
			// 
			this->radioButtonHost->AutoSize = true;
			this->radioButtonHost->Location = System::Drawing::Point(70, 18);
			this->radioButtonHost->Name = L"radioButtonHost";
			this->radioButtonHost->Size = System::Drawing::Size(47, 16);
			this->radioButtonHost->TabIndex = 5;
			this->radioButtonHost->Text = L"Host";
			this->toolTipStartupForm->SetToolTip(this->radioButtonHost, L"Join a Server as Host");
			this->radioButtonHost->UseVisualStyleBackColor = true;
			this->radioButtonHost->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonHost_CheckedChanged);
			// 
			// radioButtonClient
			// 
			this->radioButtonClient->AutoSize = true;
			this->radioButtonClient->Location = System::Drawing::Point(123, 18);
			this->radioButtonClient->Name = L"radioButtonClient";
			this->radioButtonClient->Size = System::Drawing::Size(53, 16);
			this->radioButtonClient->TabIndex = 6;
			this->radioButtonClient->Text = L"Client";
			this->toolTipStartupForm->SetToolTip(this->radioButtonClient, L"Join a Server as Client");
			this->radioButtonClient->UseVisualStyleBackColor = true;
			this->radioButtonClient->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonClient_CheckedChanged);
			// 
			// labelServerName
			// 
			this->labelServerName->AutoSize = true;
			this->labelServerName->Location = System::Drawing::Point(6, 41);
			this->labelServerName->Name = L"labelServerName";
			this->labelServerName->Size = System::Drawing::Size(49, 12);
			this->labelServerName->TabIndex = 0;
			this->labelServerName->Text = L"Server ID:";
			this->toolTipStartupForm->SetToolTip(this->labelServerName, L"The name your server will have.\nThis is not the address.");
			this->labelServerName->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelServerName->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// textBoxIP
			// 
			this->textBoxIP->Location = System::Drawing::Point(8, 23);
			this->textBoxIP->Name = L"textBoxIP";
			this->textBoxIP->Size = System::Drawing::Size(178, 19);
			this->textBoxIP->TabIndex = 11;
			this->textBoxIP->WordWrap = false;
			// 
			// labelOpenPort
			// 
			this->labelOpenPort->AutoSize = true;
			this->labelOpenPort->Location = System::Drawing::Point(6, 67);
			this->labelOpenPort->Name = L"labelOpenPort";
			this->labelOpenPort->Size = System::Drawing::Size(59, 12);
			this->labelOpenPort->TabIndex = 0;
			this->labelOpenPort->Text = L"Port";
			this->toolTipStartupForm->SetToolTip(this->labelOpenPort, L"The Port you'll be using for the server.\nYou need to forward this port to use it.");
			this->labelOpenPort->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelOpenPort->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// numericUpDownOpenPort
			// 
			this->numericUpDownOpenPort->Location = System::Drawing::Point(133, 65);
			this->numericUpDownOpenPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDownOpenPort->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1024, 0, 0, 0});
			this->numericUpDownOpenPort->Name = L"numericUpDownOpenPort";
			this->numericUpDownOpenPort->Size = System::Drawing::Size(53, 19);
			this->numericUpDownOpenPort->TabIndex = 8;
			this->numericUpDownOpenPort->Tag = L"";
			this->numericUpDownOpenPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {7500, 0, 0, 0});
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(210, 205);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(58, 24);
			this->buttonOK->TabIndex = 12;
			this->buttonOK->Text = L"OK";
			this->toolTipStartupForm->SetToolTip(this->buttonOK, L"OK");
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(338, 205);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(57, 24);
			this->buttonCancel->TabIndex = 14;
			this->buttonCancel->Text = L"Cancel";
			this->toolTipStartupForm->SetToolTip(this->buttonCancel, L"Cancel");
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StartupForm::buttonCancel_Click);
			// 
			// textBoxComment
			// 
			this->textBoxComment->Location = System::Drawing::Point(80, 43);
			this->textBoxComment->Name = L"textBoxComment";
			this->textBoxComment->Size = System::Drawing::Size(94, 19);
			this->textBoxComment->TabIndex = 2;
			this->textBoxComment->WordWrap = false;
			// 
			// labelComment
			// 
			this->labelComment->AutoSize = true;
			this->labelComment->Location = System::Drawing::Point(7, 46);
			this->labelComment->Name = L"labelComment";
			this->labelComment->Size = System::Drawing::Size(40, 12);
			this->labelComment->TabIndex = 4;
			this->labelComment->Text = L"Join Msg:";
			this->toolTipStartupForm->SetToolTip(this->labelComment, L"You will automatically say this message when you join.");
			this->labelComment->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelComment->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(80, 18);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(94, 19);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->WordWrap = false;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(6, 21);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(61, 12);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Username:";
			this->toolTipStartupForm->SetToolTip(this->labelName, L"Your username. Don't use special characters.");
			this->labelName->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelName->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// groupBoxStartMode
			// 
			this->groupBoxStartMode->Controls->Add(this->labelButtonUPnP);
			this->groupBoxStartMode->Controls->Add(this->buttonClosePortUPnP);
			this->groupBoxStartMode->Controls->Add(this->buttonOpenPortUPnP);
			this->groupBoxStartMode->Controls->Add(this->textBoxServerName);
			this->groupBoxStartMode->Controls->Add(this->radioButtonServer);
			this->groupBoxStartMode->Controls->Add(this->labelOpenPort);
			this->groupBoxStartMode->Controls->Add(this->labelServerName);
			this->groupBoxStartMode->Controls->Add(this->numericUpDownOpenPort);
			this->groupBoxStartMode->Controls->Add(this->radioButtonHost);
			this->groupBoxStartMode->Controls->Add(this->radioButtonClient);
			this->groupBoxStartMode->Location = System::Drawing::Point(201, 12);
			this->groupBoxStartMode->Name = L"groupBoxStartMode";
			this->groupBoxStartMode->Size = System::Drawing::Size(194, 131);
			this->groupBoxStartMode->TabIndex = 8;
			this->groupBoxStartMode->TabStop = false;
			this->groupBoxStartMode->Text = L"Mode";
			// 
			// labelButtonUPnP
			// 
			this->labelButtonUPnP->AutoSize = true;
			this->labelButtonUPnP->Location = System::Drawing::Point(6, 93);
			this->labelButtonUPnP->Name = L"labelButtonUPnP";
			this->labelButtonUPnP->Size = System::Drawing::Size(59, 24);
			this->labelButtonUPnP->TabIndex = 8;
			this->labelButtonUPnP->Text = L"UPnP\nToggle:";
			this->toolTipStartupForm->SetToolTip(this->labelButtonUPnP, L"Defines if you want to use UPnP mode." 
				L"ください。");
			this->labelButtonUPnP->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelButtonUPnP->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// buttonClosePortUPnP
			// 
			this->buttonClosePortUPnP->Location = System::Drawing::Point(134, 93);
			this->buttonClosePortUPnP->Name = L"buttonClosePortUPnP";
			this->buttonClosePortUPnP->Size = System::Drawing::Size(52, 24);
			this->buttonClosePortUPnP->TabIndex = 10;
			this->buttonClosePortUPnP->Text = L"Off";
			this->toolTipStartupForm->SetToolTip(this->buttonClosePortUPnP, L"Close your UPnP Port.");
			this->buttonClosePortUPnP->UseVisualStyleBackColor = true;
			this->buttonClosePortUPnP->Click += gcnew System::EventHandler(this, &StartupForm::buttonClosePortUPnP_Click);
			// 
			// buttonOpenPortUPnP
			// 
			this->buttonOpenPortUPnP->Location = System::Drawing::Point(76, 93);
			this->buttonOpenPortUPnP->Name = L"buttonOpenPortUPnP";
			this->buttonOpenPortUPnP->Size = System::Drawing::Size(52, 24);
			this->buttonOpenPortUPnP->TabIndex = 9;
			this->buttonOpenPortUPnP->Text = L"On";
			this->toolTipStartupForm->SetToolTip(this->buttonOpenPortUPnP, L"Open your UPnP Port.");
			this->buttonOpenPortUPnP->UseVisualStyleBackColor = true;
			this->buttonOpenPortUPnP->Click += gcnew System::EventHandler(this, &StartupForm::buttonOpenPortUPnP_Click);
			// 
			// textBoxServerName
			// 
			this->textBoxServerName->Location = System::Drawing::Point(70, 38);
			this->textBoxServerName->Name = L"textBoxServerName";
			this->textBoxServerName->Size = System::Drawing::Size(116, 19);
			this->textBoxServerName->TabIndex = 7;
			this->textBoxServerName->WordWrap = false;
			// 
			// groupBoxConnection
			// 
			this->groupBoxConnection->Controls->Add(this->textBoxIP);
			this->groupBoxConnection->Location = System::Drawing::Point(201, 149);
			this->groupBoxConnection->Name = L"groupBoxConnection";
			this->groupBoxConnection->Size = System::Drawing::Size(194, 50);
			this->groupBoxConnection->TabIndex = 9;
			this->groupBoxConnection->TabStop = false;
			this->groupBoxConnection->Text = L"Server Address";
			this->toolTipStartupForm->SetToolTip(this->groupBoxConnection, L"Paste the address here to join a server.");
			// 
			// groupBoxProfile
			// 
			this->groupBoxProfile->Controls->Add(this->labelComment);
			this->groupBoxProfile->Controls->Add(this->textBoxComment);
			this->groupBoxProfile->Controls->Add(this->textBoxName);
			this->groupBoxProfile->Controls->Add(this->labelName);
			this->groupBoxProfile->Location = System::Drawing::Point(12, 12);
			this->groupBoxProfile->Name = L"groupBoxProfile";
			this->groupBoxProfile->Size = System::Drawing::Size(183, 67);
			this->groupBoxProfile->TabIndex = 10;
			this->groupBoxProfile->TabStop = false;
			this->groupBoxProfile->Text = L"Profile";
			// 
			// groupBoxWelcome
			// 
			this->groupBoxWelcome->Controls->Add(this->textBoxWelcome);
			this->groupBoxWelcome->Location = System::Drawing::Point(12, 86);
			this->groupBoxWelcome->Name = L"groupBoxWelcome";
			this->groupBoxWelcome->Size = System::Drawing::Size(183, 113);
			this->groupBoxWelcome->TabIndex = 11;
			this->groupBoxWelcome->TabStop = false;
			this->groupBoxWelcome->Text = L"Welcome";
			this->toolTipStartupForm->SetToolTip(this->groupBoxWelcome, L"This Welcome message will be shown when players join your server.");
			// 
			// textBoxWelcome
			// 
			this->textBoxWelcome->Location = System::Drawing::Point(8, 19);
			this->textBoxWelcome->MaxLength = 254;
			this->textBoxWelcome->Name = L"textBoxWelcome";
			this->textBoxWelcome->Size = System::Drawing::Size(167, 86);
			this->textBoxWelcome->TabIndex = 3;
			this->textBoxWelcome->Text = L"";
			this->textBoxWelcome->WordWrap = false;
			// 
			// toolTipStartupForm
			// 
			this->toolTipStartupForm->AutomaticDelay = 0;
			this->toolTipStartupForm->AutoPopDelay = 30000;
			this->toolTipStartupForm->InitialDelay = 0;
			this->toolTipStartupForm->ReshowDelay = 0;
			this->toolTipStartupForm->UseAnimation = false;
			this->toolTipStartupForm->UseFading = false;
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(274, 205);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(58, 24);
			this->buttonConnect->TabIndex = 13;
			this->buttonConnect->Text = L"Connect";
			this->toolTipStartupForm->SetToolTip(this->buttonConnect, L"Connect");
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// StartupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(407, 241);
			this->Controls->Add(this->buttonConnect);
			this->Controls->Add(this->groupBoxWelcome);
			this->Controls->Add(this->groupBoxProfile);
			this->Controls->Add(this->groupBoxConnection);
			this->Controls->Add(this->groupBoxStartMode);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StartupForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Server Setup";
			this->Load += gcnew System::EventHandler(this, &StartupForm::StartupForm_Load);
			this->Shown += gcnew System::EventHandler(this, &StartupForm::StartupForm_Shown);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &StartupForm::StartupForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOpenPort))->EndInit();
			this->groupBoxStartMode->ResumeLayout(false);
			this->groupBoxStartMode->PerformLayout();
			this->groupBoxConnection->ResumeLayout(false);
			this->groupBoxConnection->PerformLayout();
			this->groupBoxProfile->ResumeLayout(false);
			this->groupBoxProfile->PerformLayout();
			this->groupBoxWelcome->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:

		// StartupForm.cpp
		bool StartupForm::CheckValidate();

	private:

		// コントロールボックスからの閉じる認識用
		static bool ConnectionStart = false;

		System::Void StartupForm_Load(System::Object^  sender, System::EventArgs^  e) {
			ConnectionStart = false;

			textBoxServerName->MaxLength      = MAX_NAME;
			textBoxIP->MaxLength              = MAX_ARRAY;
			textBoxName->MaxLength            = MAX_NAME;
			textBoxComment->MaxLength         = MAX_NAME;

			switch(MTOPTION.CONNECTION_TYPE){
			case CT_SERVER:
			default:
				radioButtonServer->Checked = true;

				break;
			case CT_HOST:
				radioButtonHost->Checked = true;

				break;
			case CT_CLIENT:
				radioButtonClient->Checked = true;

				numericUpDownOpenPort->Enabled = false;
				break;
			}

			textBoxServerName->Text = gcnew String(MTOPTION.SERVER_NAME);
			textBoxIP->Text = gcnew String(MTOPTION.CONNECTION_IP);
			
			numericUpDownOpenPort->Value = MTOPTION.OPEN_PORT;
			textBoxName->Text = gcnew String(MTOPTION.NAME);

			textBoxComment->Text = gcnew String(MTOPTION.COMMENT);
			// タブを改行に
			ReplaceWelcomeTab(true);
			textBoxWelcome->Text = gcnew String(MTOPTION.WELCOME);

		}
		System::Void StartupForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			if(radioButtonServer->Checked){
				buttonOK->Focus();
			}else{
				buttonConnect->Focus();
			}
		}
		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
			// 起動・接続ボタン
			if(!CheckValidate()){
				return;
			}
			ConnectionStart = true;

			this->Close();
		}
		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			// 閉じるボタン
			MTOPTION.CONNECTION_TYPE = CT_FREE;
			ConnectionStart = false;

			this->Close();
		}
		System::Void StartupForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			if(!ConnectionStart){
				MTOPTION.CONNECTION_TYPE = CT_FREE;
			}
		}
		System::Void radioButtonServer_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = true;
			textBoxServerName->Enabled     = true;
			textBoxIP->Enabled             = false;
			groupBoxConnection->Enabled    = false;
			groupBoxWelcome->Enabled       = true;

			labelButtonUPnP->Enabled       = true;
			buttonOpenPortUPnP->Enabled    = true;
			buttonClosePortUPnP->Enabled   = true;

			buttonOK->Enabled = true;
			buttonConnect->Enabled = false;
		}

		System::Void radioButtonHost_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;

			labelButtonUPnP->Enabled       = true;
			buttonOpenPortUPnP->Enabled    = true;
			buttonClosePortUPnP->Enabled   = true;

			buttonOK->Enabled = false;
			buttonConnect->Enabled = true;
		}
		System::Void radioButtonClient_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = false;
			labelOpenPort->Enabled         = false;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;

			labelButtonUPnP->Enabled       = false;
			buttonOpenPortUPnP->Enabled    = false;
			buttonClosePortUPnP->Enabled   = false;

			buttonOK->Enabled = false;
			buttonConnect->Enabled = true;
		}
		System::Void label_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			// マウスオーバーでラベルに下線
			Label^ obj = (Label^)sender;
			obj->Font = gcnew System::Drawing::Font(this->Font, FontStyle::Underline);
		}
		System::Void label_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			Label^ obj = (Label^)sender;
			obj->Font = gcnew System::Drawing::Font(this->Font, FontStyle::Regular);
		}
		System::Void buttonOpenPortUPnP_Click(System::Object^  sender, System::EventArgs^  e) {
			// ポート開放ボタン
			buttonOpenPortUPnP->Enabled = false;
			buttonClosePortUPnP->Enabled = false;

			MTOPTION.OPEN_PORT = (UINT)numericUpDownOpenPort->Value;
			UPnP_PortOpenClose(true, false);

			buttonOpenPortUPnP->Enabled = true;
			buttonClosePortUPnP->Enabled = true;
		}
		System::Void buttonClosePortUPnP_Click(System::Object^  sender, System::EventArgs^  e) {
			// ポート閉鎖ボタン
			buttonOpenPortUPnP->Enabled = false;
			buttonClosePortUPnP->Enabled = false;

			MTOPTION.OPEN_PORT = (UINT)numericUpDownOpenPort->Value;
			UPnP_PortOpenClose(false, false);

			buttonOpenPortUPnP->Enabled = true;
			buttonClosePortUPnP->Enabled = true;
		}
	};
}
