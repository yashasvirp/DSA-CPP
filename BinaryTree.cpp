#include<iostream>
using namespace std;

struct Node{
  int val;
  Node *l, *r;

  Node(int v){
    val = v;
    l = r = NULL;
  }
};

