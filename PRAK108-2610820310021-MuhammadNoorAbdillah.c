#include <stdio.h>

int main() {
    const float PI = 3.14159265f;
    int putaran = 5, jarak = 14;
    float r = jarak / (putaran * 2 * PI);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    return 0;
}