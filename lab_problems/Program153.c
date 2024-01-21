/* An automobile company has serial number for engine parts starting from AA0 to FF9. The other characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity manufactured.
(a) Specify a structure to store information corresponding to a part.
(b) Write a program to retrieve information on parts with serial numbers between BB1 and CC6.*/

#include<stdio.h>
#include <string.h>
#define MAX_PARTS 360

void retrievePartsInformation(int totalParts, const char startSerial[], const char endSerial[]);

struct automobile {
    char serialNumber[3];
    int yearOfManufacture;
    char material[50];
    int quantityManufactured;
};
struct automobile parts[MAX_PARTS];

int main() {
    int totalParts;

    printf("Enter the total number of engine parts (up to %d): ", MAX_PARTS);
    scanf("%d", &totalParts);

    if (totalParts > MAX_PARTS) {
        printf("Number of engine parts exceeds the maximum limit.\n");
        return 1;
    }

    for (int i = 0; i < totalParts; i++) {
        printf("Enter details for engine part %d:\n", i + 1);
        printf("Serial Number: ");
        scanf("%s", parts[i].serialNumber);
        printf("Year of Manufacture: ");
        scanf("%d", &parts[i].yearOfManufacture);
        printf("Material: ");
        scanf("%s", parts[i].material);
        printf("Quantity Manufactured: ");
        scanf("%d", &parts[i].quantityManufactured);
    }

    char startSerial[3], endSerial[3];

    printf("\nEnter the range of serial numbers to retrieve information:\n");
    printf("Start Serial Number: ");
    scanf("%s", startSerial);
    printf("End Serial Number: ");
    scanf("%s", endSerial);

    retrievePartsInformation(totalParts, startSerial, endSerial);

}

void retrievePartsInformation(int totalParts, const char startSerial[], const char endSerial[]) {
    printf("Parts information between %s and %s:\n", startSerial, endSerial);
    for (int i = 0; i < totalParts; i++) {
        if (strcmp(parts[i].serialNumber, startSerial) >= 0 && strcmp(parts[i].serialNumber, endSerial) <= 0) {
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("\n");
        }
    }
}
