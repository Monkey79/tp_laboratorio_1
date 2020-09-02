################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/mdangelo/libs/commons/CommonsUse.c \
../src/mdangelo/libs/commons/CustomMath.c 

OBJS += \
./src/mdangelo/libs/commons/CommonsUse.o \
./src/mdangelo/libs/commons/CustomMath.o 

C_DEPS += \
./src/mdangelo/libs/commons/CommonsUse.d \
./src/mdangelo/libs/commons/CustomMath.d 


# Each subdirectory must supply rules for building sources it contributes
src/mdangelo/libs/commons/%.o: ../src/mdangelo/libs/commons/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


