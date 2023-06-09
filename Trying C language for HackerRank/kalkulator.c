#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    MODULUS,
    SIN,
    COS,
    TAN,
} Operation;

typedef struct {
    double total;
    Operation lastOperation;
} Calculator;

double performOperation(double num1, double num2, Operation operation) {
    switch (operation) {
        case ADDITION:
            return num1 + num2;
        case SUBTRACTION:
            return num1 - num2;
        case MULTIPLICATION:
            return num1 * num2;
        case DIVISION:
            return num1 / num2;
        case MODULUS:
            return fmod(num1, num2);
        case SIN:
            return sin(num1);
        case COS:
            return cos(num1);
        case TAN:
            return tan(num1);
        default:
            printf("Operasi tidak valid.\n");
            return 0.0;
    }
}

double convertTemperature(double temperature, int fromUnit, int toUnit) {
    // ... kode konversi suhu seperti sebelumnya ...
}

int main() {
    Calculator *calculator = (Calculator *) malloc(sizeof(Calculator));
    calculator->total = 0.0;
    calculator->lastOperation = ADDITION;

    while (1) {
        int choice;
        printf("Kalkulator\n");
        printf("1. Operasi Aritmatika\n");
        printf("2. Konversi Suhu\n");
        printf("3. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &choice);

        if (choice == 1) {
            double number;
            printf("Masukkan angka: ");
            scanf("%lf", &number);

            double result = performOperation(calculator->total, number, calculator->lastOperation);

            printf("Total: %.2lf\n", result);
            calculator->total = result;

            int operation;
            printf("Pilih operasi aritmatika: \n");
            printf("1. Penjumlahan\n");
            printf("2. Pengurangan\n");
            printf("3. Perkalian\n");
            printf("4. Pembagian\n");
            printf("5. Modulus\n");
            printf("6. Sinus\n");
            printf("7. Cosinus\n");
            printf("8. Tangen\n");
            printf("Pilih operasi: ");
            scanf("%d", &operation);

            if (operation >= 1 && operation <= 8) {
                calculator->lastOperation = operation;
            } else {
                printf("Operasi tidak valid.\n");
            }
        } else if (choice == 2) {
            double temperature;
            int fromUnit, toUnit;

            printf("Masukkan suhu: ");
            scanf("%lf", &temperature);

            printf("Pilih satuan suhu: \n");
            printf("1. Celsius\n");
            printf("2. Kelvin\n");
            printf("3. Fahrenheit\n");
            printf("4. Reamur\n");
            printf("Pilih satuan awal: ");
            scanf("%d", &fromUnit);

            printf("Pilih satuan tujuan: ");
            scanf("%d", &toUnit);

            double convertedTemperature = convertTemperature(temperature, fromUnit, toUnit);

            printf("Hasil konversi: %.2lf\n", convertedTemperature);
        } else if (choice == 3) {
            break;
        } else {
            printf("Opsi tidak valid.\n");
        }

        printf("\n");
    }

    free(calculator);
    return 0;
}
