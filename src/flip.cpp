
#include "flip.h"
#include <cstring>
#include <sstream>

Flip::Flip()
{
	command = new char[strlen("flip")+1];
	strcpy(command, "flip");
}


Flip::Flip(int _value)
{
	std::stringstream sstream;
	sstream<<"flip "<<_value;
	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Flip::get_delay()
{ 
	return 0; 
}



