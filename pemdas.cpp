#include <iostream>
using namespace std;

main () {
	
	int jumlah = 3, nilai[jumlah], temp;
	float total, rata;
	char ulang;
	
	do {

		system("cls");
		
		// INPUT NILAI
		cout << "Masukkan Tiga Buah Nilai" << endl;
		for ( int i = 0; i < jumlah; i++ ) {
			char alpha = 'A';
			cout << "Nilai " << static_cast <char> (alpha + i) << " : ";
			cin >> nilai[i];
		} cout << endl;
		
		// Ascending (Pengurutan angka dari kecil ke besar)
		for ( int i = 0; i < jumlah; i++ ) {
			for ( int j = 0; j < jumlah - 1; j++) {
				if ( nilai[i] < nilai[j] ) {
					temp = nilai[i];
					nilai[i] = nilai[j];
					nilai[j] = temp;
				}
			}
		}
		// Print Data Ascending
		cout << "Urutan Data Ascending : ";
		for ( int i = 0; i < jumlah; i++ ) {
			cout << nilai[i] << " ";
		} cout << endl;
		
		// Descending (Pengurutan angka dari besar ke kecil)
		for ( int i = 0; i < jumlah; i++ ) {
			for ( int j = 0; j < jumlah; j++ ) {
				if ( nilai[i] > nilai[j] ) {
					temp = nilai[i];
					nilai[i] = nilai[j];
					nilai[j] = temp;
				}
			}
		}		
		// Print Data Descending
		cout << "Urutan Data Descending : ";
		for ( int i = 0; i < jumlah; i++ ) {
			cout << nilai[i] << " ";
		} cout << endl;
		
		// Nilai Min-Max
		int min, max;
		
		for ( int i = 0; i < jumlah; i++ ) {
			if ( min > nilai[i] ) {
				min = nilai[i];
			}
		}
		
		for ( int i = 0; i < jumlah; i++ ) {
			if ( max < nilai[i] ) {
				max = nilai[i];
			}
		}
		// Print Nilai Min-Max
		cout << "Nilai Minimum : " << min << endl;
		cout << "Nilai Maximum : " << max << endl;
		
		
		// Nilai TOTAL dan RATA-RATA
		for ( int i = 0; i < jumlah; i++ ) {
			total += nilai[i];
			rata = total / 3;
		}
		// Print Nilai TOTAL dan RATA-RATA
		cout << "Nilai Total : " << total << endl;
		cout << "Nilai Rata-Rata : " << rata << endl << endl;
		
		// ULANG?
		cout << "ULANG ? (Y/N) : ";	
		cin >> ulang;
		if ( ulang == 'y' || ulang == 'Y' ) {
			total = 0;
			min = nilai[NULL];
			max = nilai[NULL];
		} 
	} while (ulang == 'y' || ulang == 'Y');
} 
