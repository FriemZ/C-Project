#include <iostream>
using namespace std;
int main(){
	
	string pil,nama[3]={"Syafri","Selvi","Ami"};
	int n,nilai[3]={98,80,75};
	cout<<"pilihan Siswa : \n1. Syafri\n2. Selvi \n3. Ami\n";
	
	cout<<"pilih angka = ";
	cin>>n;
	
	cout<<"\nNama["<<n<<"] ="<<nama[n-1];
	cout<<"\nNilai["<<n<<"] ="<<nilai[n-1];
}
