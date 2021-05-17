// 326. Power of Three

bool isPowerOfThree(int n){
    int found = 1;
    if (n <= 0)
        return false;
    
    while (n > 1) {
        if (n % 3 != 0)
            found = 0;
        n = n / 3;
    }
    if (found == 1)
       return true;
    else
        return false;
}