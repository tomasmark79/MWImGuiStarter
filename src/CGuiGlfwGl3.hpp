#ifndef CGUIGLFWGL3_H
#define CGUIGLFWGL3_H
#include <thread>

class CGuiGlfwGl3 {
public:
  CGuiGlfwGl3() { };
  ~CGuiGlfwGl3() { };

  void Run();
  void runThread();
  void joinThread();

private:
  std::thread m_thread;
};

void create_triangle(unsigned int &vbo, unsigned int &vao, unsigned int &ebo);
void render_conan_logo();

#endif