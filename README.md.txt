Overview
This project is a simple C program designed to perform basic banking operations for an individual. It allows users to deposit money, withdraw money, and view their updated balance after each operation. The program supports up to 10 operations and includes validation for incorrect choices and invalid amounts.
Features
Deposit money into the account
Withdraw money with balance validation
Shows current balance after every transaction
Allows maximum 10 operations
Menu-driven console interface
Handles invalid input and negative amounts
How the Program Works
The user enters a starting balance.
The program displays a menu with three options:
1 → Deposit
2 → Withdraw
3 → Exit
Based on the selected option, the program updates the balance.
The current balance is displayed after each valid operation.
The program ends after 10 operations or when the user chooses to exit.
Project Structure
Project Folder/
│
├── bank_system.c
└── README.md

Functions Useddeposit(float balance)
Asks user for deposit amount
Adds amount to balance if valid
Returns updated balance
withdraw(float balance)
Asks user for withdrawal amount
Checks if balance is sufficient
Deducts amount if valid
Returns updated balance
How to Compile and Run
Using GCC (Linux/Windows/macOS)
gcc bank_system.c -o bank_system
./bank_system
Using MinGW (Windows)
gcc bank_system.c -o bank_system.exe
bank_system.exe
Using an IDE
You can run this code in:
CodeBlocksDev-C++
Visual Studio Code
Turbo C (not preferred, but possible)
Limitations
No file storage (all data resets after program ends)
No transaction history
Maximum 10 operations
Future Improvements
Add file handling to save transaction history
Allow unlimited operations
Add monthly/annual financial reports
Implement login authentication
Create a GUI version
Project Author
Amit Verma
c:\Users\amitv\OneDrive\Pictures\Screenshots\Screenshot 2025-11-24 203324.png
c:\Users\amitv\OneDrive\Pictures\Screenshots\flowchart.png
c:\Users\amitv\OneDrive\Pictures\Screenshots\Screenshot 2025-11-24 212624.png   