#include <stdio.h>
#include <stdlib.h>

// Nama     : Tri Waluyo
// Nim      : A11.2017.10097
// Kelas    : 4103
int main()
{
    printf("=====================\n");
    printf("Analisis Kasus\n");
    printf("Jumlah kaleng yang dibutuhkan\n");
    printf("untuk mengecat dinding rumah mereka\n");
    printf("=====================\n");

    int isi_cat=10;
    int kaleng;
    int Luas;
    int Harga = 25000;
    int Harga_total;
    char Nama [25];
    char Tanggal [20];

    printf("Luas dinding\t: ");
    scanf("%d", &Luas);

    fflush(stdin);
    printf("Nama \t\t: ");
    gets(Nama);
    printf("Tanggal \t: ");
    gets(Tanggal);

    if (Luas%isi_cat ==0)
        {
         kaleng = (Luas/isi_cat);
        }
    else
        {
         kaleng = (Luas/isi_cat)+1;
        }

    Harga_total = ( Harga*kaleng );
    printf("=====================\n");
    printf("Nota\n");
    printf("=====================\n");
    printf("Nama Pelanggan\t\t\t: %s\n", Nama);
    printf("Tanggal Pembelian \t\t: %s\n", Tanggal);
    printf("Total jumlah kaleng cat \t: %d\n", kaleng);
    printf("Harga Total \t\t\t: %d\n", Harga_total);
    return 0;
}
