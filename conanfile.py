import os
from conan import ConanFile
from conan.tools.cmake import CMake
from conan.tools.system import package_manager
from conan.tools.files import copy, replace_in_file
from conan.tools.build import cross_building
from conan.tools.gnu import Autotools

class MarkWareVCMake(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    
    def build(self):
        # Your project's build
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()
    
    #def system_requirements(self):
    #    apt = package_manager.Apt(self)
    #    apt.install(["libsdl2-dev"])
        
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

    def generate(self):
        copy(self, "*glfw*", os.path.join(self.dependencies["imgui"].package_folder,
             "res", "bindings"), os.path.join(self.source_folder, "src/bindings"))
        copy(self, "*opengl3*", os.path.join(self.dependencies["imgui"].package_folder,
             "res", "bindings"), os.path.join(self.source_folder, "src/bindings"))
        copy(self, "*sdl2*", os.path.join(self.dependencies["imgui"].package_folder,
             "res", "bindings"), os.path.join(self.source_folder, "src/bindings"))
    # --------------------------------------------------
    # Do not use! Solved in SolutionController.py     --
    # def layout(self):                               --
    #     cmake_layout(self)                          --
    # --------------------------------------------------