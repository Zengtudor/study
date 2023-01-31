#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

int T;
int cnt[27], cnt1[27];
string a, b;

int main() {
  cin >> T;
  while (T--) {
    memset(cnt, 0, sizeof cnt);
    memset(cnt1, 0, sizeof cnt1);
    cin >> a >> b;
    int len = a.size();
    if (len != b.size()) {
      cout << "-1" << endl;
      continue;
    }
    for (int i = 0; i < len; i++) {
      cnt[a[i] - 'A' + 1]++;
      cnt1[b[i] - 'A' + 1]++;
    }
    sort(cnt + 1, cnt + 27);
    sort(cnt1 + 1, cnt1 + 27);
    for (int i = 1; i <= 26; i++) {
      if (cnt[i] != cnt1[i]) {
        cout << "-1" << endl;
        return 0;
      }
    }
    int ans = 0;
    for (int i = 0; i < len; i++) {
      if (a[i] != b[i]) {
        ans++;
        for (int j = i + 1; j < len; j++) {
          if (a[j] == b[i]) {
            swap(a[j], a[i]);
            break;
          }
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
