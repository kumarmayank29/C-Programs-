/* Time Complexity For all Operations O(1)
   Space Complexity =O(n)
   n is number of operations*/

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};
class Stack {
	// Define the data members
       Node *head;
        int size;
    
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        size=0;
     
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
        
        
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(size==0)
            return true;
        else
            return false;
    }

    void push(int element) {
        // Implement the push() function
         Node *newnode=new Node(element);
        if(head==NULL)
        {
            head=newnode;
            
            
            
        }
            newnode->next=head;
            head=newnode;
            size++;
    }

    int pop() {
        // Implement the pop() function
        if(size==0)
        {
            return -1;
        }
        int val=head->data;
        Node *temp=head;
        head=head->next;
        delete temp;
        size--;
        return val;
    }

    int top() {
        // Implement the top() function
        if(size==0)
        {
            return -1;
        }
        return head->data;
    }
};
int main() {
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}

/*
Input (stdin)

6
1 13
1 47
4
5
2
3
Your Output 
2
false
47
13*/

