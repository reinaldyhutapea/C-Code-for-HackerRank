#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
char kata[100];
int l;
int n = 0;
int i;

if (argc < 2) {
    printf("Usage: %s <row_length>\n", argv[0]);
    return 1;
}

l = atoi(argv[1]);

printf("Masukkan kata: ");
fgets(kata, 100, stdin);

int panjang_kalimat = strlen(kata);

while(n < panjang_kalimat){

    for(i = n; i < n + l; i++){
    if(i >= panjang_kalimat) break;
    printf("%c", kata[i]);
    }
    n = n + l;
    printf("\n");
}

if(panjang_kalimat % l != 0 ){
    for(i = 0; i < l-(panjang_kalimat % l); i++){
    printf("#");
    }
    printf("\n");
}

return 0;
}
