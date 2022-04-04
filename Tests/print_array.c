main(){
    int arr[] = {2781, 10, 9, 10};
    int len = sizeof arr/sizeof arr[0];
    int i, *p;
    for (i = 0; i < len; i++){
        printf("Element: %d, Address: %d\n", arr[i], &arr[i]);
    }
    printf("\n");
    for (p = &arr[0]; p < &arr[len]; p += 1){
        printf("Element: %d, Address: %d\n", *p, p);
    }
}