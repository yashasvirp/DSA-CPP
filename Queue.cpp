#include<iostream>
#define SIZE 100;
using namespace std;

class Queue{

private:
  int Q[SIZE];
  int f,r;
  int size;

public:
  Queue(){
    f = r = -1;
    size = 0;
  }

  void enqueue(int val){

    if(f == -1){ //empty queue
      f++;
      r++;
      Q[r] = val;
      size++;
      return;
    }

    if(r < f){ //full queue
      cout<<"\nQueue full, cannot insert!";
      return;
    }

    Q[++r] = val;
    size++;

    return;
  }


  int dequeue(){

    if(f == -1){ //empty queue
      cout<<"\nEmpty queue, cannot delete!";
      return -1;
    }

    if(f == r){ //one element
      int val = Q[f++];
      size--;
      return val;
    }

    int val = Q[f++];
    size--;

    return val;
  }

  void display(){
    if(f == -1 || r < f){
      cout<<"\nQueue empty!";
      return;
    }

    cout<<endl<<"f->";
    for(int i = f; i <= r; i++)
      cout<<Q[i]<<" ";
    cout<<"->r"<<endl;
    
  }

  
  int getSize(){
    return size;
  }

  int front(){
    if(f == -1 || r < f){ 
      cout<<"Queue empty!";
      return -1;
    }
    
    return Q[f];
  }

  int rear(){
    if(f == -1 || r < f){ 
      cout<<"Queue empty!";
      return -1;
    }
    
    return Q[r];
  }

  void displayMenu(){
    
  }
};


int main(){
  int ch;

  cout
}
