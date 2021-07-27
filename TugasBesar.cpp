/*
	Nama		: Mohammad Adji Febriansyah
	NPM			: 4519210083
	No Undian	: 28
	Soal		: SI Penjualan Toko
	Kelas		: G
	Mata Kuliah	: Algoritma dan Struktur Data
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;

#define MAXadji 100
#define falseadji 0
#define trueadji 1

    struct datapembeli {
        string namaadji, alamatadji, kelaminadji, teleponadji;
        int usiaadji, hargaadji;
    };
    int awaladji, akhiradji, jumtikadji, i;

    struct node {
        float INFOadji;
        struct node *LINKadji;
    };
    typedef struct node Simpuladji;
    Simpuladji *P, *FIRSTadji,*LASTadji, *Q;
    float X, A[5];
    
    int dataadji1[20] = {16842, 16858, 16845, 16145, 16884, 16863, 16870,16165, 16937, 16345, 16198, 16124, 16089, 16700, 16799, 16112, 16124, 16009, 16349, 16331};
    int n = 20;
    char yesnoadji;
    int j;

    int searchadji, kodeadji;
    int flaqadji = 0;
    char  merkadji, hargaadji[10], typeadji;

    struct datapembeli dataadji;
    struct datapembeli stackadji[MAXadji];
    void initadji(void);
    int fulladji(void);
    int emptyadji(void);
    struct datapembeli entridata(void);
    void enstackadji(struct datapembeli dataadji);
    struct datapembeli destackadji (void);
    void displayadji(struct datapembeli dataadji);
    void bacaadji(void);

    void AWALadji();
    void NEWSIMPULadji(float X);
    void INSERTadji();
    void CETAKadji();

	void jisort(int[],int,int);
	
    int search(int adji[], int jumdatadji, int elemenadji);

int main() 
{
	int hargaadji;
	string typeadji;
    cout << endl;
    cout << "========================================================" << endl;
    cout << "|             Selamat Datang di Adji Cell              |" << endl;
    cout << "========================================================" << endl;
    cout << "|        Berikut adalah barang yang tersedia           |" << endl;
    cout << "========================================================" << endl;
    cout << "| 1. Samsung                                           |" << endl;
    cout << "| 2. Apple                                             |" << endl;
    cout << "| 5. Xiaomi                                            |" << endl;
    cout << "========================================================" << endl;
    cout << endl;

    cout << "Silahkan pilih merk hp yang anda beli" << endl;
    do {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "| Merk HP yang tersedia           |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "| 1. Samsung                      |" << endl;
    cout << "| 2. Apple                        |" << endl;
    cout << "| 3. Xiaomi                       |" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Silahkan Masukan Nomor Merk HP Anda : "; cin >> merkadji;
    cout << endl;
    switch(merkadji) {
        case '1' :
		merkadji='y';
		typeadji="Samsung A 20";
		hargaadji=1800000;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "|       Daftar Harga HP Samsung       |" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "| A 10    -> 1500000                  |" << endl;
            cout << "| A 20    -> 1800000                  |" << endl;
            cout << "| A 30    -> 3000000                  |" << endl;
            cout << "| S 20    -> 11000000                 |" << endl;
            cout << "| Note 20 -> 15000000                 |" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "lanjut (y) / kembali (b)" << endl;
            cout << "Masukan pilihan anda : "<< merkadji<<endl;;
			cout << endl;
			cout << "Masukan harga HP yang dibeli : "<< hargaadji;
			cout << endl;
            break;
        case '2' : 
		merkadji='y';
		typeadji="Iphone 8";
		hargaadji =5000000;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "|        Daftar Harga HP Apple        |" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "| Iphone 7  -> 3000000                |" << endl;
            cout << "| Iphone 8  -> 5000000                |" << endl;
            cout << "| Iphone 9  -> 8000000                |" << endl;
            cout << "| Iphone x  -> 10000000               |" << endl;
            cout << "| Iphone 11 -> 13000000               |" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "lanjut (y) / kembali (b)" << endl;
            cout << "Masukan pilihan anda : "<< merkadji<<endl;
			cout << endl;
			cout << "Masukan harga HP yang dibeli : "<< hargaadji;
			cout << endl;
            break;
        case '3' :
		merkadji='y';
		typeadji="Redmi Note 8";
		hargaadji=2200000;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "|       Daftar Harga HP Xiaomi        |" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "| Redmi 8          -> 1500000         |" << endl;
            cout << "| Redmi 9          -> 1800000         |" << endl;
            cout << "| Redmi Note 8     -> 2200000         |" << endl;
            cout << "| Redmi Note 9     -> 2400000         |" << endl;
            cout << "| Redmi Note 9 Pro -> 3200000         |" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "lanjut (y) / kembali (b)" << endl;
            cout << "Masukan pilihan anda : " << merkadji<<endl;
			cout << endl;
			cout << "Masukan harga HP yang dibeli : "<< hargaadji;
			cout << endl;
            break;
        case 'y' : break;
        default : 
            cout << "pilihan yang anda masukan salah" << endl;
            cout << "pilih 1 s.d 3" << endl;
        }
    } while (merkadji != 'y');
        cout << "Berikut data yang telah anda masukan" << endl; 
					initadji();
			int jumtikadji=1;
			for (i=1; i<=jumtikadji; i++) {
            dataadji = entridata(); enstackadji(dataadji); 
			}
        bacaadji();
        cout << endl;
        if (jumtikadji >= 2) {
            cout << "Anda hanya bisa 1 kali menghapus" << endl;
            cout << "Apakah anda ingin menghapus data sebelumnya ? (y/n) : "; cin >> yesnoadji;
            switch(yesnoadji){
                case 'y' :
                    cout << endl;
                    cout << "Ini adalah data yang dihapus" << endl;
                    dataadji = destackadji(); displayadji(dataadji); break;
                case 'n' : break;
                default : break; } }
        else cout << "Lanjut ke langkah berikutnya" << endl;

//linear single link
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "     Pemilihan jadwal pengiriman       " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "|  jadwal pengiriman yang tersedia    |" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "| Pagi   : 09.00  -  11.59            |" << endl;
    cout << "| Siang  : 12.00  -  14.59            |" << endl;
    cout << "| Sore   : 15.00  -  17.59            |" << endl;
    cout << "| Malam  : 19.00  -  21.00            |" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Silahkan pilih jadwal pengiriman anda " << endl;
    i = 0;
    X = A[i];
    NEWSIMPULadji(X);
    for (i=1; i<=2; i++) {
        cout << "Silahkan masukan jadwal ke " << i << " : "; cin >> A[i];
        X = A[i];
        NEWSIMPULadji(X);
        INSERTadji();
    }
    cout << endl;

//quick
    cout << endl;
    cout << endl;
    cout << "Silahakan pilih kode pos alamat anda" << endl;
    cout << endl;
	for (int i=0; i<4; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
        for (int i=4; i<8; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
        for (int i=8; i<12; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;

        for (int i=12; i<16; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
        for (int i=16; i<n; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
    jisort(dataadji1,0,20);
    cout << endl;
    do {
        yesnoadji='y';
        switch(yesnoadji){
            case 'y' : cout << "Data setelah diurutkan : " << endl;		
			for(int i=1;i<21;i++)
			cout << setw(5) << dataadji1[i] << endl;; break;
            case 'n' : for(int a=0;a<20;a++)
	{
		cout << setw(5) << dataadji1[a];
	}; break;
            default : cout << "pilih y atau n" << endl;
        }
    } while (yesnoadji != 'y' && yesnoadji != 'n');

//search
    cout << endl;
    do {
    searchadji=16009;
    flaqadji = search(dataadji1, n, searchadji);
    if (flaqadji != -1) {
        cout << "Antrian pengiriman anda berada pada nomor (" << flaqadji << ")" << endl; yesnoadji ='n';}
    else {
        cout << "data tidak ditemukan" << endl;
        cout << "cari lagi !" << endl; 
        cout << endl; yesnoadji = 'y';}
    } while (yesnoadji != 'n');
    kodeadji = searchadji;

    cout << endl;
    cout << "Berikut adalah hp yang telah anda pesan" << endl;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "|       Data Pelanggan Adji Cell        |" << endl;
    cout << "=========================================" << endl;
	cout << "Type HP      : " << typeadji << endl;
    cout << "Harga        : " << hargaadji << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Jadwal       : "; CETAKadji(); cout << endl;
    cout << "Kode Pos     : " << kodeadji << endl;
    cout << "-----------------------------------------" << endl;
    bacaadji();
    cout << "Terima Kasih" << endl;
    return 0;
}

//fungsi stack
    void initadji(void){
        awaladji = -1;
        akhiradji = -1;
    }

    void enstackadji (struct datapembeli dataadji) {
        if (emptyadji() == trueadji) {
            awaladji = 0;
            akhiradji = 0;
            stackadji[awaladji] = dataadji;}
        else if (fulladji() != trueadji) {
            akhiradji++;
            stackadji[akhiradji] = dataadji;}
        else cout << "data sudah penuh" << endl;
    }

    struct datapembeli destackadji(void) {
        int i;
        if (emptyadji() != trueadji) {
            dataadji = stackadji[awaladji];
            for (i = awaladji; i<=akhiradji; i++)
                stackadji[i]=stackadji[i+1];
            akhiradji--;
            return(dataadji);
        }else cout << "data kosong" << endl;
    }

    int fulladji(void){
        if(akhiradji == MAXadji-1) return(trueadji);
        else return(falseadji);
    }

    int emptyadji(void){
        if (akhiradji == -1) return(trueadji);
        else return(falseadji);
    }

    void bacaadji(void){
        int i;
        if (emptyadji() != trueadji){
            for (i=awaladji; i<=akhiradji; i++){
                displayadji(stackadji[i]);
            }
        } else cout << "data kosong";
        cout << endl;
    }

    struct datapembeli entridata(void){
        struct datapembeli dataadji;
		dataadji.namaadji = "Mohammad Adji Febriansyah";
		dataadji.alamatadji = "Depok";
		dataadji.usiaadji = 19;
		dataadji.kelaminadji ="L";
		dataadji.teleponadji = "0883232";
        cout << endl;
        cout << endl;
        return(dataadji);
    }

    void displayadji(struct datapembeli dataadji){
        cout << "Nama         : " << dataadji.namaadji<< endl;
        cout << "Alamat       : " << dataadji.alamatadji<< endl;
        cout << "Usia         : " << dataadji.usiaadji<< endl;
        cout << "Kelamin      : " << dataadji.kelaminadji<< endl; 
        cout << "Telepon      : " << dataadji.teleponadji<< endl;
        cout << "=========================================" << endl;
    }

//fungsi linear single linked list
    void AWALadji() {
        FIRSTadji = P;
        LASTadji = P;
        P -> LINKadji = NULL;
    }

    void NEWSIMPULadji(float X) {
        P = (Simpuladji*) malloc(sizeof(Simpuladji));
        if (P != NULL) {
            P -> INFOadji = X;
        } else {
            cout << "Pembuatan Simpul Tidak Berhasil" << endl;
            cin.get();
            exit(1);
        }
    }

    void INSERTadji() {
        if (FIRSTadji == NULL) {
            FIRSTadji = P;
            LASTadji = P;
            LASTadji -> LINKadji = NULL;
        } else {
            LASTadji -> LINKadji = P;
            LASTadji = P;
            LASTadji -> LINKadji = NULL;
        }
    }

    void CETAKadji() {
        Q = FIRSTadji;
        while (Q != NULL){
            X = Q -> INFOadji;
            cout  << X << ".";
            Q = Q -> LINKadji;
        }
    }

//fungsi quick
   
    void tampiladji() {
        for (int i=0; i<4; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
        for (int i=4; i<8; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
        for (int i=8; i<12; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;

        for (int i=12; i<16; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
        for (int i=16; i<n; i++)
        {
            cout << dataadji1[i] << " ";
        }
        cout << endl;
    }
    
void jisort(int jinumber[], int jileft, int jiright)
{
	int jipivot,jilhold,jirhold;
	jilhold=jileft;
	jirhold=jiright;
	jipivot=jinumber[jileft];
	while(jileft<jiright)
	{
		while((jinumber[jiright]<=jipivot)&&(jileft<jiright))
		jiright--;
		if(jileft!= jiright)
		{
			jinumber[jileft]=jinumber[jiright];
			jileft++;
		}
		while((jinumber[jileft]>=jipivot)&&(jileft<jiright))
		{
		jileft++;
		}
		if(jileft!=jiright)
	{
	jinumber[jiright]=jinumber[jileft];
	jiright--;
		}
}
jinumber[jileft]=jipivot;
jipivot=jileft;
jileft=jilhold;
jiright=jirhold;
if(jileft<jipivot)
jisort(jinumber,jileft,jipivot-1);
if(jiright>jipivot)
jisort(jinumber,jipivot+1,jiright);
}

//fungsi sequental
    int search(int adji[], int jumdatadji, int elemenadji)
    {
        int flaqadji = -1;
        for (int countadji=0; countadji<n; countadji++)
        {
            if (elemenadji == adji[countadji])
            {
                flaqadji = countadji;
                break;
            }
        }
        return flaqadji;
    } 