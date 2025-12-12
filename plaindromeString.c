#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);

    int start = 0;
    int end = strlen(str) - 1;
    bool flag = true;

    while (start < end) {
        if (str[start] != str[end]) {
            flag = false;
            break;
        }
        start++;
        end--;
    }

    if (flag) 
        cout << "It is a palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
