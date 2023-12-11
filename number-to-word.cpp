#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int number = 840;
    unordered_map<int, string> nums = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {10, "ten"},
        {20, "twenty"},
        {30, "thirty"},
        {40, "forty"},
        {50, "fifty"},
        {60, "sixty"},
        {70, "seventy"},
        {80, "eighty"},
        {90, "ninety"},
        {100, "hundred"},
        {1000, "thousand"},
        {100000, "Lakh"},
        {10000000, "Crore"}};

    if (number > 11 && number <= 100)
    {
        int tens = (number / 10) * 10;
        int ones = number % 10;
        cout << " Total Payable is:" << nums[tens] << " " << nums[ones] << endl;
    }
    else if (number > 100 && number <= 1000)
    {
        int hundreds = (number / 100);
        int h = (number / number) * 100;
        int tens_zero = (number % 100);
        int tens_one = (tens_zero / 10) * 10;
        int ones = (tens_zero % 10);
        // int ones =

        cout << " The total pay is " << nums[hundreds] << " " << nums[h] << " " << nums[tens_one] << " " << nums[ones];
    }

    return 0;
}