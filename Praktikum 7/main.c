//Nama File     : main.c
//Nama Pembuat  : Doriino Baharson
//NIM           : 24060121130090
//Kelas         : B

//Dekripsi      : Mencari harga X dalam Tabel T [ 1...N ] melalui metode/algoritma binary search tree mulai dari T[1]


#include "BinSearch.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Kamus
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int X=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ix;

    //Algoritma
    BinSearch(arr,n,X,&ix);
    (ix==-1)
        ? printf("Elemen tidak berada di array")
        : printf("Elemen berada di index ke-%i", ix);
    return 0;
}
