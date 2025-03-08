#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1)
    return n;
    else 
    return fibonacci(n-1)+fibonacci(n-2);

}
int fib(int e){
    if(e==1||e==2)
    return 1;
    else 
    return fib(e-1)+fib(e-2);
}
int main(){
    int n,s;
    cin>>n>>s;
    for(int i=0; i<n; ++i){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    if(s<1)
    cout<<s<<endl;
    else 
    cout<<"Element number is "<<fib(s);

    return 0;
}