#include "CPoint.h"
#include <iostream>

using namespace std;


int main()
{
	float flt_X, flt_Y, k;
	char c_Char;


	CPoint ptA;

	ptA.abscisse();
	ptA.ordonnee();
	cout << endl;

	cout << "On deplace le point A, et on le renomme eventuellement" << endl;
	cout << "Entrez la coordonnee pour X :" << endl;
	cin >> flt_X;

	cout << "Entrez la coordonnee pour Y :" << endl;
	cin >> flt_Y;

	cout << "Entrez le nom du point : " << endl;
	cin >> c_Char;


	ptA.deplace(flt_X, flt_Y, c_Char);

	ptA.abscisse();
	ptA.ordonnee();
	cout << endl;



	cout << "On fait l'homotetie du point " << ptA.get_cChar() << endl;
	
	cout << "On deplace le point O (origine), et on le renomme eventuellement" << endl;
	cout << "Entrez la coordonnee pour X :" << endl;
	cin >> flt_X;

	cout << "Entrez la coordonnee pour Y :" << endl;
	cin >> flt_Y;

	cout << "Entrez le nom du point : " << endl;
	cin >> c_Char;
	CPoint ptO(flt_X, flt_Y, c_Char);

	cout << "Donnez le rapport k : " << endl;
	cin >> k;

	CPoint ptB = ptA.homotetie(ptO, k);

	ptB.abscisse();
	ptB.ordonnee();
	cout << endl;



	cout << "On fait la rotation du point " << ptA.get_cChar() << endl;

	cout << "On deplace le point O (origine), et on le renomme eventuellement" << endl;
	cout << "Entrez la coordonnee pour X :" << endl;
	cin >> flt_X;

	cout << "Entrez la coordonnee pour Y :" << endl;
	cin >> flt_Y;

	cout << "Entrez le nom du point : " << endl;
	cin >> c_Char;
	CPoint ptOr(flt_X, flt_Y, c_Char);

	cout << "Donnez l'angle k : " << endl;
	cin >> k;

	CPoint ptC = ptA.rotation(ptO, k);

	ptC.abscisse();
	ptC.ordonnee();
	cout << endl;

	
	ptA.polaire();


	return 0;
}