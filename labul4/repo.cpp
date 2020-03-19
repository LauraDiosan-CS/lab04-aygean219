#include "Repo.h"
//comentariu proba

Repo::Repo() {
	this->n = 0;
}

Repo::~Repo() {
	this->n = 0;
}

void Repo::addProdus(Produs p) {
	this->produse[this->n++] = p;
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