#include <iostream>
using namespace std;
int  main()
{
	
	char kt[10]; 
	
	cout<<"MASUKKAN KATA = ";
	cin>>kt;
	
	int a,b,c;
	
	cout<<"\nHasil penghapusan huruf per huruf : \n\n";
	 
/*while*/
a=0;
while (a <=10){
c=0+a; 
for(b=c; b<=10; b++){ cout<<kt[b]; 
}cout<<endl;
a++;
}
	 
	 /*for
	for(a=0; a<=10; a++){ 
	c=0+a; for(b=c; b<=10; b++){ cout<<kt[b]; } cout<<endl; 
	}*/

}

