#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int matriks[100][100];
	int jbaris,jkolom,a,j;
	
	cout<<"Masukkan jmlh Baris = ";
	cin>>jbaris;
	cout<<"Masukkan jmlh Kolom = ";
	cin>>jkolom;


system("cls");
system("color 7");
	for(a=0; a < jbaris;a++){
		for(j=0; j<jkolom ;j++){
			cout<<"Baris "<<a+1<<", Kolom "<<j+1<<" = ";
			cin>>matriks[a][j];
		}cout<<endl;
	}

system("pause");
	cout<<"hasil matrik\n";
		for(a=0; a < jbaris;a++){
		for(j=0; j<jkolom;j++){
			cout<<matriks[a][j]<<" ";
		}cout<<endl;
	}
	
}


