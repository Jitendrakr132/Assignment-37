#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    vector<int>v={2,3,4,5,6,7};
    cout<<"Reverse Elements"<<endl;
    for(auto x=v.rbegin();x!=v.rend();++x)
    {

        cout<<*x<<endl;
    }
    return 0;
}
