/*********************************************************
*
* cc1101.h
* ========
*
* Hardware interface to TI CC1101 radio chip
*
*/

#ifndef _CC1101_H_
#define _CC1101_H_

#include <stdint.h>

#define CC_MAX_PARAM 5
extern uint8_t cc_param( uint8_t nParam, uint8_t *param );

extern uint8_t cc_read_rssi(void);

extern void cc_enter_idle_mode(void);
extern void cc_enter_rx_mode(void);
extern void cc_enter_tx_mode(void);

extern void cc_init(void);
extern void cc_work(void);

#endif
