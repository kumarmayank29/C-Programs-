#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra) {
    int len=input.size();
for (int i=0;i<len;i++)
{
    //int k=input.top();
   
    extra.push(input.top());
     input.pop();
}
    input=extra; // Direct  copy hota stack and queue me
}

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}

/*Test Case Explanation

/* Test case explanation 2,8,15,1,10---->push in order like(10 after reversing (2  
																				8	
															1                   15
                                                            15                   1
                                                            8                    10)
                                                            2)
                                                            
fimally result written as 2,8,15,1,10    */
