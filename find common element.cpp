#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>v1={2,3,4,5,6,7};
    vector<int>v2={1,2,4,6,8,9};

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int>v3(v1.size()+v2.size());

    vector<int>::iterator it,end;

     end=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

     cout<<"Common elements"<<endl;
     for(it=v3.begin();it!=end;it++)
        cout<<*it<<" ";
     return 0;



}
