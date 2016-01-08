#include <iostream>
#include "header.h"
using namespace std;

int main() {
    Stack S;
    int choice;
    do{
        cout << "Choose an option:\n0. Reach the front element (without dequeue!).\n1. Check is the queue is full.\n2. Check if the stack is Empty.\n3. Add an element to the stack." << endl;
        cout << "4. Delete an element from the stack.\n5. Print the stack." << endl;
        cin >> choice;
		
		if(choice == 0) {
			if(S.isEmpty() == 1)
				cout << "The stack is empty" << endl << endl;
			else
				cout << "The top of the stack is " << S.peek() << endl << endl;
		}
		else if(choice == 1) {
			if(S.isFull() == 1)
				cout << "The stack is full" << endl;
			cout << endl;
			if(S.isFull() == 0)
				cout << "The stack is not full" << endl;
			cout << endl;
		}
		else if(choice == 2) {
			if(S.isEmpty() == 1)
				cout << "The stack is empty" << endl;
			cout << endl;
			if(S.isEmpty() == 0)
				cout << "The stack is not empty" << endl;
			cout << endl;
		}
		else if(choice == 3) {
			int data;
			cout << "Input the element to add to the stack: " << endl;
			cin >> data;
			S.push(data);
			cout << endl;
			cout << "The stack : " << endl;
			S.Print();
			cout << endl << endl;
		}
		else if(choice == 4) {
			S.pop();
			cout << "The stack : " << endl;
			S.Print();
			cout << endl << endl;
		}
		else if(choice == 5) {
			cout << "The stack : " << endl;
			S.Print();
			cout << endl << endl;
		}
		else if(choice < 0 || choice > 5) {
			cout << "Input a valide entry !!" << endl;
			cout << endl;
		}
	} while(!S.isFull());

    return 0;
}
