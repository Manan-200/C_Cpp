#include<stdio.h>

//a = bq + r
int note_type[] = {1, 2, 5, 10, 20, 50, 100};

int divide(rem)
int rem;
{
    int num = note_type[-1];
    for (int i = 0; i < 7; i++){
        if (i != 6 && note_type[i] < rem && note_type[i + 1] > rem ){
            num = note_type[i];
        }
        if (rem == note_type[i]){
            num = note_type[i];
        }
    }
}

int main(){
    int val;

    printf("Enter any val: ");
    scanf("%d", &val);



    return 0;
}