#include <stdio.h>

int main() {
    int cost[3][3] = {
        {1, 2, 3},
        {4, 8, 2},
        {1, 5, 1}
    };

    int dp[3][3];

    dp[0][0] = cost[0][0];

    // First row
    for (int j = 1; j < 3; j++) {
        dp[0][j] = cost[0][j] + dp[0][j - 1];
    }

    // First column
    for (int i = 1; i < 3; i++) {
        dp[i][0] = cost[i][0] + dp[i - 1][0];
    }

    // Remaining cells
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            if (dp[i - 1][j] < dp[i][j - 1])
                dp[i][j] = cost[i][j] + dp[i - 1][j];
            else
                dp[i][j] = cost[i][j] + dp[i][j - 1];
        }
    }

    printf("Minimum Cost = %d\n", dp[2][2]);

    return 0;
}