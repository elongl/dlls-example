#ifdef DLLON_EXPORTS
#define DLLON_API __declspec(dllexport)
#else
#define DLLON_API __declspec(dllimport)
#endif

void DLLON_API ShowMessageBox();
