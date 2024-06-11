#include<bits/stdc++.h>
using namespace std;

int main() {
    // Open the file  
    ifstream inputFile("C:\\Users\\ASUS\\Downloads\\student_records.txt");
    // Check if the file is open
    if (!inputFile.is_open()) {
        cerr << "Error opening the file." <<endl;
        return 1;  // Exit with an error code
    }

    // Process each line in the file
    string line;
    while (std::getline(inputFile, line)) {
        // Extract roll number, name, and marks from each line
        int rollNumber;
        string name;
        double marks;

        istringstream iss(line);
        if (iss >> rollNumber >> name >> marks) {
            // Check if the roll number is odd
            if (rollNumber % 2 != 0) {
                // Display the record for students with odd roll numbers
                cout << "Roll Number: " << rollNumber << "\tName: " << name << "\tMarks: " << marks << std::endl;
            }
        } else {
            // Display a warning if a line doesn't follow the expected format
                cerr << "Warning: Skipping invalid record: " << line << endl;
        }
    }
    // Close the file
    inputFile.close();
    return 0;  // Exit successfully
}
                                  

                 