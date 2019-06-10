#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
 Struct Node{
     int data;
     Node* link;
 }
 int main(){
     Node* A;
     A=NULL;
     Node* temp=new Node(0);
     temp->data=2;
     temp->link=NULL;
     A=temp;
     
     
     temp=new Node();
     temp->data=4;
     temp->link=NULL;
     
     Node* temp1=A;
     while(temp1->link!=NUll){
         temp1=temp1->link
     }
     temp1->link=temp;
 }