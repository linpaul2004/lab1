#include <cstdio>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(1){
		printf("%d",n);
		if(n==1) break;
		else if (n%2) n=3*n+1;
		else n/=2;
		printf(" ");
	}
	puts("");
}
