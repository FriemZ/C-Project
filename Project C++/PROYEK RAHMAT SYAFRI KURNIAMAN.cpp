#include <iostream>
using namespace std;
int main ()
{
	int pil,r,phi;
	float K, L,s,P,l,a,b,c,t,V,Lp,La;
	string Ling,x,y;
    char bangun,ulang;
    
    
    do{
	system("cls");
    	system("color 5");
		cout<<"===============================================\n";
		cout<<"clue:";
     	cout<<"\nusername : Ayam apa yang biasa dicari orang? \npassword : Kaki seribu kalo belok kiri kakinya berapa? \n";
        cout<<"===============================================\n";
    	cout<<"SILAHKAN DICOBA : \n";
    
    	
        cout<<"Masukkan Username : ";
        getline(cin,x);
        cout<<"Masukkan Password : ";
        getline(cin,y);
    }while(x!="ayam hilang"||y!="1000");
     
	 system("cls");
     system("color 3");
    {
    	
    	cout<<"\n==============\n";
        cout<<"Berhasil Login\n";
        cout<<"==============\n";
       
    }
	do
  {
  	cout<<"Ingin mencari Bangun apa? \n1. Bangun Datar \n2. Bangun Ruang";
  	cout<<"\nMasukkan Pilihan : ";
  	cin>>pil;
  	system("cls");
  	
  	switch(pil){
  		case 1 :
  			system("color 2");
  			cout<<"===============================================\n";
            cout<<"|              < Bangun Datar >               |\n";
            cout<<"===============================================\n";
  		     cout<<"\nPILIHAN BANGUN DATAR  : \nA. Lingkaran \nB. Persegi \nC. Persegi Panjang \nD. Jajargenjang \nE. segitiga \n\n";
  cout << "TENTUKAN BANGUN DATAR YANG KALIAN CARI = ";
  cin >> bangun;
	
	
	
       switch (bangun){
       case 'A' :
           cout<<"\n=================Menghitung lingkaran================"<<endl;
	       cout<<"Apa yang anda cari \n1. Luas \n2. Keliling"<<endl;
	       cout<<"Tentukan pilihanmu : "; 
	       cin>>pil;
	
	        switch (pil){
		        case 1 :
			       cout<<"\nRumus :";
				   cout<<"L = phi x r x r\n"<<endl;
	    	       cout<<"r = ";
			       cin>>r;
		
			          phi = r%7;
			
			          if (phi==0){
				         L = (22 * r * r)/7;
				         cout<<"\nL = "<<L;
			             } else {
				         L = 3.14 * r * r;
				         cout<<"\nL = "<<L;
			             }
			       break;
	            case 2 :
	               cout<<"\nRumus :";
		           cout<<"K = 2 x phi x r\n"<<endl;
			       cout<<"r = ";
			       cin>>r;
			
	                  phi = r%7;
	
	                  if (phi==0){
	        	          K = (2 * 22*r)/7;
	        	          cout<<"\nK = "<<K;
	                      }else{
		                  K = 2 * 3.14 * r;
		                  cout<<"\nK = "<<K;
	                      }
			       break;
			       default:
    	          cout<<"\n\aMASUKKAN PILIHAN YANG BENER BGST!!!!";
    	         }
    	   break;
       case 'B':
           cout<<"\n=================Menghitung Persegi================"<<endl;
           cout<<"Apa yang anda cari \n1. Luas \n2. Keliling"<<endl;
	       cout<<"Tentukan pilihanmu : "; 
	       cin>>pil;
	
	    switch (pil){
		case 1 :
			cout<<"\nRumus :";
			cout<<"L = s x s\n"<<endl;
	    	cout<<"sisi = ";
			cin>>s;
		
		    L=s*s;
			cout<<"\nLuas = "<<L;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"K = 4S\n"<<endl;
	    	cout<<"sisi = ";
			cin>>s;
		
		    K=4*s;
			cout<<"\nKeliling = "<<K;
	    
			break;
			default:
    	    cout<<"\n\aMASUKKAN PILIHAN YANG BENER BGST!!!!";
}
      break;
  case 'C':
    cout<<"\n=================Menghitung Persegi Panjang================"<<endl;
	cout<<"Apa yang anda cari \n1. Luas \n2. Keliling"<<endl;
	cout<<"Tentukan pilihanmu : "; 
	cin>>pil;
	
	switch (pil){
		case 1 :
			cout<<"\nRumus :";
			cout<<"L = P x l\n"<<endl;
	    	cout<<"Panjang = ";
			cin>>P;
			cout<<"Lebar = ";
			cin>>l;
		
		    L=P*l;
			cout<<"\nLuas = "<<L;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"K = 2(P + l)\n"<<endl;
	        cout<<"Panjang = ";
			cin>>P;
			cout<<"Lebar = ";
			cin>>l;
			
		    K=2*(P+l);
			cout<<"\nKeliling = "<<K;
			
			break;
			default:
    	    cout<<"\n\aMASUKKAN PILIHAN YANG BENER BGST!!!!";
	}
	 break;
  case 'D':
    cout<<"\n=================Menghitung jajargenjang================"<<endl;
	cout<<"Apa yang anda cari \n1. Luas \n2. Keliling"<<endl;
	cout<<"Tentukan pilihanmu : "; 
	cin>>pil;
	
		switch (pil){
		case 1 :
			cout<<"Rumus :";
			cout<<"L = a x t\n"<<endl;
	    	cout<<"alas  = ";
			cin>>a;
			cout<<"tinggi = ";
			cin>>t;
		
		    L=(a*t);
			cout<<"\nLuas = "<<L;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"K = 2(A + B)\n"<<endl;
			cout<<"K = "<<endl;
	    	cout<<"a = ";
			cin>>a;
			cout<<"b = ";
			cin>>b;
			
		    K=2*(a+b);
			cout<<"\nKeliling = "<<K; 
			break;
			default:
    	    cout<<"\n\aMASUKKAN PILIHAN YANG BENER BGST!!!!";
		}
		 break;
  case 'E':
   cout<<"\n=================Menghitung Segitiga================"<<endl;
	cout<<"Apa yang anda cari \n1. Luas \n2. Keliling"<<endl;
	cout<<"Tentukan pilihanmu : "; 
	cin>>pil;
	
	switch (pil){
		case 1 :
			cout<<"\nRumus :";
			cout<<"L = 1/2 x a x t\n"<<endl;
	    	cout<<"alas  = ";
			cin>>a;
			cout<<"tinggi = ";
			cin>>t;
		
		    L=(a*t)/2;
			cout<<"\nLuas = "<<L;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"K = A + B + C\n "<<endl;
	    	cout<<"a = ";
			cin>>a;
			cout<<"b = ";
			cin>>b;
			cout<<"c = ";
			cin>>c;
		
		    K=a+b+c;
			cout<<"\nKeliling = "<<K;
			
			break;
			default:
    	    cout<<"\n\aMASUKKAN PILIHAN YANG BENER BGST!!!!";
       }
       break;
    default:
    	cout<<"\n\aMASUKKAN PILIHAN YANG BENER BGST!!!!";
       }
    break;
    
    case 2 :
    	    system("color 6");
    	    cout<<"===============================================\n";
            cout<<"|              < Bangun Ruang >               |\n";
            cout<<"===============================================\n";
    	  cout<<"PILIHAN BANGUN RUANG  : \nA. Bola \nB. Kubus \nC. Balok \nD. Tabung \nE. Kerucut \n\n";
  cout << "TENTUKAN BANGUN RUANG YANG KALIAN CARI = ";
  cin >> bangun;
	
	
	
       switch (bangun){
       case 'A':
           cout<<"\n=================Menghitung Bola================"<<endl;
	       cout<<"Apa yang anda cari \n1. Volume \n2. Luas Permukaan"<<endl;
	       cout<<"Tentukan pilihanmu : "; 
	       cin>>pil;
	
	        switch (pil){
		        case 1 :
			       cout<<"\nRumus :";
				   cout<<"V = 4/3 x phi x r x r x r \n"<<endl;
	    	       cout<<"r = ";
			       cin>>r;
		
			          phi = r%7;
			
			          if (phi==0){
				         V = (22 * r * r * r * 4)/21;
				         cout<<"Volume = "<<V;
			             } else {
				         V = (3.14 * r * r * r * 4)/3;
				         cout<<"Volume = "<<V;
			             }
			       break;
	            case 2 :
	               cout<<"\nRumus :";
		           cout<<"K = 4 x phi x r x r \n"<<endl;
			       cout<<"r = ";
			       cin>>r;
			
	                  phi = r%7;
	
	                  if (phi==0){
	        	          Lp = (4 * r * 22 *r)/7;
	        	          cout<<"Luas Permukaan = "<<Lp;
	                      }else{
		                  Lp = 4 * 3.14 * r * r;
		                  cout<<"Luas Permukaan = "<<Lp;
	                      }
			       break;
			   }
			   break;
       case 'B':
           cout<<"\n=================Menghitung Kubus================"<<endl;
            cout<<"Apa yang anda cari \n1. Volume \n2. Luas Permukaan"<<endl;
	       cout<<"Tentukan pilihanmu : "; 
	       cin>>pil;
	
	    switch (pil){
		case 1 :
			cout<<"\nRumus :";
			cout<<"V = s x s x s\n"<<endl;
	    	cout<<"sisi = ";
			cin>>s;
		
		    V=s*s*s;
			cout<<"Volume = "<<V;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"K = 6 x S x S\n"<<endl;
	    	cout<<"sisi = ";
			cin>>s;
		
		    Lp=6*s*s;
			cout<<"Luas Permukaan = "<<Lp;
	    
			break;
	}
	break;
  case 'C':
    cout<<"\n=================Menghitung Balok================"<<endl;
	 cout<<"Apa yang anda cari \n1. Volume \n2. Luas Permukaan"<<endl;
	cout<<"Tentukan pilihanmu : "; 
	cin>>pil;
	
	switch (pil){
		case 1 :
			cout<<"\nRumus :";
			cout<<"V = P x l x t\n"<<endl;
	    	cout<<"Panjang = ";
			cin>>P;
			cout<<"Lebar = ";
			cin>>l;
			cout<<"Tinggi = ";
			cin>>t;
		
		    V=P*l*t;
			cout<<"Volume = "<<V;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"Lp = 2(Pl + pt + lt)\n"<<endl;
	        cout<<"Panjang = ";
			cin>>P;
			cout<<"Lebar = ";
			cin>>l;
			cout<<"Tinggi = ";
			cin>>t;
			
		    Lp=2*(P*l + P*t +l*t);
			cout<<"Luas Permukaan = "<<Lp;
			
	        }
			break;
  case 'D':
    cout<<"\n=================Menghitung Tabung================"<<endl;
	 cout<<"Apa yang anda cari \n1. Volume \n2. Luas Permukaan"<<endl;
	cout<<"Tentukan pilihanmu : "; 
	cin>>pil;
	
		switch (pil){
		 case 1 :
			       cout<<"\nRumus :";
				   cout<<"V = 4/3 x phi x r x r x r \n"<<endl;
	    	       cout<<"r = ";
			       cin>>r;
			       cout<<"Tinggi = ";
			       cin>>t;
		
			          phi = r%7;
			
			          if (phi==0){
				         V = (22 * r * r * t)/7;
				         cout<<"Volume = "<<V;
			             } else {
				         V = 3.14 * r * r * t;
				         cout<<"Volume = "<<V;
			             }
			       break;
	            case 2 :
	               cout<<"\nRumus :";
		           cout<<"K = 4 x phi x r x r \n"<<endl;
			       cout<<"r = ";
			       cin>>r;
			       cout<<"Tinggi = ";
		           cin>>t;
			
	                  phi = r%7;
	
	                  if (phi==0){
	        	          Lp = (22*2*r*(r + t))/7;
	        	          cout<<"Luas Permukaan = "<<Lp;
	                      }else{
		                  Lp = (3.14*phi*r*(r+t));
		                  cout<<"Luas Permukaan = "<<Lp;
	                      }
			       break;
			   }
			   break;
  case 'E':
   cout<<"\n=================Menghitung Kerucut================"<<endl;
	 cout<<"Apa yang anda cari \n1. Volume \n2. Luas Permukaan"<<endl;
	cout<<"Tentukan pilihanmu : "; 
	cin>>pil;
	
	switch (pil){
		case 1 :
			cout<<"\nRumus :";
			cout<<"V = 1/3 x L.alas x t\n"<<endl;
	    	cout<<"L.alas  = ";
			cin>>La;
			cout<<"tinggi = ";
			cin>>t;
		
		    V=(La*t)/3;
			cout<<"Volume = "<<V;
			
			break;
		case 2 :
			cout<<"\nRumus :";
			cout<<"Lp = phi x r (r + s)\n "<<endl;
	        cout<<"r = ";
			cin>>r;
			cout<<"s = ";
			cin>>s;
			
	                  phi = r%7;
	
	                  if (phi==0){
	        	          Lp = (22* r * (r + s))/7;
	        	          cout<<"Luas Permukaan = "<<Lp;
	                      }else{
		                  Lp = (3.14 * r * (r + s));
		                  cout<<"Luas Permukaan = "<<Lp;
	                      }
			       break;
			   }
			   break;
    default:
    	cout<<"\nMASUKKAN PILIHAN YANG BENER BGST!!!!";
   }
    break;   
    default:
    	cout<<"PILIH YANG BENAR";
  	
}
    cout<<"\n==========================================";
   cout<<("\n\nIngin mencari bangun datar/ruang lain (y/t) ? \n");
   cout<<"pilihan : ";
   cin>>ulang;
    system("cls"); 
  }
  while (ulang == 'y' || ulang == 'Y');
  system("color 4");
 
   fflush(stdin);
  int i,j;

for(i=1;i<=22;i++){
         for(j=1;j<=60;j++){
         if(i==1) if(((j>=14)&&(j<=23))||((j>=39)&&(j<=48))) cout<<"*"; else cout<<" ";
         else if(i==2) if(((j>=11)&&(j<=26))||((j>=36)&&(j<=51))) cout<<"*"; else cout<<" ";
         else if(i==3) if(((j>=9)&&(j<=28))||((j>=34)&&(j<=53))) cout<<"*"; else cout<<" ";
         else if(i==4) if(((j>=7)&&(j<=30))||((j>=32)&&(j<=55))) cout<<"*"; else cout<<" ";
         else if((i>=5)&&(i<=8)) if((j>=5)&&(j<=57)) cout<<"*"; else cout<<" ";
         else if(i==9)  if((j>=7)&&(j<=55))  cout<<"*"; else cout<<" ";
         else if(i==10) if((j>=9)&&(j<=53))  cout<<"*"; else cout<<" ";
         else if(i==11) if((j>=11)&&(j<=51)) cout<<"*"; else cout<<" ";
         else if(i==12) if((j>=13)&&(j<=49)) cout<<"*"; else cout<<" ";
         else if(i==13) if((j>=15)&&(j<=47)) cout<<"*"; else cout<<" ";
         else if(i==14) if((j>=17)&&(j<=45)) cout<<"*"; else cout<<" ";
         else if(i==15) if((j>=19)&&(j<=43)) cout<<"*"; else cout<<" ";
         else if(i==16) if((j>=21)&&(j<=41)) cout<<"*"; else cout<<" ";
         else if(i==17) if((j>=23)&&(j<=39)) cout<<"*"; else cout<<" ";
         else if(i==18) if((j>=25)&&(j<=37)) cout<<"*"; else cout<<" ";
         else if(i==19) if((j>=27)&&(j<=35)) cout<<"*"; else cout<<" ";
         else if(i==20) if((j>=29)&&(j<=33)) cout<<"*"; else cout<<" ";
         else if(i==21) if((j>=30)&&(j<=32)) cout<<"*"; else cout<<" ";
         else if(i==22) if(j==31) cout<<"*"; else cout<<" ";
      }
      cout<<"\n";
   }
  cout<<("\nTERIMA KASIH \nJangan lupa follow ig : rhmt_syf");
 }
