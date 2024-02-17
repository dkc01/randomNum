#include "randomNum.h"

int index_of_max(int a[], int lastIndex)
{
	int current_largest_at = lastIndex;
	for (int i = lastIndex - 1; i >= 0; i--)
	{
		if (a[i] > a[current_largest_at])
		{
			current_largest_at = i;
		}
	}
	return current_largest_at;
}

void sort(int a[], int count)
{
	for (int last = count - 1; last > 0; last--)
	{
		int largest = index_of_max(a, last);
		int tmp = a[largest];
		a[largest] = a[last];
		a[last] = tmp;
	}
}




