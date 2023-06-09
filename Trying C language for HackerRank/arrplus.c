#include <stdio.h>
#include <limits.h>

int main() {
    unsigned long long angka[5];
    unsigned long long terbesar = 0;
    unsigned long long terkecil = ULLONG_MAX;
    unsigned long long total = 0;
    
    for(int i = 0; i < 5; i++){
        scanf("%llu", &angka[i]);
        total += angka[i];
    }
    
    for(int i = 0; i < 5; i++){
        unsigned long long sum = total - angka[i];
        if(sum > terbesar){
            terbesar = sum;
        }
        if(sum < terkecil){
            terkecil = sum;
        }
    }
    
    printf("%llu %llu", terkecil, terbesar);
    return 0;
}
