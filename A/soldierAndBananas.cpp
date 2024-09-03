#include<bits/stdc++.h>
using namespace std;

int main(){
    //soldierAndBananas
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n,w;
    cin >> k >> n >> w;

    int cost = k*(w*(w+1))/2;
    int borrow = cost - n;

    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow;

    return 0;

}