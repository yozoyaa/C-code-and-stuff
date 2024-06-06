#include <stdio.h>

struct automobile {
    int year;
    char model[8];
    int engine_power;
    float weight;
};

int main() {
    struct automobile cars[5]; 
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Enter model (max 7 characters): ");
        scanf("%s", cars[i].model);
        printf("Enter year: ");
        scanf("%d", &cars[i].year);
        printf("Enter engine power (in horsepower): ");
        scanf("%d", &cars[i].engine_power);
        printf("Enter weight (in kg): ");
        scanf("%f", &cars[i].weight);
        printf("\n");
    }

    printf("Automobile Information:\n");
    printf("-------------------------------------------------\n");
    printf("Model     Year    Engine Power (hp)    Weight (kg)\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-8s %-7d %-20d %-10.2f\n", cars[i].model, cars[i].year, cars[i].engine_power, cars[i].weight);
    }

    return 0;
}
