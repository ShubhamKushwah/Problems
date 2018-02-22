int fib(int n, int* lookup){

	if(lookup[n] == 0) {
		if(n<=0){
			return 0;
		} else if(n==1){
			return 1;
		} else {
			lookup[n] = fib(n-1, lookup) + fib(n-2, lookup);
		}
	}
	return lookup[n];
}

void main() {

	int num;
	cin>>num;
	int* lookup = new int[num+1]();
	lookup[0] = 0;
	lookup[1] = 1;
	cout<<fib(num, lookup)<<endl;

}
