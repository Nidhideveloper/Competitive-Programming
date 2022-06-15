#include<bits/stdc++.h>
using namespace std;
const int mod=(int)(1e9+7);

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int power(int x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    int p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}

void modInv(int a, int m){
    int g=gcd(a, m);
    if(g!=1){
        cout << "Inverse doesn't exist\n";
    }
    else{
        cout << "Modular multiplicative inverse is "
             << power(a, m - 2, m)<<endl;
    }
}

int main(){
    int a, m; cin>>a>>m;
    modInv(a, m);
    return 0;
}