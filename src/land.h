#pragma once
#include "TelloPro.h"

class Land: public TelloPro
{
public:
	Land();
	Land(int _value);
public:
	double get_delay();
};
