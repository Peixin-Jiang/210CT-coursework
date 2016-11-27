#include<iostream>
using namespace std;
//Nodes and lists use public data members for convenience
//This may make some software engineers froth at the mouth 
class Node
{
public:
int value; //This could really be any type
Node* next;
Node* prev;
Node(int val){
cout << "Node constructr!" <<endl;
this->value=val;
this->next=(Node*)0;
this->prev=(Node*)0;
}
~Node(){
cout << "Node destructor" <<endl;
cout << "I had the value "<<this->value <<endl;
}
};
class List
{ 
public:
Node* head;
Node* tail;
List(){
cout << "List Constructor!" <<endl;
this->head=0;
this->tail=0;
}
~List(){
cout << "List destructor!" <<endl;
cout << "Todo: properly delete nodes..." <<endl;
}
void insert(Node* n, Node* x){
//Not actually perfect: how do we prepend to an existing list?
if (n!=0){
 x->next=n->next;
n->next=x;
x->prev=n;
if (x->next!=0)
x->next->prev=x;
}
if (this->head==0){
this->head=x;
this->tail=x;
x->prev=0;
x->next=0;
}
else if (this->tail=n){
this->tail=x;
}
 }
void deletee(Node* n, Node* x){
if (n!=0)
 n->next=x->next;
if (x->next!=0)
x->next->prev=n;
if (this->head==x){
this->head=x->next;
}
else if (this->tail==x){
this->tail=x->prev;
}
 }
 void display(){

 Node* i=this->head;
cout << "List: " ;
while(i!=0){
cout << i->value << ",";
i=i->next;
}
cout << endl;
}
};
int main(int argc, char *argv[])
{      
List* l=new List();
l->insert(0,new Node(4));
l->insert(l->head,new Node(6));
l->insert(l->head,new Node(8));
l->display();
l->deletee(0,l->head);
l->display();
delete l;
return 0;

}

