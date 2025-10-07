#ifdef NDEBUG
#undef NDEBUG
#endif

#include "../generated/structs/adc.h"
#include "../generated/structs/busctrl.h"
#include "../generated/structs/clocks.h"
#include "../generated/structs/dma.h"
#include "../generated/structs/i2c.h"
#include "../generated/structs/io_bank.h"
#include "../generated/structs/io_qspi.h"
#include "../generated/structs/pads_bank.h"
#include "../generated/structs/pads_qspi.h"
#include "../generated/structs/pio.h"
#include "../generated/structs/pll_sys.h"
#include "../generated/structs/ppb.h"
#include "../generated/structs/psm.h"
#include "../generated/structs/pwm.h"
#include "../generated/structs/resets.h"
#include "../generated/structs/rosc.h"
#include "../generated/structs/rtc.h"
#include "../generated/structs/sio.h"
#include "../generated/structs/spi.h"

int main(void)
{
    using namespace RP2040;

    (void)ADC;
    (void)BUSCTRL;
    (void)CLOCKS;
    (void)DMA;
    (void)I2C0;
    (void)I2C1;
    (void)IO_BANK0;
    (void)IO_QSPI;
    (void)PADS_BANK0;
    (void)PADS_QSPI;
    (void)PIO0;
    (void)PIO1;
    (void)PLL_SYS;
    (void)PLL_USB;
    (void)PPB;
    (void)PSM;
    (void)PWM;
    (void)RESETS;
    (void)ROSC;
    (void)RTC;
    (void)SIO;
    (void)SPI0;
    (void)SPI1;

    return 0;
}
