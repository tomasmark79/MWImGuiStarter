#include <MwImGuiAdapter/version.h>
#include <MwImGuiAdapter/MwImGuiAdapter.hpp>
#include <iostream>

// MIT License
// Copyright (c) 2024-2025 Tomáš Mark

#include <CGuiGlfwGl3.hpp>
#include <CGuiSdl2Gl3.hpp>

#define GLFW_ELSE_SDL2

namespace library {

  MwImGuiAdapter::MwImGuiAdapter() {
    std::cout << "--- MwImGuiAdapter v." << MWIMGUIADAPTER_VERSION
              << " instantiated ---" << std::endl;

#ifdef GLFW_ELSE_SDL2
    CGuiGlfwGl3 gui;
#else
    CGuiSdl2Gl3 gui;
#endif
    gui.runThread();
    gui.joinThread();
  }

  MwImGuiAdapter::~MwImGuiAdapter() {
    std::cout << "--- MwImGuiAdapter uninstantiated ---" << std::endl;
  }

}  // namespace library