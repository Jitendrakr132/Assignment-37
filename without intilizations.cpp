#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<int >v={};

     v.push_back(2);
     v.push_back(3);
     v.push_back(6);
     v.push_back(7);

     vector<int>::iterator i;

     for(i=v.begin();i!=v.end();i++)

      cout<<*i<<endl;

       return 0;
}
