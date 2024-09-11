// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;

//     }

// };
// class LinkedList{
//     public:
//     Node*head;
//     Node*tail;
//     int size=0;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insertAtEnd(int val){
//         Node* temp=new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;

//         }
//         size++;

//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;

//     }

// };




// int main(){
//     LinkedList list;
//     list.insertAtEnd(1);
//     list.display();

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// class LinkedList{
//     public:
//     Node* head;
//     Node* tail;
//     int size=0;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;

//     }
//     void InsertAtHead(int val){
//         Node* temp=new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             temp->next=head;
//             head=temp;
//         }
//         size++;

//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     LinkedList ll;
//     ll.InsertAtHead(20);
//     ll.display();
//     ll.InsertAtHead(40);
//     ll.display();
//     ll.InsertAtHead(50);
//     ll.display();
//     ll.InsertAtHead(70);
//     ll.display();

//     return 0;
// }
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
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
        if(size==0) head=tail=temp;
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
        if(idx<0||idx>size) cout<<"Invalid index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
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
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        Node* temp=head;
        if(size==0){
            cout<<"list is empty";
            return;}
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        Node* head;
        Node* tail;
        if(idx=0 || idx>=size){
            cout<<"Lisst is empty";
            return;
        }
        if(idx<0||idx>=size){
            cout<<"invalid idx";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
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
    ll.display();
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtHead(30);
    ll.display();
    ll.insertAtTail(90);
    ll.display();
    ll.insertAtIdx(1,60);
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    
    

    return 0;
}