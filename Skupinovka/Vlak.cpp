#include "Vlak.h"

#include <cstring>


Vlak::Vlak(int cislo, const char* casOdchodu)
{
	_cislo = cislo;
	if (casOdchodu && *casOdchodu) {
		_casOdchodu = const_cast<char*>(casOdchodu);
	}
}

Vlak::Vlak(Vlak& vlak)
{
	_cislo = vlak._cislo;
	_casOdchodu = AlokujKopiruj(vlak._casOdchodu);
}

Vlak::~Vlak()
{
	
}

char* Vlak::AlokujKopiruj(char* zdroj)
{
	char* ciel = nullptr;
	if (zdroj && *zdroj)
	{
		int dlzka = (int)strlen(zdroj);
		ciel = new char[dlzka + 1];
		strcpy(ciel, zdroj);
	}
	return ciel;
}

std::string Vlak::ToString()
{
	return std::format("{0} [{1}]", _cislo, _casOdchodu);
}

Vlak& Vlak::operator=(const Vlak& other)
{
	if (this != &other)
	{
		delete[] _casOdchodu;

		_cislo = other._cislo;
		_casOdchodu = AlokujKopiruj(other._casOdchodu);
	}

	return *this;
}

std::ostream& operator<<(std::ostream& os, Vlak& other)
{
	os << other.ToString();
	return os;
}
