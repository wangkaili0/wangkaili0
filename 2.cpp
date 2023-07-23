//使用指针时的操作，定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
//这些是通过使用一元运算符*来返回位于操作数所指定地址的变量的值。
#include <iostream>
using namespace std;
int main()
{
    int var=20;
    int *ip;
    ip=&var;
    cout<<"变量的值：";
    cout<<var<<endl;

    cout<<"指针变量中存储的地址： ";
    cout<<ip<<endl;

    cout<<"指针中地址的值：";
    cout<<*ip<<endl;
}
