#include<iostream>
using namespace std;
int n, before, output;
int main() {
	int array[1000],store[1000];
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cin >> array[i];
	}
	store[0] = 0;
	for (int i = 1; i <= n; i++)
	    for (int j = 1; j >=1; j--)
		{
			if (array[j] < array[i]) {
				store[i]++;
			}
		}
		

	
	for (int i = 1; i <= n; i++)
		cout << store[i] << " ";


	
		return 0;
	
}
//# 小鱼比可爱
//
//## 题目描述
//
//人比人，气死人；鱼比鱼，难死鱼。小鱼最近参加了一个“比可爱”比赛，比的是每只鱼的可爱程度。参赛的鱼被从左到右排成一排，头都朝向左边，然后每只鱼会得到一个整数数值，表示这只鱼的可爱程度，很显然整数越大，表示这只鱼越可爱，而且任意两只鱼的可爱程度** 可能一样** 。由于所有的鱼头都朝向左边，所以每只鱼只能看见在它左边的鱼的可爱程度，它们心里都在计算，在自己的眼力范围内有多少只鱼不如自己可爱呢。请你帮这些可爱但是鱼脑不够用的小鱼们计算一下。
//
//## 输入格式
//
//第一行输入一个正整数 $n$，表示鱼的数目。
//
//第二行内输入 $n$ 个正整数，用空格间隔，依次表示从左到右每只小鱼的可爱程度 $a_i$。
//
//## 输出格式
//
//一行，输出 $n$ 个整数，用空格间隔，依次表示每只小鱼眼中有多少只鱼不如自己可爱。
//
//## 样例 #1
//
//### 样例输入 #1
//
//```
//6
//4 3 0 5 1 2
//```
//
//### 样例输出 #1
//
//```
//0 0 0 3 1 2
//```
//
//## 提示
//
//对于 $100\ % $ 的数据，$1 \leq n\leq 100$，$0 \leq a_i \leq 10$。
