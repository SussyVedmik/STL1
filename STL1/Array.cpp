#include "Array.h"

int sumOfDigits(const vector<int>& arr)
{
    int sum = 0;
    for (int num : arr)
    {
        while (num != 0)
        {
            sum += abs(num % 10);
            num /= 10;
        }
    }
    return sum;
}

double averageOfPositive(const vector<int>& arr)
{
    int sum = 0, count = 0;
    for (int num : arr)
    {
        if (num > 0)
        {
            sum += num;
            count++;
        }
    }
    return count > 0 ? static_cast<double>(sum) / count : 0.0;
}

pair<int, int> maxNegativeElement(const vector<int>& arr)
{
    int maxNeg = INT_MIN, index = -1;
    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (arr[i] < 0 && arr[i] > maxNeg)
        {
            maxNeg = arr[i];
            index = i;
        }
    }
    return { maxNeg, index };
}

int mostFrequentNumber(const vector<int>& arr)
{
    map<int, int> frequency;
    for (int num : arr)
    {
        frequency[num]++;
    }
    int maxCount = 0, result = arr[0];
    for (const auto& [key, count] : frequency)
    {
        if (count > maxCount)
        {
            maxCount = count;
            result = key;
        }
    }
    return result;
}

int maxOddIndexedDivisibleBy3(const vector<int>& arr)
{
    int maxElement = INT_MIN;
    for (size_t i = 1; i < arr.size(); i += 2)
    {
        if (arr[i] % 3 == 0 && arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement == INT_MIN ? 0 : maxElement;
}

void swapEvenOdd(vector<int>& arr)
{
    int maxEven = INT_MIN, minOdd = INT_MAX;
    int maxEvenIndex = -1, minOddIndex = -1;

    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (arr[i] % 2 == 0 && arr[i] > maxEven)
        {
            maxEven = arr[i];
            maxEvenIndex = i;
        }
        if (arr[i] % 2 != 0 && arr[i] < minOdd)
        {
            minOdd = arr[i];
            minOddIndex = i;
        }
    }

    if (maxEvenIndex != -1 && minOddIndex != -1)
    {
        swap(arr[maxEvenIndex], arr[minOddIndex]);
    }
    else
    {
        fill(arr.begin(), arr.end(), 0);
    }
}

pair<vector<int>, vector<int>> arrayIntersectionAndDifference(const vector<int>& arr1, const vector<int>& arr2)
{
    vector<int> intersection, difference;

    for (int num : arr1) {
        if (find(arr2.begin(), arr2.end(), num) != arr2.end())
        {
            intersection.push_back(num);
        }
        else
        {
            difference.push_back(num);
        }
    }
    for (int num : arr2)
    {
        if (find(arr1.begin(), arr1.end(), num) == arr1.end())
        {
            difference.push_back(num);
        }
    }

    return { intersection, difference };
}
