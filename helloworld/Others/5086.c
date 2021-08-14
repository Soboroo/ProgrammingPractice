main(a, b)
{
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (!a && !b)
			return 0;
		if (!(b % a))
			printf("factor\n");
		else if (!(a % b))
			printf("multiple\n");
		else
			printf("neither\n");
	}
}