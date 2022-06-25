#include<stdio.h>

int main(){
    
    int arr[10] = {1, 1, 2, 2, 3, 3, 5, 5, 7, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *p2 = &arr[2];
    int counter = 0;

    //Ascending order
    for (int *p1 = &arr[1]; p1 < &arr[len/2]; p1++)
    {
        *p1 = *p2;
        p2 += 2;
        counter++;
    }
    
    p2 = &arr[len/2 - 1];

    //Descending order
    for (int *p1 = &arr[len/2]; p1 < &arr[len]; p1++)
    {
        *p1 = *p2;
        p2--;
        
        counter++;
    }

    //Printing arr
    for (int *p = &arr[0]; p < &arr[len]; p++)
    {
        printf("%d ", *p);
    }
    printf("\ncounter : %d", counter);
    
    return 0;
}