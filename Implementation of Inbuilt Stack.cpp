#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    /*cout<<s1.pop()<<endl;
    This will throw error because inbuilt stack function pop has a return type of void that is why operation s1.pop() is illegal*/
    
    cout<<"Topmost Element of Stack "<<s1.top()<<endl;  //40 is topmost element
    s1.pop();                                           //40 got deleted from top
    
/ To delete element in inbuilt stack first do access s1.top() +pop ie s1.pop() it will get deleted
    
    cout<<"  "<<s1.top()<<endl;                         //Since 40 deleted so 30 is new top
    s1.pop();                                           //30 also got deleted
    
    cout<<"Size of Stack "<<s1.size()<<endl;            //40 and 30 deleted so new size of stack is 2
    
    cout<<"Check if Stack is Empty "<<s1.empty();       //Since stack contains element 10 and 20  So it gives false ie 0
    }

/*Output

Topmost Element of Stack 40
  30
Size of Stack 2
Check if Stack is Empty 0  */
