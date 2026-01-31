#include <stdio.h>

int main() {
    int maxCapacity, n, treatedPatients = 0, rejectedPatients = 0, hourlyArrivals, totalArrivals = 0;
    scanf("%d", &maxCapacity);
    scanf("%d", &n);
    int i = 0;
    while (i < n) {
        scanf("%d", &hourlyArrivals);
        totalArrivals += hourlyArrivals;
        i++;
    }
    if (totalArrivals <= maxCapacity) {
        treatedPatients = totalArrivals;
        rejectedPatients = 0;
    } else {
        treatedPatients = maxCapacity;
        rejectedPatients = totalArrivals - maxCapacity;
    }

    printf("Treated Patients: %d\n", treatedPatients);
    printf("Rejected Patients: %d\n", rejectedPatients);

    return 0;
}