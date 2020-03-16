#include "teste.h"
#include "magazin.h"
#include "Repo.h"
#include <assert.h>
#include <string.h>
#include <iostream>

void testConstructors() {
	//static
	Produs p;//implicit const
	assert((p.getPret() == 0) && (p.getNume() == NULL));
	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "faina", "faina");
	Produs p1(nume1, 4);//const with param
	assert((p1.getPret() == 4) && (strcmp(p1.getNume(), "faina") == 0));
	//dynamic
	Produs* p2;
	p2 = new Produs();//implicit constr
	assert((p2->getPret() == 0) && (p2->getNume() == NULL));
	char* tip2 = new char[10];
	strcpy_s(tip2, sizeof "ulei", "ulei");
	Produs* p3 = new Produs(tip2, 5);//const by param
	assert((p3->getPret() == 5) && (strcmp(p3->getNume(), "ulei") == 0));
	if (p3 != NULL) {
		delete p3;//destructor
		p3 = NULL;
	}

}
void teste() {
	Repo produse[2];
	char* nume1 = new char[10];
	char* nume2 = new char[10];

	strcpy_s(nume1, sizeof "faina", "faina");
	strcpy_s(nume2, sizeof "ulei", "ulei");
	Produs p1(nume1, 4);
	Produs p2(nume2, 5);
	produse->addProdus(p1);
	produse->addProdus(p2);
	assert(produse->getSize() == 2);


}