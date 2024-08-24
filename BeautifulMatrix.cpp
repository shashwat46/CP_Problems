 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){

        int input; 

        for(int i = 0; i<5; i++)
            for(int j = 0; j<5; j++){
                cin >> input;
                if(input){
                    int output = abs(i-2) + abs(j-2);
                    cout << output;
                    break;
                }
            }

            return 0;
    }