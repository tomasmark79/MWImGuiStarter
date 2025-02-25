#include <MyImGuiAdapter/version.h>
#include <MyImGuiAdapter/MyImGuiAdapter.hpp>
#include <iostream>

#include <CGuiGlfwGl3.hpp>

namespace library {

  MyImGuiAdapter::MyImGuiAdapter() {
    std::cout << "--- MyImGuiAdapter v." << MYIMGUIADAPTER_VERSION
              << " instantiated ---" << std::endl;

    CGuiGlfwGl3 gui;
  }

  MyImGuiAdapter::~MyImGuiAdapter() {
    std::cout << "--- MyImGuiAdapter uninstantiated ---" << std::endl;
  }

}  // namespace library