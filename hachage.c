#include "hachage.h"

int main(void)
{
    Eleve tableau[100];
    Eleve niels;
    niels.name = "Niels Cohen";
    niels.age = 26;
    niels.weight = 67.8;
    int hach_number;
     
    hach_number = ft_haching(niels.name);

    tableau[hach_number]= niels;

    printf("%s", tableau[32].name);

    return (EXIT_SUCCESS);
}
