int fib(int n){

	int* lookup = new int[n+1]();

	lookup[0] = 0;
	lookup[1] = 1;

	for(int i=2;i<=n;i++) {
		lookup[i] = lookup[i-1] + lookup[i-2];
	}

	return lookup[n];
}
