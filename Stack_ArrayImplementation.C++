#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int A[101]; // integer array to store the stack 
 int size=101;
int top = -1;  // variable to mark top of stack in array



// Push operation to insert an element on top of stack. 

void Push(int x) 

{

  if(top == size -1) { // overflow case. 

		cout<<"Error: stack overflow\n"<<endl;

		return;

	}

	A[++top] = x;

}



// Pop operation to remove an element from top of stack.

void Pop() 

{

	if(top == -1) { // If stack is empty, pop should throw error. 

		cout<<"Error: No element to pop\n"<<endl;

		return;

	}

	top--;

}



// Top operation to return element at top of stack. 

int Top() 

{

	return A[top];

}



// This function will return 1 (true) if stack is empty, 0 (false) otherwise

int IsEmpty()

{

    if(top == -1) return 1;

    return 0;

}



// This function is just to test the implementation of stack. 

// This will print all the elements in the stack at any stage. 

void Print() {

	int i;

	cout<<"Stack: ";

	for(i = 0;i<=top;i++)

		cout<<A[i]<<" ";

	cout<<endl;

}


int main()
{
     // Code to test the implementation. 

  // calling Print() after each push or pop to see the state of stack. 

	Push(2);Print();

	Push(5);Print();

	Push(10);Print();

	Pop();Print();

	Push(12);Print();
}
