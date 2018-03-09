// -----------------------------------------------------------------------------
// Support EEPROM reading/writing
// -----------------------------------------------------------------------------

#include <stdint.h>

/** @file */
/** \addtogroup eeprom EEPROM reading/writing (NOT flash)
@{ */

void eeprom_write(uint16_t offset, uint8_t value);
uint8_t eeprom_read(uint16_t offset);
void eeprom_unlock(void);
void eeprom_lock(void);
void eeprom_flash_copy(uint16_t offset, const uint8_t *data, uint8_t len);

bool eeprom_flash_erase(uint16_t addr);
bool eeprom_flash_write_page(uint16_t addr, const uint8_t *data, bool bEraseFirst);


// Memory allocation for EEPROM
enum {
	EEPROM_DSMPROT_OFFSET = 0,
	EEPROM_WIFICHAN_OFFSET = 1,
	EEPROM_TXMAX = 2,
	EEPROM_NOTE_ADJUST = 3,
};

/** @}*/
