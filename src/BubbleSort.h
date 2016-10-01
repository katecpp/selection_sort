#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
#include <iostream>

using std::size_t;

namespace BBS
{

template <typename T>
void swap(std::vector<T>& data, size_t aId, size_t bId)
{
    assert(data.size() > aId);
    assert(data.size() > bId);

    T temp = data[aId];
    data[aId] = data[bId];
    data[bId] = temp;
}

template <typename T>
void sort(std::vector<T>& data)
{
    const size_t lastElementId = data.size() - 1;
    size_t sortedPartLen = 0;

    while (sortedPartLen < lastElementId)
    {
        for (int pos = lastElementId; pos > 0; pos--)
        {
            if (data[pos] < data[pos-1])
            {
                swap(data, pos, pos-1);
            }
        }
        sortedPartLen++;
    }
}

}

#endif // BUBBLESORT_H

