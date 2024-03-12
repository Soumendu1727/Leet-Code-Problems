import java.util.Arrays;
public class Main {
    public static int count_ways(int[] coins, int sum) {
        int n = coins.length;
        int[] dp = new int[sum + 1];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[0] = 0;

        for (int i = 1; i <= sum; i++) {
            for (int j = 0; j < n; j++) {
                if (coins[j] <= i) {
                    int sub_res = dp[i - coins[j]];
                    if (sub_res != Integer.MAX_VALUE && sub_res + 1 < dp[i]) {
                        dp[i] = sub_res + 1;
                    }
                }
            }
        }

        return dp[sum] == Integer.MAX_VALUE ? -1 : dp[sum];
    }

    public static void main(String[] args) {
        int[] coins1 = {1, 5, 15, 6, 8, 19, 10};
        int sum1 = 10;
        System.out.println("Minimum coins required for sum 10: " + count_ways(coins1, sum1));

        int[] coins2 = {12};
        int sum2 = 13;
        System.out.println("Minimum coins required for sum 13: " + count_ways(coins2, sum2));
    }
}