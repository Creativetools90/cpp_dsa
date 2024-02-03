#include <iostream>
using namespace std;

class Node{
public:

int data;
Node*next;
//make a head
Node*head = NULL;
Node*tmp = NULL;

void createNode(){
Node *n = new Node();
//get node data value
cout<<"enter node data";
cin>>n->data;
n->next = NULL;

//give a node next add to head
if(head == NULL){
head = n;
}

//do listing 
else{
tmp = head;
while(tmp->next != NULL){
tmp = tmp->next;
}

tmp->next = n;
tmp = NULL;

}


};

void print(){
tmp = head;
while(tmp != NULL){
cout<<tmp->data<<"->";
tmp = tmp->next;

}

cout<<endl;
}
};

int main(){
Node node;
node.createNode();
node.createNode();
node.createNode();
node.createNode();
node.createNode();
node.print();

return 0;
}