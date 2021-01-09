#include<iostream>
using namespace std;
template <typename T , typename V>
class TemplateProg3Tripletusingpair
{
  T x;
  V y;
  public:
  void setX(T x)
  {
    this->x=x;
    }
    
    T getX()
    {
    return x;
    }
     void setY(V y)
  {
    this->y=y;
    }
    
    V getY()
    {
    return y;
    }
    };
    
    int main()
    {
    		TemplateProg3Tripletusingpair<TemplateProg3Tripletusingpair<int,int>,int>p2;
    		p2.setY(10);
    		TemplateProg3Tripletusingpair<int,int>p4;
    		p4.setX(5);
    		p4.setY(16);
    		p2.setX(p4); //We did this because for object p2 variable x is of type pair<int,int> so we pass p4
    		cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<p2.getY()<<endl;
		    		
     }
     
  //   output:5 16 10
