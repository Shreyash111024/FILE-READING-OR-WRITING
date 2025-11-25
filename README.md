# FILE-READING-OR-WRITING
Activity no.8




Research ~ 
Basic file operations in C are fundamental for creating programs that interact with persistent data storage, which is crucial for numerous applications. These operations help in:

Data Persistence: Unlike data stored in variables, which is lost when a program terminates, data saved in files persists across program executions. This allows for long-term storage of information, such as user settings, application logs, or large datasets.
Handling Large Datasets: When dealing with datasets that exceed available memory, files provide a mechanism to store and process data in chunks, allowing programs to manage information efficiently without being constrained by RAM limitations.
Data Sharing and Portability: Files enable data to be shared between different programs or users, and can be easily transferred between different systems, facilitating data exchange and collaboration.
Configuration and Settings: Many applications use files to store configuration parameters and user preferences, allowing for customized behavior without requiring recompilation of the program.
Logging and Auditing: Programs can write logs of events, errors, or user actions to files, which is essential for debugging, monitoring, and auditing purposes.
Reusability of Data: Instead of requiring users to input the same data repeatedly, programs can read previously stored data from files, saving time and improving user experience.


Basic file operations in C are fundamental to various aspects of research by enabling data persistence, processing, and management.

1. Data Storage and Retrieval:
Saving Experimental Data: Researchers can use fprintf() or fwrite() to store raw experimental data, simulation results, or observations in files, ensuring data is not lost when the program terminates.
Loading Datasets: fscanf() or fread() allows programs to load large datasets from files for analysis, enabling researchers to work with pre-existing data or share data with collaborators.
2. Data Preprocessing and Analysis:
Log Files: Programs can generate log files using fprintf() to record program execution details, errors, or intermediate results, which are crucial for debugging and understanding complex simulations or experiments.
Configuration Files: Researchers can store configuration parameters or settings in files, allowing for easy modification of experiment parameters without recompiling the code.
Data Transformation: File operations facilitate reading data from one format, performing transformations or calculations, and writing the processed data into a new file.
3. Performance and Scalability:
Handling Large Datasets: File operations enable programs to process datasets that exceed available memory by reading and processing data in chunks, which is essential for big data research.
Interprocess Communication: Files can serve as a simple mechanism for interprocess communication, allowing different programs or parts of a research pipeline to exchange data.
4. Reproducibility and Documentation:
Reproducible Research: Saving input parameters, intermediate results, and final outputs to files helps ensure the reproducibility of research findings.
Documentation: Generating reports or summaries of research findings in text files provides easily accessible documentation.
More information

Analysis ~ 
Basic file operations in C, such as opening, reading, writing, and closing files, are fundamental for data analysis in several ways:
Data Ingestion:
Reading Data from Files: The ability to read data from various file formats (text, CSV, binary) using functions like fscanf(), fgets(), fread() allows for the ingestion of raw data into a C program for processing. This is a crucial first step in any data analysis workflow.
Configuration Files: Analysis programs often require parameters or settings, which can be stored in text-based configuration files and read using file operations.
Data Preprocessing and Transformation:
Filtering and Cleaning: Data read from files can be processed to filter out irrelevant information, handle missing values, or correct inconsistencies before analysis.
Data Transformation: File operations enable reading data, performing calculations or transformations, and then writing the modified data to new files, preparing it for further analysis or visualization tools.
Storing and Managing Results:
Saving Analysis Results: After performing analysis, the results (e.g., statistical summaries, processed data, generated reports) can be written to files using fprintf() or fwrite(), allowing for persistence and sharing.
Logging: File operations are essential for creating log files, which record program execution details, errors, or intermediate results, aiding in debugging and understanding the analysis process.
Handling Large Datasets:
Sequential Processing: For very large datasets that cannot fit entirely in memory, file operations allow for sequential reading and processing of data chunks, making analysis feasible.
Random Access: Functions like fseek() and ftell() allow for navigating within files, enabling random access to specific data points for targeted analysis.
Integration with Other Tools:
Data Exchange: C programs can read data generated by other tools or write data in formats that can be easily consumed by other analysis or visualization software.
Example:
Consider analyzing a large dataset of sensor readings stored in a CSV file. A C program could:
Open: the CSV file using fopen().
Read: each line, parsing the comma-separated values using fgets() and sscanf().
Process: the data, calculating averages, identifying outliers, or performing other statistical computations.
Write: the processed data or summary statistics to a new file using fprintf().
Close: both files using fclose().
This demonstrates how basic file operations form the backbone of data analysis workflows in C, enabling data handling from raw input to structured output.

Ideate ~
Stock Management System
A stock management system refers to the process of recording, monitoring, and updating information about different items in inventory. In programming, stock management usually involves taking input such as stock name, quantity, and price, calculating the total value, and saving this information into a file for future reference. This helps maintain accurate records and simplifies business tracking.
Purpose of Managing Stocks
Managing stocks ensures that an organization always knows:
Which items are available


How much quantity is in hand


What price each stock carries


What is the total value of the stock


This information is useful for calculating profits, planning purchases, avoiding shortages, and maintaining financial accuracy.

Stock Records
Definition:
 Stock records refer to the stored information about each item, including name, quantity, price, and total value.
Purpose:
 To maintain a permanent report of all stock transactions so that the organization can review and calculate expenses or profit whenever needed.
Details Saved:
Stock Name: The item or product being recorded.


Quantity: Number of units purchased.


Price: Cost per unit.


Total Price: Calculated as price × quantity, stored to track expenses.


Importance:
 Maintaining these records helps businesses track inventory levels, control purchases, and calculate financial totals.



File Handling in Stock Management
Definition:
 File handling is the method used in programming to store stock details into a text file such as stocks.txt.
Purpose:
 To save stock information permanently, even after the program closes.
User Input
The user enters:
Stock name


Quantity


Price


This data is essential for tracking inventory.
Calculation
The program automatically calculates the total cost of each stock entry.
File Storage
All data is saved in a text file using file handling to ensure:
Permanent record


Easy viewing


No data loss after program ends
Stock List

Build ~ 
#include <stdio.h>

int main() {
    FILE *fpr;
    char stock[30];
    float price;
    int quan;
    int choice;

    printf("Choose option:\n");
    printf("1. Write(Add stock)\n");
    printf("2. Read(View all stocks)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        fpr = fopen("stocks.txt", "a");

        if (fpr == NULL) {
            printf("Error opening file!\n");
            return 0;
        }

        printf("Enter stock name: ");
        scanf("%s", stock);

        printf("Enter quantity: ");
        scanf("%d", &quan);

        printf("Enter price: ");
        scanf("%f", &price);

        float total = price * quan;
        printf("Total price: %.2f\n", total);

        fprintf(fpr, "Stock: %s\nQuantity: %d\nPrice: %.2f\nTotal Price: %.2f\n\n",stock, quan, price, total);

        fclose(fpr);

        printf("Stock data saved successfully.\n");
    }
    else if (choice == 2) {
    
        fpr = fopen("stocks.txt", "r");

        if (fpr == NULL) {
            printf("Error opening file for reading! File may not exist.\n");
            return 0;
        }

        printf("\n--- Saved Stock Details ---\n\n");

        

        fclose(fpr);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}





Test Cases ~ 
Test Case 1-

Test Case 2-


Implementation~
https://github.com/Shreyash111024/FILE-READING-OR-WRITING.git



