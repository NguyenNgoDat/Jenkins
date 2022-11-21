#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
class Integer {
private:
    int val;
public:
    Integer();
    void setVal(int a);
   void getVal();
};

Integer::Integer()
{
    val = 0;
}
void Integer::setVal(int a)
{
    val=a;
}
void Integer::getVal( )
{
    cout<< val;
}
