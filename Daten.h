#ifndef _Daten_h_
#define _Daten_h_

#include <ComCtrls.hpp>

class Daten {

	TRichEdit* richEdit1;

  public:
	Daten(TRichEdit* re);

	int liste[150];

	void mischen();
};

#endif