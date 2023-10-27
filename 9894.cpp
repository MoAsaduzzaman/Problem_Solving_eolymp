//Problem name: 9894
//https://www.eolymp.com/en/problems/9894

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        cout << rowSum << endl;
    }

    return 0;
}
