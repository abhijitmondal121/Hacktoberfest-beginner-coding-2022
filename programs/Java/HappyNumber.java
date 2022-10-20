class HappyNumber {
    public boolean isHappy(int number) {

        return HappyNumber (number, 0, true, false);

    }
    static boolean HappyNumber (int number, int ans, boolean flips, boolean flops) {

        if (number == 0 && ans == 1) return flips;
        if (number == 0 && ans == 4) return flops;

        if (number == 0) {
            number = ans;
            ans = 0;
        }

        int rem =  number % 10;

        return HappyNumber (number / 10, ans += rem * rem, flips, flops);
    }
}