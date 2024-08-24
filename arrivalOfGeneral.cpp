#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numSoldiers;
    cin >> numSoldiers;

    vector<int> line(numSoldiers,0);
    
    int maxHeightIndex = 0;
    int minHeightIndex = 0; 

    for(int i = 0; i<numSoldiers; i++){
        cin >> line[i];
        if(line[i]<=line[minHeightIndex]){
            minHeightIndex = i;//We can calculate minHeightIndex right here since we need the rightmost index of minHeight
        }
        if(line[i] > line[maxHeightIndex]){
            maxHeightIndex = i;//We get leftMost maxHeightIndex
        }
    }

   int result = maxHeightIndex + (numSoldiers - 1 - minHeightIndex);
    
    // Adjust if maxHeightIndex is before minHeightIndex
    if (maxHeightIndex > minHeightIndex) {
        result -= 1;
    }

    cout << result;

    return 0;
} 