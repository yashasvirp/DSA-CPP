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

private:
  Node* head;
  int size;
  
public:
  
  LinkedList(){
    head = NULL;
    size = 0;
  }

  int get_size(){
    return size;
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
    size++;
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

    size++;
  }

  void display(){

    Node *temp = head;

    cout<<endl;
    while(temp != NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
    }

    cout<<"NULL"<<endl<<"Current size:"<<size<<endl;
    
  }

  //This function will insert a value at given position.
  //If the position exceeds number of elements, then it will insert at end of list
  
  void insertAtPos(int val, int pos){

    if(pos <= 1){
      insertBegin(val);
      return;
    }

    if(pos > size){
      insertEnd(val);
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

    size++;
  }


  int deleteBegin(){

    Node *t = head;
    int val;

    if(head == NULL){
      cout<<"No list exists!";
      return -1;
    }

    val = t->data;

    head = head->next;
    free(t);

    size--;
    return val;
  }


  int deleteEnd(){

    Node *t = head, *p;
    int val;
    
    if(head == NULL){
      cout<<"No list exists!";
      return -1;
    }

    while(t->next->next != NULL)
      t = t->next;
    
    p = t->next;
    t->next = NULL;

    val = p->data;
    
    free(p);

    size--;
    return val;
    
  }

  int deleteByPos(int pos){

    Node *t = head, *p;
    
    if(head == NULL){
      cout<<"No list exists!";
      return -1;
    }

    if(pos > size || pos < 1){
      cout<<"Invalid position!";
      return -1;
    }

    if(pos == 1)
      return deleteBegin();

    if(pos == size)
      return deleteEnd();

    while(t->next->next != NULL && --pos > 1)
	t = t->next;

    p = t->next;
    t->next = t->next->next;
    int val = p->data;
    free(p);
    size--;

    return val;
  }


  int searchByVal(int val){
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

  
  int searchByPos(int pos){

    Node *t = head, *p;
    
    if(head == NULL){
      cout<<"No list exists!";
      return -1;
    }

    if(pos > size || pos < 1){
      cout<<"Invalid position!";
      return -1;
    }

    if(pos == 1)
      return t->data;

    while(t->next->next != NULL && pos-- > 1)
	t = t->next;

    int val = t->data;
 
    return val;

  }

  
  int deleteByVal(int val){

    int pos = searchByVal(val);

    if(pos == -1){
      cout<<"\nElement does not exist!";
      return -1;
    }

    return deleteByPos(pos);
  }

};

void displaymenu(){

  cout<<"\nLinked List Operations:";
  cout<<"\n1. Insert at Beginning\n2. Insert at End\n3. Insert by Position";
  cout<<"\n4. Delete at Beginning\n5. Delete at End\n6. Delete by value\n7. Delete by position";
  cout<<"\n8. Search by value\n9. Search by position\n10. Display list\n11. Display Menu\n12. Exit "<<endl;
}

int main(){

  LinkedList L;

  int ch,val,pos;

  displaymenu();
  
  bool flag = true;
  
  while(flag){
    cout<<"\nEnter your choice: ";
    cin>>ch;

    if(ch == 13)
      break;
    
    switch(ch){
      
    case 1:
      cout<<"\nEnter value: ";
      cin>>val;
      L.insertBegin(val);
      break;
      
    case 2:
      cout<<"\nEnter value: ";
      cin>>val;
      L.insertEnd(val);
      break;
      
    case 3:
      cout<<"\nEnter value: ";
      cin>>val;
      cout<<"\nEnter position: ";
      cin>>pos;
      L.insertAtPos(val, pos);
      break;
      
    case 4:
      val = L.deleteBegin();
      if(val == -1)
	cout<<"\nCannot carry operation!";
      else
	cout<<"\n"<<val<<" value deleted";
      break;
      
    case 5:
      val = L.deleteEnd();
      if(val == -1)
	cout<<"\nCannot carry operation!";
      else
	cout<<"\n"<<val<<" value deleted";
      break;
      
    case 6:
      cout<<"\nEnter Value:";
      cin>>val;
      val = L.deleteByVal(val);
      if(val == -1)
	cout<<"\nCannot carry operation!";
      else
	cout<<"\n"<<val<<" value deleted";
      break;

    case 7:
      cout<<"\nEnter position:";
      cin>>pos;
      val = L.deleteByPos(pos);
      if(val == -1)
	cout<<"\nCannot carry operation!";
      else
	cout<<"\n"<<val<<" value deleted";
      break;


    case 8:
      cout<<"\nEnter value:";
      cin>>val;
      pos = L.searchByVal(val);
      if(pos == -1)
	cout<<"\nValue not found!";
      else
	cout<<"\nValue found at position "<<pos<<endl;
      break;

    case 9:
      cout<<"\nEnter position:";
      cin>>pos;
      val = L.searchByPos(pos);
      if(val == -1)
	cout<<"\nCannot carry operation!";
      else
	cout<<"Value at position is: "<<val;
      break;

    case 10:
      L.display();
      break;

    case 11:
      displaymenu();
      break;

    case 12:
      cout<<"\nExiting!"<<endl;
      flag = false;
      break;
      
    default:
      cout<<"\nEnter valid choice!";
    } //end of switch

  } //end of while
  
}
