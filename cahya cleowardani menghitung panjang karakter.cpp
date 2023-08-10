#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	//mendeklarasikan teks1 dan teks2
	char teks1[10] , teks2[10];
	int jihdepan, jihkel, jihhuruf;
	
	//menamampilkan pesan u/ meminta masukan pengguna 
	cout << "Masukan Nama Depan Anda?: ";
	cin >> teks1;
	cout << "Masukan Nama Keluarga Anda?: ";
	cin >> teks2;
	//menghitung panjang teks
	jihdepan = strlen (teks1);
	jihkel = strlen (teks2);
	jihhuruf = jihdepan + jihkel;
	
	//menampilkan hasil ke pengguna 
cout << "Nama Lengkap Anda: " << teks1 << " " << teks2 <<
endl;
cout << "Jumlah Huruf Nama Anda: " <<jihhuruf << " Huruf"
<<endl;
   system ("PAUSE");
   return 0;
}
