#include <iostream>
#include<iomanip>
using namespace std;

int main(){
  string mobil[4]={"avanza","pajero","lamborgini","ferari"};
  int n,m,harga[4]={400,800,1000,1100},total[4];
  char ulang;
  
  do{system("cls");
  cout<<"Pilih : \n1. avanza\n2. pajero\n3. lamborgini\n4. ferari\n";
  cout<<"Masukkan pilihan      = ";
  cin>>n;
  cout<<"Masukkan Banyak mobil = ";
  cin>>m;
  
  total[n-1]=m*harga[n-1];
  
  system("cls");
  system("color A");
  cout<<"\n=========================================\n";
  cout<<"Kwitansi Pembayaran\n";
  cout<<"=========================================\n";
  cout<<"Mobil        :"<<mobil[n];
  cout<<"\nHarga        :"<<harga[n-1]<<"Jt";
  cout<<"\nJumlah Mobil :"<<m;
  cout<<"\nTotal        :"<<total[n-1]<<"Jt";
  cout<<"\n=========================================\n";
  cout<<setw(40)<<"Hormat kami : PT. FrieamZ\n";
  
 cout<<"\nIngin memilih lagi (y/n)?\npilih = ";
 cin>>ulang;
}while(ulang =='y' || ulang =='Y');
cout<<"Mator Thank You";
}
