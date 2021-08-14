#include <tchar.h>
#include <windows.h>

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                       LPTSTR lpCmdLine, int nCmdShow) {
  MessageBox(NULL, TEXT("Hello, Windows!"), TEXT("Hello"), MB_OK);
  return 0;
}