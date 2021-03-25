#ifndef _Log_h_
#define _Log_h_

#include "str.h"
typedef void (*LogType)(const char*);

enum Level { VERBOSE, DEBUG, INFO, WARN, ERR };

class Log {
  private:
	static LogType logHandler;

  public:
	static Level minLogLevel;
	static void out(Str einString, Level logLevel = VERBOSE);
	static void setHandler(LogType dieLogFunktion);
};

#endif