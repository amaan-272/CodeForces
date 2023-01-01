// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: In Search of an Easy Problem
// Problem Link: https://codeforces.com/problemset/problem/1030/A
// Tags: Implementation/ Constructive
// Problem Statement: When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked n people about their opinions. Each person answered whether this problem is easy or hard. If at least one of these n people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    bool found = false;
    for(int i:a) {
        if(i) {
            found = true;
            break;
        }
    }
    if(found) cout << "HARD";
    else cout << "EASY";
}
