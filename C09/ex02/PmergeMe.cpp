
#include "PmergeMe.hpp"

void split_deque_into_pairs(std::deque<int>& d, size_t size)
{
    if (d.size() < size * 2)
        return;

    std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;
    std::deque<int> tmp;
    if (d.size() % (size * 2) != 0)
    {
        for (size_t i = d.size() - (d.size() % (size * 2)); i < d.size(); i++)
            tmp.push_front(d[i]);
        d.erase(d.end() - (d.size() % (size * 2)), d.end());
        std::cout << std::endl;
        std::cout << "==> tmp" << std::endl;
    }
    for (std::deque<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    for (size_t i = 0; i < d.size(); i += size * 2)
    {
        std::deque<int> first_deque;
        std::deque<int> second_deque;

        if (d.size() - i < size * 2)
        {
            for (size_t j = i; j < d.size(); j++)
            {
                if (j < i + size)
                    first_deque.push_back(d[j]);
                else
                    second_deque.push_back(d[j]);
            }
        }
        else
        {
            for (size_t j = i; j < i + size; j++)
                first_deque.push_back(d[j]);
            for (size_t j = i + size; j < i + size * 2; j++)
                second_deque.push_back(d[j]);
            if (first_deque.back() > second_deque.back())
                std::swap(first_deque, second_deque);
        }
        pairs.push_back(std::make_pair(first_deque, second_deque));
    }
    d.clear();
    for (size_t i = 0; i < pairs.size(); i++)
    {
        std::deque<int>& first_subdeque = pairs[i].first;
        std::deque<int>& second_subdeque = pairs[i].second;
        for (size_t j = 0; j < size; j++)
            d.push_back(first_subdeque[j]);
        for (size_t j = 0; j < size; j++)
            d.push_back(second_subdeque[j]);
    }
    std::cout << "==> pairs in " << size << std::endl;
    for (std::deque<std::pair<std::deque<int>, std::deque<int> > >::iterator it = pairs.begin(); it != pairs.end(); ++it)
    {
        for (std::deque<int>::iterator it2 = it->first.begin(); it2 != it->first.end(); ++it2)
            std::cout << *it2 << " ";
        std::cout << " , ";
        for (std::deque<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
            std::cout << *it2 << " ";
        std::cout << std::endl;
    }
    // if (!tmp.empty())
    // {
    //     d.insert(d.end(), tmp.begin(), tmp.end());
    // }
    split_deque_into_pairs(d, size * 2);
    pairs.clear();
    std::cout << std::endl;
    std::cout << "size = " << size << std::endl;
    std::deque<int> main_chain;
    std::deque<int> pend_chain;
    for (size_t i = 0; i < d.size(); i += size * 2)
    {
        if (size > d.size() - i)
        {
            std::deque<int> first_deque;
            std::deque<int> second_deque;
            for (size_t j = i; j < d.size(); j++)
            {
                if (j < i + size)
                    first_deque.push_back(d[j]);
                else
                    second_deque.push_back(d[j]);
            }
            pairs.push_back(std::make_pair(first_deque, second_deque));
        }
        else
        {
            std::deque<int> first_deque;
            std::deque<int> second_deque;
            for (size_t j = i; j < i + size; j++)
                first_deque.push_back(d[j]);
            for (size_t j = i + size; j < i + size * 2; j++)
                second_deque.push_back(d[j]);
            pairs.push_back(std::make_pair(first_deque, second_deque));
        }
        main_chain.insert(main_chain.end(), pairs.back().second.begin(), pairs.back().second.end());
        pend_chain.insert(pend_chain.end(), pairs.back().first.begin(), pairs.back().first.end());
    }
    std::cout << "==> main_chain" << std::endl;
    for (std::deque<int>::iterator it = main_chain.begin(); it != main_chain.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "==> pend_chain" << std::endl;
    for (std::deque<int>::iterator it = pend_chain.begin(); it != pend_chain.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "==> pairs in " << size << std::endl;
    for (std::deque<std::pair<std::deque<int>, std::deque<int> > >::iterator it = pairs.begin(); it != pairs.end(); ++it)
    {
        for (std::deque<int>::iterator it2 = it->first.begin(); it2 != it->first.end(); ++it2)
            std::cout << *it2 << " ";
        std::cout << " , ";
        for (std::deque<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
            std::cout << *it2 << " ";
        std::cout << std::endl;
    }
}
