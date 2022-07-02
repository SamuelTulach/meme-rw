#ifndef GENERAL_H
#define GENERAL_H

#include <Windows.h>
#include <winternl.h>
#include <TlHelp32.h>
#include <winioctl.h>
#include <iostream>
#include <cstdarg>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <dwmapi.h>
#include <d3d11.h>
#include <string>
#include <sstream>
#include <shlobj.h>

#pragma comment(lib, "ntdll.lib")

#include "driver/driver_resource.h"
#include "driver/service.h"
#include "driver/nt.h"
#include "driver/intel_driver.h"
#include "driver/utils.h"
#include "driver/magic.h"
#include "driver/memory.h"

namespace global
{
	inline uint64_t GameBase = 0;
}

#endif