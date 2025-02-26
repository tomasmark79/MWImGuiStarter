import os
from conan import ConanFile
from conan.tools.files import copy

class MarkWareVCMake(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    
    def configure(self):
        self.options["*"].shared = False # this replaced shared flag from SolutionController and works
        
        self.options["sdl"].iconv = False # iconv not supported by mingw-w64

    def requirements(self):
        self.requires("zlib/1.2.11")
        self.requires("fmt/11.1.1") # required by cpm package
        self.requires("nlohmann_json/3.11.2") # is modern to have json support
        self.requires("sdl/2.30.9")
        self.requires("glfw/3.4")
        self.requires("imgui/1.91.5")
    
    # this is giving me choice to bring to my source any bindings I want (glfw, opengl3, vulkan, SDL2, etc)
    def generate(self):
        copy(self, "*glfw*", os.path.join(self.dependencies["imgui"].package_folder,
             "res", "bindings"), os.path.join(self.source_folder, "include/bindings"))
        copy(self, "*opengl3*", os.path.join(self.dependencies["imgui"].package_folder,
             "res", "bindings"), os.path.join(self.source_folder, "include/bindings"))
        copy(self, "*sdl2*", os.path.join(self.dependencies["imgui"].package_folder,
             "res", "bindings"), os.path.join(self.source_folder, "include/bindings"))
    
    
    # don't use this definition, it will break the build
    # ---------------------------------------- --
    # def layout(self):                        --
        # cmake_layout(self)                   --
    # ---------------------------------------- --

       

        
