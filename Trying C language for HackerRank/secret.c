#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argv, char **_argc)
{

int shift;
int i = 255;
char word[i];
//code memasukkan inputan
scanf("%[^\n]", &word);
scanf("%d", &shift);

//menghasilkan output setiap angka ASCII yang ditambah dengan shift pergeserannya
if(255<shift){
shift = shift - 255;
}

for ( i = 0; i < strlen(word); i++) {
word[i] = (int) word[i] + shift;
    if(word[i]<100){
    printf("0%d", word[i]);
} else if(word[i]>99){
printf("%d", word[i]);
}
    
}

return 0;
}