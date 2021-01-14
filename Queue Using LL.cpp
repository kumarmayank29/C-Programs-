
//Time Complexity for all functions is O(1)
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

class Queue
{
    
    //Data Memebers
    Node *head;
    Node *tail;
    int size;
    
    public:
    //Initialization of Data Members
    Queue()
    {
        head=NULL;
        tail=NULL;
        size=0;
        
    }
    
    int getSize()
    {
        return size;
    }
    
    int front()
    {
        if(head==NULL)
        {
            return -1;
        }
     
        return head->data;
     
    }
    
    bool isEmpty()
    {
        return size==0;
    }
    
    void enqueue(int element)
    {
        Node *newnode=new Node(element);
        if(head==NULL)
        {
            head=tail=newnode;
            
               
        }
        else
        {
/* Here since adding a new node at succesively as 1->2->3 so whenever we want to insert newnode each
time that too at the end then necessarily we need to maintain a tail pointer to  get address of node 2
.The tail pointer is used while appending new node to the link list just beacuse we want appending 
of linked list to be of order 1 .Otherwise  if we would have not taken extra tail pointer then every time
we required to insert a new node we would have to traverse till the end and that would have made our time
complexility as O(n) which is not as good as O(1) so we decide to take extra tail pointer so appending
of new node could be done in O(1) time*/
            
        tail->next=newnode;
        tail=newnode;
        
        }
        size++;
    }
    int dequeue()
    {
        if(head==NULL)
        {
            return -1;
        }
        Node *temp=head;
        int d=head->data;
        head=head->next;
        delete [] temp;
		size--; 
        
        return d;
        
    }
};

int main() {
    Queue q;

    int t;
    cin >> t;

    while (t--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                q.enqueue(input);
                break;
            case 2:
                cout << q.dequeue() << "\n";
                break;
            case 3:
                cout << q.front() << "\n";
                break;
            case 4:
                cout << q.getSize() << "\n";
                break;
            default:
                cout << ((q.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}
