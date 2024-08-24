#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x1, x2, x3;
    cin >> x1 >> x2>> x3;

    int x1x2 = abs(x1-x2), x1x3 = abs(x1-x3), x2x3 = abs(x2-x3);
    int minDistance = (x1x2+x1x3+x2x3) - max(x1x2,max(x1x3,x2x3));

    cout<< minDistance;

    return 0;

}