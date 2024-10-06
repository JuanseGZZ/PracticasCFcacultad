#include <stdlib.h>

int main(){
    int arr[10];
    int *p = NULL;
    p = &arr[0];
    *(p+0) = 10; // aumenta sin modificar
    p++; // aumenta modificando
    *p = 5;
    printf("%d",*p);
    printf(" %d",arr[0]);
}
