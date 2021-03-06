// Copyright (C) ETH Zurich
// Copyright (C) 2020 UT-Battelle, LLC
// All rights reserved.
//
// See LICENSE for terms of usage.
//
// Author: Giovanni Balduzzi (gbalduzz@itp.phys.ethz.ch)
//
// Utility to perform three way comparison waiting for c++20.

#pragma once

#include <string>

namespace maplib {
namespace details {

template <class T>
int compare(const T& a, const T& b) noexcept {
  if (a < b)
    return -1;
  else if (b < a)
    return 1;
  else
    return 0;
}

template <>
int compare(const std::string& a, const std::string& b) noexcept {
  return a.compare(b);
}

}  // namespace details
}  // namespace maplib
