#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int >v1={2,3,4,5,6,};
    vector<int>v2;

   v2.assign(v1.begin(),v1.end());

   cout<<"Second vector elements "<<endl;
    for(int x=0;x<v2.size();x++)
    cout<<v2[x]<<endl;
    return 0;
}
