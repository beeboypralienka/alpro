#include <iostream>
using namespace std;

// Prototype fungsi binarySearch dengan 3 paramater pass by value
int binarySearch(int data[], int jmlElemen, int dicari);

int main() {
	// Input jumlah elemen
	int elemen;	
	cout<<"Masukkan jumlah elemen: ";
	cin>>elemen;
	
	// Input nilai elemen di setiap index
	int data[elemen];
	for(int i=0; i<elemen; i++){
		cout<<"Elemen index "<<i<<": ";
		cin>>data[i];
	}
	
	// Input angka yang dicari
	int angka;
	cout<<"Masukkan angka yang dicari: ";
	cin>>angka;
	
	// Jika fungsi binarySearch mengembalikan nilai -1, maka tampilkan informasi bahwa angka yang dicari tidak ada pada array
	// Sebaliknya, selain -1, maka tampilkan informasi index elemen array
	int hasil = binarySearch(data, elemen, angka);
	if(hasil != -1){
		cout<<endl<<"Angka yang dicari ada di index "<<hasil;
	}else{ 
		cout<<endl<<"Angka yang dicari tidak ada pada Array!";
	}	
	return 0;
}

// Deklarasi fungsi binarySearch dengan 3 paramater pass by value
int binarySearch(int data[], int jmlElemen, int dicari){
	// Tentukan indexMin = 0
	int indexMin = 0;
	
	// Tentukan indexMax = jumlah elemen - 1
	int indexMax = jmlElemen - 1;
	
	// Tentukan center = (indexMin + indexMax) / 2
	int center = ( indexMin + indexMax ) / 2;		
	
	// Buat variabel posisi untuk membantu kondisi berhenti perulangan
	int posisi = 0;		
	
	// Ulangi proses selama posisi != center
	while( posisi != center ){
		
		// Perbarui posisi menjadi center
		// Jadi, jika setiap satu kali proses loop selesai tetapi tidak ada perubahan pada nilai center,
		// maka kondisi loop tidak terpenuhi lagi, artinya berhenti looping	-> untuk mengatasi pencarian nilai yang tidak ada pada array	
		posisi = center;	
		
		// Tampilkan nilai index dan posisi awal <-- optional, tidak ada juga tidak apa-apa (di luar algoritma)
		cout<<"Center index awal "<<center<<endl;
		cout<<"Posisi index awal "<<posisi<<endl;		
						
		// Jika angka yang dicari == data[center], maka kembalikan nilai center (keluar loop)
		if( dicari == data[center] ){
			return center;
		}
		// Jika angka yang dicari > data[center], maka perbarui indexMin = center + 1 (pencarian ke kanan)
		else if( dicari > data[center] ){
			indexMin = center + 1;													
		}
		// Jika angka yang dicari < data[center], maka perbarui indexMax = center - 1 (pencarian ke kiri)
		else{
			indexMax = center - 1;									
		}
		
		// Perbarui nilai center = ( indexMin + indexMax ) / 2
		center = ( indexMin + indexMax ) / 2;
		
		// Tampilkan nilai index dan posisi akhir <-- optional, tidak ada juga tidak apa-apa (di luar algoritma)
		cout<<"Center index akhir "<<center<<endl;
		cout<<"Posisi index akhir "<<posisi<<endl<<endl;
	}
	
	// Kembalikan nilai -1 setelah proses while sudah tidak terpenuhi lagi (angka yang dicari tidak ada pada array)
	return -1;
}
