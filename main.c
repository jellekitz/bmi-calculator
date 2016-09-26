#include <stdio.h>

main()
{
    // Variables for height, weight, and bmi
    float height;
    float weight;
    float bmi;

    printf("\a\nEnter your weight: ");
    scanf(" %f", &weight);

    printf("\aEnter your height: ");
    scanf(" %f", &height);

    bmi = (weight / height) / height;

    printf("\a\nYour BMI is: %f", bmi);
    getchar();

    if (bmi <= 18.6){
        printf(" skinny bitch ");
    }

    if (bmi >= 18.7){
        printf(" you healthy piece of shit! ");
    }


    if (bmi > 25.1){
        printf(" you fat cunt! ");
    }

    return 0;
}
