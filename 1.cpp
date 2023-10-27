//Problem name: 1
//https://www.eolymp.com/en/problems/1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n>=10 && n<=99){
        int a = n/10;
        int b = n%10;
        cout << a << " " << b << endl;
    }

    return 0;
}