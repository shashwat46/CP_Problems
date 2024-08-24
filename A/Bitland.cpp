#include<bits/stdc++.h>
using namespace std;

int main(){
    int lines;
    cin>>lines;
    int X = 0;

    for(int i = 1; i<=lines; i++){
        string currentLine; 
        cin >> currentLine;

        if(currentLine.find("++") != string::npos){
            X++;
        }
        else if(currentLine.find("--") != string::npos){
            --X;
        }
    }

    std::cout << X;

    return 0;
}