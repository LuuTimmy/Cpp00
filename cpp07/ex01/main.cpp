#include <iostream>
#include "iter.hpp"
  
int main() 
{
    int     tab[] = {1, 2, 3, 4, 5};
    char    tab2[] = {'a', 'b', 'c', 'd', 'e'};
    const char    *tab3[] = {"holo", "yolo", "koala", "lion"};

    iter(tab, 5, display);
    iter(tab2, 5, display);
    iter(tab3, 4, display);
	return (0);
}
