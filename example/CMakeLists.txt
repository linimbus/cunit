set(DEST_BIN_NAME ctest_bin)

file(GLOB INC_SRC "*.c")

# add the executable
add_executable(${DEST_BIN_NAME} ${INC_SRC})

TARGET_LINK_LIBRARIES(${DEST_BIN_NAME} cunit)

# add the install targets
install (TARGETS ${DEST_BIN_NAME} DESTINATION ./example)
