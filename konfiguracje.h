

/*----------------------------------------------------*/
//Funkcje konfigurujące USART
/* Sposób podłączenia domodułu BlueTooth
STM 		-	MODUŁ BT
PC10(TX)	-	5RX
PC11(RX)	-	TX

Moduł Bluetooth (HC-05) zasilany napięciem 5 V

Komendy AT do ustawienia modułu HC-05(jednorazowo)
AT+NAME+HoverCraftRemote\r\n
AT+PSWD=1234\r\n
AT+UART=9600,1,2\r\n

PAROWANIE:
AT+ROLE=1\r\n     ustawia moduł w tryb master
AT+CMODE=0\r\n
AT+INIT\r\n
AT+PAIR=ADRES,20\r\n
AT+BIND=ADRES\r\n
AT+LINK=ADRES\r\n
 --------------------------------------------*/

//priorytety przerwan:
//			priority   subpriority
//timer		0			0
//przyciks	0			1
//lcd		?			?
//usart		1			0

void Config_USART();
void Config_Tx();
void Config_Rx();
void Config_NVIC();
/*----------------------------------------------------*/
// funkcje odpowiedzialne za wysylanie stringow poprzez usart do modulu BT
void send_char(char c);
void send_string(const char* s);
/*----------------------------------------------------*/
void tim3_konf();
void NIVC_TIM3();
/*----------------------------------------------------*/
//Funkcje konfigurujące potencjometry
//Sposób podłączenia potencjometrów:

void konfiguracja_potencjometr_1();
void konfiguracja_potencjometr_2();
/*----------------------------------------------------*/
//Funkcje konfigurująca diody
void ustawienia_diod();
/*----------------------------------------------------*/
//Funkcje konfigurująca przycisk
void przycisk();
void Config_EXTI();
void Init_EXTI();
/*----------------------------------------------------*/
