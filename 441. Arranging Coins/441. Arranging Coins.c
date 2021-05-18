int arrangeCoins(int n){
	int stair = 1;
	int count = 0;

	while (n >= stair) {
		n -= stair;
		count++;
		stair++;
	}

	return count;
}