#ifndef USART_H
#define USART_H

#ifdef  __cplusplus
extern "C"
{
#endif



#include <stdint.h>



/*****************************************************************************/
/*                    PUBLIC FUNCTIONS DECLARATIONS                          */
/*****************************************************************************/

void USART1_Clock_Config(void);
void USART1_RX_Config(void);
void USART1_RX_ProcessData(const uint8_t *dataFromDma2);



#ifdef  __cplusplus
}
#endif
 
#endif  /* USART_H */