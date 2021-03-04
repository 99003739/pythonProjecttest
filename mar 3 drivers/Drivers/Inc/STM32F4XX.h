//MCU specific header file
#include<stdio.h>
//General macros
#define __vo volatile
//macros for different memories

#define SRAM1 0x20000000U
#define SRAM2 0x2001C000U
#define Flash 0X08000000U
#define ROM 0x1FFF0000U

//macros for bus systems

#define BUS_BASEADDR 0x40000000U
#define APB1_BASEADDR 0x40000000U
#define APB2_BASEADDR 0x40010000U
#define AHB1_BASEADDR 0x40020000U
#define AHB2_BASEADDR 0x50000000U

//MACROS FOR GPIOS
#define GPIOA_BASEADDR (AHB1_BASEADDR+ 0X0000)
#define GPIOB_BASEADDR (AHB1_BASEADDR+ 0X0400)
#define GPIOC_BASEADDR (AHB1_BASEADDR+ 0X0800)
#define GPIOD_BASEADDR (AHB1_BASEADDR+ 0X0C00)
#define GPIOE_BASEADDR (AHB1_BASEADDR+ 0X1000)
#define GPIOF_BASEADDR (AHB1_BASEADDR+ 0X1400)
#define GPIOG_BASEADDR (AHB1_BASEADDR+ 0X1800)
#define GPIOH_BASEADDR (AHB1_BASEADDR+ 0X1C00)
#define GPIOI_BASEADDR (AHB1_BASEADDR+ 0X2000)
#define GPIOJ_BASEADDR (AHB1_BASEADDR+ 0X2400)
#define GPIOK_BASEADDR (AHB1_BASEADDR+ 0X2800)

//MACRO for RCC
#define RCC_BASEADDR (0x40023800)

//MACROS FOR PERIPHERALS HANGING ONTO APB1
#define TIM2_BASEADDR (APB1_BASEADDR+0X0000) //#define TIM2_BASEADDR 0x40000000U
#define TIM3_BASEADDR (APB1_BASEADDR+0X0400)
#define TIM4_BASEADDR (APB1_BASEADDR+0X0800)
#define TIM5_BASEADDR (APB1_BASEADDR+0X0C00)
#define TIM6_BASEADDR (APB1_BASEADDR+0X1000)
#define TIM7_BASEADDR (APB1_BASEADDR+0X1400)
#define TIM12_BASEADDR (APB1_BASEADDR+0X1800)
#define TIM13_BASEADDR (APB1_BASEADDR+0X1C00)
#define TIM14_BASEADDR (APB1_BASEADDR+0X2000)
#define RTCBKP_BASEADDR (APB1_BASEADDR+0X2800)
#define WWDG_BASEADDR (APB1_BASEADDR+0X2C00)
#define IWDG_BASEADDR (APB1_BASEADDR+0X3000)
#define I2S2EXT_BASEADDR (APB1_BASEADDR+0X3400)
#define SPI2_BASEADDR (APB1_BASEADDR+0X3800)
#define SPI3_BASEADDR (APB1_BASEADDR+0X3C00)
#define I2S3EXT_BASEADDR (APB1_BASEADDR+0X4000)
#define USART2_BASEADDR (APB1_BASEADDR+0X4400)
#define USART3_BASEADDR (APB1_BASEADDR+0X4800)
#define UART4_BASEADDR (APB1_BASEADDR+0X4C00)
#define UART5_BASEADDR (APB1_BASEADDR+0X5000)
#define I2C1_BASEADDR (APB1_BASEADDR+0X5400)
#define I2C2_BASEADDR (APB1_BASEADDR+0X5800)
#define I2C3_BASEADDR (APB1_BASEADDR+0X5C00)
#define CAN1_BASEADDR (APB1_BASEADDR+0X6400)
#define CAN2_BASEADDR (APB1_BASEADDR+0X6800)
#define PWR_BASEADDR (APB1_BASEADDR+0X7000)
#define DAC_BASEADDR (APB1_BASEADDR+0X7400)
#define UART7_BASEADDR (APB1_BASEADDR+0X7800)
#define UART8_BASEADDR (APB1_BASEADDR+0X7C00)

//MACROS FOR PERIPHERALS HANGING ONTO APB2
#define TIM1_BASE_ADDR (APB2_BASE_ADDR + 0x0000)
#define TIM8_BASE_ADDR (APB2_BASE_ADDR + 0x0400)
#define USART1_BASE_ADDR (APB2_BASE_ADDR + 0x1000)
#define USART6_BASE_ADDR (APB2_BASE_ADDR + 0x1400)
#define ADC_BASE_ADDR (APB2_BASE_ADDR + 0x2000)
#define SDIO_BASE_ADDR (APB2_BASE_ADDR + 0x2C00)
#define SPI1_BASE_ADDR (APB2_BASE_ADDR + 0x3000)
#define SPI4_BASE_ADDR (APB2_BASE_ADDR + 0x3400)
#define SYSCFG_BASE_ADDR (APB2_BASE_ADDR + 0x3800)
#define EXTI_BASE_ADDR (APB2_BASE_ADDR + 0x3C00)
#define TIM9_BASE_ADDR (APB2_BASE_ADDR + 0x4000)
#define TIM10_BASE_ADDR (APB2_BASE_ADDR + 0x4400)
#define TIME11_BASE_ADDR (APB2_BASE_ADDR + 0x4800)
#define SPI5_BASE_ADDR (APB2_BASE_ADDR + 0x5000)
#define SPI6_BASE_ADDR (APB2_BASE_ADDR + 0x5400)
#define SAI1_BASE_ADDR (APB2_BASE_ADDR + 0x5800)
#define LCD_TFT_BASE_ADDR (APB2_BASE_ADDR + 0x6800)


//GPIO register definitions
typedef struct
{
 __vo uint32_t MODER;//+00 offset
 __vo uint32_t OTYPER;//+04 offset
 __vo uint32_t OSPEEDR;//+08
 __vo uint32_t PUPDR;//+0C
 __vo uint32_t IDR;//+10
 __vo uint32_t ODR;//+14
 __vo uint32_t BSRR;//+18
 __vo uint32_t LCKR;//+1C
 __vo uint32_t AFR[2];//+20

}GPIO_RegDef;

GPIO_RegDef *pGPIOA=(GPIO_RegDef*)GPIOA_BASEADDR;
GPIO_RegDef *pGPIOB=(GPIO_RegDef*)GPIOB_BASEADDR;
GPIO_RegDef *pGPIOC=(GPIO_RegDef*)GPIOC_BASEADDR;
GPIO_RegDef *pGPIOD=(GPIO_RegDef*)GPIOD_BASEADDR;
GPIO_RegDef *pGPIOE=(GPIO_RegDef*)GPIOE_BASEADDR;
GPIO_RegDef *pGPIOH=(GPIO_RegDef*)GPIOH_BASEADDR;

typedef struct
{

 __vo uint32_t CR;//+00
 __vo uint32_t PLLCFGR;//+04
 __vo uint32_t CFGR;//+08
 __vo uint32_t CIR;//+0C
 __vo uint32_t AHB1RSTR;//+10
 __vo uint32_t AHB2RSTR;//+14
 __vo uint32_t AHB3RSTR;//+18
 __vo uint32_t APB1RSTR;//+20
 __vo uint32_t APB2RSTR;//+24
 __vo uint32_t AHB1ENR;//+30
 __vo uint32_t AHB2ENR;//+34
 __vo uint32_t AHB3ENR;//+38
 __vo uint32_t APB1ENR;//+40
 __vo uint32_t APB2ENR;//+44
 __vo uint32_t AHB1LP;//+50
 __vo uint32_t AHB2LP;//+54
 __vo uint32_t AHB3LP;//+58
 __vo uint32_t APB1LP;//+60
 __vo uint32_t APB2LP;//+64
 __vo uint32_t BDCR;//+70
 __vo uint32_t CSR;//+74
 __vo uint32_t SSCGR;//+80 offset
 __vo uint32_t PLLI2SC;//+84 offset

}RCC_RegDef;

RCC_RegDef *pRCC=(RCC_RegDef*)RCC_BASEADDR;





