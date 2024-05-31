#include<stdio.h>
#include<stdlib.h> 

void calculateFlames(char sign1, char sign2) {
 int flames = 0;

 switch (sign1) {
 case 'A':
 switch (sign2) {
 case 'A':
 flames = 4;
 break;
 case 'B':
 flames = 3;
 break;
 case 'C':
 flames = 2;
 break;
 case 'D':
 flames = 1;
 break;
 case 'E':
 flames = 5;
 break;
 case 'F':
 flames = 6;
 break;
 case 'G':
 flames = 7;
 break;
 case 'H':
 flames = 8;
 break;
 case 'I':
 flames = 9;
 break;
 case 'J':
 flames = 10;
 break;
 case 'K':
 flames = 11;
 break;
 case 'L':
 flames = 12;
 break;
 case 'M':
 flames = 13;
 break;
 case 'N':
 flames = 14;
 break;
 case 'O':
 flames = 15;
 break;
 case 'P':
 flames = 16;
 break;
 case 'Q':
 flames = 17;
 break;
 case 'R':
 flames = 18;
 break;
 case 'S':
 flames = 19;
 break;
 case 'T':
 flames = 20;
 break;
 case 'U':
 flames = 21;
 break;
 case 'V':
 flames = 22;
 break;
 case 'W':
 flames = 23;
 break;
 case 'X':
 flames = 24;
 break;
 case 'Y':
 flames = 25;
 break;
 case 'Z':
 flames = 26;
 break;
 default:
 printf("Invalid sign!\n");
 return;
 }

 printf("Flames compatibility: %d\n", flames);
}

int main() {
 char sign1 = 'A';
 char sign2 = 'B';

 calculateFlames(sign1, sign2);

 return 0;
}
