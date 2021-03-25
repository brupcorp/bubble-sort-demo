//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Steuerung.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "Log.h"
TForm1* Form1;

void handler(const char* msg) {
	// MessageBoxA(0,msg,"title",0);
	Form1->RichEdit1->Lines->Add(msg);
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	Log::setHandler(handler);
	Log::out("E:TForm1::TForm1()");
	dieSteuerung = new Steuerung(this);
	Log::out("X:TForm1::TForm1()");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::onBtnAnzeigenClick(TObject* Sender) {
	Log::out("  E:onBtnAnzeigenClick()");
	clear();
	Log::out("  X:onBtnAnzeigenClick()");
}

//---------------------------------------------------------------------------
void TForm1::zeichneSaeule(int index, int hoehe) {
	Log::out("  E:Steuerung::zeichneSaeule()");
	int offsetX = 10;
	int offsetY = 50;
	int fx = 8;
	int fy = 1;

	Canvas->Brush->Color = 0x0000FF;
	Canvas->Rectangle(index * fx + offsetX, Height - offsetY, index * fx + fx + offsetX, Height - offsetY - hoehe * fy);
	Log::out("  X:Steuerung::zeichneSaeule()");
}
//---------------------------------------------------------------------------
/*
void __fastcall TForm1::FormResize(TObject *Sender)
{
  clear();
}
*/
//---------------------------------------------------------------------------
void TForm1::clear() {
	Log::out("  E:TForm1::clear()");

	Canvas->Brush->Color = 0xFFFFFF;
	Canvas->Rectangle(0, 0, Width, Height);

	Log::out("  X:TForm1::clear()");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject* Sender) {
	Log::out("  E:TForm1::Button1Click");
	dieSteuerung->anzeigen();
	Log::out("  X:TForm1::Button1Click");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject* Sender) {
	Log::out("  E:TForm1::Button2Click");
	dieSteuerung->mischen();

	Log::out("  X:TForm1::Button2Click()");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject* Sender) {
	Log::out("  E:TForm1::Button3Click");
	dieSteuerung->bubbleSort();
	Log::out("  E:TForm1::Button3Click");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject* Sender) {
	Log::out("  E:TForm1::Button4Click");
	RichEdit1->Clear();
	Log::out("  X:TForm1::Button4Click");
}
//---------------------------------------------------------------------------
