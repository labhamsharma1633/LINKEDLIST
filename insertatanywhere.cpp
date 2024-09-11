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
    int size=0;
    LinkedList(){
        head=tail=NULL;
        size=0;

    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0){head=tail=temp;}
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;

    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"INVALID INDEX"<<endl;
            return;
        }
        else if(idx==0){
            insertAtHead(val);
            
        }
        else if(idx==size){
            insertAtTail(val);
            
        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;

        }

    }




    void display(){
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
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.display();
    ll.insertAtIdx(0,60);
    ll.display();
    ll.insertAtHead(90);
    ll.display();
    
    return 0;
}