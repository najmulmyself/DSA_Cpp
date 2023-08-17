#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a)
{
    // Base case: If the input vector has 0 or 1 elements, it's already sorted
    if (a.size() <= 1)
    {
        return a;
    }

    // Choosing the pivot as the last element
    int pivot = a.size() - 1;

    // Initialize two vectors to hold elements less than pivot (b) and greater than pivot (c)
    vector<int> b, c;

    // Partition the input vector into two sub-vectors (b and c)
    for (int i = 0; i < a.size(); i++)
    {
        if (i == pivot)
        {
            continue; // Skip the pivot element
        }
        if (a[i] < a[pivot])
        {
            b.push_back(a[i]); // Elements less than pivot go to vector b
        }
        else
        {
            c.push_back(a[i]); // Elements greater than or equal to pivot go to vector c
        }
    }

    // Recursively sort the sub-vectors b and c
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);

    // Combine the sorted sub-vectors and pivot to get the final sorted vector
    vector<int> sorted_a;

    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);

    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }

    return sorted_a;
}

int main()
{
    // Input vector
    vector<int> a = {6, 2, 3, 3, 5};
    
    // Sorting using quick_sort function
    vector<int> sorted_a = quick_sort(a);

    // Printing the sorted vector
    for (int i = 0; i < sorted_a.size(); i++)
    {
        cout << sorted_a[i] << " ";
    }

    return 0;
}
