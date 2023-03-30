#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;

public:
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};


class StackLL{
private:
  Node *head, *top;
  int size;

public:
  StackLL(){
    head = top = NULL;
    size = 0;
  }

  
  void push(int val){

    Node *temp = new Node(val);

    if(head == NULL){ // No elements
      head = temp;
      top = temp;
      size++;
      return;
    }

    top->next = temp;
    top = temp;

    size++;

    return;
  }


  int pop(){

    if(head == NULL){ //empty stack
      cout<<"Underflow! No elements!";
      return -1;
    }

    if(head == top){ //only one element
      int val = head->data;
      Node *p = head;
      head = top = NULL;
      delete(p);
      size--;
      return val;
    }

    Node *t = head, *p;

    while(t->next != top)
      t = t->next;

    p = t->next;
    int val = p->data;
    delete(p);
    
    t->next = NULL;
    top = t;
    size--;
    return val;
  }
  
  
  int getTop(){

    if(top == NULL)
      return -1;

    return top->data;
  }

  void display(){

    if(head == NULL){
      cout<<"\nEmpty Stack!";
      return;
    }

    if(head == top){
      cout<<head->data<<endl;
      return;
    }
    
    Node *t = head;
    cout<<endl;
    
    while(t != top->next){
      cout<<" "<<t->data;
      t = t->next;
    }

    cout<<endl;
  }

  int getSize(){
    return size;
  }
  
};
  
void displayMenu(){
  cout<<"\nStack Operations:";
  cout<<"\n1. Push\n2. Pop\n3. Display top\n4. Display size\n5. Display stack\n6. Display Menu\n7. Exit "<<endl;
}

int main(){

  StackLL s;

  int ch;

  displayMenu();
  
  bool flag = true;
  
  while(flag){

    int val;
    
    cout<<"\nEnter your choice: ";
    cin>>ch;

    if(ch == 7)
      break;
    
    switch(ch){
      
    case 1:
      cout<<"\nEnter value: ";
      cin>>val;
      s.push(val);
      break;
      
    case 2:
      val = s.pop();
      if(val == -1)
	cout<<"\nCouldn't carry operation!";
      else
	cout<<endl<<val<<" deleted";
      break;
      
    case 3:
      cout<<"Top : "<<s.getTop();
      break;
      
    case 4:
      cout<<"\nSize: "<<s.getSize();
      break;
      
    case 5:
      s.display();
      break;
      
    case 6:
      displayMenu();
      break;
    
    default:
      cout<<"\nEnter valid choice!";
    } //end of switch

  } //end of while
  
}
