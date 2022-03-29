#include <stdio.h>

//Nama File : SelisihKetinggianJalur.c
//Deskripsi : Menghitung dan menampilkan besarnya
// selisih ketinggian terbesar puncak bukut dengan lembah bukit atau sebaliknya
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1


int main(){

    //Kamus
    int i,max,min,size;

    //Algoritma
    printf("Maukkan Jumlah jalur lintasan : \n");
    scanf("%d",&size);

    int ara[size];

     printf("Masukkan panjang setiap lintasannya:\n");
     for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
     }

    max=ara[0];
    min=ara[0];
    for(i = 0; i < size; i++){
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }

    printf("Selisih Jarak terpanjang dan terpendek adalah %d\n",max-min);


    return 0;
}
