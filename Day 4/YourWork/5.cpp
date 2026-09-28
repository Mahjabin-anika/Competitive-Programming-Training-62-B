#include <bits/stdc++.h>
using namespace std;

int main() {
 vector<pair<int, int>> points;
points.push_back({1, 5});
points.push_back({3, 7});

for(auto p : points) {
    cout << "X: " << p.first << ", Y: " << p.second << "\n";
}

    return 0;
}