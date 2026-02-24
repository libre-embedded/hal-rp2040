#ifdef NDEBUG
#undef NDEBUG
#endif

#include "../generated/structs/syscfg.h"
#include "../generated/structs/sysinfo.h"
#include "../generated/structs/tbman.h"
#include "../generated/structs/timer.h"
#include "../generated/structs/usbctrl_dpram.h"
#include "../generated/structs/usbctrl_regs.h"
#include "../generated/structs/vreg_and_chip_reset.h"
#include "../generated/structs/watchdog.h"
#include "../generated/structs/xip_ctrl.h"
#include "../generated/structs/xip_ssi.h"
#include "../generated/structs/xosc.h"

int main(void)
{
    using namespace RP2040;

    (void)SYSCFG;
    (void)SYSINFO;
    (void)TBMAN;
    (void)TIMER;
    (void)USBCTRL_DPRAM;
    (void)USBCTRL_REGS;
    (void)VREG_AND_CHIP_RESET;
    (void)WATCHDOG;
    (void)XIP_CTRL;
    (void)XIP_SSI;
    (void)XOSC;

    return 0;
}
