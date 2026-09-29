#include "encapsulation.h"

int main()
{
	Human* human = new Human();
	System(human);
	delete human;
}