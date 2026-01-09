#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
constexpr char nl = '\n';
inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<char, int> um;
        for (char c : s)
        {
            um[c]++;
        }
        bool possible = false;
        for (auto &i : um)
        {
            if (i.second >= 2)
            {
                possible = true;
                break;
            }
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
}

int main()
{
    fast_io();
    solve();
    return 0;
}