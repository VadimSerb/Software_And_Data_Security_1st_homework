#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

bool Checker0(char* dob) {
   
   if (((dob[2] == dob[5]) && (static_cast<int>(dob[2]) == 46))) return 1;
   else return 0;

}

bool Checker1(char* dob) {
 
    for (int i = 0; i < 10; i++) {

        if ((i != 2) && (i != 5)) {

            //cout << static_cast<int>(dob[i]) - 48;
            if ((static_cast<int>(dob[i]) < 48) || (static_cast<int>(dob[i]) > 57)) return 0;

        }
    }

    return 1;
}

bool Checker2(char* dob) {
    bool s;
    if ((static_cast<int>(dob[0]) > 51) || (static_cast<int>(dob[3]) > 51)) return 0;
    if ((dob[0] == dob[1]) && (static_cast<int>(dob[0]) == 48)) return 0;
    if ((dob[3] == dob[4]) && (static_cast<int>(dob[3]) == 48)) return 0;
    return 1;

}

bool Checker3(char* dob) {

    int year;
    year = (static_cast<int>(dob[6]) - 48) * 1000 + (static_cast<int>(dob[7]) - 48) * 100 + (static_cast<int>(dob[8]) - 48) * 10 + static_cast<int>(dob[9]) - 48;
    if ((year > 2005) || (year < 1920)) return 0;
    return 1;
}

string Algorithm(char* dob) {

    char day0 = dob[0] + 'D';
    int day1 = dob[1] + 'A' * (dob[0] % 10);
    int day2 = (dob[0] + dob[1] + 'Y') * dob[0] * dob[1];


    int mon0 = (dob[3] + dob[4]) * ((static_cast<int>(dob[3]) - 48) + (static_cast<int>(dob[4]) - 48)) * 12;
    char mon1 = dob[0] + dob[1] + dob[3] + dob[4] - 100;

    char year0 = 'Y' + 'E' + 'A' + 'R' - dob[6] - dob[7] - dob[8] - dob[9];


    cout << day0 << " " << day1 << " " << day2 << " " << mon0 << " " << mon1 << " " << year0 << " " << endl;

    string code;
    code = day0 + to_string(day1) + to_string(day2) +year0 + to_string(mon0) + mon1;


    string realcode;
    for (int i = 3; i < 11; i++) {
    cout << realcode;
    realcode.pop_back();

    return(realcode);

}


bool Checker5(string a, string b) {
    if (a == b) return 1;
    else return 0;
}


int main()
{
   char dob[10];

    cout << "Hello! Please, input your date of birth (input example: 01.01.1990). You must be over 16. \n";
    
    for (int i=0; i<10;i++) cin >> dob[i];

    string code;
    string realcode = Algorithm(dob);

    cout << "Please, input your code. \n";
    cin >> code;

    if (Checker5(code, realcode) == true) cout << "Success\n";



    return 0;
}

