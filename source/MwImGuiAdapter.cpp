#include <MwImGuiAdapter/version.h>
#include <MwImGuiAdapter/MwImGuiAdapter.hpp>
#include <iostream>

#include <CGuiGlfwGl3.hpp>

namespace library {

  MwImGuiAdapter::MwImGuiAdapter() {
    std::cout << "--- MwImGuiAdapter v." << MWIMGUIADAPTER_VERSION
              << " instantiated ---" << std::endl;

    CGuiGlfwGl3 gui;
  }

  MwImGuiAdapter::~MwImGuiAdapter() {
    std::cout << "--- MwImGuiAdapter uninstantiated ---" << std::endl;
  }

}  // namespace library