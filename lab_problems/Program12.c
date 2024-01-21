// In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men 
// is 35 of the total population, write a program to find the total number of illiterate men and women if the population 
// of the town is 80,000.

// After some math, illiterate men = 17% women = 35%

#include <stdio.h>

int main()
{
    int tot_populaton=80000;
    int literate_men=(35*tot_populaton)/100;
    int tot_literate=(48*tot_populaton)/100;
    int tot_men=(52*tot_populaton)/100;
    int tot_women=(48*tot_populaton)/100;
    int literate_women=tot_literate-literate_men;
    int illiterate_men=tot_men-literate_men;
    int illiterate_women=tot_women-literate_women;
    printf("Total Population= %d\n",tot_populaton);
    printf("Men Population= %d\n",tot_men);
    printf("Women Population= %d\n",tot_women);
    printf("Literate Population= %d\n",tot_literate);
    printf("Literate men Population= %d\n",literate_men);
    printf("Literate women Population= %d\n",literate_women);
    printf("Illiterate men population= %d\n",illiterate_men);
    printf("Illiterate women population= %d\n",illiterate_women);
}

