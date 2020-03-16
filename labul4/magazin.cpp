#include "magazin.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>
using namespace std;

Produs::Produs() {
	this->nume = NULL;
	this->pret = 0;
}
Produs::Produs(char* nume, int pret) {
	this->pret = pret;
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
}
Produs::Produs(const Produs& p) {
	//cout << "Copy constructor" << endl;
	this->pret = p.pret;
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(p.nume),p.nume);
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
void Produs::setNume(char* nume) {
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
}
void Produs::setPret(int pret) {
	this->pret = pret;
}
Produs& Produs::operator=(const Produs& p) {
	this->setNume(p.nume);
	this->setPret(p.pret);
	return *this;
}
bool Produs:: operator==(const Produs& p) {
	return this->pret == p.pret && (strcmp(this->nume, p.nume) == 0);
}
ostream& operator<<(ostream& os, const Produs& p) {
	os << "Produs (Nume: " << p.nume << " ,Pret: " << p.pret << ");" << endl;
	return os;
}