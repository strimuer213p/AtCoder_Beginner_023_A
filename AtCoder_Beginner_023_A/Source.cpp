/*
問題文
今回は 23 回目の AtCoder Beginner Contest です。今回のコンテストは 5 月に開かれています。
高橋君は 23 という整数を見て、十の位と一の位に分割して足し合わせることによって、2+3=5 と現在の月と等しい数となることに気が付きました。
このことに興味を持った高橋君は、手元にあった 2 桁の正整数 X の各位の和を計算することにしました。
あなたの課題は、正整数 X の各位の和を求めることです
*/

#include<iostream>
#include<vector>
#include<cmath>

const int radix=10;

int main() {
	int num,i=0,p,k,sum=0;
	std::vector<int> digit;
	std::cin >> num;

	do{
		i++;
	} while (num / int(std::pow(radix, i)));

	i--;

	for (p=i; p >= 0; p--) {
		digit.push_back(num%radix);
		num/=10;
	}

	for (int j = 0; j < digit.size(); j++) {
		sum += digit[j];
	}
	
	std::cout << sum << std::endl;

	return 0;
}