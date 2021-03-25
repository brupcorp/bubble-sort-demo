//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class Steuerung;
class TForm1 : public TForm {
	__published: // Von der IDE verwaltete Komponenten
	TButton* onBtnAnzeigen;
	TButton* Button1;
	TButton* Button2;
	TRichEdit* RichEdit1;
	TButton* Button3;
	TButton* Button4;
	void __fastcall onBtnAnzeigenClick(TObject* Sender);
	void __fastcall Button1Click(TObject* Sender);
	void __fastcall Button2Click(TObject* Sender);
	void __fastcall Button3Click(TObject* Sender);
	void __fastcall Button4Click(TObject* Sender);

  private: // Anwender-Deklarationen
  public:  // Anwender-Deklarationen
	__fastcall TForm1(TComponent* Owner);
	Steuerung* dieSteuerung;

	void zeichneSaeule(int index, int hoehe);

	void clear();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1* Form1;
//---------------------------------------------------------------------------
#endif
