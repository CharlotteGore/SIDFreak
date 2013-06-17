#ifndef SIDFreak_h
#define SIDFreak_h

#include "Arduino.h"

class SIDFreak {
	word frequencies[127];
public:
	SIDFreak(void);
	word lookup(byte note);
};

#endif