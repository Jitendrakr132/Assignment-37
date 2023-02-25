#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    int min=0;
    int max=0;
    vector<int>v;
cout<<"Enter the element "<<endl;
    for(int i=0;i<5;i++)
    {
         cin>>a;
         v.push_back(a);
    }
     min=v[0];
     max=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(min>v[i])
            min=v[i];
        if(min<v[i])
          max=v[i];
    }
    cout<<"smallest "<<min<<endl;
    cout<<"largest "<<max<<endl;

  return 0;
}
