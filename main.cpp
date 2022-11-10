#include <iostream>
#include <string>
#include <linkedlist.h>
#include <vectortest.h>

int main()
{
    List<std::string> str_list;
    list_init(str_list);

    list_insert(str_list, std::string("Hello"));
    list_insert(str_list, std::string("Hello"));
    list_insert(str_list, std::string("First"));

    list_print(str_list, std::cout);
    list_destroy(str_list);

    VectorTest v;

    return 0;
}

