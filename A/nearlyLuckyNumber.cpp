#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; 
    cin >> input;

    int count = 0;

    for(int i = 0; i<input.length(); i++){
        if(input[i] == '4' || input[i] == '7'){
            count++;
        }
    }

    if(count == 4 || count ==7){
        cout<< "YES";
    }
    else cout<< "NO";

}