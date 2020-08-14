#include<Stdio.h>
int main()
{
	int a;
	printf("please enter you number :  ");
	scanf_s("%d", &a);
		if (a % 2 == 0) {
			printf(" %d is even number",a);
		}
		else
			printf(" %d is odd number",a);
}