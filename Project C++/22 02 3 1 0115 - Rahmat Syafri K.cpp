#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string npm[40],nama[40],status[40],kls;
	int n,p,uts[40],uas[40];
	float x[40];
     
	cout<<"Masukkan Kelas            = ";
	getline(cin,kls);                                                                                                                                                                 
	cout<<"Masukkan Jumlah Mahasiswa = ";
	cin>>n;

    system("cls");
    system("color 3");
	for (int a=0; a<n; a++){
		cin.ignore();
		cout<<"Mahasiswa ke-"<<a+1<<endl;
		cout<<"Masukan Nama      = ";
		getline(cin,nama[a]);
		cout<<"Masukkan NPM      = ";
		cin>>npm[a];
		cout<<"Masukan Nilai UTS = ";
		cin>>uts[a];
		cout<<"Masukan Nilai UAS = ";
		cin>>uas[a];
		cout<<endl;
	
        x[a]=(uts[a]+uas[a])/2;
	 
		if (x[a]>=70 && x[a]<=100){
		 	status[a]="LULUS";
		}else if(x[a]<70 && x[a]>=0){
			status[a]="TIDAK LULUS";
		}else{
			status[a]="Diluar Nalar";
		}
	}
	cout<<"pilih Data ke = ";
	cin>>p;
	
	system("cls");
	cout<<"\nNama["<<p<<"]      = "<<nama[p-1];
	cout<<"\nNPM["<<p<<"]       = 22 02 3 1 "<<npm[p-1];
	cout<<"\nUTS["<<p<<"]       = "<<uts[p-1];
	cout<<"\nUAS["<<p<<"]       = "<<uas[p-1];
	cout<<"\nRata-rata["<<p<<"] = "<<x[p-1]<<endl;
	cout<<status[p-1]<<endl<<endl;
	
    system("pause");
	system("color A");
	system("cls");
	cout<<"Daftar Mahasiswa "<<kls<<endl;
	cout<<"===============================================\n";
    cout<<"|          |Data Kelulusan Mahasiswa|         |\n";
    cout<<"===============================================\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"No          NPM                      Nama                           Nilai UTS            NIlai UAS          Rata-rata               Status"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int a=0; a<n;a++){
	cout<<a+1<<"|    22 01 3 1 "<<npm[a]<<setw(25)<<nama[a]<<setw(28)<<uts[a]<<setw(20)<<uas[a]<<setw(20)<<x[a]<<setw(25)<<status[a]<<"|";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}

}
