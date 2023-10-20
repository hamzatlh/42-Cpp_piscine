#include <iostream>
#include <vector>
#include <deque>
#include <iostream>
// #include "PmergeMe.hpp"

std::vector<int> Jacobsthal(int n)
{
    std::vector<int> arr(n);
    if (n == 0)
        return (arr);
    if (n == 1)
    {
        arr[0] = 1;
        return (arr);
    }
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }
    return (arr);
}

int main()
{
    std::vector<int> jacobsthal_sequence = Jacobsthal(4);
    for (int i = 0; i < jacobsthal_sequence.size(); i++)
    {
        std::cout << jacobsthal_sequence[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}