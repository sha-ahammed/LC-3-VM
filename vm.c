// LC3 VM

#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// unix IO

#include <fcntl.h>
#include <sys/mman.h>
#include <sys/termios.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

// memory 128KB
uint16_t memory[UINT16_MAX];

// registers
enum {
  R_R0 = 0,
  R_R1,
  R_R2,
  R_R3,
  R_R4,
  R_R5,
  R_R6,
  R_R7,
  R_PC,    // program counter
  R_COND,  // conditional flag
  R_COUNT  // count
};

uint16_t reg[R_COUNT];
