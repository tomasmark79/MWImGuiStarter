#include <MwImGuiAdapter/version.h>
#include <MwImGuiAdapter/MwImGuiAdapter.hpp>
#include <iostream>

#include <CGuiGlfwGl3.hpp>
#include <CGuiSdl2Gl3.hpp>

#define GLFW
// #define SDL2

namespace library {

  MwImGuiAdapter::MwImGuiAdapter() {
    std::cout << "--- MwImGuiAdapter v." << MWIMGUIADAPTER_VERSION
              << " instantiated ---" << std::endl;
#ifdef GLFW
    CGuiGlfwGl3 gui;
#elif defined(SDL2)
    CGuiSdl2Gl3 gui;
#endif
    gui.runThread();
    gui.joinThread();
  }

  MwImGuiAdapter::~MwImGuiAdapter() {
    std::cout << "--- MwImGuiAdapter uninstantiated ---" << std::endl;
  }

}  // namespace library