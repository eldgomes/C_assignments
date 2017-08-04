int revnum(int num){
	int remainder, reverse = 0;
	 while (num > 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
	return reverse;
}