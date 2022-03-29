#include <stdio.h>

//Nama File : UpdateArray.c
//Deskripsi : Menghitung dan menampilkan besarnya
// penjumlahan sub array/tabel T dengan beberapa aturan.
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1

int main (){
	//Kamus
	int i,j,N,UpdateArray;

    //Algoritma

    printf("Masukan nilai N : ");
    scanf("%d", &N);
    int T[N];
    UpdateArray = 0;

    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            UpdateArray += T[j];
        }
    }
    printf("%d", UpdateArray);

    return 0;
}
