#include <WinUser.h>
#include "pch.h"
#include "framework.h"
#include "dllon.h"

DLLON_API void ShowMessageBox()
{
	MessageBoxA(nullptr, "Hello", "World", 0);
}
