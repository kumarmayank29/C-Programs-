#include<iostream>
using namespace std;
template <typename T>
class TemplateProg1
{
  T x;
  T y;
  public:
  void setX(T x)
  {
    this->x=x;
    }
    
    T getX()
    {
    return x;
    }
     void setY(T y)
  {
    this->y=y;
    }
    
    T getY()
    {
    return y;
    }
    };
    
    int main()
    {
    
     TemplateProg1<int> p1;
     p1.setX(10);
     p1.setY(20);
     cout<<p1.getX()<<" "<<p1.getY()<<endl;
     
     TemplateProg1<double> p2;
     p2.setX(1.3);
     p2.setY(1.5);
     cout<<p2.getX()<<" "<<p2.getY()<<endl;
     }
     
     
     
     
    
