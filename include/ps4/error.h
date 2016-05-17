#pragma once

#define PS4_OK 0
#define PS4_NOT_OK 0x85053000
#define PS4_NO PS4_NOT_OK

// Argument errors

#define PS4_ERROR_ARGUMENT_MISSING 0x85053600
#define PS4_ERROR_ARGUMENT_PRIMARY_MISSING 0x85053601
#define PS4_ERROR_ARGUMENT_OUT_MISSING 0x85053602
#define PS4_ERROR_ARGUMENT_MALFORMED 0x85053603
#define PS4_ERROR_ARGUMENT_EXPECTATION_FAILED 0x85053604
#define PS4_ERROR_ARGUMENT_CORRUPT 0x85053605
#define PS4_ERROR_ARGUMENT_IN_DIFFERENT_SPACE 0x85053606
#define PS4_ERROR_ARGUMENT_SIZE_INVALID 0x85053607
#define PS4_ERROR_ARGUMENT_SIZE_NULL 0x85053608
#define PS4_ERROR_ARGUMENT_REQUIREMENT_FAILED 0X85053609
#define PS4_ERROR_ARGUMENT_OUT_OF_RANGE 0X85053609

// KERN(EL)

#define PS4_KERN_ERROR_DLSYM_NOT_FOUND 0x85053700
#define PS4_KERNEL_ERROR_DLSYM_NOT_FOUND PS4_KERN_ERROR_DLSYM_NOT_FOUND
#define PS4_KERN_ERROR_ELF_NOT_FOUND 0x85053701
#define PS4_KERNEL_ERROR_ELF_NOT_FOUND PS4_KERN_ERROR_ELF_NOT_FOUND

#define PS4_KERN_ERROR_OUT_OF_MEMORY 0x85053702
#define PS4_KERNEL_ERROR_OUT_OF_MEMORY PS4_KERN_ERROR_OUT_OF_MEMORY
#define PS4_KERN_ERROR_SYSCALL_NUMBER_TOO_LARGE 0x85053703
#define PS4_KERNEL_ERROR_SYSCALL_NUMBER_TOO_LARGE PS4_KERN_ERROR_SYSCALL_NUMBER_TOO_LARGE

#define PS4_KERN_ERROR_KPROC_NOT_CREATED 0x85053704
#define PS4_KERNEL_ERROR_KPROC_NOT_CREATED PS4_KERN_ERROR_KPROC_NOT_CREATED

// MISC

#define PS4_ASSEMBLER_INSTRUCTION_ERROR_NOT_DECODABLE 0x85053800
#define PS4_OUT_OF_MEMORY 0x85053801

// These can be used if no more suitable error exists

#define PS4_ERROR_BAD_REQUEST 0x85053400
#define PS4_ERROR_FORBIDDEN 0x85053403
#define PS4_ERROR_NOT_FOUND 0x85053404
#define PS4_ERROR_NOT_ALLOWED 0x85053405
#define PS4_ERROR_NOT_ACCEPTABLE 0x85053406
#define PS4_ERROR_TIMEOUT 0x85053408
#define PS4_ERROR_CONFLICT 0x85053409
#define PS4_ERROR_GONE 0x85053410
#define PS4_ERROR_LENGTH_REQUIRED 0x85053411
#define PS4_ERROR_CONDITION_FAILED 0x85053412
#define PS4_ERROR_PAYLOAD_TOO_LARGE 0x85053413
#define PS4_ERROR_ARGUMENT_TOO_LONG 0x85053414
#define PS4_ERROR_UNSUPPORTED_TYPE 0x85053415
#define PS4_ERROR_RANGE_NOT_SATISFIABLE 0x85053416
#define PS4_ERROR_EXPECTATION_FAILED 0x85053417
#define PS4_ERROR_I_AM_A_TEAPOT 0x85053418
#define PS4_ERROR_UNPROCESSABLE 0x85053422
#define PS4_ERROR_LOCKED 0x85053423
#define PS4_ERROR_FAILED_DEPENDENCY 0x85053424
#define PS4_ERROR_TOO_MANY_REQUESTS 0x85053429
#define PS4_ERROR_UNAVAILABLE_FOR_LEGAL_REASONS 0x85053451

#define PS4_ERROR_INTERNAL_ERROR 0x85053500
#define PS4_ERROR_NOT_IMPLEMENTED 0x85053501
#define PS4_ERROR_SERVICE_UNAVAILABLE 0x85053503
#define PS4_ERROR_INSUFFICIENT_STORAGE 0x85053507
#define PS4_ERROR_LOOP_DETECTED 0x85053508