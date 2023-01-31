#include<bits/stdc++.h>

struct _point {
	long double x, y;
};
time_t start, end;

int main() {
	std::cout<<"圆周率估算程序计算开始,方法：蒙洛卡特算法（随机的思想），作者：ZZY\n";
	srand(time(NULL));
	_point a, b;
	long long i = 0, j = 0, max = 0;
//	std::cout<<"请输入运算次数:";
//	std::cin>>max;

	start = time(0);

	int range = INT_MAX;
	long double d = 0, pai = 0;
	for (i = 1; ; i++) {
		int _a = 1, _b = -1;
		a.x = (long double)rand() / RAND_MAX * (_b - _a) + _a;
		a.y = (long double)rand() / RAND_MAX * (_b - _a) + _a;
		b.x = (long double)rand() / RAND_MAX * (_b - _a) + _a;
		b.y = (long double)rand() / RAND_MAX * (_b - _a) + _a;

		d = b.x * b.x + b.y * b.y;
		if (d <= 1) {
			j++;
		}
		if (i % 100000000 == 0) {
			pai = (long double)j / ((long double)i / (long double)(4.0));
			end = time(0);
			std::cout << "第 " << i << " 估算," << "用时 " << end - start << " 秒,结果是" << pai << "\n";
		}
	}
	system("pause");
}
