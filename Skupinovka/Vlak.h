#pragma once
#include <ostream>
#include <string>
#include <format>

class Vlak
{
private:
	int _cislo = 0;
	char* _casOdchodu = nullptr;
public:
	Vlak(int cislo, const char* casOdchodu);
	Vlak(Vlak& vlak);
	Vlak& operator=(const Vlak& other);

	friend std::ostream& operator<<(std::ostream& os, Vlak& other);
	~Vlak();
private:
	char* AlokujKopiruj(char* zdroj);
	std::string ToString();
};

