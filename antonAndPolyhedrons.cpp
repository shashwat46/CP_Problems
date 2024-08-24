#include<bits/stdc++.h>
using namespace std;

/*
Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number; 
    cin>> number;

    int faces = 0;

    for(int i = 1; i<=number; i++){
        string polyhedron; 
        cin>> polyhedron; 

        if(polyhedron[0] == 'T'){
            faces += 4;
        }
        else if(polyhedron[0] == 'C'){
            faces+=6;
        }
        else if(polyhedron[0] == 'O'){
            faces += 8;
        }
         else if(polyhedron[0] == 'D'){
            faces += 12;
        }
         else if(polyhedron[0] == 'I'){
            faces += 20;
        }
    }

    cout << faces;

    return 0;
}