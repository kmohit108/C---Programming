#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"array are"<<endl;
    for(int i=0; i<n; i++){
        
        cin>>arr[i];
        
    }
    cout<<"array end here"<<endl;
    //precompute
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;
    }
    cout<<"number of queries"<<endl;
    int q;
    cin>>q;
    cout<<"loop starts"<<endl;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<"appears:- "<<hash[num];
    }
}