/// ���������� ���������
#include "head.h"

void puzir(char* massiv)
{
	char n = 0;
	//� ������� ����� ���������� �� �������
	for(int i = 0; i < strlen(massiv);i++)
	{
		for(int j = 0; j < (strlen(massiv)-1) ;j++)
		{
			if(massiv[j] > massiv[j+1])
			{
				// ������ ������� ��������
				n = massiv[j];
				massiv[j] = massiv[j+1];
				massiv[j+1] = n;
			}
		}
	}
	cout << "���������� ���������"<<endl;
	cout << massiv<<endl;
}
