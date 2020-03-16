#pragma once
#include <ostream>
using namespace std;
class Produs {
private:
	int pret;
	char* nume;
public:
	Produs();
	Produs(char* nume, int pret);
	Produs(const Produs& p);
	~Produs();
	int getPret();
	char* getNume();
	void setPret(int pret);
	void setNume(char* nume);
	Produs& operator=(const Produs& p);
	bool operator==(const Produs& p);
	friend ostream& operator<<(ostream& os, const Produs& p);

};