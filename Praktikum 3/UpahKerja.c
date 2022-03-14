//Nama File : UpahKerja.c
//Deskripsi : Menghitung berapa upah kerja yang didapatkan setelah beberapa klasifikasi.
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int g, k, u;
    //Algoritma
    printf("Masukkan golongan ke berapa :");
    scanf("%i", &g);
    printf("Berapa lama anda berkerja dalam seminggu (per jam) ?");
    scanf("%i", &k);
    if (k <= 40){
        if (g == 1) {
            u = k * 1000;
            printf("Upah kerja anda : %i", u);
        }
        else if (g == 2){
            u = k * 1500;
            printf("Upah kerja anda : %i", u);
        }
        else if (g == 3){
            u = k * 2000;
            printf("Upah kerja anda : %i", u);
        }
        else if (g == 4){
            u = k * 2500;
            printf("Upah kerja anda : %i", u);
        }
    }
    else{
        if (g == 1){
            u = (((k-40)*1500)+(40*1000));
            printf("Upah kerja anda : %i", u);
        }
        else if (g == 2){
            u = (((k-40)*2250)+(40*1500));
            printf("Upah kerja anda : %i", u);
        }
        else if (g == 3){
            u = (((k-40)*3000)+(40*2000));
            printf("Upah kerja anda : %i", u);
        }
        else if (g == 4){
            u = (((k-40)*3750)+(40*2500));
            printf("Upah kerja anda : %i", u);
        }
}
}
