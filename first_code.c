#include "clock_config.h"
#include "fsl_common.h"                 
#include "fsl_port.h"                   
#include "fsl_gpio.h"                   

volatile uint32_t msTicks = 0;
void SysTick_Handler() {
    msTicks += 1;
}

void delay(uint32_t ms) {
    uint32_t returnTime = msTicks + ms;
    while (msTicks < returnTime) {}
}



int main(void)
{


}