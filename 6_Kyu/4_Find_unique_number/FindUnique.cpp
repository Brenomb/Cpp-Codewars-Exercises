//https://www.codewars.com/kata/585d7d5adb20cf33cb000235/train/cpp
#include "FindUnique.hpp"

#include <vector>
#include <algorithm>


// what we learned so far: count takes too much time, sort might be unecessary, two loops are also not an option

float find_uniq(const std::vector<float> &v) {
    float a = v[0];
    float b = v[1];
    float c = v[2];
    if (a != b && a != c) return a;
    for (float x : v) if (x != a) return x;
    return 0.0f;
}

// timed out
float to5_find_uniq(const std::vector<float> &v) {
    std::vector<float> sorted = v;
    std::sort(sorted.begin(), sorted.end());
    
    // Check edge cases
    if (sorted[0] != sorted[1]) return sorted[0];
    if (sorted[sorted.size() - 1] != sorted[sorted.size() - 2]) return sorted[sorted.size() - 1];
    
    for (size_t i = 1; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i - 1] && sorted[i] != sorted[i + 1]) {
            return sorted[i];
        }
    }
    return 0.0f; 
}

//timed out
float to4_find_uniq(const std::vector<float> &v)
{
    int i = 0;
    do{
        if (std::count(v.begin(), v.end(), v[i]) == 1)
        {
            return v[i];
        }
        i++;
    } while (i < v.size());
    return v[i];
}

// timed out
float to3_find_uniq(const std::vector<float> &v)
{
    std::vector<float> v_ordered = v;
    std::sort(v_ordered.begin(), v_ordered.end());

    if (v_ordered[0] != v_ordered[1] && v_ordered[0] != v_ordered[2]) return v_ordered[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v_ordered[i] != v_ordered[i - 1])
        {
            if (v_ordered[i] != v_ordered[i + 1])
            {
                return v_ordered[i];
            }
            else
            {
                return v_ordered[i - 1];
            }
        }
    }
}

//timed out
float to2_find_uniq(const std::vector<float> &v)
{
    std::vector<float> v_ordered = v;
    std::sort(v_ordered.begin(), v_ordered.end());

    for(int i = 0; i < v_ordered.size(); i++)
    {
        if (v_ordered[i] != v_ordered[i + 1])
        {                     
            if (v_ordered[i+1] == v_ordered[i + 2])
            {
                return v_ordered[i];
            }
            else
            {
                return v_ordered[i + 1];
            }
        }
    }
}


// Timed out
float to1_find_uniq(const std::vector<float> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j] && i != j)
            {
                c++;
            }
        }
        if (c == 0) return v[i];
    }
}