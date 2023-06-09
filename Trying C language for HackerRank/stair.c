#include <stdio.h>

int main(){
int pagar;
scanf("%d", &pagar);
int a=0 , b=pagar;

for (int i = 0; i < pagar; i++){

    for (int j = a; j < pagar-1; j++){
    printf(" ");
    }
    a=a+1;
    for ( int k = b -1; k < pagar; k++){
    printf("#");
    }
    b=b-1;
    printf("\n");

}
    return 0;
}
