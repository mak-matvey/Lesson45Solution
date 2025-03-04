#include "logic.h"

bool is_there_local_min(int* array, int size)
{
	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) < *(array + i - 1)
			&& *(array + i) < *(array + i + 1))
		{
			return true;
		}
	}

	return false;
}

bool is_there_local_max(int* array, int size)
{
	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) > *(array + i - 1)
			&& *(array + i) > *(array + i + 1))
		{
			return true;
		}
	}

	return false;
}