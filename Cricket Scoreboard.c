#include <stdio.h>

int main() {
    int runs, wickets, overs;
    float run_rate;

    // Input runs, wickets, and overs
    printf("Enter the number of runs scored: ");
    scanf("%d", &runs);

    printf("Enter the number of wickets fallen: ");
    scanf("%d", &wickets);

    printf("Enter the number of overs bowled: ");
    scanf("%d", &overs);

    // Calculate run rate
    run_rate = (float)runs / overs;

    // Display scoreboard
    printf("\nScoreboard:\n");
    printf("Runs: %d\n", runs);
    printf("Wickets: %d\n", wickets);
    printf("Overs: %d\n", overs);
    printf("Run Rate: %.2f\n", run_rate);

    return 0;
}
