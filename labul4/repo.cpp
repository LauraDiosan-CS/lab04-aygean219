#include "Repo.h"


Repo::Repo() {
	this->n = 0;
}

Repo::~Repo() {
	this->n = 0;
}
void Repo::deleteElem(Produs s)
{
	int i = findElem(s);
	if (i != -1)
	{
		produse[i] = produse[n - 1];
		n--;
	}
}
int Repo::findElem(Produs s)
{
	for (int i = 0; i < n; i++)
		if (produse[i] == s) return i;
	return -1;
}
void Repo::addProdus(Produs p) {
	this->produse[this->n++] = p;
}
void Repo::updateElem(Produs s, char* n,int pret,int zi,int luna,int an)
{
	int i = findElem(s);
	produse[i].setNume(n);
	produse[i].setPret(pret);
	produse[i].setZi(zi);
	produse[i].setLuna(luna);
	produse[i].setAn(an);

}
Produs* Repo::getAll() {
	return this->produse;
}
Produs Repo::getElem(int pos) {
	return this->produse[pos];
}


int Repo::getSize() {
	return this->n;
}