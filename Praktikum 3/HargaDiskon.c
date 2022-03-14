//Nama File : HargaDiskon.c
//Deskripsi : Menghitung dan besarnya harga setelah di diskon pada layar.
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int i;
	float d,t;
	char j;

	//Algoritma
	printf("Harga Awal Produk  : ");
	scanf("%d", &i);
	printf("Masukan Jenis Diskon  : ");
	scanf(" %c", &j);

	switch(j){
		case 'A' :
			d = 0.1;
			t = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", t);
			break;

		case 'B' :
			d = 0.15;
			t = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", t);
			break;

		case 'C' :
			d = 0.2;
			t = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", t);
			break;

		default :
			printf("Bukan pilihan Jenis Diskon yang benar");
	}
	return 0;
}
