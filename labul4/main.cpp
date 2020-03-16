#include<iostream>
#include "teste.h"
#include "magazin.h"
#include "repo.h"
using namespace std;
void meniu() {
	cout << "MENIU:" << endl;
	cout << "1.Adauga Produs;" << endl;
	cout << "2.Afisare Produse;" << endl;
	cout << "Dati o comanda: " << endl;

}
int main()
{
	testConstructors();
	teste();
	int ok = 1, op;
	Repo l[50];
	meniu();
	while (ok) {
	
		cin >> op;
		if(op==1)
		{
			char nume[10];
			int pret;
			cout << "Dati nume:" << endl;
			cin >> nume;
			cout << "Dati pret: " << endl;
			cin >> pret;
			Produs p(nume, pret);
			l->addProdus(p);

		}
		if(op==2)
		{
			int lungimea = l->getSize();
			for(int i=0; i<lungimea;i++)
			{
				Produs p1 = l->getElem(i);
				cout << p1;
			}
		}
		if(op>2)
		{
			cout << "Dati o comanda corecta va rog!!" << endl;
			ok = 0;
			break;
		}
		meniu();
		
	}
	return 0;
}