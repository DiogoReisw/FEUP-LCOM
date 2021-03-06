#ifndef _LCOM_I8254_H_
#define _LCOM_I8254_H_

#include <lcom/lcf.h>

/** @defgroup i8254 i8254
 * @{
 *
 * Constants for programming the i8254 Timer and other peripherals added throughout the labs
 */

#define TIMER_FREQ 1193182 /**< @brief clock frequency for timer in PC and AT */
#define TIMER0_IRQ 0       /**< @brief Timer 0 IRQ line */

/* I/O port addresses */

#define TIMER_0 0x40    /**< @brief Timer 0 count register */
#define TIMER_1 0x41    /**< @brief Timer 1 count register */
#define TIMER_2 0x42    /**< @brief Timer 2 count register */
#define TIMER_CTRL 0x43 /**< @brief Control register */

#define SPEAKER_CTRL 0x61 /**< @brief Register for speaker control  */

/* Timer control */

/* Timer selection: bits 7 and 6 */

#define TIMER_SEL0 0x00                /**< @brief Control Word for Timer 0 */
#define TIMER_SEL1 BIT(6)              /**< @brief Control Word for Timer 1 */
#define TIMER_SEL2 BIT(7)              /**< @brief Control Word for Timer 2 */
#define TIMER_RB_CMD (BIT(7) | BIT(6)) /**< @brief Read Back Command */

/* Register selection: bits 5 and 4 */

#define TIMER_LSB BIT(4)                      /**< @brief Initialize Counter LSB only */
#define TIMER_MSB BIT(5)                      /**< @brief Initialize Counter MSB only */
#define TIMER_LSB_MSB (TIMER_LSB | TIMER_MSB) /**< @brief Initialize LSB first and MSB afterwards */

/* Operating mode: bits 3, 2 and 1 */

#define TIMER_SQR_WAVE (BIT(2) | BIT(1)) /**< @brief Mode 3: square wave generator */
#define TIMER_RATE_GEN BIT(2)            /**< @brief Mode 2: rate generator */

/* Counting mode: bit 0 */

#define TIMER_BCD 0x01 /**< @brief Count in BCD */
#define TIMER_BIN 0x00 /**< @brief Count in binary */

/* READ-BACK COMMAND FORMAT */

#define TIMER_RB_COUNT_ BIT(5)
#define TIMER_RB_STATUS_ BIT(4)
#define TIMER_RB_SEL(n) BIT((n) + 1)

/* KEYBOARD */

#define ESC_KEY 0x81
#define SPACEBAR_KEY 0x39
#define LEFT_KEY 0x1E
#define RIGHT_KEY 0x20
#define RELEASE_LEFT_KEY 0x9E
#define RELEASE_RIGHT_KEY 0xA0
#define KEYBOARD_OUT_BUF 0x60
#define KEYBOARD_IN_BUF 0x64
#define KEYBOARD_STATUS_REG 0x64

/* MOUSE */

#define MOUSE_STATUS_REG 0x64
#define MOUSE_OUT_BUF 0x60

/* RTC */

#define RTC_SEC					0
#define RTC_MIN					2
#define RTC_HRS					4
#define RTC_DAYMONTH			7
#define RTC_MONTH				8
#define RTC_YEAR				9
#define RTC_ADDR_REG			0x70
#define RTC_DATA_REG			0x71

/**@}*/

#endif /* _LCOM_I8254_H */
