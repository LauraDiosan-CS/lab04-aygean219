#pragma once
#include "repo.h"
#include "magazin.h"
using namespace std;
class Service {
private:
	Repo repo;
public:
	void addProd(char*, int, int, int, int);
	void deleteProd(Produs p);
	void updateProd(Produs p, char*, int, int, int, int);
	int get_size();
	Produs* get_all();
	
};
