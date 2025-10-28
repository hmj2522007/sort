#include "BubbleSort.h"

void BubbleSort::Exec(int* arry, int size)
{
	for (int i = 0; i < size -1; i++)
	{
		for (int j = 0; j < size -1; j++)
		{
			if (arry[j] >= arry[j + 1])
			{
				Sort::Swap(arry[j], arry[j + 1]);
			}
		}
	}
}