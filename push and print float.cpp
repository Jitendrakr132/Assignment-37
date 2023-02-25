#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<float>v;
    v.push_back(3.5);
    v.push_back(4.5);
    v.push_back(7.8);
    v.push_back(2.1);

    for(auto i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;


}
