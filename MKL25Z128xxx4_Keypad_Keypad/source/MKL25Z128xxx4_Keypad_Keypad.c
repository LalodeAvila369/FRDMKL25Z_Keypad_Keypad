#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"
#include "fsl_tpm.h"

#define Renglon_1 5u
#define Renglon_2 4u
#define Renglon_3 3u
#define Renglon_4 2u
#define Columna_1 11u
#define Columna_2 10u
#define Columna_3 9u
#define Columna_4 8u

void DelayTPM();


int main(void) {

    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
    BOARD_InitDebugConsole();

    tpm_config_t config;
	TPM_GetDefaultConfig(&config);
	config.prescale= kTPM_Prescale_Divide_128;
	TPM_Init(TPM0, &config);
	TPM_Init(TPM1, &config);

    PRINTF("Teclado Matricial\n");

        uint8_t renglon[4];

        /* Enter an infinite loop, just incrementing a counter. */
        while(1) {
        	//Poner la columna 1 en bajo
        	GPIO_ClearPinsOutput(GPIOB, 1u << Columna_1);

        	//Leer los renglones
        	renglon[0] = GPIO_ReadPinInput(GPIOE, Renglon_1);
        	renglon[1] = GPIO_ReadPinInput(GPIOE, Renglon_2);
        	renglon[2] = GPIO_ReadPinInput(GPIOE, Renglon_3);
        	renglon[3] = GPIO_ReadPinInput(GPIOE, Renglon_4);


        	if(!renglon[0]){
        		printf("1");
        		DelayTPM();
        	}

        	if(!renglon[1]){
        		printf("4");
        		DelayTPM();
        	}

        	if(!renglon[2]){
        		printf("7");
        		DelayTPM();
        	}

        	if(!renglon[3]){
        		printf("*");
        		DelayTPM();
        	}


        	//Poner la columna 2 en bajo
    		GPIO_SetPinsOutput(GPIOB, 1u << Columna_1);
    		GPIO_ClearPinsOutput(GPIOB, 1u << Columna_2);

    		//Leer los renglones
    		renglon[0] = GPIO_ReadPinInput(GPIOE, Renglon_1);
    		renglon[1] = GPIO_ReadPinInput(GPIOE, Renglon_2);
    		renglon[2] = GPIO_ReadPinInput(GPIOE, Renglon_3);
    		renglon[3] = GPIO_ReadPinInput(GPIOE, Renglon_4);

    		if(!renglon[0]){
				printf("2");
				DelayTPM();
			}

			if(!renglon[1]){
				printf("5");
				DelayTPM();
			}

			if(!renglon[2]){
				printf("8");
				DelayTPM();
			}

			if(!renglon[3]){
				printf("0");
				DelayTPM();
			}

    		//Poner la columna 3 en bajo
    		GPIO_SetPinsOutput(GPIOB, 1u << Columna_2);
    		GPIO_ClearPinsOutput(GPIOB, 1u << Columna_3);

    		//Leer los renglones
    		renglon[0] = GPIO_ReadPinInput(GPIOE, Renglon_1);
			renglon[1] = GPIO_ReadPinInput(GPIOE, Renglon_2);
			renglon[2] = GPIO_ReadPinInput(GPIOE, Renglon_3);
			renglon[3] = GPIO_ReadPinInput(GPIOE, Renglon_4);

			if(!renglon[0]){
				printf("3");
				DelayTPM();
			}

			if(!renglon[1]){
				printf("6");
				DelayTPM();
			}

			if(!renglon[2]){
				printf("9");
				DelayTPM();
			}

			if(!renglon[3]){
				printf("#");
				DelayTPM();
			}


    		//Poner la columna 4 en bajo
    		GPIO_SetPinsOutput(GPIOB, 1u << Columna_3);
    		GPIO_ClearPinsOutput(GPIOB, 1u << Columna_4);

    		//Leer los renglones
    		renglon[0] = GPIO_ReadPinInput(GPIOE, Renglon_1);
			renglon[1] = GPIO_ReadPinInput(GPIOE, Renglon_2);
			renglon[2] = GPIO_ReadPinInput(GPIOE, Renglon_3);
			renglon[3] = GPIO_ReadPinInput(GPIOE, Renglon_4);

    		if(!renglon[0]){
				printf("A");
				DelayTPM();
			}

			if(!renglon[1]){
				printf("B");
				DelayTPM();
			}

			if(!renglon[2]){
				printf("C");
				DelayTPM();
			}

			if(!renglon[3]){
				printf("D");
				DelayTPM();
			}

    		GPIO_SetPinsOutput(GPIOB, 1u << Columna_4);

        }
        return 0 ;
    }

void DelayTPM(){
	uint32_t Mask= 1u<<8u;
	uint32_t Mask_Off = Mask;

	TPM_SetTimerPeriod(TPM1, 100u);
	TPM_StartTimer(TPM1, kTPM_SystemClock);
	while(!(TPM1->STATUS & Mask)){      //Wait
	}

	if(TPM1->STATUS & Mask){
		TPM1->STATUS &=Mask_Off;
		TPM_StopTimer(TPM1);
		TPM1->CNT=0;
	}
}
