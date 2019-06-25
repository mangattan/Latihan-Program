#include <iostream>

using namespace std;

int main()
{
	int alas, sisi_miring, Keliling;
	
	cout<<"Menghitung Keliling Jajargenjang\n";
	cout<<"Masukan Panjang Alas\t\t: ";
	cin>>alas;
	cout<<"Masukan Panjang Sisi Miring\t: ";
	cin>>sisi_miring;
	
	Keliling=2*(alas+sisi_miring);
	cout<<"Keliling\t\t\t: " <<Keliling<<endl;
	return 0;

}
