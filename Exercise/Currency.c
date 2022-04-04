#include<stdio.h>

int main(){
    int cur_type[] = {1, 2, 5, 10, 20, 50, 100}, val;

    printf("Enter val: ");
    scanf("%d", &val);

    int notes[val], i, j, sum;
    //Initializing all values of notes as 1
    for (i = 0; i < val; i++){
        notes[i] = 1;
    }
    
    for(i = 0; i < val; i++){
        for(j = 0; j < val; j++){
            if (i != j){
                sum = notes[i] + notes[j];
                if (in_list(sum, cur_type) == 1){
                    notes[i] = sum;
                    notes[j] = 0;
                }
            }
        }
    }

    for(i = 0; i < val; i++){
        if (notes[i] != 0){
            printf("%d\n", notes[i]);
        }
    }

    return 0;
}



int in_list(num, arr)
int arr[], num;
{
    int len = sizeof arr/sizeof arr[0], i;

    for (i = 0; i < len; i++){
        if (num == arr[i]){
            return(1); //returning True if element is in array
        }
    }

    return(0); //returning False if True isn't returned
}