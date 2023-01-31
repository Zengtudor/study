#include <bits/stdc++.h>
using namespace std;

int n;
string str;
vector<int> prefixG = {0}, prefixH = {0};

int main()
{
    cin >> n;
    cin >> str;

    int numG = 0, numH = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'G')
        {
            numG++;
        }
        else
        {
            numH++;
        }
        prefixG.push_back(numG);
        prefixH.push_back(numH);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        bool isGood = true;
        for (int j = i + 2; j <= n; j++)
        {
            if ((prefixG[j] - prefixG[i - 1]) == 1 ||
                (prefixH[j] - prefixH[i - 1]) == 1)
            {
                ans++;
            }
        }
    }
    cout << ans << "\n";
}