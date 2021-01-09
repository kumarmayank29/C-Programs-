#include<iostream>
using namespace std;
template <typename T , typename V>
class TemplateProg2Pair
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
    
     TemplateProg2Pair<int,double> p1;
     p1.setX(354.456); //Decimal part will be clipped because x is defined as a integer
     p1.setY(354.456);
     cout<<p1.getX()<<endl<<p1.getY()<<endl;
     
    
     }
     
   /*  Output
     354
     354.456 */
     
     
     
     
     
     
    
