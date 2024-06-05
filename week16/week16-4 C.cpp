#include <stdio.h>
int main()
{
	char line[100];
	scanf("%s",line);
	for(int i=0;line[i]!=0;i++)
	{
		if(line[i]>='0'&&line[i]<='9')
		{
			printf("%c\n",line[i]);
			break;
		}
	}
}N#include <stdio.h>
int main()
{
	int a[100];
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=N-1;i>=0;i--)
	{
		if(a[i]%2==1)


		{
			printf("%d ",a[i]);
		}
	}
}
