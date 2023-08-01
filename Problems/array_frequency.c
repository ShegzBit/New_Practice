#include <stdio.h>
#include <stdlib.h>

int in(int obj, int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (obj == arr[i])
        {
            return (i);
        }
    }
    return (-1);
}

void init_arr(int *arr, int size, int value)
{
    int i;

    for (i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}

int **arr_frequency(int *arr, int size, int value)
{
    int rep_track = 0, i, obj, check_in;
    int *rep = malloc(sizeof(int) * size), *freq = malloc(sizeof(int) * size);
    int **ret_arr;

    init_arr(rep, size, value);
    init_arr(freq, size, value);

    for (i = 0; i < size; i++)
    {
        obj = arr[i];
        check_in = in(obj, rep, size);
        if (check_in == -1)
        {
            rep[rep_track] = obj;
            freq[rep_track] = 1;
            rep_track++;
        }
        else
        {
            freq[check_in]++;
        }
    }
    ret_arr = malloc(sizeof(int *) * 2);
    ret_arr[0] = rep;
    ret_arr[1] = freq;
    return (ret_arr);
}

void arr_info(int **arr, int size, int value)
{
    int i;

    for (i = 0; arr[0][i] != value; i++)
    {
        printf("%d appeared %d times in arr\n", arr[0][i], arr[1][i]);
    }
}

int main()
{
    int arr[] = {2, 2, 4, 5, 4}, val = -12384937, i;
    int **arr_freq = arr_frequency(arr, 5, val);
    arr_info(arr_freq, 5, val);
}