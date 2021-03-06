/*=============================================================================
    Copyright (c) 2004 Angus Leeming
    Copyright (c) 2017 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0. (See accompanying 
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#include "container_tests.hpp"
#include <boost/static_assert.hpp>

std::unordered_set<int> const build_unordered_set()
{
    typedef std::unordered_set<int> int_set;
    typedef std::vector<int> int_vector;

    int_set result;
    int_vector const data = build_vector();
    int_vector::const_iterator it = data.begin();
    int_vector::const_iterator const end = data.end();
    result.insert(it, end);
    return result;
}

std::vector<int> const init_vector()
{
    typedef std::vector<int> int_vector;
    int const data[] = { -4, -3, -2, -1, 0 };
    int_vector::size_type const data_size = sizeof(data) / sizeof(data[0]);
    return int_vector(data, data + data_size);
}

std::vector<int> const build_vector()
{
    typedef std::vector<int> int_vector;
    static int_vector data = init_vector();
    int_vector::size_type const size = data.size();
    int_vector::iterator it = data.begin();
    int_vector::iterator const end = data.end();
    for (; it != end; ++it)
      *it += size;
    return data;
}

int
main()
{
    BOOST_STATIC_ASSERT((!phx::stl::has_mapped_type<std::unordered_set<int> >::value));
    BOOST_STATIC_ASSERT((phx::stl::has_key_type<std::unordered_set<int> >::value));

    std::unordered_set<int> const data = build_unordered_set();
    test_begin(data);
    test_clear(data);
    test_empty(data);
    test_end(data);
    test_set_erase(data);
    test_get_allocator(data);
    return boost::report_errors();
}

