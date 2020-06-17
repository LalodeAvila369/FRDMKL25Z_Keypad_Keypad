/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART0RXSRC_UART_RX 0x00u /*!<@brief UART0 receive data source select: UART0_RX pin */
#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART0 transmit data source select: UART0_TX pin */

/*! @name PORTA2 (number 28), J1[4]/D1/UART0_TX
  @{ */
#define BOARD_INITPINS_DEBUG_UART_TX_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN 2U     /*!<@brief PORTA pin index: 2 */
                                                /* @} */

/*! @name PORTA1 (number 27), J1[2]/D0/UART0_RX
  @{ */
#define BOARD_INITPINS_DEBUG_UART_RX_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN 1U     /*!<@brief PORTA pin index: 1 */
                                                /* @} */

/*! @name PORTB8 (number 47), J9[1]
  @{ */
#define BOARD_INITPINS_Columna_1_FGPIO FGPIOB /*!<@brief FGPIO device name: FGPIOB */
#define BOARD_INITPINS_Columna_1_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_Columna_1_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_Columna_1_PIN 8U     /*!<@brief PORTB pin index: 8 */
                                            /* @} */

/*! @name PORTB9 (number 48), J9[3]
  @{ */
#define BOARD_INITPINS_Columna_2_FGPIO FGPIOB /*!<@brief FGPIO device name: FGPIOB */
#define BOARD_INITPINS_Columna_2_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_Columna_2_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_Columna_2_PIN 9U     /*!<@brief PORTB pin index: 9 */
                                            /* @} */

/*! @name PORTB10 (number 49), J9[5]
  @{ */
#define BOARD_INITPINS_Columna_3_FGPIO FGPIOB /*!<@brief FGPIO device name: FGPIOB */
#define BOARD_INITPINS_Columna_3_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_Columna_3_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_Columna_3_PIN 10U    /*!<@brief PORTB pin index: 10 */
                                            /* @} */

/*! @name PORTB11 (number 50), J9[7]
  @{ */
#define BOARD_INITPINS_Columna_4_FGPIO FGPIOB /*!<@brief FGPIO device name: FGPIOB */
#define BOARD_INITPINS_Columna_4_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_Columna_4_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_Columna_4_PIN 11U    /*!<@brief PORTB pin index: 11 */
                                            /* @} */

/*! @name PORTE2 (number 3), J9[9]
  @{ */
#define BOARD_INITPINS_Renglon_4_FGPIO FGPIOE /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITPINS_Renglon_4_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITPINS_Renglon_4_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_Renglon_4_PIN 2U     /*!<@brief PORTE pin index: 2 */
                                            /* @} */

/*! @name PORTE3 (number 4), J9[11]
  @{ */
#define BOARD_INITPINS_Renglon_3_FGPIO FGPIOE /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITPINS_Renglon_3_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITPINS_Renglon_3_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_Renglon_3_PIN 3U     /*!<@brief PORTE pin index: 3 */
                                            /* @} */

/*! @name PORTE4 (number 5), J9[13]
  @{ */
#define BOARD_INITPINS_Renglon_2_FGPIO FGPIOE /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITPINS_Renglon_2_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITPINS_Renglon_2_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_Renglon_2_PIN 4U     /*!<@brief PORTE pin index: 4 */
                                            /* @} */

/*! @name PORTE5 (number 6), J9[15]
  @{ */
#define BOARD_INITPINS_Renglon_1_FGPIO FGPIOE /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITPINS_Renglon_1_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITPINS_Renglon_1_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_Renglon_1_PIN 5U     /*!<@brief PORTE pin index: 5 */
                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
