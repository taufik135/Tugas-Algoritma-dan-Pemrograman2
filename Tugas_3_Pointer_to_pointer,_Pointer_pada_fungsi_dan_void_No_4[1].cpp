
 Open this file in GitHub Desktop 
  Fork this project and edit the file 
 
  Fork this project and delete the file 
 

1 #include<iostream> 
2 using namespace std; 
3 
 
4 void kuadrat(int *b){	//fungsi pointer kuadrat 
5 	*b=(*b) * (*b); 
6 } 
7 
 
8 int main(){ 
9 	int a = 5; 
10 	cout<<"nilai a = "<<a<<endl;	//menamplkan nilai a sebelum fungsi kuadrat dipanggil 
11 	kuadrat(&a);	//memanggil fungsi pointer kuadrat 
12 	cout<<"nilai a = "<<a<<endl;	//menamplkan nilai a setelah fungsi kuadrat dipanggil 
13 	 
14 	return 0; 
15 } 

