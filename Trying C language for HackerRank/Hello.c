// Praktikum Arsitektur dan Organisasi Komputer
// Modul : NA
// Percobaan : NA
// Tanggal : 10 Oktober 2016
// Kelompok : NA
// Rombongan : NA
// Nama (NIM) 1 : Praktikan 1
// Nama (NIM) 2 : Praktikan 2
// Nama File : sizeof.c
// Deskripsi : Mencari ukuran tipe data dan rentang nilai
#include <stdio.h>
#include <limits.h>
int main()
{ 

typedef struct
{ char
kelas;
short
kode_matakuliah; int
nim; char
nilai_abjad; int
nilai_angka;
} daftar_NA_1;

typedef struct
{ char
kelas;
char nilai_abjad; short kode_matakuliah; int nim;
int nilai_angka; } daftar_NA_2;

int hasil_daftar_NA_1 = sizeof(daftar_NA_1);
int hasil_daftar_NA_2 = sizeof(daftar_NA_2);

printf("%d\n%d", hasil_daftar_NA_1, hasil_daftar_NA_2);

return 0;
}
