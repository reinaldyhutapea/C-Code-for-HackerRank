// Praktikum Arsitektur dan Organisasi Komputer
// Modul : 5
// Percobaan : 1
// Tanggal : 03 April 2023
// Nama (NIM) 1 : Reinaldy Hutapea (12S22010)
// Nama File : AOK.c
// Deskripsi : Reverse Byte x
#include <stdio.h>

int reverseBytes(int x) {
    // menggeser byte ke-0 ke posisi byte ke-3 dan sebaliknya
    int byte0 = (x & 0xFF) << 24;
    int byte3 = (x >> 24) & 0xFF;
    
    // menggeser byte ke-1 ke posisi byte ke-2 dan sebaliknya
    int byte1 = (x & 0xFF00) << 8;
    int byte2 = (x & 0xFF0000) >> 8;
    
    // menggabungkan hasil penggeseran byte
    return byte0 | byte1 | byte2 | byte3;
}

int main() {
    int x = 0x01020304;
    int result = reverseBytes(x);

    printf("x = 0x%08X\n", x);
    printf("Hasil reverse byte dari x adalah: 0x%08X\n", result);

    return 0;
}

