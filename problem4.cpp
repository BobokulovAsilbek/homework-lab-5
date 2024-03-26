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
double get(double a, int cnt){
    if(!cnt) return 0;
    return (cnt % 2 ? a : -a) / double(cnt) + get(a, cnt - 1);
}
void solve(){
    int cnt; cin >> cnt;
    double a = 1;
    printf("%.4f",get(a, cnt));
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
