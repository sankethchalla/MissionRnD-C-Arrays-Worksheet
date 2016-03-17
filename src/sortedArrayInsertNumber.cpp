/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (len < 0 || Arr == NULL)
		return NULL;
	int i, temp = 0, temp2 = 0;
	Arr = (int*)realloc(Arr, (len + 1)*sizeof(int));
	for (i = 0; i < len; i++)
	{
		if (num < Arr[i])
		{
			temp = Arr[i];
			Arr[i] = num;
			while (i <len)
			{
				temp2 = Arr[i + 1];
				Arr[i + 1] = temp;
				temp = temp2;
				i++;
			}
		}


	}
	if (num>Arr[len - 1])
	{
		Arr[i] = num;
	}

	return Arr;
	
}