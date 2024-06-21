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
		cout<<"2. Instruksi"<<endl;
		cout<<"3. Keluar"<<endl<<endl;
		cout<<"Pilih : ";
		cin>>opsi;
	
		switch(opsi){
			case '1':
				play();
				break;
			case '2':
				instructions();
				break;
		}
	}while(opsi != '3');
	
	return 0;
}

void play(){ 
	 int level, limit;
	 char opsi;
	 
	 system("cls");
	 cout<<"-----------------------------------"<<endl;
	 cout<<"          GAME MATEMATIKA		   "<<endl;
	 cout<<"-----------------------------------"<<endl<<endl;
	 cout<<"1. Level 1"<<endl;
	 cout<<"2. Level 2"<<endl;
	 cout<<"3. Level 3"<<endl;
	 cout<<"4. Kembali ke Menu"<<endl<<endl;
	 cout<<"Pilih : ";
	 cin>>opsi;

	 switch(opsi){
		case '1': limit = 10; break;
		case '2': limit = 20; break;
		case '3': limit = 100; break;
		case '4': break;
	 }
	 
	 float q1, q2, ans, correctAns;
	 int correctNo = 0, totalNo;
	 char operation;
	 totalNo = 5;
	 
	 if( opsi != '4' ){
		 for(int i=0; i<totalNo; i++){
		 	q1 = rand()%limit;
		 	q2 = rand()%limit;
		 	
		 	int tmpOp = rand()%3;
	 		switch(tmpOp){
			      case 0:operation = '+'; break;
				  case 1: operation = '-'; break;
				  case 2:operation = '*'; break; 
	 		}
	 		
		 	cout<<"("<<(i+1)<<"). ";
		 	cout<<q1<<" "<<operation<<" "<<q2<<" = ";
		 	
			cin>> ans;
			
			switch(operation){
			      case '+': correctAns = q1 + q2; break;
				  case '-': correctAns = q1 - q2; break;
				  case '*': correctAns = q1 * q2; break; 
	 		}
			
			if( correctAns == ans ){
				correctNo++;
				cout<<"Benar."<<endl<<endl;
			}
			else{
				cout<<"Salah."<<endl;
		 		cout<<q1<<" "<<operation<<" "<<q2<<" = ";
			 	cout<<correctAns<<endl<<endl;
			}
		 }
		 
		 cout<<"Total: "<<totalNo<<endl;
		 cout<<"Benar : "<<correctNo<<endl<<endl;
		 
		 system("pause");
		 getch();
	 }
}

void instructions(){
	system("color 4");
	system("cls");
	cout<<"-----------------------------------"<<endl;
	cout<<"            Instruksi  			  "<<endl;
	cout<<"-----------------------------------"<<endl<<endl;
	cout<<"1. Game Ini Berisi Dasar-Dasar Permasalahan Aritmatika"<<endl;
	cout<<"2. Ketika Menjawab Benar akan Mendapat 1 Poin"<<endl;
	cout<<"3. Total Pertanyaan 5 soal"<<endl;
	cout<<"4. Untukn Menang, Kamu harus Menjawab benar => 3"<<endl;
	cout<<endl;
	
	system("pause");
}
