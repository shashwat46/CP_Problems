#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> input;
    input.reserve(n);
    vector<int> output;
    output.reserve(n);

    for(int i = 0; i<n; i++){
        cin >> input[i];
    }

    for(int i = 0; i<n; i++){
        output[input[i]-1] = i+1;
    }

    for(int i = 0; i<n; i++){
        cout << output[i] << " ";
    }

    return 0;

}