//Problem name: 446 
//https://www.eolymp.com/en/problems/446

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int m = 1;
    int count = 0;
    int quatient,remainder;

    for(m=1; m<=n; m++){
        quatient = n/m;
        remainder = n%m;

        if(quatient==remainder){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}