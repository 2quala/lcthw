#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 34485.4352;
    char initial = 'S';
    char first_name[] = "Sae";
    char last_name[] = "Choi";

    printf("dist = %d\n", distance);
    printf("power = %f\n", power);
    printf("super power = %f\n", super_power);
    printf("initial = %c\n", initial);
    printf("first name = %s\n", first_name);
    printf("last name = %s\n", last_name);
    printf("name = %s %c %s\n", first_name, initial, last_name);

    return 0;
}	
