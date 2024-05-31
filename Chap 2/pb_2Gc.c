#include <stdio.h>
#include <math.h>

int main() {
    double L1, G1, L2, G2, distance;
    printf("Enter latitude of first place (L1) in degrees: ");
    scanf("%lf", &L1);
    printf("Enter longitude of first place (G1) in degrees: ");
    scanf("%lf", &G1);
    printf("Enter latitude of second place (L2) in degrees: ");
    scanf("%lf", &L2);
    printf("Enter longitude of second place (G2) in degrees: ");
    scanf("%lf", &G2);

    // Convert degrees to radians
    L1 = L1 * M_PI / 180.0;
    G1 = G1 * M_PI / 180.0;
    L2 = L2 * M_PI / 180.0;
    G2 = G2 * M_PI / 180.0;

    // Calculate the distance using the given formula
    distance = 3963.0 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    // Output the distance in nautical miles
    printf("The distance between the two places is: %.2f nautical miles\n", distance);

    return 0;
}
