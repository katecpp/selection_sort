#ifndef INSERTIONSORT
#define INSERTIONSORT

#include <vector>
using std::size_t;

namespace INSS
{

template <typename T>
void insert(std::vector<T>& data, size_t rightIndex, T value)
{
    int i = rightIndex;
    while(i >= 0 && value < data.at(i))
    {
        data.at(i+1) = data.at(i);
        i--;
    }
    data.at(i + 1) = value;
}

template <typename T>
void sort(std::vector<T>& data)
{
    for (size_t i = 1; i < data.size(); ++i)
    {
        insert(data, i - 1, data.at(i));
    }
}
}

#endif // INSERTIONSORT

