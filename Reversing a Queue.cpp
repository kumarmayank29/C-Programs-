#include <iostream>
using namespace std;
#include<queue>
#include<stack>


void reverseQueue(queue<int> &input) {
    stack<int> s1;
while(!input.empty())
{
    s1.push(input.front());
        input.pop();
}
    while(!s1.empty())
    {
        input.push(s1.top());
        s1.pop();
    }
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}


Input
2
5
2 8 15 1 10
3
10 20 30

Output
10 1 15 8 2 
30 20 10 
