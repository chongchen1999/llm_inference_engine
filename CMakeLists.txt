# CMakeLists.txt in root directory
cmake_minimum_required(VERSION 3.10)
project(MyProject LANGUAGES CXX CUDA)

# Set the CUDA architecture
set(CMAKE_CUDA_ARCHITECTURES 86)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find CUDA toolkit including cuBLAS
find_package(CUDAToolkit REQUIRED)

# Check if CUDA Toolkit was found
if(NOT CUDAToolkit_FOUND)
    message(FATAL_ERROR "CUDA Toolkit not found.")
endif()

# Include subdirectories
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(examples)




# cmake_minimum_required(VERSION 3.10)
# project(MyProject LANGUAGES CXX CUDA)

# # Set the CUDA architecture
# set(CMAKE_CUDA_ARCHITECTURES 86)

# # Specify the C++ standard
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Add source files
# set(SOURCES
#     ${CMAKE_SOURCE_DIR}/src/kernels/linear.cu
#     ${CMAKE_SOURCE_DIR}/src/kernels/cublas_utils.cpp
# )

# # Add test source files
# set(TEST_SOURCES
#     ${CMAKE_SOURCE_DIR}/tests/unit_tests/test_linear.cu
# )

# # Add the executable for the tests
# add_executable(test ${SOURCES} ${TEST_SOURCES})

# # Find CUDA toolkit including cuBLAS
# find_package(CUDAToolkit REQUIRED)

# # Check if CUDA Toolkit was found
# if(NOT CUDAToolkit_FOUND)
#     message(FATAL_ERROR "CUDA Toolkit not found.")
# endif()

# # Link CUDA and cuBLAS libraries
# target_link_libraries(test CUDA::cublas CUDA::cuda_driver)
