#include <stdio.h>
#include <stdlib.h>


ssize_t getMiddle(int newSize)
{
	if (newSize & 1)
		return (newSize / 2);
	return (--newSize / 2);
}

ssize_t getSize(int *ptr1, int *ptr2)
{
	ssize_t i;

	if (ptr1 == NULL || ptr2 == NULL)
		return (-1);
	for (i = 0; (ptr1 + i) != ptr2; i++)
		;
	return (++i);
}

ssize_t binSearch(int *arr, ssize_t size, int target)
{
	ssize_t mid = size / 2, newSize;
	/*Assign ptr 1 and 2 to start and end of arr*/
	int *ptr1 = arr, *ptr2 = arr + (size - 1);

	/* {1, 2, 3, 4, 5, 6, 7} target 1*/
	while (mid != 0)
	{
		newSize = getSize(ptr1, ptr2);
		mid = getMiddle(newSize);

		/*Check for middle element*/
		if (ptr1[mid] == target)
			return ((ptr1 + mid) - arr);

		/*Check for target is lesser*/
		else if (target < ptr1[mid])
			ptr2 = (ptr1 + mid);

		/*Check for target is greater*/
		else if (target > ptr1[mid])
			ptr1 = (ptr1 + mid);

		if (ptr1[mid] == target)
                        return ((ptr1 + mid) - arr);
	}
	return (-1);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1024}, i;

	putchar('{');
	for (i = 0; arr[i] != -1024; i++)
		printf("%d, ", arr[i]);
	printf("}\n");
	i = binSearch(arr, 7, 1);
	printf ("1 is at %d\n", i);

	i = binSearch(arr, 8, 2);
	printf ("2 is at %d\n", i);

	i = binSearch(arr, 8, 3);
	printf ("3 is at %d\n", i);

	i = binSearch(arr, 8, 4);
	printf ("4 is at %d\n", i);

	i = binSearch(arr, 8, 5);
	printf ("5 is at %d\n", i);

	i = binSearch(arr, 8, 6);
	printf ("6 is at %d\n", i);

	i = binSearch(arr, 8, 7);
	printf ("7 is at %d\n", i);

	i = binSearch(arr, 9, 8);
        printf ("8 is at %d\n", i);

	i = binSearch(arr, 9, 9);
        printf ("9 is at %d\n", i);

	i = binSearch(arr, 9, 15);
        printf ("15 is at %d\n", i);

	return (0);
}
