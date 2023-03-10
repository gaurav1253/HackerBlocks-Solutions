#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    
    vector<int>ans;
    
    stack<int>s;
    
    s.push(-1);
    
    for(int i=n-1;i>=0;i--){
        s.push(i);
    }
    
    for(int i=n-1;i>=0;i--){
        
        while(!s.empty() && s.top()!=-1 && arr[s.top()]<=arr[i])s.pop();
        
        ans.push_back(s.top());
        
        s.push(i);
        
    }
    
    reverse(ans.begin(),ans.end());
    
    for(int i=0;i<n;i++){
        if(ans[i]!=-1)
        cout<<arr[ans[i]]<<" "; 
        
        else{
            cout<<-1<<" ";
        }
    }cout<<endl;
    

    return 0;
}
