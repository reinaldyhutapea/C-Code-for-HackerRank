#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>

int main(){

int array;
float hasil_besar, hasil_kecil, hasil_nol;
scanf("%d", &array);
int angka[array];
float kecil = 0;
float besar = 0;
float nol = 0;



for (int i = 0; i < array  ; i++){
scanf("%d", &angka[i]);

if( angka[i] > 0){
    besar = besar +  1;
}
else if( angka[i] == 0){
    nol = nol + 1;
}
else { kecil = kecil + 1 ;
}

}

hasil_besar = besar / array;
hasil_kecil = kecil / array;
hasil_nol = nol / array;

printf("%.6f\n%.6f\n%.6f", hasil_besar, hasil_kecil, hasil_nol);

return 0;
}
