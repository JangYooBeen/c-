1
int add(int a, int b) 
{
    return a + b;
}

2
bool isEven(int n) 
{
    return n % 2 == 0;
}

3
int factorial(int n) 
{
    int result = 1;
    for (int i = 2; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

4
#include <algorithm>  // std::reverse

string reverseString(string s) 
{
    reverse(s.begin(), s.end());
    return s;
}

5
bool isPalindrome(string str) 
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++) 
    {
        if (str[i] != str[n - i - 1]) return false;
    }
    return true;
}

6
int fibonacci(int n) 
{
    if (n <= 1) return n;
    int a = 0, b = 1, sum;
    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return b;
}
#include <cctype>

7
int countVowels(string s) 
{
    int count = 0;
    for (char c : s)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

8
int maxInArray(int arr[], int size)
{
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

9
bool isPrime(int n) 
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return false;
    }
    return true;
}

#include <iostream>
using namespace std;

10
void greet(string name)
{
    cout << "Hello, " << name << "! ??" << endl;
}
