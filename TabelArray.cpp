#include <iostream>
#define SYARAT 70 // Mendefinisikan konstanta SYARAT kelulusan
using namespace std;

/**
 * Fungsi untuk memeriksa kelulusan
 * berdasarkan nilai average matakuliah
 */
string cekLulus(float nilai){
	if(nilai < SYARAT){
		return "TIDAK LULUS";
	}else{
		return "LULUS";
	}
}

/* Fungsi utama program */
int main() {		
	
	/* Proses penentuan jumlah mahasiswa */
	int n;
	cout<<"Masukkan jumlah mahasiswa: ";
	cin>>n;
	cout<<endl;
	
	/* Variable array */
	float data[n][4]; // Menyimpan nilai matakuliah dan nilai rata-rata
	string lulus[n]; // Menyimpan data status kelulusan mahasiswa	
	
	/* 
	* Looping untuk mengisi nilai matakuliah ke variable data[][]
	* dan status kelulusan ke variable lulus[]
	*/
	for(int i=0; i<n; i++){		
		for(int j=0; j<3; j++){
			cout<<"data["<<i<<"]["<<j<<"]: ";
			cin>>data[i][j]; // Menyimpan nilai matakuliah per mahasiswa
			data[i][3] += data[i][j]; // Menyimpan total nilai matakuliah per mahasiswa
		}
		cout<<endl;
		data[i][3] /= 3; // Menyimpan nilai	rata-rata matakuliah per mahasiswa
		lulus[i] = cekLulus(data[i][3]); // Menyimpan status kelulusan yang dikembalikan dari fungsi cekLulus()				
	}							
	
	/*
	* Menampilkan isi data dari setiap
	* elemen array data[][] dan lulus[]
	*/
	for(int i=0; i<n; i++){	
		cout<<"data["<<i<<"]: ";
		for(int j=0; j<4; j++){
			cout<<data[i][j]<<" "; // Menampilkan nilai matakuliah per mahasiswa dan nilai average-nya
		}
		cout<<lulus[i]; // Menampilkan status kelulusan per mahasiswa
		cout<<endl;
	}			
	
	/* Mencari nilai average terbesar */
	float nilaiMaks = data[0][3];
	int dataKe;	
	for(int i=0; i<n; i++){
		if(data[i][3] > nilaiMaks){
			nilaiMaks = data[i][3]; // Mengubah nilaiMaks ketika data[][] selanjutnya lebih tinggi atau besar
			dataKe = i; // Menyimpan urutan atau index data
		}
	}	
	cout<<endl<<"Nilai average tertinggi adalah data["<<dataKe<<"]: "<<nilaiMaks;
	
	return 0;
}
