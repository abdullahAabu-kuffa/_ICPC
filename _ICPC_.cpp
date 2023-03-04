#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <bitset>
#include <numeric>
#include <cassert>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <class T> using ordered_set = tree<int,
//null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;
#define  ll  long long
#define endl    "\n"
#define output(v) for(auto& it : v){cout<<it<<" ";}cout<<"\n"
#define input(v) for(auto& it : v){cin>>it;}
#define digits(n) fixed<<setprecision(n)
#define Do_not_give_up FAST();
#define sz(x)     int(x.size())
#define all(x)     x.begin(), x.end()
#define rall(x)     x.rbegin(), x.rend()
#define sin(x)     (x* pi / 180)
#define pi        acos(-1)
const double PI = 3.1415926535897932;
const ll INF = 1e18;
const int mod = 1e9 + 7, O = 0x3f3f3f3fLL, ESP = 1e-9;
const int N = 1e5 + 5;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int rr[] = { 1,1,1,-1,-1,-1,0,0 };
int cc[] = { 1,-1,0,1,-1,0,1,-1 };
ll fib(ll n) { return n < 2 ? 1 : fib(n - 1) + fib(n - 2); }
ll fact(ll n) { return (n == 0) ? 1 : n * fact(n - 1); }
ll gcd(ll a, ll b) { return (a) ? gcd(b % a, a) : b; } //greatest common divisor
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; } //least common multiple
ll Mod(ll n, ll mod) { return n & (mod - 1); }
ll fastPower(ll base, ll power) {
    if (power == 0) { return 1; } if (power == 1) { return base % mod; }
    return (((fastPower(base, power >> 1) * fastPower(base, power >> 1)) % mod) * fastPower(base, power & 1)) % mod;
}
unsigned ll nCr(int n, int r) {
    if (r > n)return 0; r = max(r, n - r);
    unsigned ll ans = 1, div = 1, i = (ll)r + 1;
    while (i <= n) { ans *= i; i++; ans /= div; div++; }
    return ans;
}
unsigned ll nPr(int n, int r) {
    if (r > n)return 0;
    unsigned ll a = 1, i = (ll)n - r + 1;
    while (i <= n) { a *= i; i++; }
    return a;
}
bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
}
bool isPowerOfTwo(ll n) { return ((n & (n - 1)) == 0 && n != 0); }
bool isPrime(ll n) { //not optimise
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return  false;
    return  true;
}
bool prime[int(1e6)];
void sieve() {
    prime[1] = 1;
    prime[0] = 1;
    for (ll i = 2; i * i <= 1000; i++)
    {
        if (!prime[i]) {
            for (ll j = i + i; j <= 1000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
void FAST() {
    std::ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    //freopen("smallest.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
/**
01- Think on paper not on PC Please -_-
02- Pleaaaaase read the problem well and slowlllllllllllllllly..
03- Choose the smallest problem to solve first
04- Test each point in the problem
05- If it is math, think of gcd, lcm, primes, factorial, or power..
06- Don't use built in math fuctions directly in cout !!!
07- Try the samples on the idea first, then type the code
08- Don't take too much time through one problem if you didn't read all problems
09- Analyze the scoreboard to pick up the optimal problem to solve
10- Don't waste much time to follow the scoreboard.
**/
inline int in() {
    int x;
    cin >> x;
    return x;
}
void Run_Case() {
    int n;  cin >> n;
    string s;   cin >> s;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'M' || s[i] == 'm')ans.push_back(1);
        else if (s[i] == 'E' || s[i] == 'e')ans.push_back(2);
        else if (s[i] == 'O' || s[i] == 'o')ans.push_back(3);
        else if (s[i] == 'W' || s[i] == 'w')ans.push_back(4);
        else ans.push_back(5);
    }
    vector<int>un = ans;
    sort(all(ans));
    bool sun = 0, sun1 = 0, sun2 = 0,sun3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (un[i] == 1)sun = 1;
        else if (un[i] == 2)sun1=1;
        else if (un[i] == 3)sun2=1;
        else if (un[i] == 4)sun3=1;

    }
    if (ans == un && sz(ans) >= 4 && ans[n - 1] <= 4 && sun && sun1 && sun2 && sun3)cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    Do_not_give_up
    int tests = 1;
    cin >> tests;
    while (tests--)
        Run_Case();
    return 0;
}