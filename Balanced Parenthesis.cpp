//Method 1  .It has some probelms
#include<stack>
bool isBalanced(string exp) 
{
    // Write your code here
    stack<char> s;
    char a;
    int i=0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
        {
            s.push(exp[i]);
        }
        
        if(s.empty())
            return false;
        
        switch(exp[i])
        {
            case ')':
                a=s.top();
                s.pop() ;   
                if(exp[i]==']'||exp[i]=='}')
                return false;
                else
                return true;    
                break;    
            
            case ']':
                 a=s.top();
                s.pop();
                if(exp[i]==')'||exp[i]=='}')
                return false;
                else
                return true;
                
                break; 
                
            case '}':
                  a=s.top();
                s.pop();
                if(exp[i]==']'||exp[i]==')')
                return false;
                else
                return true;
           
                break;      
        }
        
        i++;
       
    }
}



//Method 2

#include<stack>

bool isBalanced(string exp) {
	// Write your code here
    stack<char> s;
    int j;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
        {s.push(exp[i]);
        }
      
    	if(exp[i]=='}'||exp[i]==']'||exp[i]==')')
        {  if(s.empty())    //USED to CHECK IN CASE STACK is EMPTY WE CANNOT ACCESS ITS TOP ELEMENT
           {return 0;}
         
             char x=s.top();
         	 s.pop();
            if(exp[i]=='}'&&x!='{')
                {
                    return true;
                }
        
         if(exp[i]==')'&&x!='(')
                {
                    return true;
                }
        
         	if(exp[i]==']'&&x!='[')
                {
                    return true;
                }
          }
    }
         	
    if(s.empty()) //If String is Empty after applying all above condition this means it is balanced
    {return 1;}

}



//Method 3 As per question
#include<stack>
bool isBalanced(string exp) 
{
    // Write your code here
    stack<char> s;
    char a;
    int i=0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
        {
            s.push(exp[i]);
        }
        
        if(s.empty()) 
            return false;
        
        switch(exp[i])
        {
            case ')':
                a=s.top();
                s.pop() ;   
                if(a!='(')                    //Compare Scanned element with elememnt present at top of stack if they dont match return false
                    return false 
    }
        i++;
}
    if(s.size()==0) //If size=0 then its balanced
        return 1;
}



