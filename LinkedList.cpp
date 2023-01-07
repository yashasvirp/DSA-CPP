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

    while(temp != NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
    }
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
  L.display();

}
