int main()
{
	int i,j,a;
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		j=1;
		while(j<=a)
		{
			if(j<=(a-i))
				printf(" ");
			else
				printf("*");

			j++;
		}
		printf("\n");
		i++;
	}
}
