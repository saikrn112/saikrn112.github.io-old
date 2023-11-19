#include <iostream>
#include <vector>

class A
{
    int _i;
    public:
    A(int i) :_i(i) {std::cout << "ctor "<<  _i << std::endl;};
    //A(const A& a) {_i = a._i; std::cout << "copy ctor "<< _i << std::endl;} ;
    A(const A& a) = delete;
    //A(A&& a) noexcept {_i = a._i;std::cout << "move ctor "<< _i << std::endl;};
    A(A&& a) {_i = a._i;std::cout << "move ctor "<< _i << std::endl;};

};

int main()
{
    std::vector<A> a;
    a.reserve(1);
    //a.push_back(A(3));
    a.emplace_back(4);
    a.emplace_back(5);
}

