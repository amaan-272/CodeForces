// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: Nearly Lucky Number
// Problem Link: https://codeforces.com/problemset/problem/110/A
// Tags: Implementation/ Constructive
// Problem Statement: Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not. Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int c4 = 0, c7 = 0;
    for(char i:s) if(i == '4') c4++;
    for(char i:s) if(i == '7') c7++;
    if(c4+c7 == 0) cout << "NO";
    else if((c4+c7) == 4) cout << "YES";
    else if((c4+c7) == 7) cout << "YES";
    else cout << "NO";
}
