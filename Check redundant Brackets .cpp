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


    
    //(a+b)
    //(ab)
    //((a+b)) 
/* Some important test cases .Note a bracket is said to be redundant if no useful operation is performed within it for example (ab) is redundant return true but (a*b)
me it is not redundant as it has a useful operation like * .Similarly ((a+b)) has redundant brackets as it could be reduced to (a+b) return true but (a+b) is not redundant 
so returns false but the code has some problem wrt case (a+b)+((c+d))

*/ 
