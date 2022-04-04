int main(){
    float area = 0, per = 0;
    int rad = 7;
    float *p_ar = &area, *p_per = &per;
    area_per(p_ar, p_per, rad);
    printf("Area of circle is %f\n", area);
    printf("Perimeter of circle is %f\n", per);
}

void area_per(add_ar, add_per, r)
float *add_ar, *add_per;
int r;
{
    *add_ar = (22*r*r)/7;
    *add_per = (2*22*r)/7;
}