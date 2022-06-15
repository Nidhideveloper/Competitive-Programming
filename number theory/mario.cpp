#include<bits/stdc++.h>
using namespace std;

int main(){
    int initial, jumpcal, coincal, n, m;
    cin>>initial>>jumpcal>>coincal>>n>>m;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    } 
    int cnt=0;
    for(int col=0; col<m; col++){
        int jump=0, temp=0;
        bool flag=0;
        int req=0;
        if(v[n-1][col]=='H') flag=1;
        for(int row=n-2; row>=0; row--){
            if(!flag && v[row][col]=='C') jump=(n-row-1), temp++;
            else if(flag && v[row][col]=='0'){
                jump=(n-row-1);
                break;
            }
        }
        if(flag) req=jump*jumpcal;
        else if(!flag && temp) req=jump*jumpcal-temp*coincal;
        else req=1;

        if(initial<req){
            cout<<cnt; break;
        }
        initial-=req;
        cnt=col;
    }

    if(cnt==m-1) cout<<initial;


    return 0;
}