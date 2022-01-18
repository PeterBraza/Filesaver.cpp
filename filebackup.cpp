#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
    char filename[9999];
    cout << "What is the name of the file you would like to backup?";
    cin >> filename;
    ifstream og (filename);
    string fileread;
    if(!og){
        cout << "Error: Cannot open file." << "\n";
    }
    else{
    char backup[9999];
    getline(og, fileread, (char) og.eof());
    cout << "What is the name of the backup file you would like to create? Note that the original and backup file have to be of the same filetype: ";
    cin >> backup;
    ofstream up (backup);
    up << fileread << endl;
    char open[] = "open ";
    strcat(open, backup);
    cout << open << endl;
    cout << "Here is the backup file: \n";
    system(open);
        cout << "Thank you!\n";
    }
}
