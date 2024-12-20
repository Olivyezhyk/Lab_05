﻿#include <iostream>

using namespace std;

int Q(int m, int n, int level, int& depth);

int main()
{
    int m, n;
    cout << "Enter m (positive integer): "; cin >> m;
    cout << "Enter n (positive integer): "; cin >> n;

    int depth = 0;
    int result = Q(m, n, 0, depth);

    cout << "Number of partitions of a positive integer: " << result << endl;
    cout << "Maximum recursion depth: " << depth << endl;

    return 0;
}

int Q(int m, int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    cout << "Recursion level: " << level << ", m: " << m << ", n: " << n << endl;

    if (m == 1 || n == 1)
        return 1;
    if (m < n) 
        return Q(n, m, level + 1, depth);
    if (m == n) 
        return 1 + Q(m, n - 1, level + 1, depth);

    return Q(m, n - 1, level + 1, depth) + Q(m - n, n, level + 1, depth);
}
