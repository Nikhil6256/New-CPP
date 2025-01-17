#include <iostream>
using namespace std;
int countEven(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int countOdd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}
int countPositive(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > 0)
        {
            count++;
        }
    return count;
}
int countNegative(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] < 0)
        {
            count++;
        }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int even = countEven(arr, n);
    cout << "Even: " << even << endl;

    int Odd = countOdd(arr, n);
    cout << "Odd: " << Odd << endl;

    int Positive = countPositive(arr, n);
    cout << "Positive: " << Positive << endl;

    int Negative = countNegative(arr, n);
    cout << "Negative: " << Negative << endl;
}