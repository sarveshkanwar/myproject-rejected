#include <iostream>
using namespace std;


/*void swoop(int f, int g){      //CALL BY VALUE

int t;
t=f;
f=g;
g=t;}


int main(){
	
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<b;*/
	
	//CALL BY ADDRESS
	
/*void swap(int &x, int &y)
{int z;
z=x;
x=y;
y=z;
	}	
	int main(){
		int a,b;
		cin >>a>>b;
		cout<<a<<b;
		swap(a,b);
		cout<<a<<b;
		
		
		
		
		return 0;
	}*/
	
	
	//CALL BY REFERENCE
/*	void swap(int *x,int *y){
		
		int z;
		z=*x;
		*x=*y;
		*y=z;
	}
	int main(){
		int a,b;
		cin>>a>>b;
		cout<<a<<b;
		swap(&a,&b);
		cout<<a<<b;
		
		
		
		return 0;
	}*/
	
	void grade(char x ,char y='H', char z='A'){
		cout<<x<<" "<<y<<" "<<z;
	}
	int main(){
		grade('B','C','D');
		grade('V');
	
	}
	
	
