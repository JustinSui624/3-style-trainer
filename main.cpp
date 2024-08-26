
using namespace std;

int cypher(const string &input, map<string, int> SCC) {
    int stringCode = SCC[input];
    return stringCode;
}

string userSetting(string input[], const map<string, int>& SCC) {
    string userSettingCode = "";
    int i = 0;
    while(i < 50) {
        int temp = cypher(input[i], SCC);
        if (temp < 10) {
            userSettingCode = userSettingCode + "00" + to_string(temp);
        }
        else if (temp < 100) {
            userSettingCode = userSettingCode + "0" + to_string(temp);
        }
        else {
            userSettingCode = userSettingCode + to_string(temp);
        }
        i++;
    }
    return userSettingCode;
}

vector<string> decripter(const string &code, const map<string, int>& SCC) {
    vector<string> decriptedCode;
    int i=0;
    while (i < code.length()) {
        if (code[i] != 0) {
            string chunk = code.substr(i, 3);
            for (const auto& pair : SCC) {
                if (pair.second == stoi(chunk)) {
                    decriptedCode.push_back(pair.first);
                }
            }
        }
        else if (code[i+1] != 0) {
            string chunk = code.substr(i+1, 3);
            for (const auto& pair : SCC) {
                if (pair.second == stoi(chunk)) {
                    decriptedCode.push_back(pair.first);
                }
            }
        }
        else {
            string chunk = code.substr(i+2, 3);
            for (const auto& pair : SCC) {
                if (pair.second == stoi(chunk)) {
                    decriptedCode.push_back(pair.first);
                }
            }
        }
        i = i + 3;
    }
    return decriptedCode;
}

string edgePairRand(const vector<string> &userData) {
    int buffPiece = 0;
    int i = 0;
    while (i < 24) {
        if (userData[48] == userData[i]) {
            if (i == 0) {
                buffPiece = 16;
                break;
            }
            if (i == 1) {
                buffPiece = 12;
                break;
            }
            if (i == 2) {
                buffPiece = 8;
                break;
            }
            if (i == 3) {
                buffPiece = 4;
                break;
            }
            if (i == 4) {
                buffPiece = 3;
                break;
            }
            if (i == 5) {
                buffPiece = 11;
                break;
            }
            if (i == 6) {
                buffPiece = 23;
                break;
            }
            if (i == 7) {
                buffPiece = 17;
                break;
            }
            if (i == 8) {
                buffPiece = 2;
                break;
            }
            if (i == 9) {
                buffPiece = 15;
                break;
            }
            if (i == 10) {
                buffPiece = 20;
                break;
            }
            if (i == 11) {
                buffPiece = 5;
                break;
            }
            if (i == 12) {
                buffPiece = 1;
                break;
            }
            if (i == 13) {
                buffPiece = 19;
                break;
            }
            if (i == 14) {
                buffPiece = 21;
                break;
            }
            if (i == 15) {
                buffPiece = 9;
                break;
            }
            if (i == 16) {
                buffPiece = 0;
                break;
            }
            if (i == 17) {
                buffPiece = 7;
                break;
            }
            if (i == 18) {
                buffPiece = 22;
                break;
            }
            if (i == 19) {
                buffPiece = 13;
                break;
            }
            if (i == 20) {
                buffPiece = 10;
                break;
            }
            if (i == 21) {
                buffPiece = 14;
                break;
            }
            if (i == 22) {
                buffPiece = 18;
                break;
            }
            if (i == 23) {
                buffPiece = 6;
                break;
            }
        }
        i++;
    }

    srand(time(0));
    string random_str1 = "";
    string random_str2 = "";
    while (random_str1 == random_str2 || random_str1 == userData[48] || random_str2 == userData[48] || random_str1 == userData[buffPiece] || random_str2 == userData[buffPiece]) {
        int randpos1 = rand() % 23;
        random_str1 = userData[randpos1];
        int randpos2 = rand() % 23;
        random_str2 = userData[randpos2];
    }
    return random_str1 + random_str2;
}

string cornerPairRand(const vector<string> &userData) {
    int buffPiece1 = 0;
    int buffPiece2 = 0;
    int i = 24;
    while (i < 48) {
        if (userData[49] == userData[i]) {
            if (i == 24) {
                buffPiece1 = 41;
                buffPiece2 = 28;
                break;
            }
            if (i == 25) {
                buffPiece1 = 40;
                buffPiece2 = 37;
                break;
            }
            if (i == 26) {
                buffPiece1 = 33;
                buffPiece2 = 36;
                break;
            }
            if (i == 27) {
                buffPiece1 = 32;
                buffPiece2 = 29;
                break;
            }
            if (i == 28) {
                buffPiece1 = 41;
                buffPiece2 = 24;
                break;
            }
            if (i == 29) {
                buffPiece1 = 32;
                buffPiece2 = 27;
                break;
            }
            if (i == 30) {
                buffPiece1 = 44;
                buffPiece2 = 35;
                break;
            }
            if (i == 31) {
                buffPiece1 = 47;
                buffPiece2 = 42;
                break;
            }
            if (i == 32) {
                buffPiece1 = 27;
                buffPiece2 = 29;
                break;
            }
            if (i == 33) {
                buffPiece1 = 26;
                buffPiece2 = 36;
                break;
            }
            if (i == 34) {
                buffPiece1 = 45;
                buffPiece2 = 39;
                break;
            }
            if (i == 35) {
                buffPiece1 = 44;
                buffPiece2 = 30;
                break;
            }
            if (i == 36) {
                buffPiece1 = 33;
                buffPiece2 = 26;
                break;
            }
            if (i == 37) {
                buffPiece1 = 40;
                buffPiece2 = 25;
                break;
            }
            if (i == 38) {
                buffPiece1 = 46;
                buffPiece2 = 43;
                break;
            }
            if (i == 39) {
                buffPiece1 = 34;
                buffPiece2 = 45;
                break;
            }
            if (i == 40) {
                buffPiece1 = 37;
                buffPiece2 = 25;
                break;
            }
            if (i == 41) {
                buffPiece1 = 24;
                buffPiece2 = 28;
                break;
            }
            if (i == 42) {
                buffPiece1 = 47;
                buffPiece2 = 31;
                break;
            }
            if (i == 43) {
                buffPiece1 = 46;
                buffPiece2 = 38;
                break;
            }
            if (i == 44) {
                buffPiece1 = 30;
                buffPiece2 = 35;
                break;
            }
            if (i == 45) {
                buffPiece1 = 34;
                buffPiece2 = 39;
                break;
            }
            if (i == 46) {
                buffPiece1 = 38;
                buffPiece2 = 43;
                break;
            }
            if (i == 47) {
                buffPiece1 = 42;
                buffPiece2 = 31;
                break;
            }
        }
        i++;
    }

    srand(time(0));
    string random_str1 = "";
    string random_str2 = "";
    while (random_str1 == random_str2 || random_str1 == userData[49] || random_str2 == userData[49]|| random_str1 == userData[buffPiece1] || random_str2 == userData[buffPiece1] || random_str1 == userData[buffPiece2] || random_str2 == userData[buffPiece2] || random_str1 == "" || random_str2 == "") {
        int randpos1 = rand() % 23 + 24;
        random_str1 = userData[randpos1];
        int randpos2 = rand() % 23 + 24;
        random_str2 = userData[randpos2];
    }
    return random_str1 + random_str2;
}

string printEdgeAlg(const string& ePair, const unordered_map<string, string>& eAlgs) {
    auto it = eAlgs.find(ePair);
    if (it != eAlgs.end()) {
        return it->second;
    }
    else {
        return "Algorithm not found!";
    }
}
string printCornerAlg(const string& cPair, const unordered_map<string, string>& cAlgs) {
    auto it1 = cAlgs.find(cPair);
    if (it1 != cAlgs.end()) {
        return it1->second;
    }
    else {
        return "Algorithm not found!";
    }
}
int main() {
     map<string, int> stringCodeCypher;
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        string s(1, ch);
        stringCodeCypher[s] = ch - 'A';
    }
    int index = 26;
    for (char first = 'A'; first <= 'Z'; ++first) {
        for (char second = 'A'; second <= 'Z'; ++second) {
            string s = string(1, first) + string(1, second);
            stringCodeCypher[s] = index++;
        }
    }
    string setcode;
    cout << "input past setting, if none, enter 0, if you want to use default speffz with Uf/UFR buffers, enter 1: ";
    cin >> setcode;
    cout << endl;
    if (setcode == "0") {
        string inputArr[50];

        cout << "Please enter your prefered Letter or Letters for each piece" << endl;
        cout << "Note: Enter only A-Z and a maximum of two letters per piece" << endl;
        cout << "Note: All inputs must be captalized" << endl;

        cout << "UB: ";
        cin >> inputArr[0];
        cout << endl;
        cout << "UR: ";
        cin >> inputArr[1];
        cout << endl;
        cout << "UF: ";
        cin >> inputArr[2];
        cout << endl;
        cout << "UL: ";
        cin >> inputArr[3];
        cout << endl;
        cout << "LU: ";
        cin >> inputArr[4];
        cout << endl;
        cout << "LF: ";
        cin >> inputArr[5];
        cout << endl;
        cout << "LD: ";
        cin >> inputArr[6];
        cout << endl;
        cout << "LB: ";
        cin >> inputArr[7];
        cout << endl;
        cout << "FU: ";
        cin >> inputArr[8];
        cout << endl;
        cout << "FR: ";
        cin >> inputArr[9];
        cout << endl;
        cout << "FD: ";
        cin >> inputArr[10];
        cout << endl;
        cout << "FL: ";
        cin >> inputArr[11];
        cout << endl;
        cout << "RU: ";
        cin >> inputArr[12];
        cout << endl;
        cout << "RB: ";
        cin >> inputArr[13];
        cout << endl;
        cout << "RD: ";
        cin >> inputArr[14];
        cout << endl;
        cout << "RF: ";
        cin >> inputArr[15];
        cout << endl;
        cout << "BU: ";
        cin >> inputArr[16];
        cout << endl;
        cout << "BL: ";
        cin >> inputArr[17];
        cout << endl;
        cout << "BD: ";
        cin >> inputArr[18];
        cout << endl;
        cout << "BR: ";
        cin >> inputArr[19];
        cout << endl;
        cout << "DF: ";
        cin >> inputArr[20];
        cout << endl;
        cout << "DR: ";
        cin >> inputArr[21];
        cout << endl;
        cout << "DB: ";
        cin >> inputArr[22];
        cout << endl;
        cout << "DL: ";
        cin >> inputArr[23];
        cout << endl;
        ////////////////////////
        cout << "UBL: ";
        cin >> inputArr[24];
        cout << endl;
        cout << "UBR: ";
        cin >> inputArr[25];
        cout << endl;
        cout << "UFR: ";
        cin >> inputArr[26];
        cout << endl;
        cout << "UFL: ";
        cin >> inputArr[27];
        cout << endl;
        cout << "LUB: ";
        cin >> inputArr[28];
        cout << endl;
        cout << "LUF: ";
        cin >> inputArr[29];
        cout << endl;
        cout << "LDF: ";
        cin >> inputArr[30];
        cout << endl;
        cout << "LDB: ";
        cin >> inputArr[31];
        cout << endl;
        cout << "FUL: ";
        cin >> inputArr[32];
        cout << endl;
        cout << "FUR: ";
        cin >> inputArr[33];
        cout << endl;
        cout << "FDR: ";
        cin >> inputArr[34];
        cout << endl;
        cout << "FDL: ";
        cin >> inputArr[35];
        cout << endl;
        cout << "RUF: ";
        cin >> inputArr[36];
        cout << endl;
        cout << "RUB: ";
        cin >> inputArr[37];
        cout << endl;
        cout << "RDB: ";
        cin >> inputArr[38];
        cout << endl;
        cout << "RDF: ";
        cin >> inputArr[39];
        cout << endl;
        cout << "BUR: ";
        cin >> inputArr[40];
        cout << endl;
        cout << "BUL: ";
        cin >> inputArr[41];
        cout << endl;
        cout << "BDL: ";
        cin >> inputArr[42];
        cout << endl;
        cout << "BDR: ";
        cin >> inputArr[43];
        cout << endl;
        cout << "DFL: ";
        cin >> inputArr[44];
        cout << endl;
        cout << "DFR: ";
        cin >> inputArr[45];
        cout << endl;
        cout << "DBR: ";
        cin >> inputArr[46];
        cout << endl;
        cout << "DBL: ";
        cin >> inputArr[47];
        cout << endl;
        ////////////////////////
        cout << "Edge buffer: ";
        cin >> inputArr[48];
        cout << endl;
        ////////////////////////
        cout << "Corner buffer: ";
        cin >> inputArr[49];
        cout << endl;
        string newUserCode = userSetting(inputArr, stringCodeCypher);
        cout << "Please copy the code below and store it for when you use this program again" << endl;
        cout << newUserCode << endl;
        setcode = newUserCode;
    }
    else if (setcode == "1") {
        setcode = "000001002003004005006007008009010011012013014015016017018019020021022023000001002003004005006007008009010011012013014015016017018019020021022023002002";
    }

   vector<string> userSettingVector = decripter(setcode, stringCodeCypher);
    int option = -1;
    ///////////////////////////
    unordered_map<string, string> edgeAlgs;
    ////////////////////////
    unordered_map<string, string> cornerAlgs;
    //////////////////////
    ifstream inputFile1("C:/Users/Ball1stic/Desktop/3-style_trainer/edgealgsheet.txt");
    string line1;
    if (!inputFile1) {  // Check if the file was opened successfully
        cerr << "Error: File could not be opened." << endl;
        return 1;
    }
    getline(inputFile1, line1);
    while (getline(inputFile1, line1)) {
        size_t pos = line1.find('\t');
        string val1, val2;
        val1 = line1.substr(0,pos);
        val2 = line1.substr(pos, line1.length() - pos);
        edgeAlgs[val1] = val2;
    }
    inputFile1.close();
    ///////////////////////
    ifstream inputFile2("C:/Users/Ball1stic/Desktop/3-style_trainer/corneralgsheet.txt");
    string line2;
    getline(inputFile2, line2);
    while (getline(inputFile2, line2)) {
        size_t pos = line2.find('\t');
        string val1, val2;
        val1 = line2.substr(0,pos);
        val2 = line2.substr(pos, line2.length() - pos);
        cornerAlgs[val1] = val2;
    }
    inputFile2.close();
    ///////////////////////
    while (true) {
        cout << "Select an option by entering the the value on the left of the selected option from the table below" << endl;
        cout << endl;
        cout << "1. Edge cases." << endl;
        cout << "2. Corner cases." << endl;
        cout << "3. Exit" << endl;
        cin >> option;
        cout << endl;
        if (option == 1) {
            string useless = "0";
            while (true) {
                string edgePair = edgePairRand(userSettingVector);
                cout << edgePair << endl;
                cout << "enter 1 to exit back to menu, enter 2 to show alg, enter anything else for next pair: ";
                cin >> useless;
                cout << endl;
                if (useless == "1") {
                    break;
                }
                if (useless == "2") {
                    cout << printEdgeAlg(edgePair, edgeAlgs) << endl;
                    cout << "enter anything for next pair: ";
                    cin >> useless;
                    cout << endl;
                }
            }
        }
        else if (option == 2) {
            string useless = "0";
            while (true) {
                string cornerPair = cornerPairRand(userSettingVector);
                cout << cornerPair << endl;
                cout << "enter 1 to exit back to menu, enter 2 to show alg, enter anything else for next pair: ";
                cin >> useless;
                cout << endl;
                if (useless == "1") {
                    break;
                }
                if (useless == "2") {
                    cout << printCornerAlg(cornerPair, edgeAlgs) << endl;
                    cout << "enter anything for next pair: ";
                    cin >> useless;
                    cout << endl;
                }
            }
        }
        else if (option == 3) {
            cout << "GoodBye!" << endl;
            cout << ":3" << endl;
            break;
        }
        else {
            cout << "please enter a valid option" << endl;
        }
    }
}
