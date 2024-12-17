#include "Array.h"

int main()
{
    vector<int> arr = { 12, -7, 104, 81, -5, 3, -2 };
    vector<int> arr1 = { 1, 2, 3, 4 };
    vector<int> arr2 = { 3, 4, 5, 6 };

    cout << "Sum of array digits: " << sumOfDigits(arr) << endl;

    cout << "Arithmetic mean of positive elements: "
        << averageOfPositive(arr) << endl;

    auto [maxNeg, index] = maxNegativeElement(arr);
    cout << "Maximum negative element: " << maxNeg
        << " at position " << index << endl;

    cout << "Most frequent number in the array: "
        << mostFrequentNumber(arr) << endl;

    cout << "Largest element with odd indices divisible by 3: "
        << maxOddIndexedDivisibleBy3(arr) << endl;

    swapEvenOdd(arr);
    cout << "Array after swapping: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    auto [intersection, difference] = arrayIntersectionAndDifference(arr1, arr2);
    cout << "Common elements: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Unique elements: ";
    for (int num : difference) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
