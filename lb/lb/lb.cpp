#include "head.h"

void main()
{
    char* massiv = 0;
	setlocale(LC_ALL,"rus");
	massiv = new char [1000];
	cout<<"������� ������" << endl;
	cin >> massiv;
	puzir(massiv);
	cout<<massiv<<endl<<"========================="<<endl;
	MSort(massiv,1,strlen(massiv));
	cout <<"���������� ��������"<<endl << massiv;
	system("pause");
}

