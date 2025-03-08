#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
}
    Node* (data1 , next1){
        data=data1;
        next=next1;
    }

Node* ConvertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover->temp;
    }
    return head;
}
int main(){
    vector<int> arr={12,5,8,7};
    Node* head=ConvertArr2LL(arr);
    cout<<head->data;
}

