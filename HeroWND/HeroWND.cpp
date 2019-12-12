/*#include "gh3\GH3Keys.h"
#include "core\Patcher.h"
#include "HeroWND.h"
#include <stdint.h>

static GH3P::Patcher g_patcher = GH3P::Patcher(__FILE__);


static void *testDetour = (void *)0x00000000;
__declspec(naked) void nakedFunction()
{
    __asm
    {
		int 3;
    }
}

void ApplyHack()
{
	g_patcher.WriteJmp(testDetour, nakedFunction);
}*/