#include<iostream>
using namespace std;

main () {
	int jumlah = 3, nilai[jumlah], temp, min, max;
	float rata, total;
	char ulang;
	
	do {
		
		// CLEAR LAYAR SAAT MENGULANG PROGRAM
		system ("cls");
		// INPUT NILAI
		cout << "MASUKKAN TIGA BUAH NILAI" << endl;
		for ( int i = 0; i < jumlah; i++ ) {
			char alpha = 'A';
			cout << "Nilai " << static_cast <char> (alpha + i) << " : "; 
			cin >> nilai[i];
		} cout << endl;
		
		// ASCENDING
		for ( int i = 0; i < jumlah; i++ ) {
			for ( int j = 0; j < jumlah - 1; j++ ) {
				if ( nilai[i] < nilai[j] ) {
					temp = nilai[i];
					nilai[i] = nilai[j];
					nilai[j] = temp;
				}
			}
		}
		min = nilai[0];
		
		// PRINT NILAI ASCENDING
		cout << "NILAI ASCENDING \t: ";
		for ( int i = 0; i < jumlah; i++ ) {
			cout << nilai[i] << "  ";
		} cout << endl;
		
		// DESCENDING
		for ( int i = 0; i < jumlah; i++ ) {
			for ( int j = 0; j < jumlah - 1; j++ ) {
				if ( nilai[i] > nilai[j] ) {
					temp = nilai[i];
					nilai[i] = nilai[j];
					nilai[j] = temp;
				}
			}
		}
		max = nilai[0];
		
		// PRINT NILAI DESCENDING
		cout << "NILAI DESCENDING \t: ";
		for ( int i = 0; i < jumlah; i++ ) {
			cout << nilai[i] << "  ";
		} cout << endl;
		
		// PRINT NILAI MIN-MAX
		cout << "NILAI MINIMUM \t\t: " << min << endl;
		cout << "NILAI MAXIMUM \t\t: " << max << endl;
		
		// NILAI TOTAL DAN RATA-RATA
		for ( int i = 0; i < jumlah; i++ ) {
			total += nilai[i];
		}
		rata = total / jumlah;
		
		// PRINT NILAI TOTAL DAN RATA-RATA
		cout << "NILAI TOTAL \t\t: " << total << endl;
		cout << "NILAI RATA-RATA \t: " << rata << endl << endl;
		
		// ULANG PROGRAM
		cout << "ULANG PROGRAM ? (Y/N) \t: ";
		cin >> ulang;
		
		// RESET NILAI TOTAL JIKA MENGULANG PROGRAM
		if (ulang == 'y' || ulang == 'Y') {
			total = 0;
		}
		
	} while (ulang == 'y' || ulang == 'Y' );
	
	
	
	
}

