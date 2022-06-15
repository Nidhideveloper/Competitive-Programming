#include<bits/stdc++.h>
using namespace std;

int extended_gcd(int a, int b, int &x, int &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }

    int g=extended_gcd(b, a%b, x, y);
    int x1=x, y1=y;
    x=y1;
    y=x1 - (a/b)*y1;
    return g;
}

void print_sol(int a, int b, int c){
    int x, y;
    if(a==0 && b==0){
        if (c == 0) {
            cout<< "Infinite Solutions Exist"<< endl;
        }
        else {
            cout<< "No Solution exists"<< endl;
        }
    }
    else{
        int g=extended_gcd(a, b, x, y);
        if (c % g != 0) {
        cout<< "No Solution exists"<< endl;
        }
        else{
            cout << "x = " << x * (c / g)
             << ", y = " << y * (c / g)
             << endl;
        }
    }

}

int main(){
    int a,b, c;
    cin>>a>>b>>c;
    print_sol(a, b, c);

    return 0;
}