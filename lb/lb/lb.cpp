#include "head.h"

void main()
{
    char* massiv = 0;
	setlocale(LC_ALL,"rus");
	massiv = new char [1000];
	cout<<"¬ведите строку" << endl;
	cin >> massiv;
	puzir(massiv);
	system("pause");
}

