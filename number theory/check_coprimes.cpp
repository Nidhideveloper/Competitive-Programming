/* gives no of nos, from 1 to n-1 which are co primes of n*/

#include<bits/stdc++.h>
using namespace std;
const int size=1e6+2;
int tot[size];

void totient()
{
    for(int i=0; i<size; i++){
        tot[i]=i;
    }
    for(int i=2; i<size; i++){
        if(tot[i]==i){
            tot[i]-=1;
            for(int j=2*i; j<size; j+=i) tot[j]-=tot[j]/i;
        }
    }
}

int main(){
    //print tot
    return 0;
}