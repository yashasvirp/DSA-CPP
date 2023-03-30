#include<iostream>
#define SIZE 10
using namespace std;

class Stack{

private:
  int top;
  int count;
  int s[SIZE];
  
public:
  
  Stack(){
    top = -1;
    count = 0;
    s[SIZE] = {0};
  }

  int getTop(){
    return s[top];
  }

  void setTop(bool val){
    if(val)
      ++top;
    else
      top--;
  }

  void push(int val){

    if(top == SIZE){
      cout<<"\nOverflow! Cannot add more elements!";
      return;
    }
    
    s[++top] = val;
    count++;
  }

  int pop(){

    if(top == -1){
      cout<<"\nNo elements in stack!";
      return -1;
    }
    count--;
    return s[top--];
  }

  void display(){
    
    cout<<"\nStack elements are: ";
    for(int i=0; i <= top; i++)
      cout<<s[i]<<" ";

    cout<<"<-top"<<endl;
  }

  int getSize(){
    return count;
  }
  
  
};


void displayMenu(){
  cout<<"\nStack Operations:";
  cout<<"\n1. Push\n2. Pop\n3. Display top\n4. Display size\n5. Display stack\n6. Display Menu\n7. Exit "<<endl;
}

int main(){

  Stack s;

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

