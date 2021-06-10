# P1 data decoding

Test and mock software for P1 port data.

## Restore Arduino Zero bootloader through Arduino IDE

- Make sure the Arduino SAMD Boards package is installed through the Board Manager.
- Select Native USB Port through `Tools > Board > Arduino SAMD (32-bits ARM Cortex-M0+) Boards > Arduino Zero (Native USB Port)`.
- Select Atmel ICE programmer through `Tools > Programmer > Atmel-ICE`.
- Align Atmel ICE red wire on programming cable with white dot on SWD header of Arduino Zero.
- Burn bootloader through `Tools > Burn Bootloader`. 

### Notes

- Present Arduino Zero's only have the native USB port available.