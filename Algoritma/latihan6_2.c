#include<stdio.h>
int main(){
    int grades[50];
    int highestGrade = 0;

    printf("Enter 50 grades:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &grades[i]);
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];  
        }
    }
    return 0;
}
