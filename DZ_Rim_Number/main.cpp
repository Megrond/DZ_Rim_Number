#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) 
{
    string roman = "";
    int number[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    string symbol[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    for (int i = 0; i < 13; i++) 
    {
        while (num >= number[i]) 
        {
            num -= number[i];
            roman += symbol[i];
        }
    }
    return roman;
}

int main() {
    string input;
    cout << "Enter a natural number (up to 4000): ";
    cin >> input;
    int num = stoi(input);
    cout << "Roman numeral: " << intToRoman(num) << endl;
    return 0;
}