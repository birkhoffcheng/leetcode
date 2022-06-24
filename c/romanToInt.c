int romanToInt(char *s) {
	int val = 0, i;
	for (i = 0; s[i]; i++) {
		switch (s[i]) {
			case 'I':
				switch (s[i+1]) {
					case 'V':
						val += 4;
						i++;
						break;
					case 'X':
						val += 9;
						i++;
						break;
					default:
						val += 1;
						break;
				}
				break;
			case 'V':
				val += 5;
				break;
			case 'X':
				switch (s[i+1]) {
					case 'L':
						val += 40;
						i++;
						break;
					case 'C':
						val += 90;
						i++;
						break;
					default:
						val += 10;
						break;
				}
				break;
			case 'L':
				val += 50;
				break;
			case 'C':
				switch (s[i+1]) {
					case 'D':
						val += 400;
						i++;
						break;
					case 'M':
						val += 900;
						i++;
						break;
					default:
						val += 100;
						break;
				}
				break;
			case 'D':
				val += 500;
				break;
			case 'M':
				val += 1000;
				break;
		}
	}
	return val;
}
