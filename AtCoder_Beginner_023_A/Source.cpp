/*
��蕶
����� 23 ��ڂ� AtCoder Beginner Contest �ł��B����̃R���e�X�g�� 5 ���ɊJ����Ă��܂��B
�����N�� 23 �Ƃ������������āA�\�̈ʂƈ�̈ʂɕ������đ������킹�邱�Ƃɂ���āA2+3=5 �ƌ��݂̌��Ɠ��������ƂȂ邱�ƂɋC���t���܂����B
���̂��Ƃɋ����������������N�́A�茳�ɂ����� 2 ���̐����� X �̊e�ʂ̘a���v�Z���邱�Ƃɂ��܂����B
���Ȃ��̉ۑ�́A������ X �̊e�ʂ̘a�����߂邱�Ƃł�
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