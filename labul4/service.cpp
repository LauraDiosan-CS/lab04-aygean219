#include "service.h"
void Service::addProd(char* nume, int pret, int zi, int luna, int an)
{
	Produs p(nume, pret, zi, luna, an);
	repo.addProdus(p);
}
void Service::deleteProd(Produs p)
{
	repo.deleteElem(p);
}
void Service::updateProd(Produs p, char* nume, int pret, int zi, int luna, int an)
{
	repo.updateElem(p, nume, pret, zi, luna, an);


}
Produs* Service::get_all()
{
	return this->repo.getAll();

}
int Service::get_size() {
	return this->repo.getSize();
}