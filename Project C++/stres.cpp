#include <iostream>
using namespace std;
int main(){
	
	int pil,Un,a=1;
	char ulang;
	do{    
	        cout<<"===============================================\n";
            cout<<"|        < Tugas Asistensi Praktikum >        |\n";
            cout<<"===============================================\n";
           
	       cout<<"\nApa yang anda cari \n1. Program Ganjil \n2. Program Genap \n3. Program Ganjil & Genap\n";
	       cout<<"Tentukan pilihanmu : "; 
	       cin>>pil;
		   
		   if(pil==1){
		   	for(a; a<=Un; a++){
	            if(a%2!=0)
		            cout<<" "<<a<<endl;}
		   }
		   if(pil==2){
		    for(a; a<=Un; a++){
	            if(a%2==0)
		            cout<<" "<<a;}
		   }
		   if(pil==3){
		   	for(a; a<=Un; a++){
			   if (a % 2 == 0){
           cout << "Bilangan " << a << " adalah genap." << endl;
             }else{
              cout << "Bilangan " << a << " adalah ganjil." << endl;
                }
            }
		   }
	cout<<"\nMasukkan batas akhir Bilangan :";
	cin>>Un;
    cout<<"\n\nINGIN MENCOBA LAGI (Y/N) ?\n";
cout<<"Pilih =";
cin>>ulang;
system("cls"); 
}while (ulang=='y' || ulang=='Y');
 
cout<<"MATOR THANK YOU\nJANGAN LUPA FOLLOW IG : rhmt_syf";
}


	cout<<"pilih angka = ";
	cin>>n;
	system("cls");
	cout<<"\nNama["<<n<<"]      ="<<nama[n-1];
	cout<<"\nNPM["<<n<<"]       ="<<npm[n-1];
	cout<<"\nUTS["<<n<<"]       ="<<uts[n-1];
	cout<<"\nUAS["<<n<<"]       ="<<uas[n-1];
	cout<<"\nRata-rata["<<n<<"] ="<<x[n-1];
	cout<<"\nStatus["<<n<<"]    ="<<status[n-1]<<endl;
		   
