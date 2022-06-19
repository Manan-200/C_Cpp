#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    char str[a];
    for (int i = 0; i <= a; i++){
        str[i] = i;
        printf("%d", str[i]);
    }
}