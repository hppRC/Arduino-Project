//LED lamps
#define LED0  5
#define LED1  6
#define LED2  10
#define LED3  11

#define LED_ON  HIGH
#define LED_OFF LOW

#define SW1 13
#define SW2 12
#define SW3 9
#define SW4 8

#define TactSW0 A0
#define TactSW1 A1

#define SW_PUSHED 1
#define SW_OFF    0

#define Mode30SEC false
#define Mode60SEC true

#define STOPED false
#define RUNNING true

#define TIMERCYCLE 250
#define _30SEC (30 * (1000 / TIMERCYCLE))
#define _60SEC (60 * (1000 / TIMERCYCLE))


#define ENDINGDIDNTSTART false;
#define ENDINGSTARTED true;

#define ENDINGCYCLE 250
#define _15SECEND (15 * (1000 / ENDINGCYCLE))
