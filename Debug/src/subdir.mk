################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BomberManStateDecorator.cpp \
../src/Bomberman.cpp \
../src/CarryingBomb.cpp \
../src/DecoratorState.cpp \
../src/Standing.cpp \
../src/Walking.cpp 

OBJS += \
./src/BomberManStateDecorator.o \
./src/Bomberman.o \
./src/CarryingBomb.o \
./src/DecoratorState.o \
./src/Standing.o \
./src/Walking.o 

CPP_DEPS += \
./src/BomberManStateDecorator.d \
./src/Bomberman.d \
./src/CarryingBomb.d \
./src/DecoratorState.d \
./src/Standing.d \
./src/Walking.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


