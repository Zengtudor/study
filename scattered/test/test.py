import random;

trueNum = random.randint(1,100);
inputNum = -1;
print("请在1-100的数字中选一个，看看是否能猜对？")
while True :
    mes = "";
    inputNum = int(input(f"""请输入数字: """));
    if inputNum > trueNum :
        print("你输入的数字偏大");
    elif inputNum < trueNum :
        print("你输入的数字偏小");
    else :
        print(f"""你输入的数字正确。你太厉害了！
你通关了这个游戏！
程序作者：Zengtudor
致敬每一个玩家。""");
        break;


#num = 0;
#i = 1;
#while i <= 100:
#    num+=i;
#    i+=1;
#print(f"""结果是{num}""");



#a = input("比较数字是否相等\n请输入a:");
#b = input("请输入b:");

#resault = "相等";
#if a!=b :
#    resault = "不相等";

#print(f"你输入的数字{resault}");

# num = input("请输入一个数字");
# print(f"这个数字的7次方是{int(num)**7}");
