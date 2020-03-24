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
	void deleteElem(Produs p);
	int findElem(Produs p);
	void updateElem(Produs, char*, int, int, int, int);
	Produs* getAll();
	int getSize();
	Produs getElem(int pos);
};
