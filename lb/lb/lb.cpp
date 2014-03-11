#include "head.h"

void main()
{
    char* massiv = 0;
	setlocale(LC_ALL,"rus");
	massiv = new char [1000];
	cout<<"Введите строку" << endl;
	cin >> massiv;
	puzir(massiv);
	cout<<massiv<<endl<<"========================="<<endl;
	MSort(massiv,1,strlen(massiv));
	cout <<"Сортировка ставками"<<endl << massiv;
	system("pause");
}

