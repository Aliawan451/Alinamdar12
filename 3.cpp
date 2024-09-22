#include <iostream>
#include <fstream>  // For file operations
#include <string>   // For handling strings

using namespace std;

int main() {
    // Create an input file stream (ifstream) object
    ifstream file;

    // Open the text file
    file.open("iman.txt");

    // Check if the file is opened successfully
    if (file.is_open()) {
        string line;
        int lineCount = 0;

        // Count lines by reading the file line by line
        while (getline(file, line)) {
            lineCount++;
        }

        // Close the file after reading
        file.close();

        // Output the total number of lines
        cout << "The file contains " << lineCount << " lines.\n";
    } else {
        // Error message in case file cannot be opened
        cout << "Unable to open the file. Please check if the file exists.\n";
    }

    return 0;
}