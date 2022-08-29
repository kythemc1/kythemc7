#include <bits/stdc++.h>
using namespace std;
#define MaxMN 10001
#define MaxL 33
int n, L, m;

int c[MaxMN][MaxL];

void input() {
	scanf("%d%d%d",&n,&L,&m);
	for(int i = 1; i <= n; i++) {
		//fflush(stdin);
		scanf("%s",&c[i]);
	}
} 

void prin() {
	printf("%d %d %d\n",n,L,m);
	for(int i = 1; i <= n; i++) {
		printf("%s\n",c[i]);
	}
}
int main() {
	input();
	prin();
	return 0;
}