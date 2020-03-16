#pragma once
#include "magazin.h"
class Repo {
private:
	Produs produse[20];
	int n;
public:
	Repo();
	~Repo();
	void addProdus(Produs p);
	Produs* getAll();
	int getSize();
	Produs getElem(int pos);
};
