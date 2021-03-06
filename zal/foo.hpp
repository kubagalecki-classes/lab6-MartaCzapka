#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
using namespace std;
std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    for_each(people.begin(), people.end(), [&](auto& it) { return it.birthday(); });
    transform(people.cbegin(), people.cend(), ret_v.rbegin(), [](auto& it) {
        return it.isMonster() ? 'n' : 'y';
    });

    return ret_v;
}
