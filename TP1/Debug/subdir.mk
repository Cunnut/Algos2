################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Celula.cpp \
../JuegoDeLaVida.cpp \
../Tablero.cpp \
../main.cpp 

CPP_DEPS += \
./Celula.d \
./JuegoDeLaVida.d \
./Tablero.d \
./main.d 

OBJS += \
./Celula.o \
./JuegoDeLaVida.o \
./Tablero.o \
./main.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++98 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Celula.d ./Celula.o ./JuegoDeLaVida.d ./JuegoDeLaVida.o ./Tablero.d ./Tablero.o ./main.d ./main.o

.PHONY: clean--2e-

