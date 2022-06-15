#include<bits/stdc++.h>
using namespace std;
int power(int base, int x){
    int ans=1;
    while(x>0){
        if(x%2==0){
            base=base*base;
            x=x/2;
        }
        else{
            ans=ans*base;
            x=x-1;
        }
    }
    return ans;
}
int main(){
    
    int base=3, x=2;
    cout<<power(base, x);


    return 0;
}