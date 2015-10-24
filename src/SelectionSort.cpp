#include <SelectionSort.h>
#include <cassert>

namespace SELS
{

void sort(std::vector<int> &data)
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        size_t minIndex = indexOfSubvecMin(data, i);
        swap(data, i, minIndex);
    }
}

void swap(std::vector<int>& data, size_t aId, size_t bId)
{
    assert(data.size() > aId);
    assert(data.size() > bId);

    int temp = data[aId];
    data[aId] = data[bId];
    data[bId] = temp;
}

size_t indexOfSubvecMin(const std::vector<int>& data, size_t startIndex)
{
    assert(data.size() > startIndex);

    int minValue = data[startIndex];
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

} // namespace SELS
