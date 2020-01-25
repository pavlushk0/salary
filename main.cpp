
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "operation.h"
#include "order.h"

using namespace std;

vector<string> split_str(const std::string &string, char sep) {
    vector<std::string> list;
    string::size_type start = 0;
    string::size_type end;

    while ((end = string.find(sep, start)) != string::npos) {
        if (start != end)
            list.push_back(string.substr(start, end - start));
        start = end + 1;
    }

    if (start != string.size())
        list.push_back(string.substr(start));

    return list;
}

void usage() {
    cout << "Running with no options entails invoke usage() function" << endl;
}

int main(int argc, char **argv) {
    string str;
    vector<std::string> str_vec;
    unordered_map<string, int> op_list;
    bool run = 1;

    op_list["quit"] = 100;
    op_list["list"] = 200;

    while (run) {
        cout << ">";
        std::getline(cin, str);

        str_vec = split_str(str, ' ');

        auto op_it = op_list.find(str_vec[0]);

        if (op_it != op_list.end()) {
            if (op_it->second == 100) {
                cout << "your command is - quit" << endl;
                run = 0;
            }

            if (op_it->second == 200) {
                cout << "your command is - list" << endl; 
            }

        } else {
            cout << "unknown command - " << str_vec[0] << endl;
        }
    }

    return 0;
};