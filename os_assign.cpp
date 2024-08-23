#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
    string inputfile_name , outputfile_name;
    ifstream inputfile;
    ofstream outputfile;

    char c;

    cout << "enter input file name : ";
    cin >> inputfile_name;
    inputfile.open(inputfile_name);
    if(!inputfile.is_open()){
        cout << "error in opening input file!!";
        cout << endl;
        return 1;
    }

    cout << "enter output file name : ";
    cin >> outputfile_name;

    outputfile.open(outputfile_name);
    if(!outputfile.is_open()){
        cout << "error in opening output file!!";
        cout << endl;
        inputfile.close();
        return 1;
    }

    while(inputfile.get(c)){
        outputfile.put(c);
        while(inputfile.get(c) && c != '\n'){
            outputfile.put(c);
        }
        outputfile.put('\n');
    }
    inputfile.close();
    outputfile.close();

    return 0;
}