#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //创建一个向量存储 int
    vector<int> vec;
    int i;

    cout<<"vec的原始大小"<<vec.size()<<endl;

    for(i=0;i<5;i++){
        vec.push_back(i);
    }

    cout<<"vec扩展后的大小"<<vec.size()<<endl;

    for(i=0;i<5;i++){
        cout<<"向量中的第"<<i+1<<"个值是"<<vec[i]<<endl;
    }

    vector<int>::iterator v=vec.begin();
    while(v!=vec.end()){
        cout<<"v的值"<<*v<<endl;
        v++;
    }
    return 0;
}