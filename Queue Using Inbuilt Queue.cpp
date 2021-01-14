#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    //Out Queue is 10,20,30,40,50,60
    cout<<q.front()<<endl;//Front element is 10
    q.pop();              //10 is poped
    cout<<q.front()<<endl;//New front is 20
    cout<<q.size()<<endl; //5 elements are there in queue so size=5
    cout<<q.empty()<<endl;//False so it gives 0
    
    while(!q.empty()) //It will start to pop from 20 as 10 is poped earlier only
    {cout<<q.front()<<endl;
    q.pop();}
}
   
