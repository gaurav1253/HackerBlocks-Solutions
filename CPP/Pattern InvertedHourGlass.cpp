// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<n-j<<" ";
		}
		for(int j=0;j<4*(n-i)-2;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<n-i+j<<" ";
		}
		cout<<"\n";
	}
	for(int i=n;i>=0;i--){
		for(int j=0;j<=i;j++){
			cout<<n-j<<" ";
		}
		for(int j=0;j<4*(n-i)-2;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			if(n-i+j!=0){
				cout<<n-i+j<<" ";
			}
			
		}
		cout<<"\n";
	}
	return 0;
}
