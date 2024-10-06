#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hola[] = "HOLA";
    int a = 1;
    int b = 2;
    FILE *h;// = fopen("test.txt","w");
    /*fprintf(h,"%s %d %d\n",hola,a,b);
    fclose(h);

    if((h = fopen("test.txt","w"))!=NULL){
        for(int i=0;i<10;i++){
            fprintf(h,"%s %d %d\n",hola,a,b);
        }
        fclose(h);
    }else{
        printf("No se pudo abrir");
    }*/


    if((h = fopen("test.txt","r"))!=NULL){
        while(!feof(h)){
            fscanf(h,"%s %d %d\n",hola,&a,&b);
            printf("%s %d %d\n",hola,a,b);
        }
        fclose(h);
    }else{
        printf("No se pudo abrir");
    }

    return 0;
}
