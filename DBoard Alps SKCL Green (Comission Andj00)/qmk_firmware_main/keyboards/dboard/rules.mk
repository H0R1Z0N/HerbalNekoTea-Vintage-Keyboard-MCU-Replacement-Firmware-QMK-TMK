# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = halfkay

# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Boot Section Size in *bytes*
#OPT_DEFS += -DBOOTLOADER_SIZE=4096

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
AUDIO_ENABLE = no			# Enable Beeper Speaker
