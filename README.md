# MyImGuiStarter

[![Ubuntu](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/macos.yml/badge.svg)](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/macos.yml)
[![Windows](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/windows.yml/badge.svg)](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/windows.yml)  

## Overview

MyImGuiStarter is using 
**[MarkWareVCMake](https://github.com/tomasmark79/MarkWareVCMake)** project template.  

## Implemented classes

 - switchable by preprocessor

CGuiGlfwGl3 - GLFW with OpenGL3  
CGuiSdl2Gl3 - SDL2 with OpenGL3

## succesfuly tested scenarios

 - native gcc x86_64 Linux
 - native clang x86_64 Linux
 - cross mingw32-w64 Windows
 
## yet un-succesfuly scenarios

 - cross to arm -> to do (missing X11 packages in sysroot)
   System: 64-bit, Kernel version: 6.6, Debian version: 12 (bookworm)

---

**[MarkWareVCMake](https://github.com/tomasmark79/MarkWareVCMake)** – A fast and practical starting point for modern C++ development! 🏗️ This template ensures a solid foundation with pre-configured settings, modular structure, and compatibility across platforms. Boost your workflow and deliver quality code. 🌈
