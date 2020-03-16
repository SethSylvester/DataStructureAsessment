#include "List.h"
//Seth
template<typename Anytype>
inline bool List<Anytype>::isEmptyList()
{
	if (m_first == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//Seth
template<typename Anytype>
inline int List<Anytype>::Length()
{
	return m_count;
}
//Seth
template<typename Anytype>
inline void List<Anytype>::DeleteNode(const Anytype & node)
{
}

//Return the first item in the list - H
template<typename Anytype>
Anytype List<Anytype>::front()
{
	return m_first->Info;
}

//Return the last item in the list - H
template<typename Anytype>
Anytype List<Anytype>::back()
{
	return m_last->Info;
}

//Return weather the list is empty - H
template<typename Anytype>
bool List<Anytype>::isEmpty()
{
	return m_count == 0;
}