add_executable(pasopiaemulator)

# by default the header is generated into the build dir
pico_generate_pio_header(pasopiaemulator ${CMAKE_CURRENT_LIST_DIR}/hsync.pio)
pico_generate_pio_header(pasopiaemulator ${CMAKE_CURRENT_LIST_DIR}/vsync.pio)
pico_generate_pio_header(pasopiaemulator ${CMAKE_CURRENT_LIST_DIR}/rgb.pio)
# however, alternatively you can choose to generate it somewhere else (in this case in the source tree for check in)
#pico_generate_pio_header(pio_blink ${CMAKE_CURRENT_LIST_DIR}/blink.pio OUTPUT_DIR ${CMAKE_CURRENT_LIST_DIR})

# Make sure TinyUSB can find tusb_config.h
target_include_directories(pasopiaemulator PUBLIC ${CMAKE_CURRENT_LIST_DIR})

target_sources(pasopiaemulator PRIVATE pasopiaemulator.c Z80.c hid_app.c joystick.c hidparser/hidparser.c vga16_graphics.c lfs.c lfs_util.c fdc.c)

pico_enable_stdio_usb(pasopiaemulator 0)
pico_enable_stdio_uart(pasopiaemulator 1)

target_compile_definitions(pasopiaemulator PRIVATE Z80_STATIC Z80_WITH_LOCAL_HEADER Z80_WITH_Q Z80_WITH_ZILOG_NMOS_LD_A_IR_BUG)
target_link_libraries(pasopiaemulator PRIVATE pico_stdlib hardware_pio hardware_timer hardware_dma hardware_uart hardware_flash pico_multicore hardware_pwm tinyusb_host tinyusb_board)
pico_add_extra_outputs(pasopiaemulator)
