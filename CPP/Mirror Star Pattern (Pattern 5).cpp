//       *
//    *  *  *  
// *  *  *  *  *  
//    *  *  *
//       *
      
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int incre=0;
	for(int i=0;i<=n/2;i++){
		for(int j=0;j<n/2-i;j++){
			cout<<"\t";
		}
		for(int j=0;j<=(2*i);j++){
			cout<<"*\t";
		}
		incre=2;
		cout<<"\n";
	}
	int k=0;
	for(int i=n/2;i>0;i--){
		for(int j=0;j<2+k-1;j++){
			cout<<"\t";
		}
		for(int j=(2*i)-1;j>0;j--){
			cout<<"*\t";
		}
		k++;
		cout<<"\n";
	}
	return 0;
}
