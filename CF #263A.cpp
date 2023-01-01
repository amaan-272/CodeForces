// CodeForces Solution Set 
// Mohammad Amaan Sharif
// amaan_272
 
// Problem: Beautiful Matrix
// Problem Link: https://codeforces.com/problemset/problem/263/A
// Tags: Implementation/ Constructive
// Problem Statement: You've got a 5×5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix: Swap two neighboring matrix rows, that is, rows with indexes i and i+1 for some integer i (1≤i<5). Swap two neighboring matrix columns, that is, columns with indexes j and j+1 for some integer j (1≤j<5). You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

#include <bits/stdc++.h>
using namespace std;

int beautifulMatrix() {
    int mat[5][5];
    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) cin >> mat[i][j];
    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) if(mat[i][j]) return abs(2-i)+abs(2-j);
} 
 
int main() {
    cout << beautifulMatrix();
}