#include <iostream>
using namespace std;
#define MAXSIZE 20

class Stack {
    int a[MAXSIZE];
    int top;
public:
    Stack(){
        top = -1;
    }

    int peek() {
        return a[top];
    }

    bool isFull() {
        if(top == (MAXSIZE - 1)) {
            return true;
        }else {
            return false;
        }
    }

    bool isEmpty() {
        if(top < 0) {
            return true;
        }else {
            return false;
        }
    }

    void push(int data) {
        if(isFull()) {
             cout << "Error! The stack is full!" << endl;
        }
		if (isEmpty()) {
			top = 0;
			a[top] = data;
		}else {
            top = top + 1;
            a[top] = data;
            cout << "The element " << data << " was pushed." << endl;
			cout << "The top of the stack is: " << a[top] << endl;
        }
    }

    void pop() {
        if(isEmpty()) {
            cout << "Error! Tthe stack is empty!" << endl;
        }else {
            int data = a[top];
            top = top - 1;
            cout << "The element " << data << " was popped." << endl;
			cout << "The top of the stack is " << a[top] << endl;
        }
    }

    void Print() {
        for(int i = 0; i <= top; i++) {
            cout << a[i] << " ";
        }
    }
};




