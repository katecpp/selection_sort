#include <data/CFoo.h>

namespace F
{

bool CFoo::operator <(const CFoo& other) const
{
    return m_number < other.m_number;
}

bool CFoo::operator ==(const CFoo& other) const
{
    return m_number == other.m_number && m_name == other.m_name;
}

CFoo& CFoo::operator=(const CFoo &other)
{
    if (*this == other)
    {
        return *this;
    }
    else
    {
        m_number = other.m_number;
        m_name = other.m_name;
        return *this;
    }
}

std::ostream & operator<<(std::ostream &os, const CFoo& foo)
{
    return os << foo.m_name << ":" << foo.m_number;
}

} // namespace F
