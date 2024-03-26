///Bismillahir Rohmaniym Rohiym
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define sc second
#define int long long
#define sz(x) long((x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9+7;
const double PI = acos( -1. );
void in(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void fib(int n, int a, int b){
    if(n){ fib(n-1, b, a + b); cout << a << ' '; }
    else return;
}
void solve(){
    int n; cin >> n;
    fib(n, 0, 1);
}
signed main(){
    //in();
    cin.tie(0)->sync_with_stdio(0);
    int t; t = 1;
    //cin >> t;
    while(t--) solve();
}
/*
        ██╗  ██╗███╗   ██╗██╗   ██╗ █████╗ ███████╗
        ██║ ██╔╝████╗  ██║╚██╗ ██╔╝██╔══██╗╚══███╔╝
        █████╔╝ ██╔██╗ ██║ ╚████╔╝ ███████║  ███╔╝
        ██╔═██╗ ██║╚██╗██║  ╚██╔╝  ██╔══██║ ███╔╝
███████╗██║  ██╗██║ ╚████║   ██║   ██║  ██║███████╗███████╗
╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚══════╝
*/