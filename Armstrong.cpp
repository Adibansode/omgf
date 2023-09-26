#include <iostream>
using namespace std;

int main(){
	int num,a,result=0;
	cout<<"enter the no:";
	cin>>num;
	while(num!=0){
		a=num%10;
		result=num/10;
		result+=a*a*a;
	}
	if(num==result){
		
	cout<<num<<"num is armstrong";
	}
	else{
		
	cout<<num<<"num is not armstrong";
	}
	return 0;
	
}
