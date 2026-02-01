#include <stdio.h>
int main() {
    int n;
    int current_index, previous_index;
    int consecutive_drops = 0;
    int total_drops = 0;
    int crash_day = -1;
    int current_day = 1;
    scanf("%d", &n);
    if (n> 0) {
        scanf("%d", &previous_index);
        current_day++;
    }
    while (current_day <= n) {
        scanf("%d", &current_index);

        if (current_index < previous_index) {
            total_drops++;
            consecutive_drops++;
            if (consecutive_drops == 3 && crash_day == -1) {
                crash_day = current_day;
            }
        } else {
            consecutive_drops = 0;
        }

        previous_index = current_index;
        current_day++;
    }
    if (crash_day != -1) {
        printf("Crash Day: %d\n", crash_day);
    }
    printf("Total Drops: %d\n", total_drops);

    return 0;
}