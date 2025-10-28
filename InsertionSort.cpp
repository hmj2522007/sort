#include "InsertionSort.h"

void InsertionSort::Exec(int* arry, int size)
{
	for (int i = 1; i < size; i++)
	{
		if (arry[i] < arry[i - 1])
		{
			for (int m = i; m >= 1; m--)
			{
				if (arry[m] < arry[m - 1])
				{
					Sort::Swap(arry[m], arry[m - 1]);

				}
			}
		}
	}
}