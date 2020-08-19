/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/08/2020 08:27:25
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_SYSCLKFreq_VALUE                     80000000
#define MX_HCLKFreq_Value                       80000000
#define MX_FCLKCortexFreq_Value                 80000000
#define MX_CortexFreq_Value                     80000000
#define MX_AHBFreq_Value                        80000000
#define MX_APB1Freq_Value                       80000000
#define MX_APB2Freq_Value                       80000000
#define MX_APB1TimFreq_Value                    80000000
#define MX_APB2TimFreq_Value                    80000000
#define MX_PWRFreq_Value                        80000000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        48000000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    80000000

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA2_Channel4_IRQn */
#define MX_DMA2_Channel4_IRQn_interruptPremptionPriority 0
#define MX_DMA2_Channel4_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_DMA2_Channel4_IRQn_Subriority        0

/* NVIC DMA2_Channel5_IRQn */
#define MX_DMA2_Channel5_IRQn_interruptPremptionPriority 0
#define MX_DMA2_Channel5_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_DMA2_Channel5_IRQn_Subriority        0

/*-------------------------------- I2C4       --------------------------------*/

#define MX_I2C4                                 1

/* GPIO Configuration */

/* Pin PF15 */
#define MX_I2C4_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C4_SDA_Pin                         PF15
#define MX_I2C4_SDA_GPIOx                       GPIOF
#define MX_I2C4_SDA_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_CELL_I2C_SDA                         I2C4_SDA
#define MX_I2C4_SDA_GPIO_Pin                    GPIO_PIN_15
#define MX_I2C4_SDA_GPIO_AF                     GPIO_AF4_I2C4
#define MX_I2C4_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PF14 */
#define MX_I2C4_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C4_SCL_Pin                         PF14
#define MX_I2C4_SCL_GPIOx                       GPIOF
#define MX_I2C4_SCL_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_CELL_I2C_SCL                         I2C4_SCL
#define MX_I2C4_SCL_GPIO_Pin                    GPIO_PIN_14
#define MX_I2C4_SCL_GPIO_AF                     GPIO_AF4_I2C4
#define MX_I2C4_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* NVIC Configuration */

/* NVIC I2C4_EV_IRQn */
#define MX_I2C4_EV_IRQn_interruptPremptionPriority 0
#define MX_I2C4_EV_IRQn_PriorityGroup           NVIC_PRIORITYGROUP_4
#define MX_I2C4_EV_IRQn_Subriority              0

/* NVIC I2C4_ER_IRQn */
#define MX_I2C4_ER_IRQn_interruptPremptionPriority 0
#define MX_I2C4_ER_IRQn_PriorityGroup           NVIC_PRIORITYGROUP_4
#define MX_I2C4_ER_IRQn_Subriority              0

/*-------------------------------- SDMMC1     --------------------------------*/

#define MX_SDMMC1                               1

/* GPIO Configuration */

/* Pin PD2 */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SD_CMD                               SDMMC1_CMD
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDMMC1
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PC8 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SD_D0                                SDMMC1_D0
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC12 */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SD_CLK                               SDMMC1_CK
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA SDMMC1_TX */
#define MX_SDMMC1_TX_DMA_DMA_Handle
#define MX_SDMMC1_TX_DMA_Instance               DMA2_Channel4
#define MX_SDMMC1_TX_DMA_NoTestForDmaSupport    false
#define MX_SDMMC1_TX_DMA_Priority               DMA_PRIORITY_LOW
#define MX_SDMMC1_TX_DMA_PeriphDataAlignment    DMA_PDATAALIGN_WORD
#define MX_SDMMC1_TX_DMA_MemDataAlignment       DMA_MDATAALIGN_WORD
#define MX_SDMMC1_TX_DMA_Mode                   DMA_NORMAL
#define MX_SDMMC1_TX_DMA_Request                DMA_REQUEST_7
#define MX_SDMMC1_TX_DMA_Direction              DMA_MEMORY_TO_PERIPH
#define MX_SDMMC1_TX_DMA_PeriphInc              DMA_PINC_DISABLE
#define MX_SDMMC1_TX_DMA_MemInc                 DMA_MINC_ENABLE
#define MX_SDMMC1_TX_DMA_IpInstance

/* DMA SDMMC1_RX */
#define MX_SDMMC1_RX_DMA_DMA_Handle
#define MX_SDMMC1_RX_DMA_Instance               DMA2_Channel5
#define MX_SDMMC1_RX_DMA_NoTestForDmaSupport    false
#define MX_SDMMC1_RX_DMA_Priority               DMA_PRIORITY_LOW
#define MX_SDMMC1_RX_DMA_PeriphDataAlignment    DMA_PDATAALIGN_WORD
#define MX_SDMMC1_RX_DMA_MemDataAlignment       DMA_MDATAALIGN_WORD
#define MX_SDMMC1_RX_DMA_Mode                   DMA_NORMAL
#define MX_SDMMC1_RX_DMA_Request                DMA_REQUEST_7
#define MX_SDMMC1_RX_DMA_Direction              DMA_PERIPH_TO_MEMORY
#define MX_SDMMC1_RX_DMA_PeriphInc              DMA_PINC_DISABLE
#define MX_SDMMC1_RX_DMA_MemInc                 DMA_MINC_ENABLE
#define MX_SDMMC1_RX_DMA_IpInstance

/* NVIC Configuration */

/* NVIC SDMMC1_IRQn */
#define MX_SDMMC1_IRQn_interruptPremptionPriority 0
#define MX_SDMMC1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_SDMMC1_IRQn_Subriority               0

/*-------------------------------- SPI1       --------------------------------*/

#define MX_SPI1                                 1

/* GPIO Configuration */

/* Pin PA7 */
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_Pin                        PA7
#define MX_SPI1_MOSI_GPIOx                      GPIOA
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI                            SPI1_MOSI
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_7
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA6 */
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_Pin                        PA6
#define MX_SPI1_MISO_GPIOx                      GPIOA
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO                            SPI1_MISO
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA5 */
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK                             SPI1_SCK
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF5_SPI1
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC SPI1_IRQn */
#define MX_SPI1_IRQn_interruptPremptionPriority 0
#define MX_SPI1_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI1_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- UART4      --------------------------------*/

#define MX_UART4                                1

#define MX_UART4_VM                             VM_ASYNC

/* GPIO Configuration */

/* Pin PC11 */
#define MX_UART4_RX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART4_RX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_RX_Pin                         PC11
#define MX_UART4_RX_GPIOx                       GPIOC
#define MX_UART4_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_GNSS_UART_RX                         UART4_RX
#define MX_UART4_RX_GPIO_Pin                    GPIO_PIN_11
#define MX_UART4_RX_GPIO_AF                     GPIO_AF8_UART4

/* Pin PC10 */
#define MX_UART4_TX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART4_TX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_TX_Pin                         PC10
#define MX_UART4_TX_GPIOx                       GPIOC
#define MX_UART4_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_GNSS_UART_TX                         UART4_TX
#define MX_UART4_TX_GPIO_Pin                    GPIO_PIN_10
#define MX_UART4_TX_GPIO_AF                     GPIO_AF8_UART4

/* NVIC Configuration */

/* NVIC UART4_IRQn */
#define MX_UART4_IRQn_interruptPremptionPriority 0
#define MX_UART4_IRQn_PriorityGroup             NVIC_PRIORITYGROUP_4
#define MX_UART4_IRQn_Subriority                0

/*-------------------------------- USART1     --------------------------------*/

#define MX_USART1                               1

#define MX_USART1_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PG9 */
#define MX_USART1_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_Pin                        PG9
#define MX_USART1_TX_GPIOx                      GPIOG
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_WIFI_UART_TX                         USART1_TX
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/* Pin PG10 */
#define MX_USART1_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_Pin                        PG10
#define MX_USART1_RX_GPIOx                      GPIOG
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_WIFI_UART_RX                         USART1_RX
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* NVIC Configuration */

/* NVIC USART1_IRQn */
#define MX_USART1_IRQn_interruptPremptionPriority 0
#define MX_USART1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART1_IRQn_Subriority               0

/*-------------------------------- USART2     --------------------------------*/

#define MX_USART2                               1

#define MX_USART2_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PD3 */
#define MX_USART2_CTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_CTS_Pin                       PD3
#define MX_USART2_CTS_GPIOx                     GPIOD
#define MX_USART2_CTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_CELL_UART_CTS                        USART2_CTS
#define MX_USART2_CTS_GPIO_Pin                  GPIO_PIN_3
#define MX_USART2_CTS_GPIO_AF                   GPIO_AF7_USART2
#define MX_USART2_CTS_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PD5 */
#define MX_USART2_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_TX_Pin                        PD5
#define MX_USART2_TX_GPIOx                      GPIOD
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_CELL_UART_TX                         USART2_TX
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_5
#define MX_USART2_TX_GPIO_AF                    GPIO_AF7_USART2

/* Pin PA15 (JTDI) */
#define MX_USART2_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RX_Pin                        PA15_JTDI
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_CELL_UART_RX                         USART2_RX
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_15
#define MX_USART2_RX_GPIO_AF                    GPIO_AF3_USART2

/* Pin PD4 */
#define MX_USART2_RTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RTS_Pin                       PD4
#define MX_USART2_RTS_GPIOx                     GPIOD
#define MX_USART2_RTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_CELL_UART_RTS                        USART2_RTS
#define MX_USART2_RTS_GPIO_Pin                  GPIO_PIN_4
#define MX_USART2_RTS_GPIO_AF                   GPIO_AF7_USART2
#define MX_USART2_RTS_GPIO_Mode                 GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC USART2_IRQn */
#define MX_USART2_IRQn_interruptPremptionPriority 0
#define MX_USART2_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART2_IRQn_Subriority               0

/*-------------------------------- USART3     --------------------------------*/

#define MX_USART3                               1

#define MX_USART3_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PC4 */
#define MX_USART3_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_Pin                        PC4
#define MX_USART3_TX_GPIOx                      GPIOC
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_BLE_UART_TX                          USART3_TX
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_4
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/* Pin PB11 */
#define MX_USART3_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_Pin                        PB11
#define MX_USART3_RX_GPIOx                      GPIOB
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_BLE_UART_RX                          USART3_RX
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_11
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/* NVIC Configuration */

/* NVIC USART3_IRQn */
#define MX_USART3_IRQn_interruptPremptionPriority 0
#define MX_USART3_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART3_IRQn_Subriority               0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PB2 */
#define MX_PB2_Pin                              PB2
#define MX_PB2_GPIOx                            GPIOB
#define MX_PB2_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_GPIO2                           PB2
#define MX_PB2_GPIO_Pin                         GPIO_PIN_2
#define MX_PB2_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB5 */
#define MX_PB5_Pin                              PB5
#define MX_PB5_GPIOx                            GPIOB
#define MX_PB5_GPIO_PuPd                        GPIO_NOPULL
#define MX_BLE_GPIO2                            PB5
#define MX_PB5_GPIO_Pin                         GPIO_PIN_5
#define MX_PB5_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PD6 */
#define MX_PD6_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD6_Pin                              PD6
#define MX_PD6_GPIOx                            GPIOD
#define MX_PD6_PinState                         GPIO_PIN_RESET
#define MX_PD6_GPIO_PuPd                        GPIO_NOPULL
#define MX_PWR_IO2_EN                           PD6
#define MX_PD6_GPIO_Pin                         GPIO_PIN_6
#define MX_PD6_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PD9 */
#define MX_PD9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD9_Pin                              PD9
#define MX_PD9_GPIOx                            GPIOD
#define MX_PD9_PinState                         GPIO_PIN_RESET
#define MX_PD9_GPIO_PuPd                        GPIO_NOPULL
#define MX_USB_SW_CTRL                          PD9
#define MX_PD9_GPIO_Pin                         GPIO_PIN_9
#define MX_PD9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB6 */
#define MX_PB6_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB6_GPIO_FM6                         __NULL
#define MX_PB6_Pin                              PB6
#define MX_PB6_GPIOx                            GPIOB
#define MX_PB6_PinState                         GPIO_PIN_RESET
#define MX_PB6_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_PWRKEY                          PB6
#define MX_PB6_GPIO_Pin                         GPIO_PIN_6
#define MX_PB6_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PD8 */
#define MX_PD8_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD8_Pin                              PD8
#define MX_PD8_GPIOx                            GPIOD
#define MX_PD8_PinState                         GPIO_PIN_RESET
#define MX_PD8_GPIO_PuPd                        GPIO_NOPULL
#define MX_BLE_WIFI_SW_CTRL                     PD8
#define MX_PD8_GPIO_Pin                         GPIO_PIN_8
#define MX_PD8_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB9 */
#define MX_PB9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB9_Pin                              PB9
#define MX_PB9_GPIOx                            GPIOB
#define MX_PB9_PinState                         GPIO_PIN_RESET
#define MX_PB9_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_SPI_NSS                         PB9
#define MX_PB9_GPIO_Pin                         GPIO_PIN_9
#define MX_PB9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP
#define MX_PB9_GPIO_FM9                         __NULL

/* Pin PE0 */
#define MX_PE0_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE0_Pin                              PE0
#define MX_PE0_GPIOx                            GPIOE
#define MX_PE0_PinState                         GPIO_PIN_RESET
#define MX_PE0_GPIO_PuPd                        GPIO_NOPULL
#define MX_PWR_SENS_EN                          PE0
#define MX_PE0_GPIO_Pin                         GPIO_PIN_0
#define MX_PE0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PG1 */
#define MX_PG1_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PG1_Pin                              PG1
#define MX_PG1_GPIOx                            GPIOG
#define MX_PG1_PinState                         GPIO_PIN_RESET
#define MX_PG1_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_FLIGHTMODE_EN                   PG1
#define MX_PG1_GPIO_Pin                         GPIO_PIN_1
#define MX_PG1_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE4 */
#define MX_PE4_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE4_Pin                              PE4
#define MX_PE4_GPIOx                            GPIOE
#define MX_PE4_PinState                         GPIO_PIN_RESET
#define MX_PE4_GPIO_PuPd                        GPIO_NOPULL
#define MX_LED0_PWM_R                           PE4
#define MX_PE4_GPIO_Pin                         GPIO_PIN_4
#define MX_PE4_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_OD

/* Pin PE6 */
#define MX_PE6_Pin                              PE6
#define MX_PE6_GPIOx                            GPIOE
#define MX_PE6_GPIO_PuPd                        GPIO_NOPULL
#define MX_MCU_BTN0_WKUP                        PE6
#define MX_PE6_GPIO_Pin                         GPIO_PIN_6
#define MX_PE6_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA2 */
#define MX_PA2_Pin                              PA2
#define MX_PA2_GPIOx                            GPIOA
#define MX_PA2_GPIO_PuPd                        GPIO_NOPULL
#define MX_BLE_WKUP                             PA2
#define MX_PA2_GPIO_Pin                         GPIO_PIN_2
#define MX_PA2_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC3 */
#define MX_PC3_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC3_Pin                              PC3
#define MX_PC3_GPIOx                            GPIOC
#define MX_PC3_PinState                         GPIO_PIN_RESET
#define MX_PC3_GPIO_PuPd                        GPIO_NOPULL
#define MX_BLE_nRST                             PC3
#define MX_PC3_GPIO_Pin                         GPIO_PIN_3
#define MX_PC3_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PA1 */
#define MX_PA1_Pin                              PA1
#define MX_PA1_GPIOx                            GPIOA
#define MX_PA1_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_GPIO0                           PA1
#define MX_PA1_GPIO_Pin                         GPIO_PIN_1
#define MX_PA1_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA4 */
#define MX_PA4_Pin                              PA4
#define MX_PA4_GPIOx                            GPIOA
#define MX_PA4_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_GPIO1                           PA4
#define MX_PA4_GPIO_Pin                         GPIO_PIN_4
#define MX_PA4_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PE8 */
#define MX_PE8_Pin                              PE8
#define MX_PE8_GPIOx                            GPIOE
#define MX_PE8_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_GPIO3                           PE8
#define MX_PE8_GPIO_Pin                         GPIO_PIN_8
#define MX_PE8_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC5 */
#define MX_PC5_Pin                              PC5
#define MX_PC5_GPIOx                            GPIOC
#define MX_PC5_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_WKUP                            PC5
#define MX_PC5_GPIO_Pin                         GPIO_PIN_5
#define MX_PC5_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PE7 */
#define MX_PE7_Pin                              PE7
#define MX_PE7_GPIOx                            GPIOE
#define MX_PE7_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_GPIO4                           PE7
#define MX_PE7_GPIO_Pin                         GPIO_PIN_7
#define MX_PE7_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC7 */
#define MX_PC7_Pin                              PC7
#define MX_PC7_GPIOx                            GPIOC
#define MX_PC7_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_RADIO_STATE                     PC7
#define MX_PC7_GPIO_Pin                         GPIO_PIN_7
#define MX_PC7_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PE9 */
#define MX_PE9_Pin                              PE9
#define MX_PE9_GPIOx                            GPIOE
#define MX_PE9_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_GPIO5                           PE9
#define MX_PE9_GPIO_Pin                         GPIO_PIN_9
#define MX_PE9_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA8 */
#define MX_PA8_Pin                              PA8
#define MX_PA8_GPIOx                            GPIOA
#define MX_PA8_GPIO_PuPd                        GPIO_NOPULL
#define MX_BLE_GPIO1                            PA8
#define MX_PA8_GPIO_Pin                         GPIO_PIN_8
#define MX_PA8_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC9 */
#define MX_PC9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC9_Pin                              PC9
#define MX_PC9_GPIOx                            GPIOC
#define MX_PC9_PinState                         GPIO_PIN_RESET
#define MX_PC9_GPIO_PuPd                        GPIO_NOPULL
#define MX_SD_ON                                PC9
#define MX_PC9_GPIO_Pin                         GPIO_PIN_9
#define MX_PC9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PA9 */
#define MX_PA9_Pin                              PA9
#define MX_PA9_GPIOx                            GPIOA
#define MX_PA9_GPIO_PuPd                        GPIO_NOPULL
#define MX_MCU_BTN1_INT                         PA9
#define MX_PA9_GPIO_Pin                         GPIO_PIN_9
#define MX_PA9_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB4 (NJTRST) */
#define MX_PB4_NJTRST_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_PB4_NJTRST_Pin                       PB4_NJTRST
#define MX_PB4_NJTRST_GPIOx                     GPIOB
#define MX_PB4_NJTRST_PinState                  GPIO_PIN_RESET
#define MX_PB4_NJTRST_GPIO_PuPd                 GPIO_NOPULL
#define MX_CELL_PWR_EN                          PB4_NJTRST
#define MX_PB4_NJTRST_GPIO_Pin                  GPIO_PIN_4
#define MX_PB4_NJTRST_GPIO_ModeDefaultOutputPP  GPIO_MODE_OUTPUT_PP

/* Pin PD12 */
#define MX_PD12_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PD12_Pin                             PD12
#define MX_PD12_GPIOx                           GPIOD
#define MX_PD12_PinState                        GPIO_PIN_RESET
#define MX_PD12_GPIO_PuPd                       GPIO_NOPULL
#define MX_LED1_PWM_R                           PD12
#define MX_PD12_GPIO_Pin                        GPIO_PIN_12
#define MX_PD12_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_OD

/* Pin PE11 */
#define MX_PE11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PE11_Pin                             PE11
#define MX_PE11_GPIOx                           GPIOE
#define MX_PE11_PinState                        GPIO_PIN_RESET
#define MX_PE11_GPIO_PuPd                       GPIO_NOPULL
#define MX_PWR_WIFI_EN                          PE11
#define MX_PE11_GPIO_Pin                        GPIO_PIN_11
#define MX_PE11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD11 */
#define MX_PD11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PD11_Pin                             PD11
#define MX_PD11_GPIOx                           GPIOD
#define MX_PD11_PinState                        GPIO_PIN_RESET
#define MX_PD11_GPIO_PuPd                       GPIO_NOPULL
#define MX_PCM_OUT                              PD11
#define MX_PD11_GPIO_Pin                        GPIO_PIN_11
#define MX_PD11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PB13 */
#define MX_PB13_Pin                             PB13
#define MX_PB13_GPIOx                           GPIOB
#define MX_PB13_GPIO_PuPd                       GPIO_NOPULL
#define MX_BLE_GPIO0                            PB13
#define MX_PB13_GPIO_Pin                        GPIO_PIN_13
#define MX_PB13_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PG11 */
#define MX_PG11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PG11_Pin                             PG11
#define MX_PG11_GPIOx                           GPIOG
#define MX_PG11_PinState                        GPIO_PIN_RESET
#define MX_PG11_GPIO_PuPd                       GPIO_NOPULL
#define MX_WIFI_BOOT                            PG11
#define MX_PG11_GPIO_Pin                        GPIO_PIN_11
#define MX_PG11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_OD

/* Pin PD14 */
#define MX_PD14_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PD14_Pin                             PD14
#define MX_PD14_GPIOx                           GPIOD
#define MX_PD14_PinState                        GPIO_PIN_RESET
#define MX_PD14_GPIO_PuPd                       GPIO_NOPULL
#define MX_LED1_PWM_G                           PD14
#define MX_PD14_GPIO_Pin                        GPIO_PIN_14
#define MX_PD14_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_OD

/* Pin PE13 */
#define MX_PE13_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PE13_Pin                             PE13
#define MX_PE13_GPIOx                           GPIOE
#define MX_PE13_PinState                        GPIO_PIN_RESET
#define MX_PE13_GPIO_PuPd                       GPIO_NOPULL
#define MX_GNSS_EXT_INT                         PE13
#define MX_PE13_GPIO_Pin                        GPIO_PIN_13
#define MX_PE13_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD13 */
#define MX_PD13_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PD13_Pin                             PD13
#define MX_PD13_GPIOx                           GPIOD
#define MX_PD13_PinState                        GPIO_PIN_RESET
#define MX_PD13_GPIO_PuPd                       GPIO_NOPULL
#define MX_LED1_PWM_B                           PD13
#define MX_PD13_GPIO_Pin                        GPIO_PIN_13
#define MX_PD13_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_OD

/* Pin PF11 */
#define MX_PF11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PF11_Pin                             PF11
#define MX_PF11_GPIOx                           GPIOF
#define MX_PF11_PinState                        GPIO_PIN_RESET
#define MX_PF11_GPIO_PuPd                       GPIO_NOPULL
#define MX_WIFI_RSTn                            PF11
#define MX_PF11_GPIO_Pin                        GPIO_PIN_11
#define MX_PF11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PB15 */
#define MX_PB15_Pin                             PB15
#define MX_PB15_GPIOx                           GPIOB
#define MX_PB15_GPIO_PuPd                       GPIO_NOPULL
#define MX_GNSS_MISC                            PB15
#define MX_PB15_GPIO_Pin                        GPIO_PIN_15
#define MX_PB15_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PE12 */
#define MX_PE12_Pin                             PE12
#define MX_PE12_GPIOx                           GPIOE
#define MX_PE12_GPIO_PuPd                       GPIO_NOPULL
#define MX_GNSS_TIMEPULSE                       PE12
#define MX_PE12_GPIO_Pin                        GPIO_PIN_12
#define MX_PE12_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PB10 */
#define MX_PB10_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PB10_Pin                             PB10
#define MX_PB10_GPIOx                           GPIOB
#define MX_PB10_PinState                        GPIO_PIN_RESET
#define MX_PB10_GPIO_PuPd                       GPIO_NOPULL
#define MX_BLE_WIFI_SW_EN                       PB10
#define MX_PB10_GPIO_Pin                        GPIO_PIN_10
#define MX_PB10_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD10 */
#define MX_PD10_Pin                             PD10
#define MX_PD10_GPIOx                           GPIOD
#define MX_PD10_GPIO_PuPd                       GPIO_NOPULL
#define MX_PCM_CLK                              PD10
#define MX_PD10_GPIO_Pin                        GPIO_PIN_10
#define MX_PD10_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PB12 */
#define MX_PB12_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PB12_Pin                             PB12
#define MX_PB12_GPIOx                           GPIOB
#define MX_PB12_PinState                        GPIO_PIN_RESET
#define MX_PB12_GPIO_PuPd                       GPIO_NOPULL
#define MX_PCM_SYNC                             PB12
#define MX_PB12_GPIO_Pin                        GPIO_PIN_12
#define MX_PB12_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD1 */
#define MX_PD1_Pin                              PD1
#define MX_PD1_GPIOx                            GPIOD
#define MX_PD1_GPIO_PuPd                        GPIO_NOPULL
#define MX_USIM_DETECT                          PD1
#define MX_PD1_GPIO_Pin                         GPIO_PIN_1
#define MX_PD1_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PF3 */
#define MX_PF3_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PF3_Pin                              PF3
#define MX_PF3_GPIOx                            GPIOF
#define MX_PF3_PinState                         GPIO_PIN_RESET
#define MX_PF3_GPIO_PuPd                        GPIO_NOPULL
#define MX_GNSS_VBCKP                           PF3
#define MX_PF3_GPIO_Pin                         GPIO_PIN_3
#define MX_PF3_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PD0 */
#define MX_PD0_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD0_Pin                              PD0
#define MX_PD0_GPIOx                            GPIOD
#define MX_PD0_PinState                         GPIO_PIN_RESET
#define MX_PD0_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_NRST                            PD0
#define MX_PD0_GPIO_Pin                         GPIO_PIN_0
#define MX_PD0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PF2 */
#define MX_PF2_Pin                              PF2
#define MX_PF2_GPIOx                            GPIOF
#define MX_PF2_GPIO_PuPd                        GPIO_NOPULL
#define MX_CELL_INT                             PF2
#define MX_PF2_GPIO_Pin                         GPIO_PIN_2
#define MX_PF2_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PE14 */
#define MX_PE14_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PE14_Pin                             PE14
#define MX_PE14_GPIOx                           GPIOE
#define MX_PE14_PinState                        GPIO_PIN_RESET
#define MX_PE14_GPIO_PuPd                       GPIO_NOPULL
#define MX_BLE_BOOT                             PE14
#define MX_PE14_GPIO_Pin                        GPIO_PIN_14
#define MX_PE14_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PF5 */
#define MX_PF5_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PF5_Pin                              PF5
#define MX_PF5_GPIOx                            GPIOF
#define MX_PF5_PinState                         GPIO_PIN_RESET
#define MX_PF5_GPIO_PuPd                        GPIO_NOPULL
#define MX_PWR_GNSS_EN                          PF5
#define MX_PF5_GPIO_Pin                         GPIO_PIN_5
#define MX_PF5_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PG15 */
#define MX_PG15_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PG15_Pin                             PG15
#define MX_PG15_GPIOx                           GPIOG
#define MX_PG15_PinState                        GPIO_PIN_RESET
#define MX_PG15_GPIO_PuPd                       GPIO_NOPULL
#define MX_WIFI_CHIP_EN                         PG15
#define MX_PG15_GPIO_Pin                        GPIO_PIN_15
#define MX_PG15_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PF4 */
#define MX_PF4_Pin                              PF4
#define MX_PF4_GPIOx                            GPIOF
#define MX_PF4_GPIO_PuPd                        GPIO_NOPULL
#define MX_HOST_SLEEP_IND                       PF4
#define MX_PF4_GPIO_Pin                         GPIO_PIN_4
#define MX_PF4_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB0 */
#define MX_PB0_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB0_Pin                              PB0
#define MX_PB0_GPIOx                            GPIOB
#define MX_PB0_PinState                         GPIO_PIN_RESET
#define MX_PB0_GPIO_PuPd                        GPIO_NOPULL
#define MX_MEM_SPI_NSS                          PB0
#define MX_PB0_GPIO_Pin                         GPIO_PIN_0
#define MX_PB0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

#endif  /* __MX_DEVICE_H */

