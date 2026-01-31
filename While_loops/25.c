#include <stdio.h>

int main() {
    int N, amount, high_value_count = 0, consecutive_count = 0, attempt = 0, fraud_attempt = -1;
    scanf("%d", &N);

    while (attempt < N) {
        attempt++;
        scanf("%d", &amount);

        if (amount >= 50000) {
            high_value_count++;
            consecutive_count++;
            if (consecutive_count == 3 && fraud_attempt == -1) {
                fraud_attempt = attempt;
            }
        } else {
            consecutive_count = 0;
        }
    }

    if (fraud_attempt != -1) {
        printf("Fraud Triggered At Attempt: %d\n", fraud_attempt);
    } else {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    }
    printf("High-Value Transaction Count: %d\n", high_value_count);

    return 0;
}