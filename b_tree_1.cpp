#include<iostream>
using namespace std;

struct Node{
    int data;
    int data2;
    int data3;
    Node *next1;
    Node *next2;
    Node *next3;
};

class LinkedList{
private:
Node *head;   // it has 2 data and 3 linked list

public:

LinkedList(){
    head=NULL;
}

 void addNodeAtFront(int data,int data2,int data3){
        Node *n = new Node;
        n->data = data;
        n->data2 = data2;
        n->data3 = data3;
        n->next = head;
        head = n;
    }


};

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){

    }

}