#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    vector<int >v={3,4,5,5,7,2};
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<"Sum is elements = "<<sum;
    return 0;


}
