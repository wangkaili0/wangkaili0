//引用 引用变量是一个别名，是某个已存在变量的另一个名字，一旦吧引用初始化为某个变量，就可以使用该引用名称或者变量名称来指向变量
#include <iostream>
using namespace std;
int main()
{
    int i;
    double d;
    int& r=i;
    double &s=d;
    i=5;
    cout<<"i:"<<i<<endl;
    cout<<"r:"<<r<<endl;
    d=11.7;
    cout<<"d:"<<d<<endl;
    cout<<"s:"<<s<<endl;

}
