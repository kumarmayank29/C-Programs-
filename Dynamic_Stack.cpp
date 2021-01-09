/*The only problem with stack using array is that we have a constraint of size ,we want to remove that constraint so to remove that problem we decide that whenever nextIndex==Capacity  we'll double to the capacity of array  and copy content of old array with size capacity to new array with size (2*capacity) ,update value of capacity to 2*capacity ,Deallocate the old array and finally point data pointer to new array newdata*/

#include<climits>  //For using INT_MIN
#include<iostream>
using namespace std;
class Dynamic_Stack
{
int *data;
int nextIndex;//Defines where new element will be added
int capacity;

public:
Dynamic_Stack()  //Don't want any constraint of size so remove thar argument
{
data=new int[4];   //Initially assume size=4
nextIndex=0;
capacity=4;   
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
int *newdata=new int[2*capacity];         //Create an array of double size
for(int i=0;i<capacity;i++)                     //Copy old array of size capacity  elements to new array of size 2*capacity
{
 newdata[i]=data[i];
 }
 capacity*=2;
 delete[] data;                                          //Deallocate small array
 data=newdata;                                      //Point data pointer from data to newdata array

}
/*We do not need to have an else here because whatever may be the case insert will keep continuing now on putting else here problem was just the capacity got doubled but new elements could not get added as we made seperate else block so just remove that else block*/

data[nextIndex]=element;
nextIndex++;
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
Dynamic_Stack S;
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
50
50
40
30
2
0
*/








