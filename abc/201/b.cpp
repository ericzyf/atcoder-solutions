#include <bits/stdc++.h>
using namespace std;

struct Mountain
{
    string name;
    int height;

    Mountain(): Mountain("", 0)
    {

    }

    Mountain(const string& s, const int t): name(s), height(t)
    {

    }

    bool operator<(const Mountain& rhs) const
    {
        return height < rhs.height;
    }
};

int main()
{
    int n;
    cin >> n;
    Mountain buf[2];
    for (int i = 0; i < n; ++i) {
        string s;
        int t;
        cin >> s >> t;
        Mountain m(s, t);
        if (buf[0] < m) {
            buf[1] = buf[0];
            buf[0] = m;
        } else if (buf[1] < m) {
            buf[1] = m;
        }
    }
    cout << buf[1].name << endl;
}
