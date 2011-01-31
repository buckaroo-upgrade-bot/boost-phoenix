/*==============================================================================
    Copyright (c) 2011 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/

#if !defined(PHOENIX_PREPROCESSED_EXPRESSION)
#define PHOENIX_PREPROCESSED_EXPRESSION

#if PHOENIX_LIMIT <= 10
#include <boost/phoenix/core/preprocessed/expression_10.hpp>
#elif PHOENIX_LIMIT <= 20
#include <boost/phoenix/core/preprocessed/expression_20.hpp>
#elif PHOENIX_LIMIT <= 30
#include <boost/phoenix/core/preprocessed/expression_30.hpp>
#elif PHOENIX_LIMIT <= 40
#include <boost/phoenix/core/preprocessed/expression_40.hpp>
#elif PHOENIX_LIMIT <= 50
#include <boost/phoenix/core/preprocessed/expression_50.hpp>
#else
#error "PHOENIX_LIMIT out of bounds for preprocessed headers"
#endif

#endif