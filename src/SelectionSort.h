#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <vector>

using std::size_t;

namespace SELS
{
void sort(std::vector<int>& data);
void swap(std::vector<int>& data, size_t aId, size_t bId);
size_t indexOfSubvecMin(std::vector<int>& data, size_t startIndex);
}


#endif // SELECTIONSORT_H
