#include "magazin.h"
#include <cstddef>
#include <string.h>
#include <sstream>
#include <ostream>
#include <iostream>
using namespace std;

Produs::Produs() {
	this->nume = NULL;
	this->pret = 0;
	this->zi = 0;
	this->an = 0;
	this->luna = 0;

}
Produs::Produs(const char* nume, int pret, int zi, int luna, int an) {
	this->pret = pret;
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->an = an;
	this->zi = zi;
	this->luna = luna;


}
Produs::Produs(const Produs& p) {
	//cout << "Copy constructor" << endl;
	this->pret = p.pret;
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(p.nume), p.nume);
	this->an = p.an;
	this->zi = p.zi;
	this->luna = p.luna;
}
Produs::~Produs() {
	if (this->nume) {
		delete[] this->nume;
		this->nume = NULL;
	}
}
int Produs::getPret() {
	return this->pret;
}
char* Produs::getNume() {
	return this->nume;
}
int Produs::getAn() {
	return this->an;
}
int Produs::getZi() {
	return this->zi;
}
int Produs::getLuna() {
	return this->luna;
}
void Produs::setNume(const char* n) {
	if (nume) delete[]nume;
	nume = new char[strlen(n) + 1];
	strcpy_s(nume, strlen(n) + 1, n);
}

void Produs::setPret(int pret) {
	this->pret = pret;
}
void Produs::setAn(int an) {
	this->an = an;
}
void Produs::setZi(int zi) {
	this->zi = zi;
}
void Produs::setLuna(int luna) {
	this->luna = luna;
}
Produs& Produs::operator=(const Produs& p) {
	this->setNume(p.nume);
	this->setPret(p.pret);
	this->setAn(p.an);
	this->setZi(p.zi);
	this->setLuna(p.luna);

	return *this;
}
bool Produs:: operator==(const Produs& p) {
	return (this->pret == p.pret) && (strcmp(this->nume, p.nume) == 0) && (this->an == p.an) && (this->luna == p.luna) && (this->zi == p.zi);
}
ostream& operator<<(ostream& os, const Produs& p) {
	os << "Produs -> Nume: " << p.nume << " ,Pret: " << p.pret << " , Zi: " << p.zi << "Luna: " << p.luna << "An: " << p.an << " ;" << endl;
	return os;
}

