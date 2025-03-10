#include <MwImGuiAdapter/MwImGuiAdapter.hpp>
#include <Logger/Logger.hpp>
#include <memory>

// MIT License
// Copyright (c) 2024-2025 Tomáš Mark

namespace san {
  void scream() {
    char cS[2];
    cS[3] = 'a';
    int* cSA = new int[3];
    delete[] cSA;
    cSA[22] = 0;
  }
}  // namespace san

int main() {
  char hw[] = "Hello, World!";
  std::unique_ptr<library::MwImGuiAdapter> lib;
  try {
    lib.reset(new library::MwImGuiAdapter());  // c++11
    // lib = std::make_unique<library::MwImGuiAdapter>();  // c++14
    //san::scream();
    { LOG.info(hw); }
    { LOG.debug(hw); }
    { LOG.warning(hw); }
    { LOG.error(hw); }
  } catch (std::exception& e) { LOG.error(e.what()); }
  return 0;
}  // main