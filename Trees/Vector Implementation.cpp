#include<iostream>
#include<vector>
using namespace std;
int main()
{
//Note:Vector behaves similar to dynamic arrays .Inbuilt vector is a template so its necessary to define the data type




//Declaration of vector
vector<int> v;    //Static Allocation of Vector
// vector<int> *v=new vector<int>(); This is Dynamic Allocation of vector




//Insertion in a vector.Nerver use [] for insertion use this only for 1)get  purpose 2)update purpose when you actually know size

v.push_back(10);
v.push_back(20);
v.push_back(30);
// To print the vector
/*for(int i=0;i<v.size();i++)
{
cout<<v[i]<<endl;
}*/


//Capacity vs Size in Vector

/* Size Returns number of elements which are currently present in the vector 
 capacity returns the size of underlying dynamic array .Capacity automatically increases with increase in number of elements in vectors*/
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<endl;
cout<<endl;
vector<int> v2;
for(int i=0;i<100;i++)
{
   cout<<"Capacity is"<<v2.capacity()<<endl;
   cout<<"Size is "<<v2.size()<<endl;
   v2.push_back(i+1);


   }
   


//To access specific elements

cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v[3]<<endl;//illegal memory bhi access karne lagata hai 
cout<<v[4]<<endl;
//cout<<v.at(4)<<endl;  Safer to use v.at(indexnumber) because it will throw error when index goes out of range unlike [] jo kuch  bhi return kardeta irrespective its a garbage value
cout<<"Output using v.at()"<<v.at(0)<<"   "<<v.at(1)<<"  "<<v.at(2)<<"  "<<endl;



//To delete last element in a vector

v.pop_back();
cout<<"Status after deleting last element of vector"<<endl;
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<endl;
}
}

//Output of program is
3
4


Capacity is0
Size is 0
Capacity is1
Size is 1
Capacity is2
Size is 2
Capacity is4
Size is 3
Capacity is4
Size is 4
Capacity is8
Size is 5
Capacity is8
Size is 6
Capacity is8
Size is 7
Capacity is8
Size is 8
Capacity is16
Size is 9
Capacity is16
Size is 10
Capacity is16
Size is 11
Capacity is16
Size is 12
Capacity is16
Size is 13
Capacity is16
Size is 14
Capacity is16
Size is 15
Capacity is16
Size is 16
Capacity is32
Size is 17
Capacity is32
Size is 18
Capacity is32
Size is 19
Capacity is32
Size is 20
Capacity is32
Size is 21
Capacity is32
Size is 22
Capacity is32
Size is 23
Capacity is32
Size is 24
Capacity is32
Size is 25
Capacity is32
Size is 26
Capacity is32
Size is 27
Capacity is32
Size is 28
Capacity is32
Size is 29
Capacity is32
Size is 30
Capacity is32
Size is 31
Capacity is32
Size is 32
Capacity is64
Size is 33
Capacity is64
Size is 34
Capacity is64
Size is 35
Capacity is64
Size is 36
Capacity is64
Size is 37
Capacity is64
Size is 38
Capacity is64
Size is 39
Capacity is64
Size is 40
Capacity is64
Size is 41
Capacity is64
Size is 42
Capacity is64
Size is 43
Capacity is64
Size is 44
Capacity is64
Size is 45
Capacity is64
Size is 46
Capacity is64
Size is 47
Capacity is64
Size is 48
Capacity is64
Size is 49
Capacity is64
Size is 50
Capacity is64
Size is 51
Capacity is64
Size is 52
Capacity is64
Size is 53
Capacity is64
Size is 54
Capacity is64
Size is 55
Capacity is64
Size is 56
Capacity is64
Size is 57
Capacity is64
Size is 58
Capacity is64
Size is 59
Capacity is64
Size is 60
Capacity is64
Size is 61
Capacity is64
Size is 62
Capacity is64
Size is 63
Capacity is64
Size is 64
Capacity is128
Size is 65
Capacity is128
Size is 66
Capacity is128
Size is 67
Capacity is128
Size is 68
Capacity is128
Size is 69
Capacity is128
Size is 70
Capacity is128
Size is 71
Capacity is128
Size is 72
Capacity is128
Size is 73
Capacity is128
Size is 74
Capacity is128
Size is 75
Capacity is128
Size is 76
Capacity is128
Size is 77
Capacity is128
Size is 78
Capacity is128
Size is 79
Capacity is128
Size is 80
Capacity is128
Size is 81
Capacity is128
Size is 82
Capacity is128
Size is 83
Capacity is128
Size is 84
Capacity is128
Size is 85
Capacity is128
Size is 86
Capacity is128
Size is 87
Capacity is128
Size is 88
Capacity is128
Size is 89
Capacity is128
Size is 90
Capacity is128
Size is 91
Capacity is128
Size is 92
Capacity is128
Size is 93
Capacity is128
Size is 94
Capacity is128
Size is 95
Capacity is128
Size is 96
Capacity is128
Size is 97
Capacity is128
Size is 98
Capacity is128
Size is 99
10
20
30
0
0
Output using v.at()10   20  30  
Status after deleting last element of vector
10
20







