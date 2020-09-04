################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/mdangelo/libs/ArrayEmployee.c \
../src/mdangelo/libs/EmployeeAbm.c \
../src/mdangelo/libs/EmployeeAbmHelper.c 

OBJS += \
./src/mdangelo/libs/ArrayEmployee.o \
./src/mdangelo/libs/EmployeeAbm.o \
./src/mdangelo/libs/EmployeeAbmHelper.o 

C_DEPS += \
./src/mdangelo/libs/ArrayEmployee.d \
./src/mdangelo/libs/EmployeeAbm.d \
./src/mdangelo/libs/EmployeeAbmHelper.d 


# Each subdirectory must supply rules for building sources it contributes
src/mdangelo/libs/%.o: ../src/mdangelo/libs/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


