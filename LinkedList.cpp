// This file contains basic operations on Linked Lists

#include<iostream>
using namespace std;

class Node {

public:
  int data;
  Node* next;

  Node(int val){
    this->data = val;
    this->next = NULL;
  }
};

class LinkedList{

public:

  Node* head;

  LinkedList(){
    head = NULL;
  }

  void insertBegin(int val){

    Node *temp = new Node(val);
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
      head = temp;
    else{
      temp->next = head;
      head = temp;
    }
  }
  

  void insertEnd(int val){

    Node *temp = new Node(val);
    Node *t;
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
      head = temp;
    else{

      t = head;

      while(t->next != NULL)
	t = t->next;

      t->next = temp;
    }
  }

  void display(){

    Node *temp = head;

    cout<<endl;
    while(temp != NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
    }
    
  }

  //This function will insert a value at given position.
  //If the position exceeds number of elements, then it will insert at end of list
  
  void insertAtPos(int val, int pos){

    if(pos <= 1){
      insertBegin(val);
      return;
    }
    
    Node *temp = new Node(val);
    Node *t = head;

    if(head == NULL)
      head = temp;
    else{
      
      while(t->next != NULL && --pos > 1)
	t = t->next;

      temp->next = t->next;
      t->next = temp;

    }
  }


  void deleteBegin(){

    Node *t = head;

    if(head == NULL){
      cout<<"No list exists!";
      return;
    }

    head = head->next;
    free(t);
  }


  void deleteEnd(){

    Node *t = head, *p;

    if(head == NULL){
      cout<<"No list exists!";
      return;
    }

    while(t->next->next != NULL)
      t = t->next;

    p = t->next;
    t->next = NULL;

    free(p);
  }

  void deleteByPos(int pos){

    Node *t = head, *p;

    if(head == NULL){
      cout<<"No list exists!";
      return;
    }

    if(pos <= 1){
      deleteBegin();
      return;
    }

    while(t->next->next != NULL && --pos > 1)
	t = t->next;

    if(t->next->next == NULL){ //t->next is the last element
      deleteEnd();
      return;
    }

    p = t->next;
    t->next = t->next->next;
    free(p);
  }


  int search(int val){
    Node *t = head;

    int pos = 0;
    
    while(t != NULL){
      if(t->data == val)
	return pos+1;

      t = t->next;
      pos++;
    }

    return -1;
  }
  
  void deleteByVal(int val){

    int pos = search(val);

    if(pos == -1){
      cout<<"\nElement does not exist!";
      return;
    }

    deleteByPos(pos);
  }

};


int main(){

  LinkedList L;

  L.insertBegin(3);
  L.insertBegin(2);
  L.insertBegin(1);
  L.insertEnd(4);
  L.insertEnd(5);
  L.insertEnd(6);
  L.insertAtPos(13,2);
  L.insertAtPos(15,1);
  L.insertAtPos(17,20);
  L.insertAtPos(14,4);
  L.display();
  L.deleteBegin();
  L.deleteEnd();
  L.deleteBegin();
  L.deleteEnd();
  L.display();
  L.deleteByPos(6);
  L.display();
  L.deleteByVal(14);
  L.display();
  
}
