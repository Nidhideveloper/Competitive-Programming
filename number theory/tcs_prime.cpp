#include <bits/stdc++.h>
#include<bitset>
using namespace std;
typedef long long ll;
//const int N = (int) 1e5 + 5;
//int a[N], b[N];
//vector<pair<ll, ll>> v;
//vector<ll> v;
//const int32_t N=2e5+4;
const int mod=1e9+7;
//#define N 1e12+7
vector<ll> fact(40);
//vector<ll> power;

ll highestpow2(ll x){
    x|=x>>1;
    x|=x>>2;
    x|=x>>4;
    x|=x>>8;
    x|=x>>16;
    return x^(x>>1);
}

 
long double dist(long double x1, long double y1, long double x2, long double y2){
    return abs((x1*x1)-(x2*x2))+abs((y1*y1)-(y2*y2));
}

int distint(int x1, int y1, int x2, int y2){
    return abs(x1-x2)+abs(y1-y2);
}

ll power(ll a, ll x){
    ll ans=1;
    while(x>0){
        if(x%2==0){
            a=a*a;
            x=x/2;
        }
        else{
            ans=ans*a;
            x=x-1;
        }
    }
    return ans;
}

bool isSorted(vector<ll> &v, int start, int end){
    int flag=1;
    for(int i=start; i<end; i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}

//int parent[N];
//vector<int> adj[N];

/*void dfs(int s,int p)
{
    parent[s]=p;
    for(int e : adj[s])
    {
        if(e!=p)
            dfs(e,s);
    }
}*/

void compute()
{
    fact[0]=1;
    for(int i=1; i<40; i++){
        fact[i]=fact[i-1]*i;
    }
}


bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

/*void pow2(){
    ll x = fact[40];
    ll tmp=highestpow2(x);
    ll t1=log2(tmp);
    for(int i=0; i<t1+1; i++){
        power.push_back(pow(2, i));
    }
}*/

bool sign(int num){
    return num>0;
}

ll findgcd(ll a, ll b, ll c){
    ll mx, temp, cnt, flag=0;
    mx=max(a, max(b, c));
    for(cnt=1; flag==0; cnt++){
        temp=mx*cnt;
        if(temp%a==0 && temp%b==0 && temp%c==0) flag=1;

    }
    return temp;
}

bool checkforprime(ll n){
    if(n==0 || n==1) return false;
    for(int i=2; i<=n/2; i++){
        if(n%i==0) return false;
    }
    return true;
}

//bool comp(pair<int, int> &a, pair<int, int> &b){
//    return a.second<b.second;
//}


int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //ll c=1;
    //int t; cin>>t;
    //vector<int> a;
    //unordered_map<string, int> mpp;
    //string ans="";
    //ll cnt_0=0, cnt_1=0;
   // while(t--){
       
        ll x, y, z, w, flag=0, res=0;
        cin>>w>>x>>y>>z;
        ll q=min(w, min(x, min(y, z)));
        if(w!=q)
        ll gcdofwxy=findgcd(w, x, y);
        res=gcdofwxy+z;
        bool isprime=checkforprime(res);
        if(isprime==true) cout<<res<<"\n";
        else cout<<"None\n";

        
    //}
    
    return 0;
}