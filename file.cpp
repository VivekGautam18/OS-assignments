#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream infile(filename);


    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    } else  
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}
