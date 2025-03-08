#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6]={2,4,1,6,8,5};
    int mini=a[0];
    int maxi=a[1];
    for(int i=2; i<6; i++){
        if(a[i]<mini){
            mini=min(a[i],mini);
        }
        else if(a[i]>maxi){
            maxi=max(a[i],maxi);
        }
        else {
            break;
        }
    }
    cout<<"maximum value is "<<maxi<<endl;
    cout<<"minimum value is "<<mini<<endl;
    return 0;
}