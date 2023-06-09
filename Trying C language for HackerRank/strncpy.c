#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argv, char **_argc)
{

char string_sumber[] = "Ini adalah string sumber";
char string_tujuan[50];
int n = 20;
strcpy(string_tujuan, string_sumber);
string_tujuan[n] = '\0'; // menambahkan karakter nul pada akhir array karakter tujuan

printf("%s",string_tujuan);

return 0;
}


