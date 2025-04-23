#include <stdio.h>

int main() {
    char studentname[10];
    int studentmarks[5];
    int total = 0;

    printf("Enter the student name:\n");
    scanf("%9s", studentname); // Limit input to avoid buffer overflow
    printf("Enter the marks of Hindi, English, Math, Chemistry, Physics:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &studentmarks[i]);

    printf("Student Name is %s\n", studentname);
    printf("Hindi subject marks %d\n", studentmarks[0]);
    printf("English subject marks %d\n", studentmarks[1]);
    printf("Math subject marks %d\n", studentmarks[2]);
    printf("Chemistry subject marks %d\n", studentmarks[3]);
    printf("Physics subject marks %d\n", studentmarks[4]);

    for (int i = 0; i < 5; i++) {
        total += studentmarks[i];
    }

    printf("Total marks %d\n", total);
    int average = total / 5;
    printf("Average marks is %d\n", average);

    int percent = (total * 100) / 500; // Correct percentage calculation
    printf("Percentage is %d%%\n", percent);

    if (percent >= 86) {
        printf("Student has A Grade\n");
    } else if (percent >= 71 && percent <= 85) {
        printf("Student has B Grade\n");
    } else if (percent >= 61 && percent <= 70) {
        printf("Student has C Grade\n");
    } else if (percent >= 41 && percent <= 60) {
        printf("Student has D Grade\n");
    } else {
        printf("Student has Failed\n");
    }

    return 0;
}