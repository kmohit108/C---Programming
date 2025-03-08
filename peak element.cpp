#include <iostream>
using namespace std;
int main()
{
    int a[4]={5,10,20,15};
    int peak=0;
    for(int i=1; i<3; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            peak=a[i];
        }
        else {
            i++;
        }
    }
   cout<<peak<<endl;
    return 0;
    
}