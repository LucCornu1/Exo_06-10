#include "CPoint.h"
#include <iostream>

using namespace std;


int main()
{
	float flt_X, flt_Y;
	char c_Char;


	CPoint ptA;

	ptA.affiche();


	cout << "Entrez la coordonnee pour X :" << endl;
	cin >> flt_X;

	cout << "Entrez la coordonnee pour Y :" << endl;
	cin >> flt_Y;

	cout << "Entrez le nom du point : " << endl;
	cin >> c_Char;

	ptA.deplace(flt_X, flt_X, c_Char);

	ptA.affiche();

	return 0;
}