#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    // selection sort algorithm.
    // Temp variable is used.
    for(int i=0; i<=n-1; i++){
        int mini=i;
        for(int j=i; j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
void bubble_sort(int arr[], int n){
    //Bubble sorting algorithm.
    // Temp variable is used.
    
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void insertion_sort(int arr[], int n){
    //Insertion sorting algorithm.
    //Temp Variable is used. 

    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];//array taken from user. 
    for(int i=0; i<n; i++){ 
        cin>>arr[i];
    }   
    selection_sort(arr,n);
    //using selction sort to sort the array.
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        
    }
    
