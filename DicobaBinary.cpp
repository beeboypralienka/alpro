#include <iostream>
using namespace std;

//  index    {0, 1, 2,  3,  4,  5,  6}
int data[] = {2, 3, 8, 12, 17, 22, 45};

//prototype
int binarySearch(int angka); 

int main() {
	int dicari = 17;
	cout<<"index  = {0, 1, 2,  3,  4,  5,  6}"<<endl;
	cout<<"data[] = {2, 3, 8, 12, 17, 22, 45}"<<endl;
	cout<<"Angka "<<dicari<<" ada di index "<<binarySearch(dicari);	
	return 0;
}

int binarySearch(int angka){
	int posisi, indexMin, indexMax, center, jmlElemen;
	jmlElemen = 7;
	indexMax = jmlElemen - 1;
	indexMin = 0;
	center = ( jmlElemen + indexMin ) / 2;
	
	if(angka == data[indexMin]){
		posisi = indexMin;
	}else if(angka == data[indexMax]){
		posisi = indexMax;
	}else if(angka == data[center]){
		posisi = center;
	}else{
		posisi = center;				
		while( angka != data[posisi] ){			
			// kanan
			if(angka > data[posisi]){
				indexMin = posisi;
				posisi = ( indexMin + jmlElemen ) / 2;
			// kiri
			}else if(angka < data[posisi]){
				indexMax = posisi;
				posisi = ( indexMin + indexMax ) / 2;
			}			
		}		
	}	
	return posisi;
}
