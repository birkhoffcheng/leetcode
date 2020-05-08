bool isPalindrome(int x){
	if (x < 0) return false;
	int backup = x;
	long long pal = 0;
	while (x) {
		pal *= 10;
		pal += x % 10;
		x /= 10;
	}
	return pal == backup;
}
