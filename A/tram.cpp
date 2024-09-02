#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int minimumCap = 0;
    int inside = 0;

    while(n --){
        int in, out;
        cin >> out >> in;
        inside = inside - out + in;
        minimumCap = max(inside, minimumCap);

    }

    cout<< minimumCap;

    return 0;
}