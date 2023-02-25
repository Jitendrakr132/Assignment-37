#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    vector<int>v;

    cout<<"Enter the element "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a;
    v.push_back(a);
    }
    cout<<"Print all element "<<endl;
    for(int i=0;i<5;i++)
        cout<<v[i]<<endl;
    return 0;


}
