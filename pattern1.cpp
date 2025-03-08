#include <iostream>
using namespace std;
int main(){
    cout<<"pattern 1"<<endl;
    for(int i=1; i<=5;i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"pattern 2"<<endl;
    for(int i=1; i<=5;i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pattern 3"<<endl;
    for(int i=1; i<=5;i++){
        for(int j=1; j<=5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pattern 4"<<endl;
    for(int i=1; i<=5;i++){
        for(int j=1; j<=5; j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"pattern 5"<<endl;
    for(int i=1; i<=5;i++){
        for(int j=0; j<i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"pattern 6"<<endl;
    for(int i=0; i<5;i++){
        for(int j=5; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pattern 7"<<endl;
    for(int i=1; i<=5;i++){
        for(int j=5; j>=i; j--){
            cout<<5-j+1;
        }
        cout<<endl;
    }
    cout<<"pattern 8"<<endl;
    for(int i=0; i<5;i++){
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"pattern 9"<<endl;
    for(int i=0; i<5;i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*5-(2*i +1) ; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"pattern 10"<<endl;
    for(int i=0; i<5;i++){
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<5;i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*5-(2*i +1) ; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"pattern 11"<<endl;
    for(int i=1; i<=4;i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<5;i++){
        for(int j=5; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pattern 12"<<endl;
    

    
}