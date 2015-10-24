#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <vector>

using std::size_t;

namespace SELS
{

void sort(std::vector<int>& data);
void swap(std::vector<int>& data, size_t aId, size_t bId);
size_t indexOfSubvecMin(const std::vector<int>& data, size_t startIndex);

} // namespace SELS


#endif // SELECTIONSORT_H
