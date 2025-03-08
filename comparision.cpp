#include <iostream>
using namespace std;
int main()
{
    int a,b;//taking two integer value to perform action
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    //comparision start from here.
    if (a>b){
        cout<<a<<" is greater"<<endl;
    }
    else if (b>a) {
        cout<<b<<" is greater"<<endl;
    }
    else{
        cout<<"a and b is equal"<<endl;
    }
    //comparision ends here.
    
    return 0;
}