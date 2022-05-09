//Nama File     : InsertionSort.c
//Nama Pembuat  : Dorino Baharson
//NIM           : 24060121130090
//Lab           : B1
//Dekripsi      : Menerapkan metode pengurutan Insertion Sort.

#include <stdio.h>
#include <stdlib.h>

void print(int T[], int n){
    int i;

    for( i = 0; i < n; i++){
        printf(" %d", T[i]);

    }
    printf("\n");
}

void Insertion_Sort(int T[], int n){

//Kamus Lokal
int i, j, k;

//Algoritma
    for (i = 1; i < n; i++){
        int k = T[i];
        j = i - 1;
        while ((j >= 0) && (T[j] > k)){
            T[j + 1] = T[j];
            j--;
        }
        T[j + i] = k;
    }
}

int main(){
//Kamus
int T[] = {4, 3, 5, 7, 8,11, 23, 14};
int n;

//Algoritma
n = sizeof(T)/ sizeof(T[0]);
print(T,n);
Insertion_Sort(T,n);
print(T,n);

return 0;
}
