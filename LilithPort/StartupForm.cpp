#include "stdafx.h"
#include "Mainform.h"
//#include "StartupForm.h"

using namespace LilithPort;

bool StartupForm::CheckValidate() {
	// ���̓`�F�b�N
	IntPtr mp;
	TCHAR p1[MAX_ARRAY];
	TCHAR *p2;
	if(radioButtonServer->Checked){
		MTOPTION.CONNECTION_TYPE = CT_SERVER;

		// �T�[�o���`�F�b�N
		if(textBoxServerName->Text->Length == 0){
			MessageBox::Show("�T�[�o������͂��Ă��������B\n\nSERVER���[�h�ŋN������ɂ́A\n�T�[�o������͂���K�v������܂��B", "SERVER���[�h�G���[", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
		_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);
		p2 = _tcschr(p1, _T(','));
		if (p2 != NULL){
			MessageBox::Show("�T�[�o���Ɏg�p�ł��Ȃ�����(,)������܂��B\n�T�[�o�����m�F���Ă��������B", "SERVER���[�h�G���[", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}
	}
	else if(radioButtonHost->Checked){
		MTOPTION.CONNECTION_TYPE = CT_HOST;
	}
	else if(radioButtonClient->Checked){
		MTOPTION.CONNECTION_TYPE = CT_CLIENT;
	}
	else{
		MTOPTION.CONNECTION_TYPE = CT_FREE;
	}
	
	// �T�[�o��
	if(MTOPTION.CONNECTION_TYPE == CT_SERVER){
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
		_tcscpy_s(MTOPTION.SERVER_NAME, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);
	}

	// �A�h���X���̓`�F�b�N
	if(MTOPTION.CONNECTION_TYPE == CT_HOST || MTOPTION.CONNECTION_TYPE == CT_CLIENT) {
		if(textBoxIP->Text->Length == 0){
			MessageBox::Show("�ڑ���A�h���X����͂��Ă��������B\n\nHOST, CLIENT���[�h�ŋN������ɂ́A\n�ڑ���̃A�h���X����͂���K�v������܂��B", "HOST, CLIENT���[�h�G���[", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
		_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
		p2 = _tcschr(p1, _T(','));
		if (p2 != NULL){
			MessageBox::Show("�ڑ���A�h���X�Ɏg�p�ł��Ȃ�����(,)������܂��B\n�ڑ���A�h���X���m�F���Ă��������B", "HOST, CLIENT���[�h�G���[", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}

		// �ڑ��A�h���X
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
		_tcscpy_s(MTOPTION.CONNECTION_IP, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	}

	// ���O�`�F�b�N
	if(textBoxName->Text->Length == 0){
		textBoxName->Text = gcnew String(MTOPTION.NAME);

		if(textBoxName->Text->Length == 0){
			textBoxName->Text = gcnew String("����������");
		}
	}

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxName->Text);
	_tcscpy_s(MTOPTION.NAME, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	MTOPTION.OPEN_PORT      = (UINT)numericUpDownOpenPort->Value;

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxComment->Text);
	_tcscpy_s(MTOPTION.COMMENT, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxWelcome->Text);
	_tcscpy_s(MTOPTION.WELCOME, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	return true;
}