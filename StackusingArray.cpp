#include<climits>  //For using INT_MIN
#include<iostream>
using namespace std;
class StackUsingArray
{
int *data;
int nextIndex;  //Defines where new element will be added
int capacity;

public:
StackUsingArray(int totalsize)
{
data=new int[totalsize];
nextIndex=0;
capacity=totalsize;  //Since Total size is a local variable so it cannot be accessed outside the function
}
//Size of Stack
int size()
{
return nextIndex;
}

//Check if Stack is Empty

bool isEmpty()
{
if(nextIndex==0)
return true;
else
return false;
}


//Insert Element in a Stack

void push(int element)
{
if(nextIndex==capacity)
{
cout<<"Stack is Full"<<endl;
}
else
{
data[nextIndex]=element;
nextIndex++;
}
}

//Delete an Element

int pop()
{
if(isEmpty())
{
cout<<"Stack is Empty"<<endl;
return INT_MIN;
}

nextIndex--;
return data[nextIndex];
}

//Topmost Element of Stack

int top()
{
if(isEmpty())
{
cout<<"Stack is Empty"<<endl;
return INT_MIN;
}
return data[nextIndex-1];
}
};

int main()
{
StackUsingArray S(4);
S.push(10);
S.push(20);
S.push(30);
S.push(40);
S.push(50);

cout<<S.top()<<endl;
cout<<S.pop()<<endl;
cout<<S.pop()<<endl;
cout<<S.pop()<<endl;
cout<<S.size()<<endl;
cout<<S.isEmpty()<<endl;
}

/*Output Obtained was

Stack is Full
40
40
30
20
1
0
*/








