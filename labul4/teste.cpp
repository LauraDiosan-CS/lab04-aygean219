#include "teste.h"
#include "magazin.h"
#include "Repo.h"
#include <assert.h>
#include <string.h>
#include <iostream>

void testConstructors() {
	//static
	Produs p;//implicit const
	assert((p.getPret() == 0) && (p.getNume() == NULL) && (p.getAn() == 0) && (p.getLuna() == 0) && (p.getZi() == 0));
	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "faina", "faina");
	Produs p1(nume1, 4, 10, 2, 2020);//const with param
	assert((p1.getPret() == 4) && (strcmp(p1.getNume(), "faina") == 0) && (p1.getAn() == 2020) && (p1.getLuna() == 2) && (p1.getZi() == 10));
	//dynamic
	Produs* p2;
	p2 = new Produs();//implicit constr
	assert((p2->getPret() == 0) && (p2->getNume() == NULL) && (p2->getAn() == 0) && (p2->getLuna() == 0) && (p2->getZi() == 0));
	char* tip2 = new char[10];
	strcpy_s(tip2, sizeof "ulei", "ulei");
	Produs* p3 = new Produs(tip2, 5, 12, 1, 2020);//const by param
	assert((p3->getPret() == 5) && (strcmp(p3->getNume(), "ulei") == 0) && (p3->getAn() == 2020) && (p3->getLuna() == 1) && (p3->getZi() == 12));
	p3->setAn(2021);
	assert((p3->getPret() == 5) && (strcmp(p3->getNume(), "ulei") == 0) && (p3->getAn() == 2021) && (p3->getLuna() == 1) && (p3->getZi() == 12));
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
	Produs p1(nume1, 4,2,3,2020);
	Produs p2(nume2, 5,3,4,2019);
	produse->addProdus(p1);
	produse->addProdus(p2);
	assert(produse->getSize() == 2);


}