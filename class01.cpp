#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};



int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // cout<<a.val<<endl<<a.next<<endl<<&a;
    // forming linkdlist
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<(*(a.next)).val;
    cout<<endl;
    cout<<a.next->val; //this print tha value at b;
    cout<<b.next->val;
    cout<<endl<<(*(b.next)).val;
    cout<<endl;
    cout<<(a.next->next->next)->val;
    cout<<a.val;
    cout<<endl;
    cout<<(a.next)->val;
    cout<<endl;
    cout<<(a.next->next)->val;
    cout<<(a.next->next->next)->val;

    return 0;
}