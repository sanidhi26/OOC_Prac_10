
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Create object to write into file
    ofstream fout;
    string line;

    // Open file
    fout.open("sample.txt");

    cout << "Enter text (-1 to stop):" << endl;

    // Write data into file
    while (true)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    // Close writing file
    fout.close();

    // Create object to read file
    ifstream fin;

    fin.open("sample.txt");

    cout << "\nFile contents are:" << endl;

    // Read and display file contents
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    // Close reading file
    fin.close();

    return 0;
}
