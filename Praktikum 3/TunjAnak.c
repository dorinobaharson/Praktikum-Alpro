//Nama File : TunjAnak.c
//Deskripsi : Menghitung dan menampilkan besarnya tunjangan anak pada layar.
//Nama      : Dorino Baharson
//NIM       : 24060121130090
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	float T,a,g;

	//Algoritma
	printf("Membuat Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%f", &a);
	printf("Gaji Pokok  : ");
	scanf("%f", &g);

	if ( a < 3) {
		T = a * (g*0.1);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %.2f", T);
    }
	else{
		T = 3*0.1 *g;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %.2f", T);
	}
	return 0;
}
