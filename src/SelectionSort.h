#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <cassert>
#include <vector>

using std::size_t;

namespace SELS
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
size_t indexOfSubvecMin(const std::vector<T> &data, size_t startIndex)
{
    assert(data.size() > startIndex);

    T minValue = data[startIndex];
    size_t minIndex = startIndex;

    for (size_t i = startIndex; i < data.size(); ++i)
    {
        if (data[i] < minValue)
        {
            minValue = data[i];
            minIndex = i;
        }
    }

    return minIndex;
}

template <typename T>
void sort(std::vector<T>& data)
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        size_t minIndex = indexOfSubvecMin(data, i);
        swap(data, i, minIndex);
    }
}

} // namespace SELS


#endif // SELECTIONSORT_H
