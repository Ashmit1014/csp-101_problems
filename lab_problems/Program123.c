/* The Miniaturization Unlimited sells 5 types of memory chips through its retail outlets in 10 cities. The weekly sales of the company are stored i n a 5 x l 0 x 7 array SALES such that SALES( L, K, M ) denotes the sales of the L* memory chip in the K city on the M day of the week. Write a program that computes: 

(a) The total weekly sale of each type of memory chip
(b) The total weekly sale in each city and
(c) The average daily sale of the company
*/
#include<stdio.h>
int main()
{
    int types=5;
    int cities=10;
    int daysOfWeek=7;
    int SALES[types][cities][daysOfWeek];

    printf("Enter the weekly sales data for each memory chip:\n");
    for (int L = 0; L < types; L++) {
        for (int K = 0; K < cities; K++) {
            for (int M = 0; M < daysOfWeek; M++) {
                printf("SALES(%d, %d, %d): ", L + 1, K + 1, M + 1);
                scanf("%d", &SALES[L][K][M]);
            }
        }
    }

    // Total weekly sale of each type of memory chip
    printf("\nTotal weekly sale of each type of memory chip:\n");
    for (int L = 0; L < types; L++) {
        int totalChipSale = 0;
        for (int K = 0; K < cities; K++) {
            for (int M = 0; M < daysOfWeek; M++) {
                totalChipSale += SALES[L][K][M];
            }
        }
        printf("Memory Chip %d: %d\n", L + 1, totalChipSale);
    }

    //  Total weekly sale in each city
    printf("\nTotal weekly sale in each city:\n");
    for (int K = 0; K < cities; K++) {
        int totalCitySale = 0;
        for (int L = 0; L < types; L++) {
            for (int M = 0; M < daysOfWeek; M++) {
                totalCitySale += SALES[L][K][M];
            }
        }
        printf("City %d: %d\n", K + 1, totalCitySale);
    }

    //Average daily sale of the company
    printf("\nAverage daily sale of the company:\n");
    int totalCompanySale = 0;
    for (int L = 0; L < types; L++) {
        for (int K = 0; K < cities; K++) {
            for (int M = 0; M < daysOfWeek; M++) {
                totalCompanySale += SALES[L][K][M];
            }
        }
    }
    float averageDailySale = (float)totalCompanySale / (types * cities * daysOfWeek);
    printf("The average daily sales= %f\n",averageDailySale);
}