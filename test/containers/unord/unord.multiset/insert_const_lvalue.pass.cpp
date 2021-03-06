//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <unordered_set>

// template <class Value, class Hash = hash<Value>, class Pred = equal_to<Value>,
//           class Alloc = allocator<Value>>
// class unordered_multiset

// iterator insert(const value_type& x);

#include <unordered_set>
#include <cassert>

int main()
{
    {
        typedef std::unordered_multiset<double> C;
        typedef C::iterator R;
        typedef C::value_type P;
        C c;
        R r = c.insert(P(3.5));
        assert(c.size() == 1);
        assert(*r == 3.5);

        r = c.insert(P(3.5));
        assert(c.size() == 2);
        assert(*r == 3.5);

        r = c.insert(P(4.5));
        assert(c.size() == 3);
        assert(*r == 4.5);

        r = c.insert(P(5.5));
        assert(c.size() == 4);
        assert(*r == 5.5);
    }
}
