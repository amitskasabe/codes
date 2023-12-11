#include <iostream>
using namespace std;
/*int printNums(int n)
{
    if (n == 10)
        return 10;
    return printNums(n + 1);
}*/
int SumOfNaturalNumbers(int n)
{
    if (n == 0)
        return 0;
    int sum = 0;
    sum += n;
    // cout<<sum+SumOfNaturalNumbers(n-1);
    return sum + SumOfNaturalNumbers(n - 1);

}
// bool isPrime(int n , int  i)
// {
//     bool prime = true;
//     if(n == 0 || n == 1)
//     {
//         return prime;
//     }
//     if(n%i == 0){
//         prime = false;
//     }
//     return prime;
//     isPrime(n , i+1);
// }
int fact(int n)
{
    if(n == 0) return 1;
    n = n * fact(n - 1);
    return n;
}
int main()
{
    SumOfNaturalNumbers(5);
    int n = 1;
    cout<<fact(5);
    // isPrime(23 , 2);

    return 0;
}