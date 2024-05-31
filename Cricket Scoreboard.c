#include <stdio.h>

#include <stdlib.h>

void calculateScoreboard(int runs1, int runs2, int overs1, int overs2) {
 float runsPerOver1 = (float)runs1 / overs1;
 float runsPerOver2 = (float)runs2 / overs2;

 printf("Team 1: %.2f runs per over, %.2f runs\n", runsPerOver1, runs1);
 printf("Team 2: %.2f runs per over, %.2f runs\n", runsPerOver2, runs2);
}

int main() {
 int runs1 = 200;
 int runs2 = 250;
 int overs1 = 20;
 int overs2 = 30;

 calculateScoreboard(runs1, runs2, overs1, overs2);

 return 0;
}
