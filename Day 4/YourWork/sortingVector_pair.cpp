#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<pair<int, int> > v;
        v.push_back(make_pair(5, 3));
        v.push_back(make_pair(1, 90));
        v.push_back(make_pair(20, 10)); 
        v.push_back(make_pair(1, 40));

         sort(v.begin(), v.end());

         cout << "Sorted pairs:" << endl;
         for(int i = 0; i < v.size(); i++) {
        cout << "{" << v[i].first << ", " << v[i].second << "}" << endl;
    }
    
     return 0;
}


