#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,s=0,d;
	cout<<"enter any integer:"<<endl;
	cin>>n;
	while(n>0){
	   d=n%10;
	   n=n/10;
	   s=s+d;
	}
	cout<<"sum is="<<s<<endl;
	return 0;
}
