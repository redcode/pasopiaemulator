// Keycodes for emulation

const uint8_t pasopiausbcode[] = {

         // 0x00    
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x01,0x0a,  // A
        0x08,0x0b,  // B
        0x04,0x0b,  // C
        0x04,0x0a,  // D
        0x04,0x09,  // E
        0x08,0x08,  // F
        0x08,0x09,  // G
        0x10,0x08,  // H
        0x20,0x09,  // I
        0x10,0x09,  // J
        0x20,0x0a,  // K
        0x40,0x0a,  // L
        // 0x10
        0x10,0x0b,  // M
        0x10,0x0a,  // N
        0x40,0x09,  // O
        0x80,0x09,  // P
        0x01,0x09,  // Q
        0x08,0x06,  // R
        0x02,0x0a,  // S
        0x08,0x07,  // T
        0x10,0x07,  // U
        0x08,0x0a,  // V
        0x02,0x09,  // W
        0x02,0x0b,  // X
        0x10,0x06,  // Y
        0x01,0x0b,  // Z
        0x01,0x06,  // 1
        0x01,0x07,  // 2
        // 0x20
        0x02,0x07,  // 3
        0x04,0x06,  // 4
        0x02,0x08,  // 5
        0x04,0x08,  // 6
        0x20,0x07,  // 7
        0x04,0x07,  // 8
        0x20,0x08,  // 9
        0x02,0x06,  // 0
        0x80,0x02,  // Enter
        0x02,0x03,  // Escape  
        0x04,0x03,  // Backspace = DEL
        0x08,0x03,  // Tab
        0x80,0x04,  // Space
        0x01,0x08,  // -
        0x40,0x06,  // ^ = +
        0x40,0x07,  // @
        // 0x30
        0x80,0x07,  // [ = (
        0x80,0x08,  // ] = )
        0x00,0x00,  //
        0x80,0x0a,  // ;
        0x40,0x08,  // :
        0x00,0x00,  // Hankaku/Zenkaku
        0x20,0x0b,  // ,
        0x40,0x0b,  // .
        0x80,0x0b,  // /
        0x04,0x00,  // CapsLock
        0x01,0x05,  // F1
        0x02,0x05,  // F2
        0x04,0x05,  // F3
        0x08,0x05,  // F4
        0x10,0x05,  // F5
        0x20,0x05,
        // 0x40
        0x40,0x05,
        0x80,0x05,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x04,0x04,  // PrintScreen = COPY
        0x00,0x00,  // ScrollLock 
        0x08,0x04,  // Pause = STOP
        0x10,0x04,  // INS
        0x20,0x02,  // Home
        0x01,0x04,  // PageUP = LABEL
        0x04,0x03,  // Del
        0x00,0x00,  // End
        0x02,0x04,  // PageDown = KANJI
        0x01,0x03,  // Right
    // 0x50
        0x20,0x04,  // Left
        0x08,0x02,  // Down
        0x10,0x02,  // Up
        0x00,0x00,  // Numlock 
        0x00,0x00,  // Keypad /
        0x00,0x00,  // Keypad * 
        0x04,0x02,  // Keypad -
        0x00,0x00,  // Keypad + = , 
        0x80,0x02,  // Keypad Enter
        0x02,0x01,  // Keypad 1
        0x04,0x01,  // Keypad 2
        0x08,0x01,  // Keypad 3
        0x10,0x01,  // Keypad 4
        0x20,0x01,  // Keypad 5
        0x40,0x01,  // Keypad 6  
        0x80,0x01,  // Keypad 7 
    // 0x60
        0x01,0x02,  // Keypad 8
        0x02,0x02,  // Keypad 9 
        0x01,0x01,  // Keypad 0 
        0x20,0x01,  // Keypad .
        0x00,0x00, 
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0x70
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0x80
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x20,0x06,  // Ro
        0x20,0x00,  // Hira-Kata
        0x80,0x06,  // Yen = *
        0x00,0x00,  // Henkan = Ins
        0x00,0x00,  // Muhenkan = Home
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0x90
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00, 
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0xa0
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0xb0
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0xc0
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0xd0
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0xe0
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
    // 0xf0
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
};

// Keycodes for MENU

const uint8_t usbhidcode[] = {
        // 0x00
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x41,0x00,  // A
        0x42,0x00,  // B
        0x43,0x00,  // C
        0x44,0x00,  // D
        0x45,0x00,  // E
        0x46,0x00,  // F
        0x47,0x00,  // G
        0x48,0x00,  // H
        0x49,0x00,  // I
        0x4a,0x00,  // J
        0x4b,0x00,  // K
        0x4c,0x00,  // L
        // 0x10
        0x4d,0x00,  // M
        0x4e,0x00,  // N
        0x4f,0x00,  // O
        0x50,0x00,  // P
        0x51,0x00,  // Q
        0x52,0x00,  // R
        0x53,0x00,  // S
        0x54,0x00,  // T
        0x55,0x00,  // U
        0x56,0x00,  // V
        0x57,0x00,  // W
        0x58,0x00,  // X
        0x59,0x00,  // Y
        0x5a,0x00,  // Z
        0x31,0x21,  // 1
        0x32,0x22,  // 2
        // 0x20
        0x33,0x23,  // 3
        0x34,0x24,  // 4
        0x35,0x25,  // 5
        0x36,0x26,  // 6
        0x37,0x27,  // 7
        0x38,0x28,  // 8
        0x39,0x29,  // 9
        0x30,0x00,  // 0
        0x0a,0x0a,  // Enter
        0x00,0x00,  // Escape
        0x08,0x08,  // Backspace
        0x00,0x00,  // Tab
        0x20,0x20,  // Space
        0x2d,0x3d,  // -
        0x7e,0x00,  // ^
        0x40,0x00,  // @
        // 0x30
        0x5b,0x00,  // [
        0x5d,0x00,  // ]
        0x00,0x00,  //
        0x3b,0x2b,  // ;
        0x3a,0x2a,  // :
        0x00,0x00,
        0x2c,0x3c,  // ,
        0x2e,0x3e,  // .
        0x2f,0x3f,  // /
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        // 0x40
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
        0x7f,0x7f,  // Del
        0x00,0x00,
        0x00,0x00,
        0x00,0x00,
};
