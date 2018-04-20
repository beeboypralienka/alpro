#include <iostream>
using namespace std;

int nMahasiswa, nNilai;
float jumlah;

void tampilMenu();
string cekKonversi(float avg);
string cekStatus(string konv);
void tampilHasil();

int main() {
				
	tampilMenu();
		
	struct mahasiswa{	
		string nama;
		float nilai[50];		
		float average;
		string konversi;
		string status;		
	} mhs[nMahasiswa];
	
	for(int i=0; i<nMahasiswa; i++){
		cout<<"Mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukkan nama mahasiswa: ";
		cin>>mhs[i].nama;
		jumlah = 0;
		for(int j=0; j<nNilai; j++){
			cout<<"Nilai ke-"<<j+1<<": ";
			cin>>mhs[i].nilai[j];
			jumlah += mhs[i].nilai[j];
		}						
		mhs[i].average = jumlah / nNilai;		
		mhs[i].konversi = cekKonversi(mhs[i].average);		
		mhs[i].status = cekStatus(mhs[i].konversi);		
		cout<<endl;
	}	
	return 0;
}

void tampilMenu(){
	cout<<"***************************************************"<<endl;
	cout<<" Program menentukan kelulusan sejumlah n mahasiswa "<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Masukkan jumlah mahasiswa: ";
	cin>>nMahasiswa;
	cout<<"Masukkan jumlah nilai: ";
	cin>>nNilai;
	cout<<endl;
}

string cekKonversi(float avg){
	if(avg>=81){
		return "A";
	}else if(avg>=75){
		return "AB";
	}else if(avg>=71){
		return "B";
	}else if(avg>=65){
		return "BC";
	}else if(avg>=61){
		return "C";
	}else if(avg>=55){
		return "CD";
	}else if(avg>=51){
		return "D";
	}else{
		return "E";
	}
}

string cekStatus(string konv){
	if( (konv == "A") || (konv=="B") ){
		return "Lulus";
	}else if( konv == "C" ){
		return "Remedial";
	}else{
		return "Tidak Lulus";
	}
}

void tampilHasil(){
	
}
