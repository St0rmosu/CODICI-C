#include <stdio.h>
 
int sommavettore(int *array){
    int *punt=NULL;
    int somma=0;
    punt=array;
 
    for (int i=0;i<10;i++){
        somma+=*punt;
        punt++;
    }
    return somma;
}
 
int main()
{
    /* malloc, realloc, free */
 
    int vettore[10]={1,2,3,4,5,6,7,8,9,10};
 
    int * puntatore=NULL;
 
    puntatore=vettore;
 
    *(puntatore+2)=30;
 
    for(int i=0;i<10;i++){
        printf("%d\n", *puntatore);
        puntatore++;
    }
 
    printf("La somma è %d", sommavettore(vettore));
    return 0;
}