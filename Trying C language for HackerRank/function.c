#include <stdio.h>

void fungsi( int angka[], int terbesar){
    

terbesar = angka[0];
for( int i=1; i < 4; i++){
    scanf("%d", &angka[i]);

if(terbesar < angka[i]){
    terbesar = angka[i] ;
}else{
}
}
    printf("%d", terbesar);
}

int main(){

int angka[4];
int terbesar;

    scanf("%d", &angka[0]);
    

fungsi(angka,terbesar);

return 0;
}



