#include "SelectionSort.h"

void SelectionSort::Exec(int* arry, int size)
{
	for (int i = 0; i < size; i++)
	{
		int low = i;
		for (int j = i; j < size; j++)
		{
			if (arry[low] > arry[j])
			{
				low = j;
			}
		}
		Sort::Swap(arry[i], arry[low]);
	}
}