#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        string s, ss;
        cin >> s;
        ss = s;
        ll cnt = 0;
        while (s.size() > 1)
        {
            if (s.front() == s.back())
            {
                cnt += 2;
                s.pop_back();
                s.erase(s.begin());
            }
            else if (s.front() != s.back())
            {
                cnt += 2;
                s.erase(s.begin());
            }
        }
        if (!s.empty())
            cnt++;

        ll cnt2 = 0;
        while (ss.size() > 1)
        {
            if (ss.front() == ss.back())
            {
                cnt2 += 2;
                ss.pop_back();
                ss.erase(ss.begin());
            }
            else if (ss.front() != ss.back())
            {
                cnt2 += 2;
                ss.pop_back();
            }
        }
        if (!ss.empty())
            cnt2++;
        cout << min(cnt, cnt2) << '\n';
    }
    return 0;
}