#include <iostream>

/**
 * Trying to solve linked list direct access problem by adding a ref that holds a distinct reference for each node
 */

template <class T>
class TemplateList
{
protected:
  int ref;
public:
  T obj;
  TemplateList *next;
  TemplateList()
  {
    ref = 0;
  }
  void updateRef(TemplateList *first)
  {
    if (first->next != NULL)
      {
	first = first->next;
	ref++;
	std::cout << first->ref << std::endl;
	updateRef(first);
      }

  }

};

int main()
{
  TemplateList<int> *first = new TemplateList<int>, temp, sec;
  first->obj = '\0';
  first->next = &sec;
  sec.obj = 5;
  sec.next = NULL;
  temp = sec;
  sec.obj = 3;
  first->next = &sec;
  first->next->next = &temp;
  std::cout << temp.next << std::endl;
  first->updateRef(first);
}
