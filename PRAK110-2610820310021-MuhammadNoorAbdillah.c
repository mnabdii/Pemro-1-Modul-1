#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5, tinggi = 12;
    int sisi_miring = (int)(sqrt(alas * alas + tinggi * tinggi) + 0.5);
    int keliling = alas + tinggi + sisi_miring;
    int luas = alas * tinggi / 2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %d cm\n", sisi_miring);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);
    return 0;
}