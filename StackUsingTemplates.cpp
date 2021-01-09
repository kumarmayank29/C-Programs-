/The only problem with stack using array is that we have a constraint of size ,we want to remove that constraint so to remove that problem we decide that whenever nextIndex==Capacity  we'll double to the capacity of array  and copy content of old array with size capacity to new array with size (2*capacity) ,update value of capacity to 2*capacity ,Deallocate the old array and finally point data pointer to new array newdata/

#include<climits>  //For using INT_MIN
#include<iostream>

using namespace std;
template <typename T>
class StackUsingTemplates
{
T *data;
int nextIndex;//Defines where new element will be added
int capacity;

public:
StackUsingTemplates()  //Don't want any constraint of size so remove thar argument
{
data=new T[4];   //Initially assume size=4
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

void push(T element)
{
if(nextIndex==capacity)
{
T *newdata=new T[2*capacity];         //Create an array of double size
for(int i=0;i<capacity;i++)                     //Copy old array of size capacity  elements to new array of size 2*capacity
{
 newdata[i]=data[i];
 }
 capacity*=2;
 delete[] data;                                          //Deallocate small array
 data=newdata;                                      //Point data pointer from data to newdata array

}
/We do not need to have an else here because whatever may be the case insert will keep continuing now on putting else here problem was just the capacity got doubled but new elements could not get added as we made seperate else block so just remove that else block/

data[nextIndex]=element;
nextIndex++;
}


//Delete an Element

T pop()
{
if(isEmpty())
{
cout<<"Stack is Empty"<<endl;
return 0; //Remove INT_MIN because now we are using genetic datatype so INT_MAIN wont work if we have stack of characters
}

nextIndex--;
return data[nextIndex];
}

//Topmost Element of Stack

T top()
{
if(isEmpty())
{
cout<<"Stack is Empty"<<endl;
return 0;
}
return data[nextIndex-1];
}
};

int main()
{
/*StackUsingTemplates<int> S;  //Integer Stack
S.push(10);
S.push(20);
S.push(30);
S.push(40);
S.push(50);*/


//Chracter Stack
StackUsingTemplates<char> S;  //Integer Stack
S.push(100);//Will be interpretred as ASCII codes then comnverted to character
S.push(101);
S.push(102);
S.push(103);
S.push(104);




cout<<S.top()<<endl;
cout<<S.pop()<<endl;
cout<<S.pop()<<endl;
cout<<S.pop()<<endl;
cout<<S.size()<<endl;
cout<<S.isEmpty()<<endl;
}

/*Output Obtained was

h
h
g
f
2
0

*/
