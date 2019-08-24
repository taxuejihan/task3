#include "stm32f10x.h"
#include "led.h"
#include "timer.h"
#include "sys.h"
#include "delay.h"
#include "usart.h"


int main()
{
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	delay_init();
	LED_Init();
	
	TIM_Int_Init(19999,7199);
	while(1);
}

