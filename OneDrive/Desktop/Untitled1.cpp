#include <iostream>
using namespace std;

int main(){
	
	
	int num{100};
	int num1{500};
	cout<<"Local num is :"<<num<<" in main"<<endl;
	
	{int num{200};
	cout<<num<<endl;
	cout<<num1<<endl;
	}
	cout<<num<<endl;
return 0;	
}
