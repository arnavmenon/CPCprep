#include <bits/stdc++.h>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {

    if (letters.back() <= target) 
        return letters.front();

    int beg = 0, end = letters.size() - 1;

    while (beg < end) {

        auto mid = (beg + end) / 2;

        if (target < letters[mid]) 
            end = mid;
        else 
            beg = mid + 1;
    }

    return letters[beg];
}