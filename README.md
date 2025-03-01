# MWImGuiStarter

[![Ubuntu](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/macos.yml/badge.svg)](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/macos.yml)
[![Windows](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/windows.yml/badge.svg)](https://github.com/tomasmark79/MWImGuiStarter/actions/workflows/windows.yml)  

## Overview

MWImGuiStarter is using 
**[MarkWareVCMake](https://github.com/tomasmark79/MarkWareVCMake)** project template.  

![Snímek obrazovky z 2025-02-28 15-30-45](https://github.com/user-attachments/assets/fb6cb29f-b083-4b10-aa38-e56c2b4a8b6d)


## Implemented classes

 - switchable by preprocessor [GLFW_ELSE_SDL2]

`CGuiGlfwGl3` - binding GLFW with OpenGL3
 - imGui demo
 - is using simple shader and is generating shader triangle  

`CGuiSdl2Gl3` - binding SDL2 with OpenGL3
 - just imGui demo show

## succesful builds

 - native gcc x86_64 Linux
 - native clang x86_64 Linux
 - native gcc aarch64 Linux
 - native AppleClang MacOS
 - native MSVC Windows
 - cross mingw32-w64 Windows

## unsuccesful builds
 - cross gcc aarch64 Debian version: 12 (bookworm)
   - missing X11 packages in sysroot
   - buggy libunwind

---

**[MarkWareVCMake](https://github.com/tomasmark79/MarkWareVCMake)** – A fast and practical starting point for modern C++ development! 🏗️ This template ensures a solid foundation with pre-configured settings, modular structure, and compatibility across platforms. Boost your workflow and deliver quality code. 🌈
