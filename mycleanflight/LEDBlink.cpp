#include <stdio.h>
#include <stm32f4xx_hal.h>

#ifdef __cplusplus
extern "C"
#endif
void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}
//
//int main(void)
//{
//	HAL_Init();
//	volatile double val = 0.123456f;
//
//	__GPIOA_CLK_ENABLE();
//	GPIO_InitTypeDef GPIO_InitStructure;
//
//	GPIO_InitStructure.Pin = GPIO_PIN_5;
//
//	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
//	GPIO_InitStructure.Speed = GPIO_SPEED_HIGH;
//	GPIO_InitStructure.Pull = GPIO_NOPULL;
//	HAL_GPIO_Init(GPIOA, &GPIO_InitStructure);
//
//	for (;;)
//	{
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
//		HAL_Delay(500);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
//		HAL_Delay(500);
//
//		val += 0.01f;
//		printf("%f\n", val);
//	}
//}


//////////////////////////////////////////////////////////////////////////
// hello 0xec, hello xiaomaguo