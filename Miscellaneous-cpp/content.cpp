#include <bits/stdc++.h>

namespace name1
{
    void print(const char* str)
    {
        std::cout<<str<<std::endl;
    }
}

/*
    calling 
    name1::print("Some Fn")
    
    using namespace name1
    print()

    using name1::print;
    print()
    name1::print()


    namespace a = name1 :: innnername1;
    a::print()

    used at local areas avoid using it gloabaly
    never in header files
*/    
