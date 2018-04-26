/* Program pangkat */
#include <iostream>
using namespace std;

/* Inisialisasi fungsi pangkat */
int pangkat(int a, int b);

/* Inisialisasi fungsi pangkat rekursif */
int pangkatRekursif(int a, int b);

int main() {
	int a, b; // Inisialisasi variabel a dan b
	cout<<"Angka: "; cin>>a; // Menyimpan angka ke variabel a
	cout<<"Pangkat: "; cin>>b; // Menyimpan pangkat ke variabel b
	cout<<"Hasil pangkat = "<<pangkat(a,b)<<endl; // Memanggil fungsi pangkat
	cout<<"Pangkat Rekursif = "<<pangkatRekursif(a,b); // Memanggil fungsi pangkat rekursif
	return 0;
}

/* Deklarasi fungsi pangkat dengan parameter a dan b (pass by value) */
int pangkat(int a, int b){
	int hasil = a;  // variabel bantu untuk menyimpan hasil perkalian
    /* perulangan perkalian a hingga b kali */
	for(int i=1; i<b; i++){
		hasil *= a;
	}
	return hasil;
}

/* Deklarasi fungsi pangkatRekursif dengan parameter a dan b (pass by value) */
int pangkatRekursif(int a, int b){	
	if(b <= 1){
		return a;
	}else{
		return a * pangkatRekursif(a, (b-1) );	
	}	
}
