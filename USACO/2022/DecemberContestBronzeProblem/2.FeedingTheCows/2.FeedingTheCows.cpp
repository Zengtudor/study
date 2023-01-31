#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		string s;
		string ans(n, '.');
		cin >> s;
		int len = s.length();
		int Ggrass = -k - 1, Hgrass = -k - 1, cnt = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == 'G' && i - Ggrass > k) {
				cnt++;
				if (i + k >= n) {
					Ggrass = i;
					if (ans[Ggrass] == 'H')Ggrass--;
				} else {
					Ggrass = i + k;
				}
				ans[Ggrass] = 'G';
			} else if (s[i] == 'H' && i - Hgrass > k) {
				cnt++;
				if (i + k >= n) {
					Hgrass = i;
					if (ans[Hgrass] == 'G')Hgrass--;
				} else {
					Hgrass = i + k;
				}
				ans[Hgrass] = 'H';
			}
		}
		cout << cnt << "\n" << ans << "\n";
	}
	return 0;
}
