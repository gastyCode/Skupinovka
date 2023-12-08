#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>
#include <iostream>

#include "Vlak.h"

int main(int argc, char* argv[])
{
	{
		Vlak v1(1, "12:00");
		Vlak v2(v1);

		std::cout << v1 << std::endl;
		std::cout << v2;
	}
	_CrtDumpMemoryLeaks();
	return 0;
}
