#include<bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    //Using unordered_set
    
    unordered_set<char> uset;

    for(auto it: input){
       uset.insert(it);
    }

    if(uset.size()%2 == 0) cout<< "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}

/*
Using unordered_map
unordered_map<char,int> mpp;

    for(auto it: input){
        if(mpp.find(it) != mpp.end()){
            mpp.insert({it,1});
        }
        else mpp[it]++;
    }

    if(mpp.size()%2 == 0) cout<< "CHAT WITH HER!";
    else if(mpp.size()%2 == 1) cout << "IGNORE HIM!";
*/