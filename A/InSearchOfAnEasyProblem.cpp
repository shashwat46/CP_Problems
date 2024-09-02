#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>> n;
    bool check = false; 

    for(int i = 0; i<n; i++){
        int ele;
        cin>> ele;
        if(ele){
            cout<<"HARD";
            return 0;
        }
    }

  
    cout<< "EASY";

    return 0;
}