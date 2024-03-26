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
void get(string s, int c, int a, int b){
    if(c >= sz(s)) return;
    if(c >= a && c <= b) cout << s[c];
    return get(s, c + 1, a, b);
}
void solve(){
    string s; getline(cin, s);
    int a, b, c = 0; cin >> a >> b;
    get(s, c, a, b);
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