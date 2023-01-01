// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: Soft Drinking
// Problem Link: https://codeforces.com/problemset/problem/151/A
// Tags: Implementation/ Constructive
// Problem Statement: This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt. To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k*l)/(n*nl), slices = c*d/n, salt = p/(n*np);
    int ans = min(drink, slices);
    ans = min(ans, salt);
    cout << ans;
}
