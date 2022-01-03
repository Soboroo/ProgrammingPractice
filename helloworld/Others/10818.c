i;main(n,t,a,b){
	for(a=1e9,b=-a,scanf("%d",&n);++i<=n;a=t<a?t:a,b=t>b?t:b)
		scanf("%d",&t);
	printf("%d %d\n",a,b);
}