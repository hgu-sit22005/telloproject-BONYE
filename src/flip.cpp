#include "flip.h"
#include <cstring>
#include <sstream>

Flip::Flip()
{
	command = new char[strlen("Flip 20")+1];
	strcpy(command, "Flip 20");
}

Flip::Flip(int _value)
{
	std::stringstream sstream;
	sstream << "flip" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Flip::get_delay()
{ 
	return 5; 
}