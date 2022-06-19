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

float recurse(x)
float x;
{
    static int counter = 1, num = 1;
    float ans = 0;

    if (counter > 10){
        return 1;
    }

    if (counter <= 10){
        if (counter % 2 != 0){
            ans = (power(x, num))/(factorial(num));
        }
        if (counter % 2 == 0){
            ans = -(power(x, num)/factorial(num));
        }
    }
    
    printf("ans = %f; num = %d ; counter = %d\n", ans, num, counter);
    counter += 1;
    num += 2;
    return(ans + (recurse(x)));
}

int main(){
    float x, f_ans;

    printf("Enter val of x: ");
    scanf("%f", &x);

    f_ans = recurse(x);
    printf("\n\nANS = %f", f_ans);

    return 0;
}