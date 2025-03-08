#include <iostream>
using namespace std;
int reverse(int x){
    int rev=0;
    while(x>0){
        rev=rev*10+x%10;
        x=x/10;
    }
    return x;
}
int main(){
    int c=123;
    cout<<reverse(c); // revierse will show the [pattern to avoid ligid tool ]
    return 0;
}