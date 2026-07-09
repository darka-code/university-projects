#include <stdio.h>

long long dp[31][3][2]; 

int main() {
    int r;


    printf("Введіть кількість розрядів r (r ≤ 30): ");
    scanf("%d", &r);


    dp[1][1][0] = 1; 
    dp[1][1][1] = 1; 

    for (int i = 2; i <= r; i++) {
        for (int d = 0; d < 2; d++) {
            int other = 1 - d; 

           
            dp[i][1][d] += dp[i-1][1][other] + dp[i-1][2][other];

            dp[i][2][d] += dp[i-1][1][d];
        }
    }

    long long result = 0;
    for (int j = 1; j <= 2; j++) {
        for (int d = 0; d < 2; d++) {
            result += dp[r][j][d];
        }
    }

    printf("Кількість можливих чисел: %lld\n", result);

    return 0;
}
