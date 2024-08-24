#include<bits/stdc++.h>
using namespace std;


/*
#########
........#
#########
#........
#########
........#
#########
#........
#########
*/
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin>>m>>n;

    vector<vector<char>> v(m, vector<char>(n,'.'));

    for(int i = 0; i<m; i += 2){
        fill(v[i].begin(),v[i].end(),'#');
    }

    int toggle = 1;
    for(int i = 1; i<m; i += 2){
        if(toggle%2 == 1){
            v[i][n] = '#';
        }
        if(toggle%2 != 1){
            v[i][0] = '#';
        }

    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<v[i][j];
        }
    }
    
    return 0;
    
}