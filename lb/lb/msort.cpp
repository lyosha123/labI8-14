#include "head.h"
//���������� ��������
void Merger(char *massiv, int first, int last)
{
	int mid, start, final, j;
	char *temp = new char[100];
	mid = (first + last) / 2; 
	start = first; 
	final = mid + 1; 
	//   � ����� ��������� � ����� ������� ��������� �������� � ������������� ������
	for (j = first; j <= last; j++) 
	if ((start <= mid) && ((final > last) || (massiv[start] < massiv[final])))
	{
		temp[j] = massiv[start];
		start++;
	}
	else
	{
		temp[j] = massiv[final];
		final++;
	}
	//����������� ���������� � ������
	for (j = first; j <= last; j++)
	{
		massiv[j] = temp[j];
	}

}
//����������� ��������� ����������
void MSort(char *temp, int first, int last)
{
	if (first<last)
	{
		MSort(temp, first, (first + last) / 2); //��������� ����� �����
		MSort(temp, (first + last) / 2 + 1, last); //��������� ������ �����
		Merger(temp, first, last); //������� ��� �����		}
	}
}