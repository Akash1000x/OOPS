#include <iostream>
using namespace std;

class employee
{
    int a;
    int b;

public:
    int setdata(int a,int b);
    int getdata();
};

int employee ::setdata(int a,int b)
{
    this->a=a;
    this->b=b;
}

int employee ::getdata()
{
    int sum = a + b;
    cout<<sum;
}

int main()
{
    employee obj;
    obj.setdata(12,23);
    obj.getdata();
    return 0;
}
