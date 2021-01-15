#include<stack>
bool checkRedundantBrackets(string expression) {
    int count = 0;
    stack<char> st;
    
    for(int i = 0; i<expression.length(); i++)
    {
        if(expression[i] == ')')
          {
              count = 0;
              while(!st.empty())
              {
                   if(st.top() == '(')
                  {
                      st.pop();
                      break;
                  }
               
                  if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                  {
                	   count++;   
                  }
				      
                   st.pop();
            }
           
           if(count == 0)
           {
                return true;
           }
         }
        
     else
           {
            
            st.push(expression[i]);
           
           }
    }
    
    return false;
    
}
