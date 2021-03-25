#ifndef _Steuerung_h_
#define _Steuerung_h_

class TForm1;
class Daten;

class Steuerung {

  public:
	Steuerung(TForm1* einGUI);
	TForm1* dasGUI;
	Daten* dieDaten;

	void anzeigen();
	void mischen();
	void bubbleSort();
};
#endif
