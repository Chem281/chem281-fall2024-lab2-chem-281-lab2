# Assert the minimum cmake version

# Set the project name

# Require a modern C++ standard

# Add a library called LinearAlg built from src/linear_alg.cpp

# Add an executable called Main built from src/main.cpp

# Add the ./include directory as an include directory for the Main executable

# Locate the BLAS package

# Link the LinearAlg library target to BLAS via ${BLAS_LIBRARIES}

# Link the Main executable target to the LinearAlg library target

#########################################
# BEGIN GoogleTest setup, DO NOT CHANGE #
#########################################
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lgcov")

# Set up GoogleTest according to: https://google.github.io/googletest/quickstart-cmake.html
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(LinearAlgTest test/linear_alg_test.cpp)
target_link_libraries(LinearAlgTest GTest::gtest_main)
target_link_libraries(LinearAlgTest LinearAlg)
target_include_directories(LinearAlgTest PRIVATE include)

include(GoogleTest)
gtest_discover_tests(LinearAlgTest)

##########################
# END   GoogleTest setup #
##########################