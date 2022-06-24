#include<stdio.h>

int main()
{
    int len;

    printf("Enter len for array: ");
    scanf("%d", &len);

    int arr[len];
    make_arr(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

void make_arr(int array[], int length)
{
    for (int* p = &array[0]; p <= &array[length]; p++)
    {
        *p = p - &array[0] + 1;
    }
}