# INET3101-lab1

## Sample command-line menu for an Inventory Management System 

Parts Inventory Manager
1. Print all records
2. Add a Record
3. Delete the last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit
Please enter your selection: 2

Enter Part number: 12

Enter Part name: Tire

Enter Part size: 28

Enter Part size metric: in

Enter Part cost: 75

You entered:
Part number = 12

Part name = "Tire"

Part size = 28.00

Part size metric = "in"

Part cost = $75.00


# Parts Inventory Manager

## Author
Alejandro 

## Program Description
The Parts Inventory Manager is a simple C program that allows users to manage an inventory of parts. Users can perform various operations such as printing all records, adding new records, deleting the last record, and viewing the number of records and changes made to the database.

## Menu Definition and Usage
The program presents a menu with the following options:
1. Print all records
2. Add a Record
3. Delete the last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit

There is a number for each option and the users can select an option by entering the corresponding number. Lastly, the program will then execute the chosen operation and go back to the menu unless the user exits.

## Function Definitions
1. **printRecords**
   - **Input Type(s)**: None
   - **Output Type**: None
   - **Algorithm Description**: Prints a message indicating that the function has been entered.

2. **addRecord**
   - **Input Type(s)**: User input for part details (number, name, size, metric, cost)
   - **Output Type**: None
   - **Algorithm Description**: Prompts the user for part details, stores them in variables, and prints the entered values. Increments the change count.

3. **deleteLastRecord**
   - **Input Type(s)**: None
   - **Output Type**: None
   - **Algorithm Description**: Prints a message indicating that the function has been entered.

4. **printNumberOfRecords**
   - **Input Type(s)**: None
   - **Output Type**: None
   - **Algorithm Description**: Prints a message indicating that the function has been entered.

5. **printDatabaseSize**
   - **Input Type(s)**: None
   - **Output Type**: None
   - **Algorithm Description**: Prints a message indicating that the function has been entered.

6. **printNumChanges**
   - **Input Type(s)**: Integer (print flag)
   - **Output Type**: None
   - **Algorithm Description**: If the print flag is true, print the number of changes. Otherwise, increments the change count.

7. **incrementChanges**
   - **Input Type(s)**: None
   - **Output Type**: None
   - **Algorithm Description**: Increments the change count and prints the current number of modifications.

## Required Files
- `lab1.c`: C source code file containing the implementation of the Parts Inventory Manager.
- `README.txt`: Design document in plain text format.


