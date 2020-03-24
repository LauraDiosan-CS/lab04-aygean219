#include<iostream>
#include "teste.h"
#include "magazin.h"
#include "repo.h"
using namespace std;
void meniu() {
	cout << "MENIU:" << endl;
	cout << "1.Adauga Produs;" << endl;
	cout << "2.Afisare Produse;" << endl;
	cout << "3.Delete Produs;" << endl;
	cout << "4.Upd Produse;" << endl;
	cout << "Dati o comanda: " << endl;

}
void add_ui(Repo& repo) {
	char* nume = new char[10];
	cout << endl;
	cout << "Introduceti numele: ";
	cin >> nume;
	int pret, zi, luna, an;
	cout << "Pret: ";
	cin >> pret;
	cout << "ZI:";
	cin >> zi;
	cout << "Luna: ";
	cin >> luna;
	cout << "An: ";
	cin >> an;
	Produs p(nume, pret, zi, luna, an);
	repo.addProdus(p);
	delete[] nume;
}
void delete_ui(Repo& repo, Produs s)
{


	repo.deleteElem(s);
}
void update_ui(Repo& repo, Produs p, char* numee, int prett, int zii, int lunaa, int ann)
{
	repo.updateElem(p, numee, prett, zii, lunaa, ann);
}
void afisare_ui(Repo& repo)
{
	cout << endl;
	cout << "Elementele listei sunt: ";
	cout << endl;
	for (int i = 0; i < repo.getSize(); i++)
	{
		cout << repo.getAll()[i] << " ";
		cout << endl;
	}

}
int main()
{
	testConstructors();
	teste();
	int ok = 1, op;
	Repo repo;
	char nume[10];
	char numee[10];
	int pret, zi, an, luna;
	int prett, zii, ann, lunaa;
	meniu();
	while (cin>>op) {
	
	
		if(op==1)
		{
			add_ui(repo);
			cout << "Adaugat!" << endl;
			cout << "op= ";
			meniu();
		}
		if(op==2)
		{
			afisare_ui(repo);
			cout << endl;
			meniu();
			cout << "op=";

		}
		if (op == 3)
		{
			cout << "Introduceti numele: ";
			cin >> nume;
			cout << "Pret: ";
			cin >> pret;
			cout << "ZI:";
			cin >> zi;
			cout << "Luna: ";
			cin >> luna;
			cout << "An: ";
			cin >> an;
			Produs p(nume, pret, zi, luna, an);
			delete_ui(repo, p);
			cout << "Sters;";
			meniu();
			cout << "op=";
		}
		if (op == 4)
		{
			cout << "Introduceti numele: ";
			cin >> numee;
			cout << "Pret: ";
			cin >> prett;
			cout << "ZI:";
			cin >> zii;
			cout << "Luna: ";
			cin >> lunaa;
			cout << "An: ";
			cin >> ann;
			Produs p(nume, prett, zii, lunaa, ann);
			update_ui(repo, p, numee, prett, zii, lunaa, ann);
			cout <<"Upd";
			meniu();
			cout << "op=";


		}
		if(op>5)
		{
			cout << "Dati o comanda corecta va rog!!" << endl;
			ok = 0;
			break;
		}
		meniu();
		
	}
	return 0;
}