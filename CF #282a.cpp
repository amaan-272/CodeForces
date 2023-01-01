// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272

// Problem: #282A: Bit++
// Tags: Implementation/ Constructive
// Link: https://codeforces.com/problemset/problem/282/A
// Problem Statement: Given an integer num, return the number of digits in num that divide num. An integer val divides nums if nums % val == 0.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<string> store(n);
    for(int i = 0; i < n; i++) cin >> store[i];
    for(string s:store) {
        for(char c:s) {
            if(c == '+') ans++;
            else if(c == '-') ans--;
        }
    }
    cout << ans/2;
}
