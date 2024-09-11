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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;

    }
    void insertAtHead(int val){
       Node* temp=head;
       if(size==0) head=tail=temp;
       else{
        temp->next=head;
        head=temp;
       }
       size++;

    }
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};




int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.Display();
    return 0;
}