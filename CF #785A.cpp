// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: Anton and Polyhedrons
// Problem Link: https://codeforces.com/problemset/problem/785/A
// Tags: Implementation/ Constructive
// Problem Statement: Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of regular polyhedrons: Tetrahedron. Tetrahedron has 4 triangular faces. Cube. Cube has 6 square faces. Octahedron. Octahedron has 8 triangular faces. Dodecahedron. Dodecahedron has 12 pentagonal faces. Icosahedron. Icosahedron has 20 triangular faces. Anton has a collection of n polyhedrons. One day he decided to know, how many faces his polyhedrons have in total. Help Anton and find this number!

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<string> store(n);
    for(int i = 0; i < n; i++) cin >> store[i];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(store[i] == "Tetrahedron") ans += 4;
        else if(store[i] == "Cube") ans += 6;
        else if(store[i] == "Octahedron") ans += 8;
        else if(store[i] == "Dodecahedron") ans += 12;
        else if(store[i] == "Icosahedron") ans += 20;
    }
    cout << ans;
}
