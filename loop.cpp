#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        if(k>=a[i])
        {
            cout<<"1";
            k=k-a[i];
        }
        else
        cout<<"0";
    }
    cout<<endl;
    return 0;
}