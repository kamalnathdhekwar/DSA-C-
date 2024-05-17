#include <bits/stdc++.h>
using namespace std;

class Node{

    public :
    int data ;
    Node* next;

    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

void InsertAtHead(Node* &head ,int data){

    // create a new node ;
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void InsertAtTail(Node* &tail , int data){

    Node* temp =  new Node(data);
    tail -> next = temp;
    tail = temp;

}

void InsertAtMiddle(Node* &head, Node* &tail, int position , int data){

    // insert at the first possition 
    if(position==1){
        InsertAtHead(head,data);
        return;
    }
    
    Node* temp = head;
    int count = 1;

    while(count<position-1){
        temp = temp -> next;
        count++;
    }
    

    // insert at the last // tail position
    if(temp -> next==NULL){
        InsertAtTail(tail,data);
        return;
    }

    // create a node for the data

    Node* NodetoInsert = new Node(data);

    NodetoInsert -> next = temp -> next;
    temp -> next = NodetoInsert;
}

void print(Node* &head){
   Node* temp = head;

   while(temp != NULL){
    cout<<temp -> data <<" ";
    temp = temp -> next;
   }

   cout<<endl;

}

int main(){

    // created a new node 
    Node* node1 = new Node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next;

    Node* head = node1;
    Node* tail = node1;
   
    print(head);
    // InsertAtHead(head,12);
    // InsertAtHead(head,16);
    // print(head);

    //    output : 
    //    10 
    //    16 12 10
    
    // InsertAtTail(tail,12);
    // print(head);
    // InsertAtTail(tail,16);
    // print(head);
    
    // op :
    // 10 
    // 10 12
    // 10 12 16

    // ********** insert at middle ****;

    InsertAtHead(head,12);
    InsertAtHead(head,16);
    print(head);

    InsertAtMiddle(head,tail,4,9);

    print(head);
     

    //  op:
    //  16 12 10
    // 16 12 9 10

    // updated value of head and tail
    cout<<head->data<<" "<<tail->data;
}

