#include <stdio.h>
#include <string.h>

#define MAX_KATA 5
#define MAX_PANJANG_KATA 20
#define MAX_PANJANG_ARTI_KATA 80

typedef struct {
    char kata[MAX_PANJANG_KATA + 1];
    char arti_kata[MAX_PANJANG_ARTI_KATA + 1];
} Kata;

int main() {
    Kata kamus[MAX_KATA];
    int jumlah_kata = 0;
    char perintah[MAX_PANJANG_KATA + 1];
    int selesai = 0;

    while (!selesai) {
        scanf("%s", perintah);

        if (strcmp(perintah, "register") == 0) {
            if (jumlah_kata < MAX_KATA) {
                Kata kata_baru;
                scanf("%s %[^\n]", kata_baru.kata, kata_baru.arti_kata);
                kamus[jumlah_kata++] = kata_baru;
            }
        }
        else if (strcmp(perintah, "find") == 0) {
            char cari_kata[MAX_PANJANG_KATA + 1];
            scanf("%s", cari_kata);

            for (int i = 0; i < jumlah_kata; i++) {
                if (strcmp(cari_kata, kamus[i].kata) == 0) {
                    printf("%s#%s\n", kamus[i].kata, kamus[i].arti_kata);
                }
            }
        }
        else if (strcmp(perintah, "---") == 0) {
            selesai = 1;
        }
    }

    return 0;
}
