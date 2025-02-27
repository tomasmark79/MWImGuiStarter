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

## succesfuly native builds

 - native gcc x86_64 Linux
 - native clang x86_64 Linux
 - native gcc aarch64 Linux

## succesfuly cross builds
 
 - cross mingw32-w64 Windows
 
## yet un-succesfuly builds

 - cross gcc aarch64 Debian version: 12 (bookworm)
   - missing X11 packages in sysroot
   - buggy libunwind
   - 

---

**[MarkWareVCMake](https://github.com/tomasmark79/MarkWareVCMake)** – A fast and practical starting point for modern C++ development! 🏗️ This template ensures a solid foundation with pre-configured settings, modular structure, and compatibility across platforms. Boost your workflow and deliver quality code. 🌈
