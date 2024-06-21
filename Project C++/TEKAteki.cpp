#include <iostream>
#include <conio.h> 
#include <time.h>
#include <stdlib.h>

using namespace std;

void play();
void instructions();

int main(){
	//random no generation
	srand( (unsigned)time(NULL) );
	
	char opsi;
	
	do{
		system("cls");
		cout<<"-----------------------------------"<<endl;
		cout<<"           GAME MATEMATIKA		  "<<endl;
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"1. Main"<<endl;
		cout<<"3. Keluar"<<endl<<endl;
		cout<<"Pilih : ";
		cin>>opsi;
	
		switch(opsi){
			case '1':
				play();
				break;
		}
	}while(opsi != '2');
	
	return 0;
}

void play(){ 
	 string x;
	 char opsi;
	 
	 system("cls");
	 cout<<"-----------------------------------"<<endl;
	 cout<<"          GAME MATEMATIKA		   "<<endl;
	 cout<<"-----------------------------------"<<endl<<endl;
	 cout<<"1. Soal 1"<<endl;
	 cout<<"2. Soal 2"<<endl;
	 cout<<"3. Soal 3"<<endl;
	 cout<<"4. Soal 4"<<endl;
     cout<<"5. Soal 5"<<endl;
	 cout<<"6. Kembali ke Menu"<<endl<<endl;
	 cout<<"Pilih : ";
	 cin>>opsi;

	 switch(opsi){
		case '1': 
		  do{
	    system("cls");
	    cout<<"SOAL 1\n";
    	system("color 5");
		cout<<"===============================================\n";
     	cout<<"\n";
        cout<<"===============================================\n";
    	cout<<"SILAHKAN DICOBA : \n";
        cout<<"Masukkan Username : ";
        getline(cin,x);
       
         }while(x!="ayam hilang");
		break;
		case '2':  do{
	    system("cls");
	    cout<<"SOAL 2\n";
    	system("color 5");
		cout<<"===============================================\n";
     	cout<<"\n";
        cout<<"===============================================\n";
    	cout<<"SILAHKAN DICOBA : \n";
        cout<<"Masukkan Username : ";
        getline(cin,x);
       
         }while(x!="ayam hilang");
         break;
         
		case '3':  do{
	    system("cls");
	    cout<<"SOAL 3\n";
    	system("color 5");
		cout<<"===============================================\n";
     	cout<<"\n";
        cout<<"===============================================\n";
    	cout<<"SILAHKAN DICOBA : \n";
        cout<<"Masukkan Username : ";
        getline(cin,x);
       
         }while(x!="ayam hilang");
         
         case '4':  do{
	    system("cls");
	    cout<<"SOAL 4\n";
    	system("color 5");
		cout<<"===============================================\n";
     	cout<<"\n";
        cout<<"===============================================\n";
    	cout<<"SILAHKAN DICOBA : \n";
        cout<<"Masukkan Username : ";
        getline(cin,x);
       
         }while(x!="ayam hilang");
         
         case '5':  do{
	    system("cls");
	    cout<<"SOAL 5\n";
    	system("color 5");
		cout<<"===============================================\n";
     	cout<<"\n";
        cout<<"===============================================\n";
    	cout<<"SILAHKAN DICOBA : \n";
        cout<<"Masukkan Username : ";
        getline(cin,x);
       
         }while(x!="ayam hilang");
         
		case '6': 
		break;
		 
		 system("pause");

	 }
}
