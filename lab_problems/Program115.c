/*The screen is divided into 25 rows and 80 columns. The characters that are displayed on the screen are stored in a special memory called VDU memory (not to be confused with ordinary memory). Each character displayed on the screen occupies two bytes in VDU memory. The first of these bytes contains the ASCII value of the character being displayed, whereas, the second byte contains the colour in which the character is displayed. For example, the ASCII value of the character present on zeroth row and zeroth column on the screen is stored atlocation number 0xB8000000. Therefore the colour of this character would be present at location number 0xB8000000 + 1. Similarly ASCII value of character in row 0, col 1 will be at location 0xB8000000 + 2, and its colour at 0xB8000000 + 3. With this knowledge write a program to print any string of your chice with attribute of your choice .(Without printf()!!!!!!!!!)

attribute bits are as followes


WXXXYZZZ
W      Foreground Blink or (alternate) Background bright 
X      Background color 
Y      Foreground Bright or (alternate) Alternate character set 
Z      Foreground color
*/
#include <stdint.h>

// Define VDU memory base address
#define VDU_MEMORY_BASE 0xB8000000

// Function to write a character with attributes to VDU memory
void writeToVDUMemory(uint16_t row, uint16_t col, char character, uint8_t attributes) {
    // Calculate the offset in VDU memory
    uint32_t offset = (row * 80 + col) * 2;
    
    // Calculate the address in VDU memory for the given row and column
    volatile uint16_t *vdu_memory = (uint16_t *)((uint32_t)VDU_MEMORY_BASE + offset);

    // Combine ASCII value and attributes into a single 16-bit value
    uint16_t value = ((uint16_t)character) | ((uint16_t)attributes << 8);

    // Write the value to VDU memory
    *vdu_memory = value;
}

int main() {
    // Set attributes (example: bright white text on blue background)
    uint8_t attributes = 0b10001110;  // W=1 (bright), X=1 (background blue), Y=0, Z=110 (foreground bright white)

    // Print a string with the specified attributes
    char myString[] = "Hello, VDU Memory!";
    uint16_t row = 0;
    uint16_t col = 0;

    // Iterate through each character in the string and write to VDU memory
    for (int i = 0; myString[i] != '\0'; i++) {
        writeToVDUMemory(row, col, myString[i], attributes);
        col++;
    }

    return 0;
}