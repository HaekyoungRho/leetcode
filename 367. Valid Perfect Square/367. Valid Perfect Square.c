// 367. Valid Perfect Square

bool isPerfectSquare(int num){
    int found = 0;
	if (num == 1)
		found = 1;
	else {
		for (long i = 2; (i * i) <= num; i++) {
			if ((i * i) == num) {
				found = 1;
			}
		}
	}
	if (found == 1)
		return true;
	else
		return false;
}