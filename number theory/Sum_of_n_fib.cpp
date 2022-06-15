#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b){
    int sz=a.size();
    vector<vector<int>> temp(sz, vector<int>(sz, 0));
    for(int i=0; i<sz; i++){
        for(int j=0; j<sz; j++){
            for(int k=0; k<sz; k++){
                temp[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return temp;
}

vector<vector<int>> matrixExpo(vector<vector<int>> &base, int n){
    int sz = base.size();
    vector<vector<int>> ans(sz, vector<int>(sz, 0));
    //vector<vector<int>> temp(sz, vector<int>(sz, 0));
    for(int i=0; i<sz; i++){
        ans[i][i]=1;
    }
    if(n==0){

        return ans;
    }
    if(n==1){
        return base;
    }

    vector<vector<int>> temp = matrixExpo(base, n/2);
    ans=multiply(temp, temp);

    if(n&1){
        ans = multiply(ans, base);
    }

    return ans;

}

int main(){
    
    int n; cin>>n;
    vector<vector<int>> base(3, vector<int> (3, 0));
    base[0][0]=base[0][1]=base[0][2]=1;
    base[1][1]=base[1][2]=1;
    base[2][1]=1;
    vector<vector<int>> ans=matrixExpo(base, n);
    cout<<ans[0][2];

    return 0;
}