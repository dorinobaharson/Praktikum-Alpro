//Nama File     : SelectionSort.c
//Nama Pembuat  : Dorino Baharson
//NIM           : 24060121130090
//Kelas         : B1
//Dekripsi      : Menerapkan metode pengurutan Selection Sort.

#include <stdio.h>


void  maxT(int T[], int n, int *max){

int i;
*max = T[0];

    for( i = 1; i < n; i++){
        if (T[i] > *max) {
            *max = T[i];
        }
    }
}

void print(int T[], int n){
    int i;

    for( i = 0; i < n; i++){
        printf(" %d", T[i]);

    }
    printf("\n");
}

void swap(int *a, int *b){
    int k;

    k = *a;
    *a = *b;
    *b = k;
}

void Selection_Sort(int T[], int n){

//Kamus Lokal
int i, j, min;

//Algoritma
 for (i = 0; i < n-1; i++){
    for (j = i+1; j < n; j++){
        min = i;
        if (T[j] < T[min]){
            min = j;
        }
        swap(&T[i], &T[min]);
    }
 }

}

int main(){
//Kamus
int T[] = {4, 3, 5, 7, 8,11, 23, 14};
int n;

//Algoritma
n = sizeof(T)/ sizeof(T[0]);
print(T,n);
Selection_Sort(T,n);
print(T,n);

return 0;
}
