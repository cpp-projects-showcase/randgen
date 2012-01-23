#
# RandGen Tests
#

##
# Specify each test suite configuration

# * RandGen Test Suite
file (GLOB randgentest_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
module_test_add_suite (randgen RandGenTest "${randgentest_SOURCES}")

##
# Register all the test suites to be built and performed
module_test_build_all ()

