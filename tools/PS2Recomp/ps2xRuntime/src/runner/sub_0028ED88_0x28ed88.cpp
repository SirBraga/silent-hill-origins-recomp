#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028ED88
// Address: 0x28ed88 - 0x28ef68
void sub_0028ED88_0x28ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ED88_0x28ed88");
#endif

    switch (ctx->pc) {
        case 0x28eeccu: goto label_28eecc;
        case 0x28eedcu: goto label_28eedc;
        default: break;
    }

    ctx->pc = 0x28ed88u;

    // 0x28ed88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ed88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ed8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28ed90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ed94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ed94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ed98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ed9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28ed9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eda0: 0x68a2000b  ldl         $v0, 0xB($a1)
    ctx->pc = 0x28eda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28eda4: 0x6ca20004  ldr         $v0, 0x4($a1)
    ctx->pc = 0x28eda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28eda8: 0x68a30013  ldl         $v1, 0x13($a1)
    ctx->pc = 0x28eda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28edac: 0x6ca3000c  ldr         $v1, 0xC($a1)
    ctx->pc = 0x28edacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28edb0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x28edb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edb4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x28edb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edb8: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x28edb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edbc: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x28edbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edc0: 0x68a2001b  ldl         $v0, 0x1B($a1)
    ctx->pc = 0x28edc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28edc4: 0x6ca20014  ldr         $v0, 0x14($a1)
    ctx->pc = 0x28edc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28edc8: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x28edc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edcc: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x28edccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edd0: 0x68a70023  ldl         $a3, 0x23($a1)
    ctx->pc = 0x28edd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28edd4: 0x6ca7001c  ldr         $a3, 0x1C($a1)
    ctx->pc = 0x28edd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28edd8: 0x68a2002b  ldl         $v0, 0x2B($a1)
    ctx->pc = 0x28edd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28eddc: 0x6ca20024  ldr         $v0, 0x24($a1)
    ctx->pc = 0x28eddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28ede0: 0xb207001f  sdl         $a3, 0x1F($s0)
    ctx->pc = 0x28ede0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ede4: 0xb6070018  sdr         $a3, 0x18($s0)
    ctx->pc = 0x28ede4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ede8: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x28ede8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edec: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x28edecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edf0: 0x68a60033  ldl         $a2, 0x33($a1)
    ctx->pc = 0x28edf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28edf4: 0x6ca6002c  ldr         $a2, 0x2C($a1)
    ctx->pc = 0x28edf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28edf8: 0xb206002f  sdl         $a2, 0x2F($s0)
    ctx->pc = 0x28edf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28edfc: 0xb6060028  sdr         $a2, 0x28($s0)
    ctx->pc = 0x28edfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee00: 0x68a4003b  ldl         $a0, 0x3B($a1)
    ctx->pc = 0x28ee00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28ee04: 0x6ca40034  ldr         $a0, 0x34($a1)
    ctx->pc = 0x28ee04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28ee08: 0x68a60043  ldl         $a2, 0x43($a1)
    ctx->pc = 0x28ee08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28ee0c: 0x6ca6003c  ldr         $a2, 0x3C($a1)
    ctx->pc = 0x28ee0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28ee10: 0xb2040037  sdl         $a0, 0x37($s0)
    ctx->pc = 0x28ee10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee14: 0xb6040030  sdr         $a0, 0x30($s0)
    ctx->pc = 0x28ee14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee18: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x28ee18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee1c: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x28ee1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee20: 0x68a3004b  ldl         $v1, 0x4B($a1)
    ctx->pc = 0x28ee20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28ee24: 0x6ca30044  ldr         $v1, 0x44($a1)
    ctx->pc = 0x28ee24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28ee28: 0xb2030047  sdl         $v1, 0x47($s0)
    ctx->pc = 0x28ee28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee2c: 0xb6030040  sdr         $v1, 0x40($s0)
    ctx->pc = 0x28ee2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee30: 0x68a20053  ldl         $v0, 0x53($a1)
    ctx->pc = 0x28ee30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28ee34: 0x6ca2004c  ldr         $v0, 0x4C($a1)
    ctx->pc = 0x28ee34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28ee38: 0x68a3005b  ldl         $v1, 0x5B($a1)
    ctx->pc = 0x28ee38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28ee3c: 0x6ca30054  ldr         $v1, 0x54($a1)
    ctx->pc = 0x28ee3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28ee40: 0xb202004f  sdl         $v0, 0x4F($s0)
    ctx->pc = 0x28ee40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee44: 0xb6020048  sdr         $v0, 0x48($s0)
    ctx->pc = 0x28ee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee48: 0xb2030057  sdl         $v1, 0x57($s0)
    ctx->pc = 0x28ee48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee4c: 0xb6030050  sdr         $v1, 0x50($s0)
    ctx->pc = 0x28ee4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee50: 0x68a70063  ldl         $a3, 0x63($a1)
    ctx->pc = 0x28ee50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28ee54: 0x6ca7005c  ldr         $a3, 0x5C($a1)
    ctx->pc = 0x28ee54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28ee58: 0xb207005f  sdl         $a3, 0x5F($s0)
    ctx->pc = 0x28ee58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee5c: 0xb6070058  sdr         $a3, 0x58($s0)
    ctx->pc = 0x28ee5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ee60: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x28ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ee64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28ee68: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x28ee68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x28ee6c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x28ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ee70: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x28ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee74: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ee74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x28ee78: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x28ee78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28ee7c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x28ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee80: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ee80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x28ee84: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x28ee84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28ee88: 0xa2060060  sb          $a2, 0x60($s0)
    ctx->pc = 0x28ee88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x28ee8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ee8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28ee90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28ee90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28ee94: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x28ee94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ee98: 0xa2040062  sb          $a0, 0x62($s0)
    ctx->pc = 0x28ee98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 4));
    // 0x28ee9c: 0xa2020063  sb          $v0, 0x63($s0)
    ctx->pc = 0x28ee9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x28eea0: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x28eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x28eea4: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x28eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x28eea8: 0xc4a00068  lwc1        $f0, 0x68($a1)
    ctx->pc = 0x28eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eeac: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x28eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x28eeb0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28EEB0u;
    {
        const bool branch_taken_0x28eeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEB0u;
        // 0x28eeb4: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eeb0) {
            ctx->pc = 0x28EF48u;
            goto label_28ef48;
        }
    }
    ctx->pc = 0x28EEB8u;
    // 0x28eeb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28eeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eebc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28eec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28eec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eec4: 0xc09270a  jal         func_249C28
    ctx->pc = 0x28EEC4u;
    SET_GPR_U32(ctx, 31, 0x28EECCu);
    ctx->pc = 0x28EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EEC4u;
    // 0x28eec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x28EEC4u, 0x28EECCu)) {
        return;
    }
    ctx->pc = 0x28EECCu;
label_28eecc:
    // 0x28eecc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28EECCu;
    {
        const bool branch_taken_0x28eecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EECCu;
        // 0x28eed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eecc) {
            ctx->pc = 0x28EF4Cu;
            goto label_28ef4c;
        }
    }
    ctx->pc = 0x28EED4u;
    // 0x28eed4: 0xc088cf4  jal         func_2233D0
    ctx->pc = 0x28EED4u;
    SET_GPR_U32(ctx, 31, 0x28EEDCu);
    ctx->pc = 0x28EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EED4u;
    // 0x28eed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2233D0u, 0x28EED4u, 0x28EEDCu)) {
        return;
    }
    ctx->pc = 0x28EEDCu;
label_28eedc:
    // 0x28eedc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28eedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eee0: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x28EEE0u;
    {
        const bool branch_taken_0x28eee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eee0) {
            ctx->pc = 0x28EEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EEE0u;
            // 0x28eee4: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF3Cu;
            goto label_28ef3c;
        }
    }
    ctx->pc = 0x28EEE8u;
    // 0x28eee8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28eeec: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x28EEECu;
    {
        const bool branch_taken_0x28eeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eeec) {
            ctx->pc = 0x28EEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EEECu;
            // 0x28eef0: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF3Cu;
            goto label_28ef3c;
        }
    }
    ctx->pc = 0x28EEF4u;
    // 0x28eef4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28eef8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28eefc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28ef00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28ef00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28ef04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EF04u;
    {
        const bool branch_taken_0x28ef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF04u;
        // 0x28ef08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef04) {
            ctx->pc = 0x28EF18u;
            goto label_28ef18;
        }
    }
    ctx->pc = 0x28EF0Cu;
    // 0x28ef0c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x28ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28ef10: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x28ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x28ef14: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x28ef14u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28ef18:
    // 0x28ef18: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28EF18u;
    {
        const bool branch_taken_0x28ef18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ef18) {
            ctx->pc = 0x28EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EF18u;
            // 0x28ef1c: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF3Cu;
            goto label_28ef3c;
        }
    }
    ctx->pc = 0x28EF20u;
    // 0x28ef20: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x28ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x28ef24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28ef28: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x28ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x28ef2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28ef30: 0x34633300  ori         $v1, $v1, 0x3300
    ctx->pc = 0x28ef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13056);
    // 0x28ef34: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x28ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x28ef38: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_28ef3c:
    // 0x28ef3c: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x28ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x28ef40: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28ef44: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x28ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_28ef48:
    // 0x28ef48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28ef48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ef4c:
    // 0x28ef4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28ef4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ef50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ef50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ef54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x28EF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF58u;
        // 0x28ef5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EF60u;
    // 0x28ef60: 0xaf85c00c  sw          $a1, -0x3FF4($gp)
    ctx->pc = 0x28ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 5));
    // 0x28ef64: 0x0  nop
    ctx->pc = 0x28ef64u;
    // NOP
    ctx->pc = 0x28ef68u;
}
