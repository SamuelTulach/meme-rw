#include "general.h"

#define TARGET_PROCESS L"ProcessHacker.exe"

int main()
{
	if (!magic::Run())
	{
		printf("Failed to do magic\n");
		Sleep(INT_MAX);
	}

	memory_helper::WaitAndOpenProcess(TARGET_PROCESS);

	uint64_t moduleBase = memory_helper::GetModuleAddress(TARGET_PROCESS);
	if (!moduleBase)
	{
		printf("Failed to get process base\n");
		Sleep(INT_MAX);
	}

	uint64_t readTest = memory_helper::Read<uint64_t>(moduleBase);
	printf("Read memory 0x%p\n", readTest);

	volatile bool dummy = true;
	while (dummy)
		Sleep(1000);

	return 0;
}