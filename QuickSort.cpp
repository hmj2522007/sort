#include "QuickSort.h"

void QuickSort::Exec(int* arry, int size)
{
	int pov = 1;
	int w = 1;
	while (w)
	{
		int i = 0;
		if (arry[i] > arry[pov])
		{
			Sort::Swap(arry[i], arry[pov]);
			pov = i;
			w = 0;
		}
		i++;
	}
	w = 1;
	while (w)
	{
		int i = 0;
		if (arry[size - i] < arry[pov])
		{
			Sort::Swap(arry[size - i], arry[pov]);
			pov = size - i;
			w = 0;
		}
		i--;
	}
}