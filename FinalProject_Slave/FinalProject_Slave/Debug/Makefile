################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../LCD.c \
../main.c \
../Slave.c \
../Stepper.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
LCD.o \
main.o \
Slave.o \
Stepper.o

OBJS_AS_ARGS +=  \
LCD.o \
main.o \
Slave.o \
Stepper.o

C_DEPS +=  \
LCD.d \
main.d \
Slave.d \
Stepper.d

C_DEPS_AS_ARGS +=  \
LCD.d \
main.d \
Slave.d \
Stepper.d

OUTPUT_FILE_PATH +=FinalProject_Slave.elf

OUTPUT_FILE_PATH_AS_ARGS +=FinalProject_Slave.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
./LCD.o: .././LCD.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./Slave.o: .././Slave.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./Stepper.o: .././Stepper.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="FinalProject_Slave.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32 -B "E:\Engineering\ATmel Studio\7.0\Packs\atmel\ATmega_DFP\1.2.209\gcc\dev\atmega32"  
	@echo Finished building target: $@
	"E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "FinalProject_Slave.elf" "FinalProject_Slave.hex"
	"E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "FinalProject_Slave.elf" "FinalProject_Slave.eep" || exit 0
	"E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "FinalProject_Slave.elf" > "FinalProject_Slave.lss"
	"E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "FinalProject_Slave.elf" "FinalProject_Slave.srec"
	"E:\Engineering\ATmel Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "FinalProject_Slave.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "FinalProject_Slave.elf" "FinalProject_Slave.a" "FinalProject_Slave.hex" "FinalProject_Slave.lss" "FinalProject_Slave.eep" "FinalProject_Slave.map" "FinalProject_Slave.srec" "FinalProject_Slave.usersignatures"
	