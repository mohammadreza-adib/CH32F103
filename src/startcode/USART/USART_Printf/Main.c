/********************************** (C) COPYRIGHT *******************************
* File Name          : main.c
* Author             : WCH
* Version            : V1.0.0
* Date               : 2019/10/15
* Description        : Main program body.
*******************************************************************************/ 
#include "debug.h"


/* Global typedef */

/* Global define */

/* Global Variable */ 


/*******************************************************************************
* Function Name  : main
* Description    : Main program.
* Input          : None
* Return         : None
*******************************************************************************/
int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    Delay_Init();
	USART_Printf_Init(115200);                             /* printf using USART1 */
	printf("Start @Chip_ID:%08x\r\n", DBGMCU->IDCODE );
	printf("This is printf example\r\n");
                                                 
	while(1)
  {	
		
	}
}


