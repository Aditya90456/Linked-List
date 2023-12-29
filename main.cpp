#include <iostream>
using namespace std;
class LinkedList{
  public:
  int data;
  LinkedList* next ;
LinkedList(int d){
  this-> data=d;
  this->next=NULL;
}

};
void insertbeg(LinkedList*& node,int d){
  LinkedList* note=new LinkedList(d);
  note->next=node;
  node=note;
}
void print(LinkedList* h){
   while(h!=NULL){
    cout<<h->data<<" ";
    h=h->next;
  }
}
void t(LinkedList* & tail,int d){
  LinkedList* node=new LinkedList(d);
  tail->next=node;
  tail=node;
}
void middle(LinkedList*&head,int index,int data){
  LinkedList* nodehead=head;
  int c=1;
  while(c<index-1){
    nodehead=nodehead->next;
    c+=1;
  }
  LinkedList* nodenew=new LinkedList(data);
  nodenew->next=nodehead->next;
  nodehead->next=nodenew;
}
int main() {
  LinkedList* node =new LinkedList(9);
   
  
    t(node,0);
   middle(node,2,22);
  print(node);
} 
  