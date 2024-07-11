#include<iostream>
using namespace std;

/*class Node{
    public:
    int data;
    Node* next;

    Node(val){
        data= val;
        next=NULL;
    }
}

void insertAtHead(Node* &head, int val){
    Node* n= new Node(val);

    if(head == NULL){
        n -> next =n;
        head = n;
        return;
    }
    Node*temp = head;
    while(temp->next != head){
        temp = temp->next;


    }
    temp->next = n;
    n->next = head;
    head =n;
}

void display(Node* &head){
    Node* temp = head;

    while(temp!= head){
        cout<< temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void insertAtTail(Node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    Node* temp= head;
    Node* n = new Node(val);
    while(temp->next != head){
        temp= temp->next;
    }
    temp->next = n;
    n->next = head;
}

int main(){
    Node* head=NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);

    display(head);
}*/
//doubly linkedlist

Node* kReverse(Node* head, int k){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = head;
}
bool isCircular(Node* head){
    if(head==NULL) return true;

    Node* temp= head;
    while(temp!= NULL && temp!= head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}
//detect a loop and remove in linkedlist.

Node* getStartingNode(Node* head){
    if(head==NULL)
    return NULL;
Node* intersection = floydDetectLoop(head);

Node* slow = head;

while(slow!=intersection){
    slow=slow->next;
    intersection=intersection->next;
}
return false;
}
//remove loop
void removeLoop(Node* head){
    if(head==NULL)
    return;

Node* startOfLoop = getStartingNode(head);

Node* temp = startOfLoop;

while(temp!=next != startOfLoop){
    temp=temp-> != startOfLoop;
}
temp->next = NULL;
}

int main(){
    Node* head=NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);

    display(head);
}