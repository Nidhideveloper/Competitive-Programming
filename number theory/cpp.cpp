#include<bits/stdc++.h>
using namespace std;
const int size=1e6+2;
int fact[size];

void precompute(){
    fact[0]=1;
    for(int i=1; i<size; i++){
        fact[i]=fact[i-1]*i;
    }
}

int nCr(int n, int r){
    int ans=fact[n]/(fact[n-r] * fact[r]);
    return ans;
}


int main(){
    precompute();
    int q; cin>>q;
    while(q--){
        int n, r; cin>>n>>r;
        cout<<nCr(n, r)<<endl;
    }
    return 0;
}