file(GLOB SRC_FILE ${CMAKE_CURRENT_SOURCE_DIR}/*cc)
list(REMOVE_ITEM SRC_FILE ${CMAKE_CURRENT_SOURCE_DIR}/main.cc)

add_library(src_lib SHARED ${SRC_FILE})

add_executable(main main.cc)

target_link_libraries(main src_lib memory_lib ${LIBS})

