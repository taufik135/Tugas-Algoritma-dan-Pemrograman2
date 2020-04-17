1 #include<iostream> 
2 using namespace std; 
3 
 
4 
 
5 int main(){ 
6 	int x,y,z; 
7 	int dus[3][3]={{2,4,6},{8,10,12},{14,16,18}};	 
8 	cout<<"Jumlah dus = 9"<<endl; 
9 	cout<<"nomor dus = "; 
10 	for(int a=0;a<=8;a++){ 
11 		cout<<(a+1)*2<<" "; 
12 	} 
13 	cout<<"\n"; 
14 	z=1; 
15 	for(x=0;x<3;x++){ 
16 		for(y=0;y<3;y++){ 
17 			cout<<"Nomor dus "<<z++<<" : "<<dus[x][y]<<endl; 
18 		} 
19 	} 
20 } 

