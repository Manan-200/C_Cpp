#include<stdio.h>

int main(){
    
    int arr[10] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int high = 1;

    int ms = 0;

    for (int p1 = 0; p1 < len && high != arr[-1]; p1++){
        for (int p2 = p1 + 1; p2 < len && high != arr[-1]; p2++){
            ms++;
            if (arr[p2] != arr[p1] && arr[p2] == high){
                int var = arr[p1];
                arr[p1] = arr[p2];
                arr[p2] = var;
                break;
            }
        }
        high++;
    }

    for (int p1 = 0; p1 < len; p1++){
        printf("%d ", arr[p1]);
    }

    printf("\nms : %d", ms);
    
    return 0;
}