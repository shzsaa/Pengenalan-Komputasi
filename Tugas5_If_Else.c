#include <stdio.h>

int main() {
    int nilai;
    char grade;
    const char* keterangan;

    // Input nilai
    printf("Masukkan nilai [0..100]: ");
    scanf("%d", &nilai);

    // Menentukan GRADE dan KETERANGAN berdasarkan nilai
    if (nilai > 100) {
        grade = 'A';
        keterangan = "SEMPURNA";
    } else if (nilai >= 95 && nilai <= 100) {
        grade = 'A';
        keterangan = "LUAR BIASA";
    } else if (nilai >= 90 && nilai < 95) {
        grade = 'A';
        keterangan = "BAIK SEKALI";
    } else if (nilai >= 85 && nilai < 90) {
        grade = 'B';
        keterangan = "BAIK";
    } else if (nilai >= 80 && nilai < 85) {
        grade = 'B';
        keterangan = "CUKUP";
    } else if (nilai >= 75 && nilai < 80) {
        grade = 'C';
        keterangan = "LUMAYAN";
    } else if (nilai >= 65 && nilai < 75) {
        grade = 'C';
        keterangan = "KURANG";
    } else if (nilai >= 60 && nilai < 65) {
        grade = 'C';
        keterangan = "KURANG SEKALI";
    } else if (nilai >= 55 && nilai < 60) {
        grade = 'D';
        keterangan = "SANGAT KURANG SEKALI";
    } else if (nilai >= 45 && nilai < 55) {
        grade = 'E';
        keterangan = "TIDAK LULUS";
    } else {
        grade = 'E';
        keterangan = "TIDAK LULUS";
    }

    // Output hasil
    printf("GRADE        : %c\n", grade);
    printf("KETERANGAN   : %s\n", keterangan);

    return 0;
}
