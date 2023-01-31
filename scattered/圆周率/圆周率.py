import random
import time


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y


start = time.time()

print("圆周率估算程序计算开始,方法：蒙洛卡特算法（随机的思想），作者：ZZY")
random.seed(time.time())
a = Point(0, 0)
b = Point(0, 0)
i = 0
j = 0

range_ = int(2 ** 31 - 1)
d = 0
pai = 0
while True:
    a.x = random.uniform(-1, 1)
    a.y = random.uniform(-1, 1)
    b.x = random.uniform(-1, 1)
    b.y = random.uniform(-1, 1)

    d = b.x ** 2 + b.y ** 2
    if d <= 1:
        j += 1
    i += 1

    if i % 1000000 == 0:
        pai = j / (i / 4.0)
        end = time.time()
        print("第 ", i, " 估算,用时 ", end - start, " 秒,结果是", pai)
