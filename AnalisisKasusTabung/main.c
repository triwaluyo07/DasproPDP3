#include <stdio.h>
#include <stdlib.h>

// Nama     : Tri Waluyo
// Kelas    : 4103
// NIM      : A11.2017.10097

int main()
{
    printf("======================\n");
    printf("Analisis Kasus Tabung\n");
    printf("======================\n");

    float r=2 ;
    float t=10 ;
    float volume_kelereng;
    float volume_airtabung;
    float pi = 3.14;
    float volume_tabung;
    float volume_bola;
    float volume_airtumpah;
    float volume_sisa;

    printf("r tabung = 2cm\n");
    printf("t tabung = 10cm\n");

    volume_tabung = pi*r*r*t;
    printf("Volume Tabung = %.2f cm^3 \n", volume_tabung);
    printf("-----------------------------\n");

    volume_bola = 0.5*4/3 * pi * r * r * r;
    printf("r setengah bola = 2cm\n");
    printf("volume setengah bola = %.2f cm^3 \n", volume_bola);
    printf("-----------------------------\n");

    volume_airtabung = volume_tabung + volume_bola;
    printf("volume air tabung = %.2f cm^3 \n", volume_airtabung);

    printf("volume kelereng = ");
    scanf("%f", volume_kelereng);

    volume_sisa= volume_airtabung- volume_kelereng;
    printf("volume air sisa = %.2f cm^3", volume_sisa);

    //volume air tumpah = volume kelereng

    return 0;
}
