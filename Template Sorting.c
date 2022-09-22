//Bubble Sort
void BubbleSort(int[] L, int n){
    //Mengurutkan larik L[1..n] sehingga terurut menaik dengan metode Bubble Sort
    //K. awal = Elemen larik L sudah terdefinisi
    //K. akhir = Elemen larik L terurut menaik sedemikian sehingga L[1] <= L[2] < ... < L[n]
    int i; //pencacah untuk jumlah langkah
    int k; //pencacah untuk pengapungan pada setiap langkah
    int temp; //peubah bantu untuk pertukaran

    for(i = 1;i<=n-1;i++){
        for(k = n;k>=i+1;k--){
            if(L[k] < L[k-1]){
                //pertukaran L[k] dengan L[k-1]
                temp = L[k];
                L[k] = L[k-1];
                L[k-1] = temp;
            }
        }
    }
}

//Selection Sort
void SelectionSortMax(int[] L, int n){
    //Mengurutkan larik L[1..n] sehingga terurut menaik dengan metode pengurutan maximum
    //K. awal = Elemen larik L sudah terdefinisi
    //K. akhir = Elemen larik L terurut menaik sedemikian sehingga L[1] <= L[2] < ... < L[n]
    int i; //pencacah untuk jumlah langkah
    int j; //pencacah untuk mencari nilai maksimum
    int imaks; //indeks yang berisi nilai maksimum sementara
    int temp; //peubah bantu untuk pertukaran

    for(i = n ; i >= 2;i--){ //jumlah pass sebanyak n-1
        imaks = 1; //elemen pertama diasumsikan sebagai elemen maksimum sementara

        for(j=2; j>=i;j++){
            if(L[j] > L[imaks]){
                imaks = j;
            }
        }

        //Pertukaran L[imaks] dengan L[i]
        temp = L[imaks];
        L[imaks] = L[i];
        L[i] = temp;
    }

}

void SelectionSortMin(int[] L, int n){
    //Mengurutkan larik L[1..n] sehingga terurut menurun dengan metode pengurutan minimum
    //K. awal = Elemen larik L sudah terdefinisi
    //K. akhir = Elemen larik L terurut menurun sedemikian sehingga L[1] <= L[2] < ... < L[n]
    int i; //pencacah untuk jumlah langkah
    int j; //pencacah untuk mencari nilai minimum
    int imin; //indeks yang berisi nilai minimum sementara
    int temp; //peubah bantu untuk pertukaran

    for(i = 1 ; i <= n;i++){ 
        imin = i; //cari indeks dari elemen minimum di dalam larik L[I..n]

        for(j=i+1; j<=n;j++){
            if(L[j] < L[imin]){
                imin = j;
            }
        }

        //Pertukaran L[imaks] dengan L[i]
        temp = L[imin];
        L[imin] = L[i];
        L[i] = temp;
    }

//Insertion Sort
void InsertionSort(int[] L, int n){
    //Mengurutkan larik L[1..n] sehingga terurut menaik dengan metode Insertion Sort
    //K. awal = Elemen larik L sudah terdefinisi
    //K. akhir = Elemen larik L terurut menaik sedemikian sehingga L[1] <= L[2] < ... < L[n]

    typedef enum{
        true = 1,
        false = 0
    }boolean;

    int i; //pencacah pass
    int j; //pencacah untuk penelurusan larik
    int y; //peubah bantu agar L[i] tidak tertimpa selama pergeseran

    boolean ketemu; //peubah boolean untuk menyatakan posisi penyisipan dilakukan

    //elemen L[i] dianggap sudah terurut
    for(i=2;i<=n;i++){ // mulai dari langkah 2 sampai langkah n
        y = L[i]; //sisipkan L[i] ke dalam bagian yang sudah terurut
        j = i-1; //cari posisi yang tepat untuk x di dalam L[i..i-1] sambil menggeser
        ketemu = false;

        while ((j >= 1) && (!ketemu))
        {
            if (y < L[j])
            {
                L[j+1] = L[j];
                j--;
            }else{
                ketemu = true;
            }
            
        }

        L[j+1] = y; //sisipkan y pada tempat yang sesuai
        
    }
}


//Heap Sort


//Shell Sort
void ShellSort(int[] L, int n){
     //Mengurutkan larik L[1..n] sehingga terurut menaik dengan metode Shell Sort
     //K. awal = Elemen larik L sudah terdefinisi
    //K. akhir = Elemen larik L terurut menaik sedemikian sehingga L[1] <= L[2] < ... < L[n]

    int step, start;

    step = n;
    while (step > 1)
    {
        step = step/3 + 1
        for (start = 1; start <= step; start++)
        {
            InsSort(L,n,start,step); 
        }
        
    }
    
}

void InsSort(int[] L, int n, int start, int step){
    //Mengurutkan larik L[start..n] sehingga terurut menaik dengan metode Insertion Sort yang dimodifikasi untuk Shell Sort
    //K. awal = Elemen larik L sudah terdefinisi
     //K. akhir = Elemen-elemen larik pada kenaikan sebesar step tersusun naik

     typedef enum{
        true = 1,
        false = 0
     }boolean;

     int i; //pencacah step
     int j; //pencacah untuk penulusuran larik
     int y; //peubah bantu yang menyimpan nilai L[k]
     boolean ketemu; //peubah boolean untuk menyatakan posisi penyisipan sudah ditemukan

    //elemen L[start] dianggap sudah terurut
     i = start + step;

     while(i <= n){
        
        y = L[i]; //sisipkan L[i] ke dalam bagian yang sudah terurut

        //Cari posisi yang tepat untuk y di dalam L[start..i-1] sambil menggeser
        j=i-step;
        ketemu = false;
        while (j >= 1 && !ketemu)
        {
           if(y < L[j]){
            L[j+step] = L[j]; //geser
            j = j - step;
           }else{
            ketemu = true;
           }
        }
        
        L[j + step] = y; //sisipkan y pada tempat yang sesuai
        i = i + step;
     }
}


//Quick Sort




//Merge Sort





//Radix Sort




//True Sort