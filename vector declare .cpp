#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<int >v={2,3,4,5};

    vector<int>::iterator x;
    cout<<"vector num element"<<endl;

    for( x=v.begin();x!=v.end();x++)
            cout<<*x<<" ";
        return 0;
}
