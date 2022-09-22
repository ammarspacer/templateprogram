/*fopen*/

Mhs = fopen("mhs.dat","rb");
//mhs.dat adalah nama arsip fisik

Bil = fopen("bil.rek","wb");
//bil.rek adalah nama arsip fisik

Kar = fopen("kar.dat","rb");
//kar.dat adalah nama arsip fisik

/*fread*/
fread(&RekMhs, sizeof(RekMhs),1,Mhs);
fread(&i,sizeof(i),1,Bil);
fread(&c, sizeof(c),1,Kar);

/*fwrite*/

fwrite(&RekMhs, sizeof(RekMhs),1,Mhs);
fwrite(&i,sizeof(i),1,Bil);
fwrite(&c, sizeof(c),1,Kar);


/*fclose*/
fclose(Mhs);
fclose(Bil);
fclose(Kar);

/*Program Buat Arsip*/
//Membuat arsip data mahasiswa. Data mahasiswa dibaca dari papan ketik. Nama arsip adalah "data.dat".

int main(int argc, char const *argv[])
{
    //Deklarasi 
    typedef struct{
        long NIM;
        char Nama[25];
        float IP;
    }DataMhs;

    DataMhs Msiswa; //peubah untuk menampung pembacaan data mahasiswa

    FILE *Mhs;

    //Algoritma
    Mhs = fopen("data.dat","wb"); //buka arsip Mhs untuk perekaman

    //Baca NIM Mahasiswa pertama, mungkin 9999
    printf("NIM     : "); scanf("%ld", &Msiswa.NIM);
    while (Msiswa.NIM != 9999)
    {
        printf("Nama    : "); scanf("%s", &Msiswa.Nama);
        printf("IP  : "); scanf("%d", &Msiswa.IP);
        //rekam Msiswa ke dalam arsip Mhs
        fwrite(&Msiswa, sizeof(Msiswa), 1, Mhs);
        printf("NIM     : "); scanf("%ld",&Msiswa.NIM);
    }
    
    fclose(Mhs);

    return 0;
}

/*Program Baca Arsip*/
typedef enum{true = 1, false = 0}boolean;

main(){
    //Deklarasi
    typedef struct 
    {
        long NIM;
        char Nama[25];
        float IP;
    }DataMhs;

    DataMhs Msiswa; //Peubah untuk menampung pembacaan data mahasiswa

    FILE *Mhs;

    //Algoritma
    Mhs = fopen("data.dat", "rb"); //Buka arsip Mhs untuk pembacaan

    //baca rekaman pertama, mungkin MARK
    while (!feof(Mhs))
    {
        fread(&Msiswa,sizeof(Msiswa),1,Mhs);
        printf("NIM : %ld \n", Msiswa.NIM);
        printf("Nama: %s \n", Msiswa.Nama);
        printf("IP : %f \n", Msiswa.IP);
    }
    
    fclose(Mhs);
    
}

/*Program Cari Arsip*/
typedef enum{true = 1, false = 0}boolean;

void CariNIM(FILE *Mhs, long Nomor, boolean *ketemu){
    //Mencari data mahasiswa yang NIM-nya  = Nomor
    //K.awal : Arsip Mhs tidak kosong, Nomor sudah berisi NIM maahsiswa yang dicari. Perhatikan, di sini arsip Mhs harus dilewatkan
    //sebagai parameter pengeluaran
    //K.Akhir: Jika mahasiswa yang NIM-nya  = Nomor ditemukan, ketemu berisi true, sebaliknya jika tidak ada maka ketemu berisi false

    //Deklarasi
    DataMhs Msiswa;

    //Fungsi Mark diletakkan di luar prosedur

    //Algoritma

    Mhs = fopen("data.dat", "rb"); //buka arsip Mhs untuk pembacaan
    *ketemu = false;
    while (!feof(Mhs) && !(*ketemu))
    {
       fread(&Msiswa, sizeof(Msiswa),1,Mhs);
       if (Msiswa.NIM == Nomor)
       {
            *ketemu = true;
       }
       
    }   
}