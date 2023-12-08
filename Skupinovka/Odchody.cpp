#include "Odchody.h"

void Odchody::Pridaj(int cisloVlaku, char* casOdchodu)
{
	if (casOdchodu && *casOdchodu)
	{
		 
	}
}

void Odchody::Vymaz(int cisloVlaku)
{
}

void Odchody::VypisOdchody()
{
}

Odchody::~Odchody()
{
	for (auto vlak : _zoznam)
	{
		delete vlak;
	}
	_zoznam.clear();
}
