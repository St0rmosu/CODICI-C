#include <stdio.h>

//Acquisire 2 numeri a e bse sono pari devono essere sommati ses sono dispari bisgno sottrarli se sono 1 pari e 1 dispari restituire 0

int main(){
    int n1, n2, somma, differenza;

    printf("%s","Insersci 2 numeri a tuo piacimento");
    scanf("%d","&n1");
    scanf("%d","&n2");

    if(n1%2==0 && n2%2==0 ) {
        somma= n1+n2;
     printf("%d","Questi 2 numeri sono pari" &somma);
    }if else (n1%2 !=0 && n2%2 !=0){
        differenza=n1-n2;
        printf("%d","Questi due numeri sono dispari" &differenza);
    
    }else (n1%2==0 && n2%2 !=0){
        printf("0");
        printf("Quessti due numeri sono uno pari e uno dispari");
    }

}