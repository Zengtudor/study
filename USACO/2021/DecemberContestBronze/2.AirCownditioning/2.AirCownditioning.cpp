#include <iostream>
#include <vector>
using namespace std;

int n, add = 0, reduce = 0;
vector<int> p, t, itp;
int InputInt = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> InputInt;
		p.push_back(InputInt);
	}
	for (int i = 0; i < n; i++) {
		cin >> InputInt;
		t.push_back(InputInt);
	}
	for (int i = 0; i < n; i++) {
		itp.push_back(p[i] - t[i]);
	}

	if (itp[0] > 0) {
		add += itp[0];
	} else if (itp[0] < 0) {
		reduce += abs(itp[0]);
	}
	for (int i = 1; i < n; i++) {
		if (itp[i] > itp[i - 1]) {
			add += itp[i] - itp[i - 1];
		} else if (itp[i] < itp[i - 1]) {
			reduce += itp[i - 1] - itp[i];
		}
	}
	cout << (add >= reduce ? add : reduce) << "\n";
}
