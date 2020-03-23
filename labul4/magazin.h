#pragma once
#include <ostream>
#include <string>
using namespace std;
struct dataC {
	int zi;
	int luna;
	int an;
};
class Produs {
private:
	int pret;
	char* nume;
	int zi;
	int luna;
	int an;
public:
	Produs();
	Produs(const char* nume, int pret, int zi, int luna, int an);
	Produs(const Produs& p);
	Produs(string);//constructor de conversie
	~Produs();
	int getPret();
	char* getNume();
	int getAn();
	int getZi();
	int getLuna();
	void setPret(int pret);
	void setNume(const char* nume);
	void setZi(int zi);
	void setAn(int an);
	void setLuna(int luna);
	Produs& operator=(const Produs& p);
	bool operator==(const Produs& p);
	friend ostream& operator<<(ostream& os, const Produs& p);
	

};