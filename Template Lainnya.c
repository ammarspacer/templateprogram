/*Menghitung frekuensi kemunculan nilai dalam Matriks*/
#define NbarisMaks 1000 //jumlah baris maksimum
#define NkolomMaks 1000 //jumlah kolom maksimum

typedef unsigned char citra[NbarisMaks + 1][NkolomMaks + 1];
//elemen matriks bertipe unsigned char karena rentang nilainya hanya 0 - 255

void BuatHistogram(citra C, int m, int n){
    /*Membuat histogram untuk citra C yang berukuran m x n
        K.awal: C sudah terdefinisi elemen-elemennya.
        K. akhir: Gambar histogram tercetak di layar.
    */
   int i,j;
   int frek[256];

   for(i=0;i <= 255;i++){
    frek[i] = 0;
   }

   for(i=1;i<=m;i++){
    for(j = 0;j <= n;j++){
        frek[C[i][j]] = frek[C[i][j]] + 1;
    }
   }

   //gambarkan histogram
   for(i=0;i<=255;i++){
    print("%d   ", i++);
    for(j=1;j<=frek[i],j++){
        print("*");
    }
    printf("\n"); //pindah ke baris baru
   }

}