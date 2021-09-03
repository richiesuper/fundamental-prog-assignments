/* Program ini digunakan untuk menghitung akar-akar real dari suatu persamaan kuadrat.*/

#include <stdio.h>
#include <tgmath.h>

double kuadratPlus(double a, double b, double diskriminan);
double kuadratMinus(double a, double b, double diskriminan);

int main(void) {
    printf("Selamat datang di program ini.\nProgram ini akan menghitung dan menampilkan akar-akar dari persamaan kuadrat.\nKali ini, Anda diminta untuk memasukkan koefisien a dan b, serta konstanta c dari persamaan ax^2 + bx + c = 0.\n");
    printf("            _________\n    -b +- \\/b^2 - 4ac\nx = -----------------\n           2a\n");

    double a = 0;
    double b = 0;
    double c = 0;

    printf("Format input: a<Spasi>b<Spasi>c\nMisal: 1 2 1\nMasukkan input: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (!a) {
        printf("Maaf, jika koefisien a == 0, maka persamaannya sudah bukan persamaan kuadrat lagi.\n");
        return 1;
    }

    double diskriminan = b * b - (4 * a * c);

    if (diskriminan < 0) {
        printf("Maaf, hasil perhitungan diskriminan menunjukkan bahwa akar yang dihasilkan berupa bilangan imajiner, sedangkan program yang diminta hanya perlu mengeluarkan output berupa bilangan real.\n");
        return 2;
    }

    double x1 = kuadratPlus(a, b, diskriminan);
    double x2 = kuadratMinus(a, b, diskriminan);

    printf("x1: %lf\nx2: %lf\n", x1, x2);

    return 0;
}

double kuadratPlus(double a, double b, double diskriminan) {
    double hasil = 0;

    hasil = (-b + sqrt(diskriminan)) / (2 * a);

    return hasil;
}

double kuadratMinus(double a, double b, double diskriminan) {
    double hasil = 0;

    hasil = (-b - sqrt(diskriminan)) / (2 * a);

    return hasil;
}

/* Nama    : Richie Seputro
 * Jurusan : Teknik Informatika
 * NRP     : 5025211213
 */
