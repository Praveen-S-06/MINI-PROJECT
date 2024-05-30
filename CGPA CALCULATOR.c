#include <stdio.h>

int main() {
    int subjects;
    float Gradepoints, credit, Totalpoints = 0.0, Totalcredits = 0.0;

    // USER INPUTS
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    // LOOP TO INPUT THE SUBJECTS AND GRADES
    for(int i = 0; i < subjects; i++) {
        printf("Enter grade  for subject %d: ", i + 1);
        scanf("%f", &Gradepoints);
        printf("Enter credits for subject %d: ", i + 1);
        scanf("%f", &credit);

        Totalpoints += Gradepoints * credit;
        Totalcredits += credit;
    }

    // Calculate CGPA
   float cgpa = Totalpoints / Totalcredits;

    // Display the CGPA
    printf("Your CGPA is: %.2f\n", cgpa/10);

    return 0;
}
