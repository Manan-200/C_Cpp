#include<stdio.h>

float power(a, b)
float a;
int b;
{
    int i; 
    float var = a;

    for (i = 0; i < b - 1; i++){
        a *= var;
    }

    return(a);
}

int factorial(num)
int num;
{
    int i, ans = 1;

    for (i = num; i >= 1; i--){
        ans *= i;
    }

    return(ans);
}

int recurse(x)
float x;
{
    static int counter = 1, num = 1;

    while (counter <= 10){
        if (counter % 2 != 0){
            x += power(x, num)/factorial(num);
        }
        if (counter % 2 == 0){
            x -= (power(x, num)/factorial(num));
        }
        counter += 1;
        num += 2;

    }
    return(x);
}

int main(){
    float x, ans;

    printf("Enter val of x: ");
    scanf("%f", &x);

    ans = recurse(x);
    printf("%f", ans);

    return 0;
}