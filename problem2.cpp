///Bismillahir Rohmaniym Rohiym
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define sc second
#define int int64_t
#define sz(x) long((x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9+7;
const double PI = acos( -1. );
void in(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int get(int n){
    if(n == 1) return 3;
    return pow(get(n-1), 2)+3;
}
void solve(){
    int n; cin >> n;
    cout << get(n);
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
