#include<iostream>
using namespace std;
class Node{   //LINKEDLIST NODE;
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
};
int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming linkdelist
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // out<<(((a.next)->next)->next)->val;
    // cout<<*(*(*(a.next)->next).next).val;c
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);


    }
    



    return 0;
}