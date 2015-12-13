#ifdef DLL_API
#else
#define DLL_API _declspec(dllimport)
#endif

DLL_API int add(int a,int b);
DLL_API int subtract(int a,int b);