#include <bits/stdc++.h>
using namespace std;

int n, RXRE[(int)1e6 + 10];
string str;
bool visited[(int)1e6 + 10];
int main()
{
    cin >> n >> str;
    for (int i = 1; i <= n; i++)
    {
        cin >> RXRE[i];
    }
    int RXRfg = -1, RXRlg = -1, RXRfh = -1, RXRlh = -1;
    for (int i = 1; i <= n; i++)
    {
        if (str[i - 1] == 'G')
        {
            if (RXRfg == -1)
            {
                RXRfg = i;
                RXRlg = i;
            }
            else
            {
                RXRlg = i;
            }
        }
        else
        {
            if (RXRfh == -1)
            {
                RXRfh = i;
                RXRlh = i;
            }
            else
            {
                RXRlh = i;
            }
        }
    }
    int gcnt = 0, hcnt = 0;
    int ldg = -1, ldh = -1;
    if (RXRfg != -1 && RXRlg <= RXRE[RXRfg])
    {
        ldg = RXRfg;
        visited[RXRfg] = true;
        gcnt++;
    }
    if (RXRfh != -1 && RXRlh <= RXRE[RXRfh])
    {
        ldh = RXRfh;
        visited[RXRfh] = true;
        hcnt++;
    }

    for (int i = 1; i <= ldg; i++)
    {
        if (str[i - 1] == 'H' && RXRE[i] >= ldg && !visited[i])
        {
            hcnt++;
        }
    }
    for (int i = 1; i <= ldh; i++)
    {
        if (str[i - 1] == 'G' && RXRE[i] >= ldh && !visited[i])
        {
            gcnt++;
        }
    }
    cout << hcnt * gcnt << endl;
}