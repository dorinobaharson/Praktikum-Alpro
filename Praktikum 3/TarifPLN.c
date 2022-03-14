//Nama File : TarifPLN.c
//Deskripsi : menghitung berapa tarif pln dan menampilkannya dilayar berdasarkan beberapa klasifikasi
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1

#include <stdio.h>

int main()
{
    //Kamus
    int g, d, t;
    //Algoritma
    printf("Masukkan golongan tarif anda : ");
    scanf("%i", &g);
    printf("Masukkan pemakaian daya listrik anda :");
    scanf("%i", &d);
    if (g == 1){
        t = d*1000;
        printf("Jumlah yang harus dibayarkan : %i", t);
    }
    else if (g==2){
        t=d*2000;
        printf("Jumlah yang harus dibayarkan : %i", t);
    }
    else{
        printf("Golongan anda tidak tepat !");
    }
  return 0;
}

