#include "head.h"
//—ортировка —ли€нием
void Merger(char *massiv, int first, int last)
{
	int mid, start, final, j;
	char *temp = new char[100];
	mid = (first + last) / 2; 
	start = first; 
	final = mid + 1; 
	//   ¬ цикле провер€ем в каком пор€дке добавл€ть элементы в промежуточный массив
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
	//возвращение результата в список
	for (j = first; j <= last; j++)
	{
		massiv[j] = temp[j];
	}

}
//рекурсивна€ процедура сортировки
void MSort(char *temp, int first, int last)
{
	if (first<last)
	{
		MSort(temp, first, (first + last) / 2); //сортируем левую часть
		MSort(temp, (first + last) / 2 + 1, last); //сортируем правую часть
		Merger(temp, first, last); //сливаем две части		}
	}
}