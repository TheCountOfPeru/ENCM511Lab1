################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/Read_FIO_FLAG_ASM.asm 

CPP_SRCS += \
../src/Lab1_SoftwareMock.cpp \
../src/Lab1_Tasks.cpp \
../src/LineTVDisplay.cpp \
../src/ProjectUtilities.cpp \
../src/Read_FIO_FLAG_CPP.cpp 

SRC_OBJS += \
./src/Lab1_SoftwareMock.doj \
./src/Lab1_Tasks.doj \
./src/LineTVDisplay.doj \
./src/ProjectUtilities.doj \
./src/Read_FIO_FLAG_ASM.doj \
./src/Read_FIO_FLAG_CPP.doj 

ASM_DEPS += \
./src/Read_FIO_FLAG_ASM.d 

CPP_DEPS += \
./src/Lab1_SoftwareMock.d \
./src/Lab1_Tasks.d \
./src/LineTVDisplay.d \
./src/ProjectUtilities.d \
./src/Read_FIO_FLAG_CPP.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lab1_SoftwareMock.doj: ../src/Lab1_SoftwareMock.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab1_SoftwareMock" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-7dd5c6c892c4c2aae781b316a2328dc6.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Lab1_SoftwareMock.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Lab1_Tasks.doj: ../src/Lab1_Tasks.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab1_SoftwareMock" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-7dd5c6c892c4c2aae781b316a2328dc6.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Lab1_Tasks.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/LineTVDisplay.doj: ../src/LineTVDisplay.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab1_SoftwareMock" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-7dd5c6c892c4c2aae781b316a2328dc6.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/LineTVDisplay.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ProjectUtilities.doj: ../src/ProjectUtilities.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab1_SoftwareMock" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-7dd5c6c892c4c2aae781b316a2328dc6.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/ProjectUtilities.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Read_FIO_FLAG_ASM.doj: ../src/Read_FIO_FLAG_ASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="Lab1_SoftwareMock" -proc ADSP-BF533 -si-revision any -g -DCORE0 -D_DEBUG @includes-7a0b18c44fb5b68db3c3886dabdf7641.txt -gnu-style-dependencies -MM -Mo "src/Read_FIO_FLAG_ASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Read_FIO_FLAG_CPP.doj: ../src/Read_FIO_FLAG_CPP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="Lab1_SoftwareMock" -proc ADSP-BF533 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG @includes-7dd5c6c892c4c2aae781b316a2328dc6.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/Read_FIO_FLAG_CPP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


