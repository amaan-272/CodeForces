// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: The New Year: Meeting Friends
// Problem Link: https://codeforces.com/problemset/problem/723/A
// Tags: Implementation/ Constructive
// Problem Statement: There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    cout << a[2]-a[0];
}
