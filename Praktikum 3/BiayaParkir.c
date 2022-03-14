//Nama File : BiayaParkir.c
//Deskripsi : Menghitung dan besarnya harga parkir berdasarkan jumlah jam pada layar.
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int w, j;

    //Algoritma
    printf("Berapa lama anda parkir ? (dalam jam) ");
    scanf("%i", &w);
    j = (w-2)*500+2000;
    if (w <= 2){
        printf("Rp 2000");
    }
    else{
        printf("Rp %i",j) ;
    }
    return 0;
}
