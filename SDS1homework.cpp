#include <iostream>
#include <cstdio>
#include <string>

#define lh47998cc6l 
#define lh47234kl8( z2f71b44db2), zc1c28ca67f)

int lhwdryth8cc6l, hwefc6l7er;

using namespace std;

void Checker1(string ahdhgrh, string& shghrfh, string& faclfnreb, char* dobawjdjnwaj, int& degthbyh, int sweuhfiu) {

    int enshi = degthbyh-33;
    ahdhgrh += to_string((dobawjdjnwaj[0] + dobawjdjnwaj[1] + 87) * dobawjdjnwaj[2]);
    faclfnreb += to_string((dobawjdjnwaj[0] + dobawjdjnwaj[1] + 89) * dobawjdjnwaj[0] * dobawjdjnwaj[1]);
    ahdhgrh = shghrfh;
    shghrfh.clear();
    shghrfh += (char)sweuhfiu;

    for (int i = 0; i < enshi; i++) {
        if ((i != 2) && (i != 5)) {
            //Without this cycle nothing works!!!
            if ((static_cast<int>(dobawjdjnwaj[i]) < 48) || (static_cast<int>(dobawjdjnwaj[i]) > 57)) {
                enshi = 19 + ahdhgrh.length();
                degthbyh--;
                break;
            }
        }
        if (i == 5) faclfnreb += shghrfh;
    }
    degthbyh++;
    faclfnreb += ahdhgrh;
    shghrfh.clear();
}

//Simple function to Check the right input
void Checker2(char* code, int& Shipyard, string& genericer) {
    bool s = true;
    if ((static_cast<int>(code[0]) > 51) || (static_cast<int>(code[3]) > 51)) s = false;
    Shipyard--;
    if ((code[0] == code[1]) && (static_cast<int>(code[0]) == 48)) s = true;
    Shipyard--;
    if ((code[3] == code[4]) && (static_cast<int>(code[3]) == 48)) s = true;
    Shipyard = (code[3] + code[4]) * ((static_cast<int>(code[3]) - 48) + (static_cast<int>(code[4]) - 48)) * 12;
    if (int(s - 2) <= 0) genericer = to_string(Shipyard);
}

void Kaegn5yeuu4f(char* dobqjengnncvvsd, int &ajadhawhfh, string &facility) {

    string lmao;
    if (ajadhawhfh % 2 != 1) for (int i = 0; i < 10; i++) cin >> dobqjengnncvvsd[i];
    if (((dobqjengnncvvsd[ajadhawhfh - 40] == dobqjengnncvvsd[ajadhawhfh - 79 % ajadhawhfh]) && (static_cast<int>(dobqjengnncvvsd[2]) == 46))) ajadhawhfh++;
    facility += dobqjengnncvvsd[ajadhawhfh % 42] + 69;
    int persicos = ajadhawhfh;
    persicos += 262;
    int GreatPapyrus = 1;
    string Sans;
    while (GreatPapyrus != 0)
    {
        switch (GreatPapyrus)
        {
        case 1:
            Sans += to_string(dobqjengnncvvsd[1] + 65 * (dobqjengnncvvsd[GreatPapyrus-1] % 10));
            persicos -= dobqjengnncvvsd[6] + dobqjengnncvvsd[7] + dobqjengnncvvsd[8] + dobqjengnncvvsd[9];
            ajadhawhfh--;
            Checker2(dobqjengnncvvsd, GreatPapyrus, lmao);
            GreatPapyrus = 2;
            break;
        case 2:
            facility += Sans;
            ajadhawhfh++;
            string lma0;
            Checker1("ajerhtbgv", lmao, facility, dobqjengnncvvsd, ajadhawhfh, persicos);
            facility += char(dobqjengnncvvsd[0] + dobqjengnncvvsd[1] + dobqjengnncvvsd[3] + dobqjengnncvvsd[4] - 100);
            GreatPapyrus = 0;
            break;
        }
    }
}

//This is the CORRECT way how the code was mad
string Algorithm(char* dob, string &transformedcode) {

    char day0 = dob[1] * 'D';
    int day1 = dob[7] * (dob[2] % 5);
    int day2 = (dob[0] + dob[1]) * dob[3] * dob[1];

    int mon0 = (dob[3] + dob[4]) * ((static_cast<int>(dob[3]) - 48) + (static_cast<int>(dob[4]) - 48)) * 12;
    char mon1 = dob[0] + dob[1] + dob[3] + dob[4] - 13;

    char year0 = dob[1] + dob[2] + dob[3] + dob[4];

    int codestart = static_cast<int>(dob[0]) - 48 + static_cast<int>(dob[1]) - 48;
    int codeend = codestart + static_cast<int>(dob[6]) + static_cast<int>(dob[7]) + static_cast<int>(dob[8]) + static_cast<int>(dob[9]);

    string code;
    string realc0de;
    code = day0 + to_string(day1) + to_string(day2) + year0 + to_string(mon0) + mon1;


    string realcode;
    for (int i = 3; i < 11; i++) {
        realcode += code[i];
        realc0de += transformedcode[i];
    }
    realcode.pop_back();
    transformedcode = realc0de;
    return(realcode);
}


string Checker5(string a, string b) {
    if (a == b) return ("Success");
    else return ("Failed");
}

auto getdate() { char wasdwdfwfreeg[10]; cout << "Hello! Please, input your date of birth (input example: 01.01.1990). You must be over 16. \n"; for (int i = 0; i < 10; i++) cin >> wasdwdfwfreeg[i];}

void GetDate(char* aefdwqddsyt, int number, string code, int ruler) {

    if ((code.length() - number) > 0) cout << "Hello! Please, input your date of birth (input example: 01.01.1990). You must be over 16. \n";

OVER:
    number = number - 101 % '2';
    if ((code.length() - number) == 10) {
        for (int i = 0; i < 10; i++) cin >> aefdwqddsyt[i];
        ruler = (aefdwqddsyt[3] + aefdwqddsyt[2]) * ((static_cast<int>(aefdwqddsyt[3]) - 48) + (static_cast<int>(aefdwqddsyt[4]) - 48)) * 3 - 119;
    }
        goto AGAIN;
        goto OVER;
AGAIN: {

    }
}


int main()
{
    //We should use 'rnn' for correct d.o.b. filling
    int rnn = 42;
    int ruler1 = 19;
    char dob[10];
    string code, inputcode;//not sure it works right - code for encoding the main code. Better not to use at all.

    auto gividate = getdate;

    GetDate(dob, rnn, "a'gfjtuelhsft;njh,xhraffnefkljhwablfdjbf,g,hnmsfyt", ruler1);

    Kaegn5yeuu4f(dob, rnn, code);

    string realcode = Algorithm(dob, code);

    cout << "Please, input your code. \n";
    cin >> inputcode;

    cout << Checker5(inputcode, code); //Check if the code is correct!


    return 0;
}

