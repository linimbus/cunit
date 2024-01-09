add_library(cunit
    ./Automated/Automated.c
    ./Basic/Basic.c
    ./Console/Console.c
    ./Framework/CUError.c
    ./Framework/MyMem.c
    ./Framework/TestDB.c
    ./Framework/TestRun.c
    ./Framework/Util.c
)

SET_TARGET_PROPERTIES(cunit
                      PROPERTIES
                      VERSION 2.1.2
                      SOVERSION 1
                      INSTALL_NAME_DIR "${LIB_DEST_DIR}"
)

install(TARGETS cunit
    LIBRARY DESTINATION ${LIB_DEST_DIR}
    ARCHIVE DESTINATION ${LIB_DEST_DIR}
)
