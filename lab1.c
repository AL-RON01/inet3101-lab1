/**************************************
*
* Program Name: Parts Inventory Manager
*
* Author: Alejandro
* Created: 2/12/2025
*
***************************************/

#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void printRecords();
void addRecord();
void deleteLastRecord();
void printNumberOfRecords();
void printDatabaseSize();
void printNumChanges(bool print);
void displayMenu();

// Global variables
int numberOfRecords = 0;
int numberOfChanges = 0;

int main() {
    int selection;

    // Loop until the user chooses to exit
    do {
        displayMenu();
        printf("Please enter your selection: ");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printRecords();
                break;
            case 2:
                addRecord();
                break;
            case 3:
                deleteLastRecord();
                break;
            case 4:
                printNumberOfRecords();
                break;
            case 5:
                printDatabaseSize();
                break;
            case 6:
                printNumChanges(true); // Print number of changes
                break;
            case 7:
                printf("\nExiting Now...\n");
                break;
            default:
                printf("\nInvalid selection. Please try again.\n");
        }
    } while (selection != 7);

    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("\n\nParts Inventory Manager\n");
    printf("1. Print all records\n");
    printf("2. Add a Record\n");
    printf("3. Delete the last record\n");
    printf("4. Print number of records\n");
    printf("5. Print database size\n");
    printf("6. Print number of changes\n");
    printf("7. Exit\n");
}

// Function to print all records (placeholder)
void printRecords() {
    printf("\nYou have entered the Print all records function\n");
}

// Function to add a record
void addRecord() {
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;

    printf("\nEnter Part number: ");
    scanf("%d", &partNumber);
    printf("Enter Part name: ");
    scanf("%s", partName);
    printf("Enter Part size: ");
    scanf("%f", &partSize);
    printf("Enter Part size metric: ");
    scanf("%s", partSizeMetric);
    printf("Enter Part cost: ");
    scanf("%f", &partCost);

    // Increment the number of records and changes
    numberOfRecords++;
    numberOfChanges++;
    
    // Display the entered record
    printf("\nYou entered:\n");
    printf("Part number = %d\n", partNumber);
    printf("Part name = \"%s\"\n", partName);
    printf("Part size = %.2f\n", partSize);
    printf("Part size metric = \"%s\"\n", partSizeMetric);
    printf("Part cost = $%.2f\n", partCost);
}

// Function to delete the last record (placeholder)
void deleteLastRecord() {
    printf("\nYou have entered the delete last record function\n");
    // Decrement the number of records if there are any
    if (numberOfRecords > 0) {
        numberOfRecords--;
        numberOfChanges++;
    } else {
        printf("No records to delete.\n");
    }
}

// Function to print the number of records
void printNumberOfRecords() {
    printf("\nYou have entered the Print number of records function\n");
    printf("Number of records: %d\n", numberOfRecords);
}

// Function to print the database size (placeholder)
void printDatabaseSize() {
    printf("\nYou have entered the Print database size function\n");
    // For now, just print a placeholder message
    printf("Database size: %d records\n", numberOfRecords);
}

// Function to print or increment the number of changes
void printNumChanges(bool print) {
    if (print) {
        printf("You have modified the database %d times\n", numberOfChanges);
    } else {
        numberOfChanges++;
        printf("%d modifications so far\n", numberOfChanges);
    }
}
