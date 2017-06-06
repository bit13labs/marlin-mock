#define CONFIG_H_MOCK

#define STRING_CONFIG_H_AUTHOR "@camalot (Ryan Conrad)" // Who made the changes.
#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION // will be shown during bootup in line 1
#define STRING_SPLASH_LINE2 WEBSITE_URL         // will be shown during bootup in line 2


// Optional custom name for your RepStrap or other custom machine
// Displayed in the LCD "Ready" message
#define CUSTOM_MACHINE_NAME "Mock"

// Define this to set a unique identifier for this printer, (Used by some programs to differentiate between machines)
// You can use an online service to generate a random UUID. (eg http://www.uuidgenerator.net/version4)
#define MACHINE_UUID "e6559558-a580-49dc-ae14-0985b5d21fa2"

#define WEBSITE_URL "http://fuku.io"

#define EXTRUDERS 1
//// The following define selects which power supply you have. Please choose the one that matches your setup
// 1 = ATX
// 2 = X-Box 360 203Watts (the blue wire connected to PS_ON and the red wire to VCC)

#define POWER_SUPPLY 0

#define TEMP_SENSOR_0 998
#define TEMP_SENSOR_BED 999
