#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases; 
    cin >> testcases;

    while(testcases--){
        int m;
        cin>>m;
        vector<int> nums(m);
        unordered_map<int,int> mpp;
        for(int i = 0; i<m; i++){
            cin>> nums[i];
            if(mpp.find(nums[i]) == mpp.end()){
                mpp.insert({nums[i],1});
            }
            else mpp[nums[i]]++;
        }

        auto it = mpp;

        int maxFrequency = 0;

        for(auto it : mpp){
            if(it.second > maxFrequency){
                maxFrequency = it.second;
            }
        }

        cout<< (m-maxFrequency) <<endl;
    }

    return 0;
}

/*
7
1
1
3
1 2 3
3
1 2 2
5
5 4 3 2 1
6
1 1 2 2 3 3
8
8 7 6 3 8 7 6 3
6
1 1 4 5 1 4
*/