#include<stdio.h>

int main(){
    
    int arr[6] = {1, 1, 2, 2, 3, 3};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int p1 = 0; p1 < len; p1++){
        for (int p2 = p1 + 1; p2 < len; p2++){
            if (arr[p1] == arr[p2]){
                arr[p2] = 0;
            }
        }
    }

    for (int p = 0; p < len; p++){
        printf("%d", arr[p]);
    }

    return 0;
}