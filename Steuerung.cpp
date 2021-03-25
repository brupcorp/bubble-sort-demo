#include "Steuerung.h"
#include "Daten.h"
#include "Unit1.h"

Steuerung::Steuerung(TForm1* einGUI) {
	einGUI->RichEdit1->Lines->Add("E:Steuerung::Steuerung()");
	dasGUI = einGUI;
	dieDaten = new Daten(dasGUI->RichEdit1);

	dasGUI->RichEdit1->Lines->Add("X:Steuerung::Steuerung()");
}

void Steuerung::mischen() { dieDaten->mischen(); }

void Steuerung::anzeigen() {
	dasGUI->RichEdit1->Lines->Add("  E:Steuerung::anzeigen()");
	for(int i = 0; i < 150; i++) { dasGUI->zeichneSaeule(i, dieDaten->liste[i]); };

	dasGUI->RichEdit1->Lines->Add("  X:Steuerung::anzeigen()");
}

void Steuerung::bubbleSort() {
	dasGUI->RichEdit1->Lines->Add("  E:Steuerung::bubbleSort()");
	bool nixGetauscht = false;
	int h;
	int aktPos;
	while(nixGetauscht == false) {
		nixGetauscht = true;
		for(aktPos = 0; aktPos < 149; aktPos++) {

			if(dieDaten->liste[aktPos] > dieDaten->liste[aktPos + 1]) {
				h = dieDaten->liste[aktPos];
				dieDaten->liste[aktPos] = dieDaten->liste[aktPos + 1];
				dieDaten->liste[aktPos + 1] = h;

				nixGetauscht = false;
			}
		}
	}
	dasGUI->clear();
	anzeigen();
	dasGUI->RichEdit1->Lines->Add("  X:Steuerung::bubbleSort()");
}
