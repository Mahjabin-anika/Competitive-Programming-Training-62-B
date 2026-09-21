#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);
   v.push_back(50);
   int n=v.size();

   for(int i=0;i<n/2;i++)
   {
     swap(v[i],v[n-1-i]);
   }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<'\n';
    }


    return 0;
}