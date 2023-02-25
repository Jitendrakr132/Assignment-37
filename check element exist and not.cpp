#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;

   vector<int>v={2,4,5,3,6,7,8};
   cout<<"Enter the element "<<endl;
   cin>>a;

   vector<int>::iterator t=find(v.begin(),v.end(),a);
   if(t!=v.end())
   {
    cout<<"Element "<<a<<"find position "<<endl;
    cout<<t-v.begin()+1<<endl;
   }
   else
   {
       cout<<"Element "<<a<<"  "<<"Does not found ";
   }
    return 0;

}
