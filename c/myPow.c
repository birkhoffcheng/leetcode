double myPow(double x, int n) {
	if (n == 0) return 1;
	else if (n == 1) return x;
	else if (n > 0) {
		double result = 1;
		while (n) {
			if (n & 1) result *= x;
			n >>= 1;
			x *= x;
		}
		return result;
	}
	else if (n == 0x80000000) return myPow(1/x, -(n+1)) / x;
	else return myPow(1/x, -n);
}
