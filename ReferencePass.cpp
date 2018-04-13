#include <iostream>
#include <math.h>
using namespace std;

/**
* Fungsi kuadrat dengan parameter pass by reference
*/
int kuadrat(int* angka){
	return *angka = pow(*angka, 2);
}

/**
* Fungsi utama program
*/
int main(){
	int nilai = 3;
	kuadrat(&nilai); // memanggil fungsi kuadrat dengan parameter alamat variabel nilai
	cout<<nilai<<endl;
}
