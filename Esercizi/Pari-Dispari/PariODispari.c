#include <stdio.h>

int main () {

     printf("%s","Insersci 2 numeri a tuo piacimento");
    scanf("%d","&n1");
    scanf("%d","&n2");

    if(n1%2 !=0 && n2%2 !=0) {
        somma= n1+n2;
     printf("%d","Questi 2 numeri sono pari" &somma);
    }if else (n1%2==0 && n2%2==0 ){
        differenza=n1-n2;
        printf("%d","Questi due numeri sono dispari" &differenza);
    
    }else (n1%2==0 && n2%2 !=0){
        printf("0");
        printf("Quessti due numeri sono uno pari e uno dispari");
    }
}
