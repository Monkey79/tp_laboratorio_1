################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/mdangelo/libs/commons/Commons.c \
../src/mdangelo/libs/commons/utn_math.c 

OBJS += \
./src/mdangelo/libs/commons/Commons.o \
./src/mdangelo/libs/commons/utn_math.o 

C_DEPS += \
./src/mdangelo/libs/commons/Commons.d \
./src/mdangelo/libs/commons/utn_math.d 


# Each subdirectory must supply rules for building sources it contributes
src/mdangelo/libs/commons/%.o: ../src/mdangelo/libs/commons/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


