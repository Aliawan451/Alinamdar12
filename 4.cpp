#include <iostream>
#include <fstream>  // For file operations
#include <string>   // For handling strings
#include <sstream>  // For string stream

using namespace std;

int main() {
    // Declare a variable for the file name
    string fileName;

    // Ask the user for the file name
    cout << "Enter the name of the text file: ";
    cin >> fileName;

    // Create an input file stream (ifstream) object
    ifstream file;

    // Open the text file based on user input
    file.open(fileName);

    // Check if the file is opened successfully
    if (file.is_open()) {
        string line;
        int wordCount = 0;

        // Read the file line by line
        while (getline(file, line)) {
            // Create a stringstream to break the line into words
            stringstream ss(line);
            string word;

            // Count words in the current line
            while (ss >> word) {
                wordCount++;
            }
        }

        // Close the file after reading
        file.close();

        // Output the total number of words
        cout << "The file '" << fileName << "' contains " << wordCount << " words.\n";
    } else {
        // Error message in case the file cannot be opened
        cout << "Unable to open the file '" << fileName << "'. Please check if the file exists.\n";
    }

    return 0;
}