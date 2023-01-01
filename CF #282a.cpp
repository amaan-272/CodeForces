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