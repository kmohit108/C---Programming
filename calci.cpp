#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Select operator -"<<endl;
    cout<<"Press 1 for addition\n";
    cout<<"Press 2 for subtraction\n";
    cout<<"Press 3 for multiply\n";
    cout<<"Press 4 for division\n";
    cin>>a;
    if (a==1){
        cout<<"enter two numbers"<<endl;
        cin>>b>>c;
        d=b+c;
        cout<<"your sum is :"<<d<<endl;
    }
    else if (a==2) {
        cout<<"enter two numbers"<<endl;
        cin>>b>>c;
        d=b-c;
        cout<<"your diffrence is :"<<d<<endl;
    }
    else if (a==3) {
        cout<<"Enter two numbers"<<endl;
        cin>>b>>c;
        d=b*c;
        cout<<"your product is :"<<d<<endl;
    }
    else if (a==4) {
        cout<<"enter two numbers"<<endl;
        cin>>b>>c;
        d=b/c;
        cout<<"your division is :"<<d<<endl;
    }
    else {
        cout<<"invalid opertor"<<endl;
    }
     return 0;
}