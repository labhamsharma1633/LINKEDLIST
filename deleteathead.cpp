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


    };
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
            
        }
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
    };
    void insertAtIdx(int idx,int val){
        if(idx==0 || idx>size){
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
    void deleteAtHead(){
        if(size==0){
            cout<<"list is empty";
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int Idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(Idx<0 || Idx>=size){
            cout<<"Invalid index";
            return;
        }
        else if(Idx==0) return deleteAtHead();
        else if(Idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=Idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
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
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();

    return 0;
}