#include<stdio.h>
#include<math.h>
//a = bq + r

int note_type[] = {1, 2, 5, 10, 20, 50, 100};
int len = sizeof note_type/sizeof note_type[0];

int divide(a)
int a;
{
    if (a > 0){
        int b = note_type[-1];
        for (int i = 0; i < len; i++){
            if (i < len - 1 && note_type[i] < a && note_type[i + 1] > a){
                b = note_type[i];
            }
            if (a == note_type[i]){
                b = note_type[i];
            }
        }
        int r = a % b;
        printf("r = %d\n", r);
        printf("%d\n", divide(r));
        int q = floor(a/b);
        printf("(%d * %d) + %d", b, q, divide(r));
    }
    if (a == 0){
        printf("(0 * 0) +");
    }
}

int main(){
    int val;

    printf("Enter any val: ");
    scanf("%d", &val);

    divide(val);
    printf(" = %d", val);

    return 0;
}