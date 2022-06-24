#include<stdio.h>

int main(){
    
    int arr[10] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int high = 1;

    int counter = 0;

    //Ascending
    for (int p1 = 0; p1 < len/2; p1++){
        for (int p2 = p1 + 1; p2 < len; p2 += 2){
            counter++;
            if (arr[p2] != arr[p1] && arr[p2] == high){
                int var = arr[p1];
                arr[p1] = arr[p2];
                arr[p2] = var;
                break;
            }
        }
        high++;
    }

    //Descending
    for (int p1 = len/2 - 1; p1 < len; p1++){
        for (int p2 = p1 + 1; p2 < len; p2++){
            counter++;
            if (arr[p1] != arr[p2] && arr[p2] == high){
                int var = arr[p1];
                arr[p1] = arr[p2];
                arr[p2] = var;
                break;
            }
        }
        high--;
    }

    for (int p1 = 0; p1 < len; p1++){printf("%d ", arr[p1]);}

    printf("\ncounter : %d", counter);
    
    return 0;
}