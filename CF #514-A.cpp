// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: Chewbacca and Number
// Problem Link: https://codeforces.com/contest/514/problem/A
// Contest: CodeForces #291
// Tags: Implementation/ Constructive
 
// Problem Statement: Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9-t. Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < size(s); i++) {
        if(s[i] == '5') s[i] = '4';
        else if(s[i] == '6') s[i] = '3';
        else if(s[i] == '7') s[i] = '2';
        else if(s[i] == '8') s[i] = '1';
        else if(s[i] == '9') s[i] = '0';
    }
    if(s[0] == '0') s[0] = '9';
    cout << s;
    return 0;
}