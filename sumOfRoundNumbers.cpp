#include<bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(nullptr);


    int t; 
    cin >> t;

    while(t--){

        int input; 
        cin >> input;

        int digits = log10(input) ;
        int digits1 = pow(10,digits);

//9856/10
        while(input != 0){
            int prnt =  input - (input%digits1);
            cout<< prnt;
            input = input%digits1;
            digits1 = digits1/10;
        }

    }

    return 0;


}