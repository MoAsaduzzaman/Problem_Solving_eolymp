//Problem nmae: 494 
//https://www.eolymp.com/en/problems/494

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int len = s.length();

    int count = 0;

    for(int i=0; i<len; i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'){
            count++;
        }
    }

    cout << count << endl;


    return 0;
}