#include <stdio.h>

int main()
{
	long long int n,s=0,i;
	scanf("%lld",&n);
	for(i=1;s<=n;i++) s+=i;
	printf("%d",i-2);
}