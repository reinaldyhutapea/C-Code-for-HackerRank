#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int grade[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &grade[i]);

        if (grade[i] < 38) {
            printf("%d\n", grade[i]);
        }
        else if (grade[i] % 5 >= 3) {
            grade[i] += (5 - grade[i] % 5);
            printf("%d\n", grade[i]);
        }
        else {
            printf("%d\n", grade[i]);
        }
    }

    return 0;
}
