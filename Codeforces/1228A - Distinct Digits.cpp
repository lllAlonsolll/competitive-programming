#include <bits/stdc++.h>
#define pi acos(-1)
#define sz(x) (int) x.size()
#define pii pair<int, int>
#define pill pair<int, long long>
#define mii map<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define popb pop_back
#define all(v) v.begin(),v.end()
#define mod(x, m) ((x % m) + m) % m
#define mset(v, x) memset(v, x, sizeof(v))
#define mset2d(v, x, n) memset(v, x, sizeof(v[0][0]) * n * n)
#define mset2dd(v, x, n, m) memset(v, x, sizeof(v[0][0]) * n * m)
#define debug(x) cerr<<#x<<" : "<<x<<endl
#define debug2(x,y) cerr<<#x<<" : "<<x<<" & "<<#y<<" : "<<y<<endl
#define test() cerr<<"hola papa"<<endl
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int l, r;

int main() {
    cin >> l >> r;

    int ans = -1;

    for (int x = l; x <= r; ++x) {
        vi v(10, 0);

        int aux = x;

        while (aux) {
            int d = aux % 10;
            aux /= 10;
            v[d]++;
        }

        bool flag = true;

        for (int i = 0; i < 10 && flag; ++i) {
            if (v[i] > 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            ans = x;
            break;
        }
    }

    cout <<ans << "\n";
}