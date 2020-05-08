#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int cnt[41][2] = { {0,0} };
int dp[41];
int fibonacci(int n)
{
	if (n == 0) {
		dp[0] = 0;
		return 0;	
	}
	else if (n == 1){
		dp[1] = 1;
		return 1;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	else {
		return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	/*else {
		if (cnt[n][0] == 0) {
			fibonacci(n - 1);
			fibonacci(n - 2);
		}
		cnt[n][0] = cnt[n - 1][0] + cnt[n - 2][0];
		cnt[n][1] = cnt[n - 1][1] + cnt[n - 2][1];
	}*/
}
int main() {
	int T;
	int N;
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &N);
		fibonacci(N);
		if (N == 0)
			printf("%d %d\n", 1, 0);
		else if (N == 1)
			printf("%d %d\n", 0, 1);
		else
			printf("%d %d\n", dp[N - 1], dp[N]);
	}
	/*
	0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력
	 */
}