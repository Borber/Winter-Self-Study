/*题目:
将1,2,...,9共9个数分成3组，分别组成3个三位数，且使这3个三位数构成1:2:3的比例，试求出所有满足条件的3个三位数。

#include<stdio.h>
//用数组表示;且定义为全局变量;
int n[9]={0};
//
void hs(int k);
bool bcf(int k, int m);
bool dx();
void print();
//主函数;
int main(){
	hs(0);
}
//回溯遍历;
void hs(int k) {
	for(int i = 1; i <= 9; i++) {
		if(bcf(k, i))
			n[k] = i;
		else
			continue;
		if(k == 8 && dx())
			print();
		if(k < 8)
			hs(k + 1);
		else
			continue;
	}
}
//检查数字是否重复;
bool bcf(int k, int m) {
	bool cf = false;
	for(int i = 0; i < k; i++)
		if(m == n[i])
			cf = true;
	return !cf;
}
//检查是否满足条件;
bool dx() {
	int a, b, c;
	a = n[0] * 100 + n[1] * 10 + n[2];
	b = n[3] * 100 + n[4] * 10 + n[5];
	c = n[6] * 100 + n[7] * 10 + n[8];
	if(2 * a == b)
		if(3 * a == c)
			return true;
	return false;
}
//输出;
void print() {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			printf("%d", n[3 * i + j]);
		printf(" ");
	}
	printf("\n");
}
*/