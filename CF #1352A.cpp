// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: Sum of Round Numbers
// Problem Link: https://codeforces.com/problemset/problem/1352/A
// Tags: Implementation/ Constructive
// Problem Statement:

#include <bits/stdc++.h>
using namespace std;
 
void sumOfRoundNumbers() {
    int n, c = 0;
    cin >> n;
    vector<int> store;
    while(n > 0) {
        if(n%10) c++;
        store.emplace_back(n%10);
        n /= 10;
    }
    cout << c << endl;
    for(int i = 0; i < size(store); i++) if(store[i]) cout << store[i]*pow(10, i) << " ";
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) sumOfRoundNumbers();
}
