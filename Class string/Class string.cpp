#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString a("hfbnjtee");
    MyString b("drfdgr");
    MyString result(a + b);
    a.print();
    b.print();
    a.print();
    result.print();
}