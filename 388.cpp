//Problem name: 388 
//https://www.eolymp.com/en/problems/388

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int cnt = 0;
    int x = 0;

    for(int i=0; i<100; i++){
        if(n%2==0){
            n/=2;
            cnt++;
            if(n==1){
                break;
            }
            // cnt++;
        }else if(n%2==1){
            if(n==1){
                break;
            }else{
                n+=1;
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}