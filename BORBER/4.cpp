#include<iostream>
int main(){
	int k,i;
    double x = 0;
    std::cin >> k;
	for(i = 1;x <= k;i++) x+=1.0/i;
    std::cout << i-1;
	return 0;
	}