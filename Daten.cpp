#include "Daten.h"
#include <vcl.h>

Daten::Daten(TRichEdit* re) {
	re->Lines->Add("E:Daten::Daten()");
	for(int i = 0; i < 150; i++) { liste[i] = random(500); };
	richEdit1 = re;
	re->Lines->Add("X:Daten::Daten()");
}

void Daten::mischen() {
	richEdit1->Lines->Add("  E:Daten::mischen()");
	for(int i = 0; i < 150; i++) { liste[i] = random(500); };

	richEdit1->Lines->Add("  X:Daten::mischen()");
}
