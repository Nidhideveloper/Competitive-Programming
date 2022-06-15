/*nth fibonnaci*/

#include<bits/stdc++.h>
using namespace std;

void multiply(int F[2][2], int M[2][2]){
    int x = F[0][0] * M[0][0] +
            F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] +
            F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] +
            F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] +
            F[1][1] * M[1][1];
     
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

int solve(int n){
    int ans[2][2]={{1, 0}, {0, 1}};
    int base[2][2]={{1, 1}, {1, 0}};

    while(n>0){
        if(n%2==0){
            multiply(base, base);
            n=n/2;
        }
        else{
            multiply(ans, base);
            n=n-1;
        }
    }
    return ans[0][0];
}

int main(){
    int n; cin>>n;
    n=n-1;//because this algo gives result for n+1
    cout<<solve(n);
    

    return 0;
}