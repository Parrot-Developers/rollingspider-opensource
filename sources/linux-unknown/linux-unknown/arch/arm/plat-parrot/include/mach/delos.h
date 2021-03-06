
#ifndef DELOS_H
#define DELOS_H


/* GPIO numbers */

//Output GPIOs
#define DELOS_HSIS__GPIO_BLUE_LED                    1
#define DELOS_HSIS__GPIO_RED_LED_HW00               57
#define DELOS_HSIS__GPIO_BLUE_LED2_HW01             57
#define DELOS_HSIS__GPIO_MOTOR_ENABLE               39
#define DELOS_HSIS__GPIO_RESET_MOTOR                31

#define DELOS_HSIS__GPIO_RED_LED_L_HW02             34
#define DELOS_HSIS__GPIO_GREEN_LED_R_HW02           33
#define DELOS_HSIS__GPIO_GREEN_LED_L_HW02           57
#define DELOS_HSIS__GPIO_RED_LED_R_HW02              1

#define DELOS_HSIS__GPIO_ONOFF_HW03                  1
#define DELOS_HSIS__GPIO_MOTOR_FAULT_HW03           39
#define DELOS_HSIS__GPIO_RED_LED_L_HW03             30
#define DELOS_HSIS__GPIO_GREEN_LED_R_HW03           31
#define DELOS_HSIS__GPIO_GREEN_LED_L_HW03           32
#define DELOS_HSIS__GPIO_RED_LED_R_HW03             33

#define DELOS_HSIS__GPIO_ONOFF_HW05                 57
#define DELOS_HSIS__GPIO_MOTOR_FAULT_HW05           39
#define DELOS_HSIS__GPIO_RED_LED_L_HW05             30
#define DELOS_HSIS__GPIO_GREEN_LED_R_HW05           31
#define DELOS_HSIS__GPIO_GREEN_LED_L_HW05           32
#define DELOS_HSIS__GPIO_RED_LED_R_HW05             33

#define DELOS_HSIS__GPIO_ONOFF_HW07                 DELOS_HSIS__GPIO_ONOFF_HW05
#define DELOS_HSIS__GPIO_MOTOR_FAULT_HW07           DELOS_HSIS__GPIO_MOTOR_FAULT_HW05
#define DELOS_HSIS__GPIO_RED_LED_L_HW07             DELOS_HSIS__GPIO_RED_LED_L_HW05
#define DELOS_HSIS__GPIO_GREEN_LED_R_HW07           DELOS_HSIS__GPIO_GREEN_LED_R_HW05
#define DELOS_HSIS__GPIO_GREEN_LED_L_HW07           DELOS_HSIS__GPIO_GREEN_LED_L_HW05
#define DELOS_HSIS__GPIO_RED_LED_R_HW07             DELOS_HSIS__GPIO_RED_LED_R_HW05



//Input GPIOs
#define DELOS_HSIS__GPIO_BUTTON_HW00                 2
#define DELOS_HSIS__GPIO_HRESET_CAM                 58
#define DELOS_HSIS__GPIO_US_POWER                   56
#define DELOS_HSIS__GPIO_OFF                        52
#define DELOS_HSIS__GPIO_INT_INERT                  54
#define DELOS_HSIS__GPIO_INT_MAGNETO                55
#define DELOS_HSIS__GPIO_MOTOR_FAULT                32
#define DELOS_HSIS__GPIO_BUTTON_HW01                30
#define DELOS_HSIS__GPIO_VBUS                       53

#define DELOS_HSIS__GPIO_BUTTON_HW03                 2
#define DELOS_HSIS__GPIO_INT_INERT_HW03             52
#define DELOS_HSIS__GPIO_VBUS_HW03                  57

#define DELOS_HSIS__GPIO_BUTTON_HW05                 2
#define DELOS_HSIS__GPIO_INT_INERT_HW05             52
#define DELOS_HSIS__GPIO_VBUS_HW05                  53

#define DELOS_HSIS__GPIO_BUTTON_HW07                DELOS_HSIS__GPIO_BUTTON_HW05
#define DELOS_HSIS__GPIO_INT_INERT_HW07             DELOS_HSIS__GPIO_INT_INERT_HW05
#define DELOS_HSIS__GPIO_VBUS_HW07                  DELOS_HSIS__GPIO_VBUS_HW05

/* Corresponding PIN names */

//Output GPIOs
#define DELOS_HSIS__GPIOPIN_BLUE_LED                   P6I_GPIO_001
#define DELOS_HSIS__GPIOPIN_RED_LED_HW00               GPIO_057
#define DELOS_HSIS__GPIOPIN_BLUE_LED2_HW01             GPIO_057
#define DELOS_HSIS__GPIOPIN_MOTOR_ENABLE               GPIO_039
#define DELOS_HSIS__GPIOPIN_RESET_MOTOR                GPIO_031
#define DELOS_HSIS__GPIOPIN_VBUS                       GPIO_053

#define DELOS_HSIS__GPIOPIN_RED_LED_L_HW02             GPIO_034
#define DELOS_HSIS__GPIOPIN_GREEN_LED_R_HW02           GPIO_033
#define DELOS_HSIS__GPIOPIN_GREEN_LED_L_HW02           GPIO_057
#define DELOS_HSIS__GPIOPIN_RED_LED_R_HW02             P6I_GPIO_001



#define DELOS_HSIS__GPIOPIN_ONOFF_HW03                 P6I_GPIO_001
#define DELOS_HSIS__GPIOPIN_MOTOR_FAULT_HW03           GPIO_039
#define DELOS_HSIS__GPIOPIN_RED_LED_L_HW03             GPIO_030
#define DELOS_HSIS__GPIOPIN_GREEN_LED_R_HW03           GPIO_031
#define DELOS_HSIS__GPIOPIN_GREEN_LED_L_HW03           GPIO_032
#define DELOS_HSIS__GPIOPIN_RED_LED_R_HW03             GPIO_033
#define DELOS_HSIS__GPIOPIN_VBUS_HW03                  GPIO_057

#define DELOS_HSIS__GPIOPIN_ONOFF_HW05                 GPIO_057
#define DELOS_HSIS__GPIOPIN_MOTOR_FAULT_HW05           GPIO_039
#define DELOS_HSIS__GPIOPIN_RED_LED_L_HW05             GPIO_030
#define DELOS_HSIS__GPIOPIN_GREEN_LED_R_HW05           GPIO_031
#define DELOS_HSIS__GPIOPIN_GREEN_LED_L_HW05           GPIO_032
#define DELOS_HSIS__GPIOPIN_RED_LED_R_HW05             GPIO_033
#define DELOS_HSIS__GPIOPIN_VBUS_HW05                  GPIO_053

#define DELOS_HSIS__GPIOPIN_ONOFF_HW07                 DELOS_HSIS__GPIOPIN_ONOFF_HW05
#define DELOS_HSIS__GPIOPIN_MOTOR_FAULT_HW07           DELOS_HSIS__GPIOPIN_MOTOR_FAULT_HW05
#define DELOS_HSIS__GPIOPIN_RED_LED_L_HW07             DELOS_HSIS__GPIOPIN_RED_LED_L_HW05
#define DELOS_HSIS__GPIOPIN_GREEN_LED_R_HW07           DELOS_HSIS__GPIOPIN_GREEN_LED_R_HW05
#define DELOS_HSIS__GPIOPIN_GREEN_LED_L_HW07           DELOS_HSIS__GPIOPIN_GREEN_LED_L_HW05
#define DELOS_HSIS__GPIOPIN_RED_LED_R_HW07             DELOS_HSIS__GPIOPIN_RED_LED_R_HW05
#define DELOS_HSIS__GPIOPIN_VBUS_HW07                  DELOS_HSIS__GPIOPIN_VBUS_HW05

//Input GPIOs
#define DELOS_HSIS__GPIOPIN_BUTTON_HW00                P6I_GPIO_002
#define DELOS_HSIS__GPIOPIN_HRESET_CAM                 GPIO_058
#define DELOS_HSIS__GPIOPIN_US_POWER                   GPIO_056
#define DELOS_HSIS__GPIOPIN_OFF                        GPIO_052
#define DELOS_HSIS__GPIOPIN_INT_INERT                  GPIO_054
#define DELOS_HSIS__GPIOPIN_INT_MAGNETO                GPIO_055
#define DELOS_HSIS__GPIOPIN_MOTOR_FAULT                GPIO_032
#define DELOS_HSIS__GPIOPIN_NSTAT_HW00                 GPIO_030
#define DELOS_HSIS__GPIOPIN_BUTTON_HW01                GPIO_030

#define DELOS_HSIS__GPIOPIN_BUTTON_HW03                P6I_GPIO_002
#define DELOS_HSIS__GPIOPIN_INT_INERT_HW03             GPIO_052

#define DELOS_HSIS__GPIOPIN_BUTTON_HW05                P6I_GPIO_002
#define DELOS_HSIS__GPIOPIN_INT_INERT_HW05             GPIO_052

#define DELOS_HSIS__GPIOPIN_BUTTON_HW07                DELOS_HSIS__GPIOPIN_BUTTON_HW05
#define DELOS_HSIS__GPIOPIN_INT_INERT_HW07             DELOS_HSIS__GPIOPIN_INT_INERT_HW05

typedef enum _delos_hw_version_t
{
    DELOS_HW_00 = 0,
    DELOS_HW_01,
    DELOS_HW_02,
    DELOS_HW_03,
    DELOS_HW_04,
    DELOS_HW_05,
    DELOS_HW_07,
} delos_hw_version_t;





void delos_motor_disable(unsigned int* gpio_status);
void delos_motor_enable(unsigned int gpio_status);

#ifndef CONFIG_MACH_PARROT_DELOS
void delos_motor_disable(unsigned int* gpio_status){};
void delos_motor_enable(unsigned int gpio_status){};
#else
void delos_motor_disable(unsigned int* gpio_status);
void delos_motor_enable(unsigned int gpio_status);
#endif



#endif
