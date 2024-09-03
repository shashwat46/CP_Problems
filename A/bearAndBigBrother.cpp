#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Limak, Brother;
    cin >> Limak >> Brother;

    int i = 0;
    while(true){
        i++;
        
        Limak *= 3;
        Brother *= 2;

        if(Limak > Brother){
            cout << i;
            break;
        }
    }

    return 0;
}