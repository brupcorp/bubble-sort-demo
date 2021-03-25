#include "Log.h"
#include <time.h>

LogType Log::logHandler = 0;
Level Log::minLogLevel = VERBOSE;

const char* levels[] = {"Verbose", "-Debug-", "INFO", "WARN", "!ERR!"};

void Log::setHandler(LogType dieFunction) { logHandler = dieFunction; }

void Log::out(Str text, Level logLevel) {
	if(logHandler != 0 && logLevel >= minLogLevel) {
		time_t rawtime = time(0);
		static char buffer[16];
		strftime(buffer, 16, "%H:%M:%S", localtime(&rawtime));
		logHandler(str("[" + buffer + "][" + levels[(int)logLevel] + "]: " + text));
	}
}
