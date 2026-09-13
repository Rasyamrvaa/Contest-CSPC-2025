#include <bits/stdc++.h> 
using namespace std;

int main () {
	string teks;
	getline (cin, teks);
	
	if (teks .length() < 50) {
	//prosesnya disini...	
	
	//buat dulu batasan misal inputan stringnnya tidak boleh >50, maka
	//outputnya seperti diatas
	
	//DINAMIKA ALGORITMA SOAL
	
	//1. buat looping untuk cek setiap index string yang diinput
	//2. ubah karakter sebelumnya menjadi besar/kecil
	//3. remove tanda +/-
	
	for (int i = 0; i < teks.length(); i++) {
		if (teks[i] == '+') {
			teks[i - 1] = toupper(teks[i-1]);
			teks.erase(i, 1);
		} else if (teks[i] == '-') {
			teks[i-1] = tolower(teks[i-1]);
			teks.erase(i, 1);
		} else {
			teks[i];
		}
	}  
	cout << teks << endl;	
	}       
	return 0;
}

