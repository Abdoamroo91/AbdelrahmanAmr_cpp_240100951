#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int year;
    cin >> year;
    
    while (true) {
        year++;
        string yearStr = to_string(year);
        set<char> diffNums(yearStr.begin(), yearStr.end());
        
        if (diffNums.size() == 4) {
            cout << year;
            break;
        }
    }
    return 0;
}