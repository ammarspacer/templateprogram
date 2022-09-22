/*Faktorial*/
int fak(int n){
    /*mengembalikan nilai n!. Algoritma rekursif
    basis : jika n = 0, maka 0! = 1
    rekurens: jika n > 0, maka n! = n x (n-1)!
    */

   if(n == 0){
    return 1;
   }else{
     return n * fak(n-1);
   }
    
}

/*Menara Hanoi*/
void Hanoi(int n, int A, int B, int C){
    /*Memindahkan n buah piringan dari A ke B
        K. Awal: n adalah jumlah piringan, harganya sudah terdefinisi.
        Pada mulanya seluruh piringan berada di tiang A, 
        piringna terbesar terletak paling bawah.
        K. Akhir: Seluruh piringan  telah pindah ke tiang B, piringan paling besar terletak paling bawah. Proses
        perpindahan dicetak ke ke layar

        basis: jika n = 1, pindahkan piringan dari A ke B
        rekurens: jika n > 1, 
            - angkat N-1 buah piringan dari A ke C
            - pindahkan 1 piringan dari A ke B
            - angkat N-1 buah piringan dari C ke B

    */
   if(n == 1){
    printf("Pindahkan piringan dari %d ke %d \n", A, B);
   }else{
    Hanoi(n-1,A,C,B);
    printf("Pindahkan piringan dari %d ke %d \n",A,B);
    Hanoi(n-1,C,B,A);
   }

}