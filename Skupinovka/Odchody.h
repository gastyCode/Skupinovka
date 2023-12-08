#pragma once
#include <vector>

#include "Vlak.h"

class Odchody
{
private:
	std::vector<Vlak*> _zoznam;
public:
	Odchody() = default;
	void Pridaj(int cisloVlaku, char* casOdchodu);
	void Vymaz(int cisloVlaku);
	void VypisOdchody();
	~Odchody();
};

