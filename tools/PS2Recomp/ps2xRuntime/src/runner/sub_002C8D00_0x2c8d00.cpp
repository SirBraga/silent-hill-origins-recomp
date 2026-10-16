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

// Function: sub_002C8D00
// Address: 0x2c8d00 - 0x2caa38
void sub_002C8D00_0x2c8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8D00_0x2c8d00");
#endif

    switch (ctx->pc) {
        case 0x2c8d4cu: goto label_2c8d4c;
        case 0x2c8d6cu: goto label_2c8d6c;
        case 0x2c8dc4u: goto label_2c8dc4;
        case 0x2c8e80u: goto label_2c8e80;
        case 0x2c8eecu: goto label_2c8eec;
        case 0x2c8f90u: goto label_2c8f90;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9140u: goto label_2c9140;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91f8u: goto label_2c91f8;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c93a8u: goto label_2c93a8;
        case 0x2c9408u: goto label_2c9408;
        case 0x2c94f0u: goto label_2c94f0;
        case 0x2c9568u: goto label_2c9568;
        case 0x2c95b8u: goto label_2c95b8;
        case 0x2c97f8u: goto label_2c97f8;
        case 0x2c99b4u: goto label_2c99b4;
        case 0x2c9a9cu: goto label_2c9a9c;
        case 0x2c9af4u: goto label_2c9af4;
        case 0x2c9b48u: goto label_2c9b48;
        case 0x2c9b60u: goto label_2c9b60;
        case 0x2c9c98u: goto label_2c9c98;
        case 0x2c9f30u: goto label_2c9f30;
        case 0x2ca028u: goto label_2ca028;
        case 0x2ca1a8u: goto label_2ca1a8;
        case 0x2ca200u: goto label_2ca200;
        case 0x2ca538u: goto label_2ca538;
        case 0x2ca850u: goto label_2ca850;
        default: break;
    }

    ctx->pc = 0x2c8d00u;

    // 0x2c8d00: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2c8d00u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8d04: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2c8d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2c8d08: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2c8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2c8d0c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c8d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c8d10: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x2c8d10u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2c8d14: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x2c8d14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2c8d18: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x2c8d18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2c8d1c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x2c8d1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2c8d20: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2c8d20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2c8d24: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2c8d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2c8d28: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8D28u;
    {
        const bool branch_taken_0x2c8d28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D28u;
        // 0x2c8d2c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d28) {
            ctx->pc = 0x2C8D4Cu;
            goto label_2c8d4c;
        }
    }
    ctx->pc = 0x2C8D30u;
    // 0x2c8d30: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8D30u;
    {
        const bool branch_taken_0x2c8d30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D30u;
        // 0x2c8d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d30) {
            ctx->pc = 0x2C8D4Cu;
            goto label_2c8d4c;
        }
    }
    ctx->pc = 0x2C8D38u;
    // 0x2c8d38: 0x16420066  bne         $s2, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2C8D38u;
    {
        const bool branch_taken_0x2c8d38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c8d38) {
            ctx->pc = 0x2C8ED4u;
            goto label_2c8ed4;
        }
    }
    ctx->pc = 0x2C8D40u;
    // 0x2c8d40: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x2c8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2c8d44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8D44u;
    {
        const bool branch_taken_0x2c8d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D44u;
        // 0x2c8d48: 0x2931025  or          $v0, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d44) {
            ctx->pc = 0x2C8D54u;
            goto label_2c8d54;
        }
    }
    ctx->pc = 0x2C8D4Cu;
label_2c8d4c:
    // 0x2c8d4c: 0x10000727  b           . + 4 + (0x727 << 2)
    ctx->pc = 0x2C8D4Cu;
    {
        const bool branch_taken_0x2c8d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D4Cu;
        // 0x2c8d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d4c) {
            ctx->pc = 0x2CA9ECu;
            goto label_2ca9ec;
        }
    }
    ctx->pc = 0x2C8D54u;
label_2c8d54:
    // 0x2c8d54: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x2c8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2c8d58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c8d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d5c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c8d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c8d60: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8D60u;
    {
        const bool branch_taken_0x2c8d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D60u;
        // 0x2c8d64: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d60) {
            ctx->pc = 0x2C8DC0u;
            goto label_2c8dc0;
        }
    }
    ctx->pc = 0x2C8D68u;
    // 0x2c8d68: 0x268200e0  addiu       $v0, $s4, 0xE0
    ctx->pc = 0x2c8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_2c8d6c:
    // 0x2c8d6c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2c8d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c8d70: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2c8d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8d74: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2c8d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c8d78: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2c8d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c8d7c: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2c8d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c8d80: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2c8d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c8d84: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2c8d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c8d88: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2c8d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c8d8c: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x2c8d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8d90: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x2c8d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8d94: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x2c8d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8d98: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x2c8d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8d9c: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x2c8d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8da0: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x2c8da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8da4: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x2c8da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8da8: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x2c8da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8dac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c8db0: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C8DB0u;
    {
        const bool branch_taken_0x2c8db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DB0u;
        // 0x2c8db4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8db0) {
            ctx->pc = 0x2C8D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8d6c;
        }
    }
    ctx->pc = 0x2C8DB8u;
    // 0x2c8db8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C8DB8u;
    {
        const bool branch_taken_0x2c8db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DB8u;
        // 0x2c8dbc: 0x8e6800ac  lw          $t0, 0xAC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8db8) {
            ctx->pc = 0x2C8DF4u;
            goto label_2c8df4;
        }
    }
    ctx->pc = 0x2C8DC0u;
label_2c8dc0:
    // 0x2c8dc0: 0x268200e0  addiu       $v0, $s4, 0xE0
    ctx->pc = 0x2c8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_2c8dc4:
    // 0x2c8dc4: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x2c8dc4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8dc8: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x2c8dc8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c8dcc: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x2c8dccu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c8dd0: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x2c8dd0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c8dd4: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x2c8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x2c8dd8: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x2c8dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x2c8ddc: 0xfcad0010  sd          $t5, 0x10($a1)
    ctx->pc = 0x2c8ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 13));
    // 0x2c8de0: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x2c8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x2c8de4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c8de8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C8DE8u;
    {
        const bool branch_taken_0x2c8de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DE8u;
        // 0x2c8dec: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8de8) {
            ctx->pc = 0x2C8DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8dc4;
        }
    }
    ctx->pc = 0x2C8DF0u;
    // 0x2c8df0: 0x8e6800ac  lw          $t0, 0xAC($s3)
    ctx->pc = 0x2c8df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_2c8df4:
    // 0x2c8df4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8df8: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2c8df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c8dfc: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2C8DFCu;
    {
        const bool branch_taken_0x2c8dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DFCu;
        // 0x2c8e00: 0xae6400b0  sw          $a0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dfc) {
            ctx->pc = 0x2C9194u;
            goto label_2c9194;
        }
    }
    ctx->pc = 0x2C8E04u;
    // 0x2c8e04: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2c8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2c8e08: 0x926600cc  lbu         $a2, 0xCC($s3)
    ctx->pc = 0x2c8e08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2c8e0c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c8e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c8e10: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2c8e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8e14: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C8E14u;
    {
        const bool branch_taken_0x2c8e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E14u;
        // 0x2c8e18: 0x926400cd  lbu         $a0, 0xCD($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 205)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e14) {
            ctx->pc = 0x2C8E60u;
            goto label_2c8e60;
        }
    }
    ctx->pc = 0x2C8E1Cu;
    // 0x2c8e1c: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C8E1Cu;
    {
        const bool branch_taken_0x2c8e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e1c) {
            ctx->pc = 0x2C8E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E1Cu;
            // 0x2c8e20: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8E84u;
            goto label_2c8e84;
        }
    }
    ctx->pc = 0x2C8E24u;
    // 0x2c8e24: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c8e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8e28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8E28u;
    {
        const bool branch_taken_0x2c8e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E28u;
        // 0x2c8e2c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e28) {
            ctx->pc = 0x2C8E64u;
            goto label_2c8e64;
        }
    }
    ctx->pc = 0x2C8E30u;
    // 0x2c8e30: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c8e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c8e34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8E34u;
    {
        const bool branch_taken_0x2c8e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E34u;
        // 0x2c8e38: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e34) {
            ctx->pc = 0x2C8E50u;
            goto label_2c8e50;
        }
    }
    ctx->pc = 0x2C8E3Cu;
    // 0x2c8e3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c8e40: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c8e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c8e44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c8e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c8e48: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c8e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8e4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2c8e50:
    // 0x2c8e50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c8e54: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c8e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c8e58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c8e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c8e5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c8e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c8e60:
    // 0x2c8e60: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2c8e64:
    // 0x2c8e64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c8e68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c8e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c8e6c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c8e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c8e70: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2c8e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c8e74: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2C8E74u;
    {
        const bool branch_taken_0x2c8e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E74u;
        // 0x2c8e78: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e74) {
            ctx->pc = 0x2C918Cu;
            goto label_2c918c;
        }
    }
    ctx->pc = 0x2C8E7Cu;
    // 0x2c8e7c: 0x0  nop
    ctx->pc = 0x2c8e7cu;
    // NOP
label_2c8e80:
    // 0x2c8e80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2c8e84:
    // 0x2c8e84: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c8e88: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2c8e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c8e8c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2c8e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c8e90: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8e94: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8e98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c8e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c8e9c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c8e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2c8ea0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8ea4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8ea8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c8ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c8eac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c8eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2c8eb0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c8eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8eb4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c8eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8eb8: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x2c8eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c8ebc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c8ec0: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2c8ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c8ec4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C8EC4u;
    {
        const bool branch_taken_0x2c8ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EC4u;
        // 0x2c8ec8: 0x652025  or          $a0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ec4) {
            ctx->pc = 0x2C8E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8e80;
        }
    }
    ctx->pc = 0x2C8ECCu;
    // 0x2c8ecc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2C8ECCu;
    {
        const bool branch_taken_0x2c8ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8ECCu;
        // 0x2c8ed0: 0xa26600cc  sb          $a2, 0xCC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 204), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ecc) {
            ctx->pc = 0x2C9190u;
            goto label_2c9190;
        }
    }
    ctx->pc = 0x2C8ED4u;
label_2c8ed4:
    // 0x2c8ed4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8ED4u;
    {
        const bool branch_taken_0x2c8ed4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8ED4u;
        // 0x2c8ed8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ed4) {
            ctx->pc = 0x2C8EF0u;
            goto label_2c8ef0;
        }
    }
    ctx->pc = 0x2C8EDCu;
    // 0x2c8edc: 0x7fb90080  sq          $t9, 0x80($sp)
    ctx->pc = 0x2c8edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 25));
    // 0x2c8ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c8ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ee4: 0xc0b208e  jal         func_2C8238
    ctx->pc = 0x2C8EE4u;
    SET_GPR_U32(ctx, 31, 0x2C8EECu);
    ctx->pc = 0x2C8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EE4u;
    // 0x2c8ee8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C8238u, 0x2C8EE4u, 0x2C8EECu)) {
        return;
    }
    ctx->pc = 0x2C8EECu;
label_2c8eec:
    // 0x2c8eec: 0x7bb90080  lq          $t9, 0x80($sp)
    ctx->pc = 0x2c8eecu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c8ef0:
    // 0x2c8ef0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c8ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c8ef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ef8: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C8EF8u;
    {
        const bool branch_taken_0x2c8ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EF8u;
        // 0x2c8efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ef8) {
            ctx->pc = 0x2C8FF4u;
            goto label_2c8ff4;
        }
    }
    ctx->pc = 0x2C8F00u;
    // 0x2c8f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f04: 0x268400ac  addiu       $a0, $s4, 0xAC
    ctx->pc = 0x2c8f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 172));
    // 0x2c8f08: 0x1a400016  blez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8F08u;
    {
        const bool branch_taken_0x2c8f08 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2C8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F08u;
        // 0x2c8f0c: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f08) {
            ctx->pc = 0x2C8F64u;
            goto label_2c8f64;
        }
    }
    ctx->pc = 0x2C8F10u;
    // 0x2c8f10: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C8F10u;
    {
        const bool branch_taken_0x2c8f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F10u;
        // 0x2c8f14: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f10) {
            ctx->pc = 0x2C8F88u;
            goto label_2c8f88;
        }
    }
    ctx->pc = 0x2C8F18u;
    // 0x2c8f18: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C8F18u;
    {
        const bool branch_taken_0x2c8f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f18) {
            ctx->pc = 0x2C8F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F18u;
            // 0x2c8f1c: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F68u;
            goto label_2c8f68;
        }
    }
    ctx->pc = 0x2C8F20u;
    // 0x2c8f20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c8f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c8f24: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8F24u;
    {
        const bool branch_taken_0x2c8f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f24) {
            ctx->pc = 0x2C8F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F24u;
            // 0x2c8f28: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F48u;
            goto label_2c8f48;
        }
    }
    ctx->pc = 0x2C8F2Cu;
    // 0x2c8f2c: 0x8e8a00ac  lw          $t2, 0xAC($s4)
    ctx->pc = 0x2c8f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2c8f30: 0x55400001  bnel        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C8F30u;
    {
        const bool branch_taken_0x2c8f30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f30) {
            ctx->pc = 0x2C8F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F30u;
            // 0x2c8f34: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F38u;
            goto label_2c8f38;
        }
    }
    ctx->pc = 0x2C8F38u;
label_2c8f38:
    // 0x2c8f38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8f3c: 0x2684018c  addiu       $a0, $s4, 0x18C
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 396));
    // 0x2c8f40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c8f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8f44: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2c8f44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8f48:
    // 0x2c8f48: 0x51400004  beql        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F48u;
    {
        const bool branch_taken_0x2c8f48 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f48) {
            ctx->pc = 0x2C8F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F48u;
            // 0x2c8f4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F5Cu;
            goto label_2c8f5c;
        }
    }
    ctx->pc = 0x2C8F50u;
    // 0x2c8f50: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x2c8f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8f54: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c8f54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c8f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c8f5c:
    // 0x2c8f5c: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x2c8f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2c8f60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c8f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c8f64:
    // 0x2c8f64: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2c8f64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8f68:
    // 0x2c8f68: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8F68u;
    {
        const bool branch_taken_0x2c8f68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F68u;
        // 0x2c8f6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f68) {
            ctx->pc = 0x2C8F78u;
            goto label_2c8f78;
        }
    }
    ctx->pc = 0x2C8F70u;
    // 0x2c8f70: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x2c8f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8f74: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c8f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f78:
    // 0x2c8f78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c8f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c8f7c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2c8f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c8f80: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C8F80u;
    {
        const bool branch_taken_0x2c8f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F80u;
        // 0x2c8f84: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f80) {
            ctx->pc = 0x2C8FF4u;
            goto label_2c8ff4;
        }
    }
    ctx->pc = 0x2C8F88u;
label_2c8f88:
    // 0x2c8f88: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c8f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f8c: 0x0  nop
    ctx->pc = 0x2c8f8cu;
    // NOP
label_2c8f90:
    // 0x2c8f90: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x2c8f90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8f94: 0x51400004  beql        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F94u;
    {
        const bool branch_taken_0x2c8f94 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f94) {
            ctx->pc = 0x2C8F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F94u;
            // 0x2c8f98: 0x8c6a00e0  lw          $t2, 0xE0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8FA8u;
            goto label_2c8fa8;
        }
    }
    ctx->pc = 0x2C8F9Cu;
    // 0x2c8f9c: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x2c8f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8fa0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c8fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8fa4: 0x8c6a00e0  lw          $t2, 0xE0($v1)
    ctx->pc = 0x2c8fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_2c8fa8:
    // 0x2c8fa8: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8FA8u;
    {
        const bool branch_taken_0x2c8fa8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FA8u;
        // 0x2c8fac: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fa8) {
            ctx->pc = 0x2C8FB8u;
            goto label_2c8fb8;
        }
    }
    ctx->pc = 0x2C8FB0u;
    // 0x2c8fb0: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x2c8fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8fb4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c8fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fb8:
    // 0x2c8fb8: 0x8c6a01c0  lw          $t2, 0x1C0($v1)
    ctx->pc = 0x2c8fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2c8fbc: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8FBCu;
    {
        const bool branch_taken_0x2c8fbc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FBCu;
        // 0x2c8fc0: 0x24a20002  addiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fbc) {
            ctx->pc = 0x2C8FCCu;
            goto label_2c8fcc;
        }
    }
    ctx->pc = 0x2C8FC4u;
    // 0x2c8fc4: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x2c8fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8fc8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c8fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fcc:
    // 0x2c8fcc: 0x8c6a02a0  lw          $t2, 0x2A0($v1)
    ctx->pc = 0x2c8fccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 672)));
    // 0x2c8fd0: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8FD0u;
    {
        const bool branch_taken_0x2c8fd0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FD0u;
        // 0x2c8fd4: 0x24a20003  addiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fd0) {
            ctx->pc = 0x2C8FE0u;
            goto label_2c8fe0;
        }
    }
    ctx->pc = 0x2C8FD8u;
    // 0x2c8fd8: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8fdc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c8fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fe0:
    // 0x2c8fe0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c8fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c8fe4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c8fe8: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2c8fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c8fec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2C8FECu;
    {
        const bool branch_taken_0x2c8fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FECu;
        // 0x2c8ff0: 0x24630380  addiu       $v1, $v1, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fec) {
            ctx->pc = 0x2C8F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8f90;
        }
    }
    ctx->pc = 0x2C8FF4u;
label_2c8ff4:
    // 0x2c8ff4: 0x1200ff55  beqz        $s0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x2C8FF4u;
    {
        const bool branch_taken_0x2c8ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FF4u;
        // 0x2c8ff8: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ff4) {
            ctx->pc = 0x2C8D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8d4c;
        }
    }
    ctx->pc = 0x2C8FFCu;
    // 0x2c8ffc: 0x1221818  mult        $v1, $t1, $v0
    ctx->pc = 0x2c8ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9000: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2c9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2c9004: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2c9008: 0x56030064  bnel        $s0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C9008u;
    {
        const bool branch_taken_0x2c9008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9008) {
            ctx->pc = 0x2C900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9008u;
            // 0x2c900c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C919Cu;
            goto label_2c919c;
        }
    }
    ctx->pc = 0x2C9010u;
    // 0x2c9010: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c9010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9014: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x2c9014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2c9018: 0x731025  or          $v0, $v1, $s3
    ctx->pc = 0x2c9018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x2c901c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c9020: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9020u;
    {
        const bool branch_taken_0x2c9020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9020u;
        // 0x2c9024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9020) {
            ctx->pc = 0x2C9080u;
            goto label_2c9080;
        }
    }
    ctx->pc = 0x2C9028u;
    // 0x2c9028: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2c9028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2c902c:
    // 0x2c902c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2c902cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c9030: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2c9030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c9034: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2c9034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c9038: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2c9038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c903c: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2c903cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c9040: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2c9040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c9044: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2c9044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c9048: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2c9048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c904c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2c904cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9050: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2c9050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9054: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x2c9054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9058: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x2c9058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c905c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x2c905cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9060: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x2c9060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9064: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x2c9064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9068: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x2c9068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c906c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c9070: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C9070u;
    {
        const bool branch_taken_0x2c9070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9070u;
        // 0x2c9074: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9070) {
            ctx->pc = 0x2C902Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c902c;
        }
    }
    ctx->pc = 0x2C9078u;
    // 0x2c9078: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C9078u;
    {
        const bool branch_taken_0x2c9078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9078u;
        // 0x2c907c: 0x8e6800ac  lw          $t0, 0xAC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9078) {
            ctx->pc = 0x2C90B4u;
            goto label_2c90b4;
        }
    }
    ctx->pc = 0x2C9080u;
label_2c9080:
    // 0x2c9080: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2c9080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2c9084:
    // 0x2c9084: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x2c9084u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9088: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x2c9088u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c908c: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x2c908cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c9090: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x2c9090u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c9094: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x2c9094u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x2c9098: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x2c9098u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x2c909c: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x2c909cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x2c90a0: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x2c90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x2c90a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c90a8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C90A8u;
    {
        const bool branch_taken_0x2c90a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90A8u;
        // 0x2c90ac: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90a8) {
            ctx->pc = 0x2C9084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9084;
        }
    }
    ctx->pc = 0x2C90B0u;
    // 0x2c90b0: 0x8e6800ac  lw          $t0, 0xAC($s3)
    ctx->pc = 0x2c90b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_2c90b4:
    // 0x2c90b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c90b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c90b8: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2c90b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c90bc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C90BCu;
    {
        const bool branch_taken_0x2c90bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90BCu;
        // 0x2c90c0: 0xae6500b0  sw          $a1, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90bc) {
            ctx->pc = 0x2C9194u;
            goto label_2c9194;
        }
    }
    ctx->pc = 0x2C90C4u;
    // 0x2c90c4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2c90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2c90c8: 0x926600cc  lbu         $a2, 0xCC($s3)
    ctx->pc = 0x2c90c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2c90cc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c90ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c90d0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2c90d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c90d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C90D4u;
    {
        const bool branch_taken_0x2c90d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90D4u;
        // 0x2c90d8: 0x926400cd  lbu         $a0, 0xCD($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 205)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90d4) {
            ctx->pc = 0x2C9120u;
            goto label_2c9120;
        }
    }
    ctx->pc = 0x2C90DCu;
    // 0x2c90dc: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C90DCu;
    {
        const bool branch_taken_0x2c90dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c90dc) {
            ctx->pc = 0x2C90E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90DCu;
            // 0x2c90e0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9144u;
            goto label_2c9144;
        }
    }
    ctx->pc = 0x2C90E4u;
    // 0x2c90e4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c90e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c90e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C90E8u;
    {
        const bool branch_taken_0x2c90e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90E8u;
        // 0x2c90ec: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90e8) {
            ctx->pc = 0x2C9124u;
            goto label_2c9124;
        }
    }
    ctx->pc = 0x2C90F0u;
    // 0x2c90f0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c90f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c90f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C90F4u;
    {
        const bool branch_taken_0x2c90f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90F4u;
        // 0x2c90f8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90f4) {
            ctx->pc = 0x2C9110u;
            goto label_2c9110;
        }
    }
    ctx->pc = 0x2C90FCu;
    // 0x2c90fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9100: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c9100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c9104: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c9104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c9108: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c9108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c910c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2c9110:
    // 0x2c9110: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c9110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9114: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c9114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c9118: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c9118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c911c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c9120:
    // 0x2c9120: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c9120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2c9124:
    // 0x2c9124: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c9124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9128: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c9128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c912c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c912cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c9130: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2c9130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c9134: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C9134u;
    {
        const bool branch_taken_0x2c9134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9134u;
        // 0x2c9138: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9134) {
            ctx->pc = 0x2C918Cu;
            goto label_2c918c;
        }
    }
    ctx->pc = 0x2C913Cu;
    // 0x2c913c: 0x0  nop
    ctx->pc = 0x2c913cu;
    // NOP
label_2c9140:
    // 0x2c9140: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c9140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2c9144:
    // 0x2c9144: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c9144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c9148: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2c9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c914c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2c914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c9150: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c9150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9154: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c9154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9158: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c9158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c915c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2c9160: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c9160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9164: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c9164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c9168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c916c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c916cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2c9170: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c9170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9174: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9178: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x2c9178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c917c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c917cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c9180: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x2c9180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c9184: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C9184u;
    {
        const bool branch_taken_0x2c9184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9184u;
        // 0x2c9188: 0x652025  or          $a0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9184) {
            ctx->pc = 0x2C9140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9140;
        }
    }
    ctx->pc = 0x2C918Cu;
label_2c918c:
    // 0x2c918c: 0xa26600cc  sb          $a2, 0xCC($s3)
    ctx->pc = 0x2c918cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 204), (uint8_t)GPR_U32(ctx, 6));
label_2c9190:
    // 0x2c9190: 0xa26400cd  sb          $a0, 0xCD($s3)
    ctx->pc = 0x2c9190u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 205), (uint8_t)GPR_U32(ctx, 4));
label_2c9194:
    // 0x2c9194: 0x10000615  b           . + 4 + (0x615 << 2)
    ctx->pc = 0x2C9194u;
    {
        const bool branch_taken_0x2c9194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9194u;
        // 0x2c9198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9194) {
            ctx->pc = 0x2CA9ECu;
            goto label_2ca9ec;
        }
    }
    ctx->pc = 0x2C919Cu;
label_2c919c:
    // 0x2c919c: 0x12400068  beqz        $s2, . + 4 + (0x68 << 2)
    ctx->pc = 0x2C919Cu;
    {
        const bool branch_taken_0x2c919c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C919Cu;
        // 0x2c91a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c919c) {
            ctx->pc = 0x2C9340u;
            goto label_2c9340;
        }
    }
    ctx->pc = 0x2C91A4u;
    // 0x2c91a4: 0x240d00e0  addiu       $t5, $zero, 0xE0
    ctx->pc = 0x2c91a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c91a8: 0x266b00d8  addiu       $t3, $s3, 0xD8
    ctx->pc = 0x2c91a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
    // 0x2c91ac: 0x22d1018  mult        $v0, $s1, $t5
    ctx->pc = 0x2c91acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c91b0:
    // 0x2c91b0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2c91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c91b4: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x2c91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x2c91b8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2c91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c91bc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2c91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x2c91c0: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x2C91C0u;
    {
        const bool branch_taken_0x2c91c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c91c0) {
            ctx->pc = 0x2C91C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91C0u;
            // 0x2c91c4: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9334u;
            goto label_2c9334;
        }
    }
    ctx->pc = 0x2C91C8u;
    // 0x2c91c8: 0x12a0004f  beqz        $s5, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C91C8u;
    {
        const bool branch_taken_0x2c91c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91C8u;
        // 0x2c91cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c91c8) {
            ctx->pc = 0x2C9308u;
            goto label_2c9308;
        }
    }
    ctx->pc = 0x2C91D0u;
    // 0x2c91d0: 0x240c00e0  addiu       $t4, $zero, 0xE0
    ctx->pc = 0x2c91d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c91d4: 0xc78b8214  lwc1        $f11, -0x7DEC($gp)
    ctx->pc = 0x2c91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2c91d8: 0x22c5018  mult        $t2, $s1, $t4
    ctx->pc = 0x2c91d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2c91dc: 0xc78a8218  lwc1        $f10, -0x7DE8($gp)
    ctx->pc = 0x2c91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c91e0: 0x266600d8  addiu       $a2, $s3, 0xD8
    ctx->pc = 0x2c91e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
    // 0x2c91e4: 0x1542821  addu        $a1, $t2, $s4
    ctx->pc = 0x2c91e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x2c91e8: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x2c91e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c91ec: 0x24a7000c  addiu       $a3, $a1, 0xC
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2c91f0: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2c91f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c91f4: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x2c91f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2c91f8:
    // 0x2c91f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c91fc: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x2c91fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9200: 0x744021  addu        $t0, $v1, $s4
    ctx->pc = 0x2c9200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2c9204: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2c9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9208: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x2c9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c920c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2c920cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2c9210: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2c9210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9214: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2c9214u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2c9218: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2c9218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2c921c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c921cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9224: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2c9224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9228: 0x0  nop
    ctx->pc = 0x2c9228u;
    // NOP
    // 0x2c922c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x2C922Cu;
    {
        const bool branch_taken_0x2c922c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C922Cu;
        // 0x2c9230: 0x1541821  addu        $v1, $t2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c922c) {
            ctx->pc = 0x2C92F8u;
            goto label_2c92f8;
        }
    }
    ctx->pc = 0x2C9234u;
    // 0x2c9234: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2c9234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9238: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x2c9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c923c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2c923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9240: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x2c9240u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c9244: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x2c9244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9248: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2c9248u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c924c: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x2c924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9250: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x2c9250u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c9254: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2c9254u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c9258: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x2c9258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c925c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c925cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c9260: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2c9260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c9264: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c9264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9268: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2c9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c926c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2c926cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c9270: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9274: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2c9274u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2c9278: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c9278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c927c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c927cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9284: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x2c9284u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9288: 0x460ab102  mul.s       $f4, $f22, $f10
    ctx->pc = 0x2c9288u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[10]);
    // 0x2c928c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2c928cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9290: 0x0  nop
    ctx->pc = 0x2c9290u;
    // NOP
    // 0x2c9294: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9294u;
    {
        const bool branch_taken_0x2c9294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9294u;
        // 0x2c9298: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9294) {
            ctx->pc = 0x2C92A0u;
            goto label_2c92a0;
        }
    }
    ctx->pc = 0x2C929Cu;
    // 0x2c929c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c92a0:
    // 0x2c92a0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2c92a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c92a4: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2c92a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c92a8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2c92a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c92ac: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x2c92acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c92b0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c92b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c92b4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c92b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c92b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c92b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c92bc: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2c92bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c92c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c92c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c92c4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2c92c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c92c8: 0x0  nop
    ctx->pc = 0x2c92c8u;
    // NOP
    // 0x2c92cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C92CCu;
    {
        const bool branch_taken_0x2c92cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92CCu;
        // 0x2c92d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92cc) {
            ctx->pc = 0x2C92D8u;
            goto label_2c92d8;
        }
    }
    ctx->pc = 0x2C92D4u;
    // 0x2c92d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c92d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c92d8:
    // 0x2c92d8: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C92D8u;
    {
        const bool branch_taken_0x2c92d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c92d8) {
            ctx->pc = 0x2C92DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92D8u;
            // 0x2c92dc: 0x8d0200dc  lw          $v0, 0xDC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C92ECu;
            goto label_2c92ec;
        }
    }
    ctx->pc = 0x2C92E0u;
    // 0x2c92e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C92E0u;
    {
        const bool branch_taken_0x2c92e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92e0) {
            ctx->pc = 0x2C92E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C92E0u;
            // 0x2c92e4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C92FCu;
            goto label_2c92fc;
        }
    }
    ctx->pc = 0x2C92E8u;
    // 0x2c92e8: 0x8d0200dc  lw          $v0, 0xDC($t0)
    ctx->pc = 0x2c92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
label_2c92ec:
    // 0x2c92ec: 0xac6200dc  sw          $v0, 0xDC($v1)
    ctx->pc = 0x2c92ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 2));
    // 0x2c92f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C92F0u;
    {
        const bool branch_taken_0x2c92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92F0u;
        // 0x2c92f4: 0xad0300dc  sw          $v1, 0xDC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92f0) {
            ctx->pc = 0x2C9308u;
            goto label_2c9308;
        }
    }
    ctx->pc = 0x2C92F8u;
label_2c92f8:
    // 0x2c92f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c92f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2c92fc:
    // 0x2c92fc: 0x135102b  sltu        $v0, $t1, $s5
    ctx->pc = 0x2c92fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c9300: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2C9300u;
    {
        const bool branch_taken_0x2c9300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9300u;
        // 0x2c9304: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9300) {
            ctx->pc = 0x2C91F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c91f8;
        }
    }
    ctx->pc = 0x2C9308u;
label_2c9308:
    // 0x2c9308: 0x5535000a  bnel        $t1, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9308u;
    {
        const bool branch_taken_0x2c9308 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c9308) {
            ctx->pc = 0x2C930Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9308u;
            // 0x2c930c: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9334u;
            goto label_2c9334;
        }
    }
    ctx->pc = 0x2C9310u;
    // 0x2c9310: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x2c9310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2c9314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9314u;
    {
        const bool branch_taken_0x2c9314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9314u;
        // 0x2c9318: 0x22d1818  mult        $v1, $s1, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9314) {
            ctx->pc = 0x2C9330u;
            goto label_2c9330;
        }
    }
    ctx->pc = 0x2C931Cu;
    // 0x2c931c: 0xad710000  sw          $s1, 0x0($t3)
    ctx->pc = 0x2c931cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 17));
    // 0x2c9320: 0x256b00e0  addiu       $t3, $t3, 0xE0
    ctx->pc = 0x2c9320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 224));
    // 0x2c9324: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c9324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c9328: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2c9328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2c932c: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x2c932cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
label_2c9330:
    // 0x2c9330: 0x8fb10064  lw          $s1, 0x64($sp)
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2c9334:
    // 0x2c9334: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2c9334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c9338: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x2C9338u;
    {
        const bool branch_taken_0x2c9338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9338u;
        // 0x2c933c: 0x22d1018  mult        $v0, $s1, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9338) {
            ctx->pc = 0x2C91B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c91b0;
        }
    }
    ctx->pc = 0x2C9340u;
label_2c9340:
    // 0x2c9340: 0x12a005a9  beqz        $s5, . + 4 + (0x5A9 << 2)
    ctx->pc = 0x2C9340u;
    {
        const bool branch_taken_0x2c9340 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9340u;
        // 0x2c9344: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9340) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2C9348u;
    // 0x2c9348: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2c9348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2c934c: 0x241600e0  addiu       $s6, $zero, 0xE0
    ctx->pc = 0x2c934cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c9350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9354: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2c9354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2c9358: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2c9358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2c935c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2c935cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2c9360: 0xc799821c  lwc1        $f25, -0x7DE4($gp)
    ctx->pc = 0x2c9360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2c9364: 0x2361018  mult        $v0, $s1, $s6
    ctx->pc = 0x2c9364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c9368:
    // 0x2c9368: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2c9368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c936c: 0x8c7200d8  lw          $s2, 0xD8($v1)
    ctx->pc = 0x2c936cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2c9370: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x2c9370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9374: 0x544021  addu        $t0, $v0, $s4
    ctx->pc = 0x2c9374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c9378: 0x8d0200dc  lw          $v0, 0xDC($t0)
    ctx->pc = 0x2c9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
    // 0x2c937c: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x2C937Cu;
    {
        const bool branch_taken_0x2c937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c937c) {
            ctx->pc = 0x2C9380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C937Cu;
            // 0x2c9380: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9554u;
            goto label_2c9554;
        }
    }
    ctx->pc = 0x2C9384u;
    // 0x2c9384: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c9384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9388: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x2c9388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2c938c: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x2c938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2c9390: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c9390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c9394: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C9394u;
    {
        const bool branch_taken_0x2c9394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9394u;
        // 0x2c9398: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9394) {
            ctx->pc = 0x2C93FCu;
            goto label_2c93fc;
        }
    }
    ctx->pc = 0x2C939Cu;
    // 0x2c939c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2c939cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c93a0: 0x250200e0  addiu       $v0, $t0, 0xE0
    ctx->pc = 0x2c93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x2c93a4: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x2c93a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
label_2c93a8:
    // 0x2c93a8: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x2c93a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c93ac: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x2c93acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c93b0: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x2c93b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c93b4: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x2c93b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c93b8: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x2c93b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c93bc: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x2c93bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c93c0: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x2c93c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2c93c4: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x2c93c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2c93c8: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x2c93c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93cc: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x2c93ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93d0: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x2c93d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93d4: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x2c93d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93d8: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x2c93d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93dc: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x2c93dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93e0: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x2c93e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93e4: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x2c93e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c93e8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c93e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c93ec: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C93ECu;
    {
        const bool branch_taken_0x2c93ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93ECu;
        // 0x2c93f0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93ec) {
            ctx->pc = 0x2C93A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c93a8;
        }
    }
    ctx->pc = 0x2C93F4u;
    // 0x2c93f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C93F4u;
    {
        const bool branch_taken_0x2c93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93F4u;
        // 0x2c93f8: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93f4) {
            ctx->pc = 0x2C9438u;
            goto label_2c9438;
        }
    }
    ctx->pc = 0x2C93FCu;
label_2c93fc:
    // 0x2c93fc: 0x262c0001  addiu       $t4, $s1, 0x1
    ctx->pc = 0x2c93fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c9400: 0x250200e0  addiu       $v0, $t0, 0xE0
    ctx->pc = 0x2c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x2c9404: 0xafac0064  sw          $t4, 0x64($sp)
    ctx->pc = 0x2c9404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 12));
label_2c9408:
    // 0x2c9408: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x2c9408u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c940c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2c940cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9410: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2c9410u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c9414: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2c9414u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c9418: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2c9418u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x2c941c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2c941cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2c9420: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2c9420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2c9424: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2c9424u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2c9428: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c9428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c942c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C942Cu;
    {
        const bool branch_taken_0x2c942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C942Cu;
        // 0x2c9430: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c942c) {
            ctx->pc = 0x2C9408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9408;
        }
    }
    ctx->pc = 0x2C9434u;
    // 0x2c9434: 0x2361018  mult        $v0, $s1, $s6
    ctx->pc = 0x2c9434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c9438:
    // 0x2c9438: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c9438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c943c: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x2c943cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c9440: 0x8cc900ac  lw          $t1, 0xAC($a2)
    ctx->pc = 0x2c9440u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x2c9444: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x2c9444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c9448: 0x10400563  beqz        $v0, . + 4 + (0x563 << 2)
    ctx->pc = 0x2C9448u;
    {
        const bool branch_taken_0x2c9448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9448u;
        // 0x2c944c: 0xacc500b0  sw          $a1, 0xB0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9448) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2C9450u;
    // 0x2c9450: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x2c9450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2c9454: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x2c9454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9458: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C9458u;
    {
        const bool branch_taken_0x2c9458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9458u;
        // 0x2c945c: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9458) {
            ctx->pc = 0x2C94C4u;
            goto label_2c94c4;
        }
    }
    ctx->pc = 0x2C9460u;
    // 0x2c9460: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C9460u;
    {
        const bool branch_taken_0x2c9460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9460) {
            ctx->pc = 0x2C9464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9460u;
            // 0x2c9464: 0x90c300cc  lbu         $v1, 0xCC($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C94F4u;
            goto label_2c94f4;
        }
    }
    ctx->pc = 0x2C9468u;
    // 0x2c9468: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2c9468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c946c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C946Cu;
    {
        const bool branch_taken_0x2c946c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c946c) {
            ctx->pc = 0x2C9470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C946Cu;
            // 0x2c9470: 0x90c500cc  lbu         $a1, 0xCC($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C94C8u;
            goto label_2c94c8;
        }
    }
    ctx->pc = 0x2C9474u;
    // 0x2c9474: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2c9474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c9478: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9478u;
    {
        const bool branch_taken_0x2c9478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9478u;
        // 0x2c947c: 0x90c300cc  lbu         $v1, 0xCC($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9478) {
            ctx->pc = 0x2C94A4u;
            goto label_2c94a4;
        }
    }
    ctx->pc = 0x2C9480u;
    // 0x2c9480: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2c9480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9484: 0x90c200cd  lbu         $v0, 0xCD($a2)
    ctx->pc = 0x2c9484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 205)));
    // 0x2c9488: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c9488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c948c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c948cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9490: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c9490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c9494: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c9498: 0xa0c300cc  sb          $v1, 0xCC($a2)
    ctx->pc = 0x2c9498u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c949c: 0xa0c200cd  sb          $v0, 0xCD($a2)
    ctx->pc = 0x2c949cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 205), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c94a0: 0x90c300cc  lbu         $v1, 0xCC($a2)
    ctx->pc = 0x2c94a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
label_2c94a4:
    // 0x2c94a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c94a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c94a8: 0x90c200cd  lbu         $v0, 0xCD($a2)
    ctx->pc = 0x2c94a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 205)));
    // 0x2c94ac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c94acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c94b0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c94b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c94b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c94b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c94b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c94b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c94bc: 0xa0c300cc  sb          $v1, 0xCC($a2)
    ctx->pc = 0x2c94bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c94c0: 0xa0c200cd  sb          $v0, 0xCD($a2)
    ctx->pc = 0x2c94c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 205), (uint8_t)GPR_U32(ctx, 2));
label_2c94c4:
    // 0x2c94c4: 0x90c500cc  lbu         $a1, 0xCC($a2)
    ctx->pc = 0x2c94c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
label_2c94c8:
    // 0x2c94c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c94cc: 0x90c200cd  lbu         $v0, 0xCD($a2)
    ctx->pc = 0x2c94ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 205)));
    // 0x2c94d0: 0x109382b  sltu        $a3, $t0, $t1
    ctx->pc = 0x2c94d0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c94d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c94d8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c94dc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2c94dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2c94e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c94e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c94e4: 0xa0c500cc  sb          $a1, 0xCC($a2)
    ctx->pc = 0x2c94e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 204), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c94e8: 0x10e0053b  beqz        $a3, . + 4 + (0x53B << 2)
    ctx->pc = 0x2C94E8u;
    {
        const bool branch_taken_0x2c94e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94E8u;
        // 0x2c94ec: 0xa0c200cd  sb          $v0, 0xCD($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 205), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94e8) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2C94F0u;
label_2c94f0:
    // 0x2c94f0: 0x90c300cc  lbu         $v1, 0xCC($a2)
    ctx->pc = 0x2c94f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
label_2c94f4:
    // 0x2c94f4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2c94f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2c94f8: 0x90c200cd  lbu         $v0, 0xCD($a2)
    ctx->pc = 0x2c94f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 205)));
    // 0x2c94fc: 0x109382b  sltu        $a3, $t0, $t1
    ctx->pc = 0x2c94fcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c9500: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c9500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9504: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c9504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9508: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c9508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c950c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c9510: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c9510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9514: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9518: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c9518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c951c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c9520: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c9520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9524: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c9524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9528: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c9528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c952c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c9530: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c9530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9534: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c9534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9538: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c9538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c953c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c9540: 0xa0c300cc  sb          $v1, 0xCC($a2)
    ctx->pc = 0x2c9540u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9544: 0x14e0ffea  bnez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C9544u;
    {
        const bool branch_taken_0x2c9544 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9544u;
        // 0x2c9548: 0xa0c200cd  sb          $v0, 0xCD($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 205), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9544) {
            ctx->pc = 0x2C94F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c94f0;
        }
    }
    ctx->pc = 0x2C954Cu;
    // 0x2c954c: 0x10000523  b           . + 4 + (0x523 << 2)
    ctx->pc = 0x2C954Cu;
    {
        const bool branch_taken_0x2c954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C954Cu;
        // 0x2c9550: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c954c) {
            ctx->pc = 0x2CA9DCu;
            goto label_2ca9dc;
        }
    }
    ctx->pc = 0x2C9554u;
label_2c9554:
    // 0x2c9554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c9554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9558: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x2c9558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x2c955c: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C955Cu;
    {
        const bool branch_taken_0x2c955c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C955Cu;
        // 0x2c9560: 0x3c07006b  lui         $a3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c955c) {
            ctx->pc = 0x2C9584u;
            goto label_2c9584;
        }
    }
    ctx->pc = 0x2C9564u;
    // 0x2c9564: 0x0  nop
    ctx->pc = 0x2c9564u;
    // NOP
label_2c9568:
    // 0x2c9568: 0x8d0200ac  lw          $v0, 0xAC($t0)
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x2c956c: 0x8d0800dc  lw          $t0, 0xDC($t0)
    ctx->pc = 0x2c956cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
    // 0x2c9570: 0x0  nop
    ctx->pc = 0x2c9570u;
    // NOP
    // 0x2c9574: 0x0  nop
    ctx->pc = 0x2c9574u;
    // NOP
    // 0x2c9578: 0x0  nop
    ctx->pc = 0x2c9578u;
    // NOP
    // 0x2c957c: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C957Cu;
    {
        const bool branch_taken_0x2c957c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C957Cu;
        // 0x2c9580: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c957c) {
            ctx->pc = 0x2C9568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9568;
        }
    }
    ctx->pc = 0x2C9584u;
label_2c9584:
    // 0x2c9584: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x2c9584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9588: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x2c9588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c958c: 0xc4e93b48  lwc1        $f9, 0x3B48($a3)
    ctx->pc = 0x2c958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 15176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c9590: 0xe7b70008  swc1        $f23, 0x8($sp)
    ctx->pc = 0x2c9590u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c9594: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2c9594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x2c9598: 0x544021  addu        $t0, $v0, $s4
    ctx->pc = 0x2c9598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c959c: 0xe7b70004  swc1        $f23, 0x4($sp)
    ctx->pc = 0x2c959cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c95a0: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x2c95a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c95a4: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x2c95a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c95a8: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x2c95a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c95ac: 0x110000fc  beqz        $t0, . + 4 + (0xFC << 2)
    ctx->pc = 0x2C95ACu;
    {
        const bool branch_taken_0x2c95ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95ACu;
        // 0x2c95b0: 0xe7b70010  swc1        $f23, 0x10($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95ac) {
            ctx->pc = 0x2C99A0u;
            goto label_2c99a0;
        }
    }
    ctx->pc = 0x2C95B4u;
    // 0x2c95b4: 0x8d0a00ac  lw          $t2, 0xAC($t0)
    ctx->pc = 0x2c95b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
label_2c95b8:
    // 0x2c95b8: 0x5400005  bltz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C95B8u;
    {
        const bool branch_taken_0x2c95b8 = (GPR_S64(ctx, 10) < 0);
        ctx->pc = 0x2C95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95B8u;
        // 0x2c95bc: 0x250b000c  addiu       $t3, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95b8) {
            ctx->pc = 0x2C95D0u;
            goto label_2c95d0;
        }
    }
    ctx->pc = 0x2C95C0u;
    // 0x2c95c0: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x2c95c0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c95c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c95c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c95c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C95C8u;
    {
        const bool branch_taken_0x2c95c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95C8u;
        // 0x2c95cc: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95c8) {
            ctx->pc = 0x2C95ECu;
            goto label_2c95ec;
        }
    }
    ctx->pc = 0x2C95D0u;
label_2c95d0:
    // 0x2c95d0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x2c95d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2c95d4: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x2c95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2c95d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c95d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c95dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c95dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c95e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c95e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c95e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c95e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c95e8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2c95e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c95ec:
    // 0x2c95ec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c95ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c95f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c95f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c95f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c95f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c95f8: 0x5400005  bltz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C95F8u;
    {
        const bool branch_taken_0x2c95f8 = (GPR_S64(ctx, 10) < 0);
        ctx->pc = 0x2C95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95F8u;
        // 0x2c95fc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95f8) {
            ctx->pc = 0x2C9610u;
            goto label_2c9610;
        }
    }
    ctx->pc = 0x2C9600u;
    // 0x2c9600: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x2c9600u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9604: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9608: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9608u;
    {
        const bool branch_taken_0x2c9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9608u;
        // 0x2c960c: 0xc5000004  lwc1        $f0, 0x4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9608) {
            ctx->pc = 0x2C962Cu;
            goto label_2c962c;
        }
    }
    ctx->pc = 0x2C9610u;
label_2c9610:
    // 0x2c9610: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x2c9610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2c9614: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x2c9614u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2c9618: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c9618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c961c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c961cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9620: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9624: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c9624u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c9628: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2c9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c962c:
    // 0x2c962c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9630: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c9630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c9634: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9638: 0x5400005  bltz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9638u;
    {
        const bool branch_taken_0x2c9638 = (GPR_S64(ctx, 10) < 0);
        ctx->pc = 0x2C963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9638u;
        // 0x2c963c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9638) {
            ctx->pc = 0x2C9650u;
            goto label_2c9650;
        }
    }
    ctx->pc = 0x2C9640u;
    // 0x2c9640: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x2c9640u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9644: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9648u;
    {
        const bool branch_taken_0x2c9648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9648u;
        // 0x2c964c: 0xc5000008  lwc1        $f0, 0x8($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9648) {
            ctx->pc = 0x2C966Cu;
            goto label_2c966c;
        }
    }
    ctx->pc = 0x2C9650u;
label_2c9650:
    // 0x2c9650: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x2c9650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2c9654: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x2c9654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2c9658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c9658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c965c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c965cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9660: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9664: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c9664u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c9668: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2c9668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c966c:
    // 0x2c966c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2c966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9670: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c9670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c9674: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9678: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2c9678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c967c: 0x114000c5  beqz        $t2, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2C967Cu;
    {
        const bool branch_taken_0x2c967c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C967Cu;
        // 0x2c9680: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c967c) {
            ctx->pc = 0x2C9994u;
            goto label_2c9994;
        }
    }
    ctx->pc = 0x2C9684u;
    // 0x2c9684: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2c9684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9688: 0x1940003b  blez        $t2, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C9688u;
    {
        const bool branch_taken_0x2c9688 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2C968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9688u;
        // 0x2c968c: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9688) {
            ctx->pc = 0x2C9778u;
            goto label_2c9778;
        }
    }
    ctx->pc = 0x2C9690u;
    // 0x2c9690: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C9690u;
    {
        const bool branch_taken_0x2c9690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9690u;
        // 0x2c9694: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9690) {
            ctx->pc = 0x2C97E8u;
            goto label_2c97e8;
        }
    }
    ctx->pc = 0x2C9698u;
    // 0x2c9698: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C9698u;
    {
        const bool branch_taken_0x2c9698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9698) {
            ctx->pc = 0x2C969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9698u;
            // 0x2c969c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9780u;
            goto label_2c9780;
        }
    }
    ctx->pc = 0x2C96A0u;
    // 0x2c96a0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c96a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c96a4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C96A4u;
    {
        const bool branch_taken_0x2c96a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c96a4) {
            ctx->pc = 0x2C96A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C96A4u;
            // 0x2c96a8: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9718u;
            goto label_2c9718;
        }
    }
    ctx->pc = 0x2C96ACu;
    // 0x2c96ac: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c96b0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c96b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c96b4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c96b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c96b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c96b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c96bc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c96bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c96c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c96c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c96c4: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2c96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c96c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c96c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c96cc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c96ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c96d0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2c96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c96d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c96d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c96d8: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c96d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c96dc: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x2c96dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c96e0: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c96e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c96e4: 0x0  nop
    ctx->pc = 0x2c96e4u;
    // NOP
    // 0x2c96e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C96E8u;
    {
        const bool branch_taken_0x2c96e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96E8u;
        // 0x2c96ec: 0x25640028  addiu       $a0, $t3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96e8) {
            ctx->pc = 0x2C9710u;
            goto label_2c9710;
        }
    }
    ctx->pc = 0x2C96F0u;
    // 0x2c96f0: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x2c96f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c96f4: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x2c96f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c96f8: 0x8d650008  lw          $a1, 0x8($t3)
    ctx->pc = 0x2c96f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2c96fc: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2c96fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9700: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2c9700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9704: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2c9704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2c9708: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c9708u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2c970c: 0x25640028  addiu       $a0, $t3, 0x28
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
label_2c9710:
    // 0x2c9710: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c9710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9714: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9718:
    // 0x2c9718: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c971c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9720: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9724: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c9724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9728: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c972c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2c972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9730: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c9730u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c9734: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c9738: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2c9738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c973c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c973cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c9740: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c9740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c9744: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2c9744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9748: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c9748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c974c: 0x0  nop
    ctx->pc = 0x2c974cu;
    // NOP
    // 0x2c9750: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9750u;
    {
        const bool branch_taken_0x2c9750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9750u;
        // 0x2c9754: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9750) {
            ctx->pc = 0x2C9774u;
            goto label_2c9774;
        }
    }
    ctx->pc = 0x2C9758u;
    // 0x2c9758: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x2c9758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2c975c: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x2c975cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2c9760: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x2c9760u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c9764: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x2c9764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9768: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x2c9768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c976c: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x2c976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x2c9770: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c9770u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_2c9774:
    // 0x2c9774: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2c9774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_2c9778:
    // 0x2c9778: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c977c: 0x0  nop
    ctx->pc = 0x2c977cu;
    // NOP
label_2c9780:
    // 0x2c9780: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9784: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9788: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c978c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9790: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c9794: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2c9794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9798: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c9798u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c979c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c979cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c97a0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2c97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c97a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c97a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c97a8: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c97a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c97ac: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2c97acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c97b0: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c97b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c97b4: 0x0  nop
    ctx->pc = 0x2c97b4u;
    // NOP
    // 0x2c97b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C97B8u;
    {
        const bool branch_taken_0x2c97b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97B8u;
        // 0x2c97bc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97b8) {
            ctx->pc = 0x2C97DCu;
            goto label_2c97dc;
        }
    }
    ctx->pc = 0x2C97C0u;
    // 0x2c97c0: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x2c97c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c97c4: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x2c97c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c97c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2c97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c97cc: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x2c97ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c97d0: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x2c97d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c97d4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2c97d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2c97d8: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c97d8u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_2c97dc:
    // 0x2c97dc: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2c97dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c97e0: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2C97E0u;
    {
        const bool branch_taken_0x2c97e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97E0u;
        // 0x2c97e4: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97e0) {
            ctx->pc = 0x2C9994u;
            goto label_2c9994;
        }
    }
    ctx->pc = 0x2C97E8u;
label_2c97e8:
    // 0x2c97e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c97e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2c97ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c97f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97f4: 0x0  nop
    ctx->pc = 0x2c97f4u;
    // NOP
label_2c97f8:
    // 0x2c97f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c97fc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c97fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9800: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9804: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9804u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9808: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c980c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c980cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c9810: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2c9810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9814: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c9814u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c9818: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c981c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9820: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c9820u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c9824: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c9824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c9828: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2c9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c982c: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c982cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9830: 0x0  nop
    ctx->pc = 0x2c9830u;
    // NOP
    // 0x2c9834: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2C9834u;
    {
        const bool branch_taken_0x2c9834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9834) {
            ctx->pc = 0x2C9838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9834u;
            // 0x2c9838: 0xc4600028  lwc1        $f0, 0x28($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9860u;
            goto label_2c9860;
        }
    }
    ctx->pc = 0x2C983Cu;
    // 0x2c983c: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x2c983cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2c9840: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x2c9840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2c9844: 0x8c6d0008  lw          $t5, 0x8($v1)
    ctx->pc = 0x2c9844u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9848: 0xb3ac0047  sdl         $t4, 0x47($sp)
    ctx->pc = 0x2c9848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c984c: 0xb7ac0040  sdr         $t4, 0x40($sp)
    ctx->pc = 0x2c984cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9850: 0xafad0048  sw          $t5, 0x48($sp)
    ctx->pc = 0x2c9850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
    // 0x2c9854: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c9854u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2c9858: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2c9858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c985c: 0x0  nop
    ctx->pc = 0x2c985cu;
    // NOP
label_2c9860:
    // 0x2c9860: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9864: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9868: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9868u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c986c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9870: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c9874: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2c9874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9878: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c9878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c987c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c987cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c9880: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2c9880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9884: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c9884u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c9888: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c9888u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c988c: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x2c988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9890: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c9890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9894: 0x0  nop
    ctx->pc = 0x2c9894u;
    // NOP
    // 0x2c9898: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9898u;
    {
        const bool branch_taken_0x2c9898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9898) {
            ctx->pc = 0x2C989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9898u;
            // 0x2c989c: 0xc4600050  lwc1        $f0, 0x50($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C98C0u;
            goto label_2c98c0;
        }
    }
    ctx->pc = 0x2C98A0u;
    // 0x2c98a0: 0x686c002f  ldl         $t4, 0x2F($v1)
    ctx->pc = 0x2c98a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2c98a4: 0x6c6c0028  ldr         $t4, 0x28($v1)
    ctx->pc = 0x2c98a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2c98a8: 0x8c6d0030  lw          $t5, 0x30($v1)
    ctx->pc = 0x2c98a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2c98ac: 0xb3ac0047  sdl         $t4, 0x47($sp)
    ctx->pc = 0x2c98acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c98b0: 0xb7ac0040  sdr         $t4, 0x40($sp)
    ctx->pc = 0x2c98b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c98b4: 0xafad0048  sw          $t5, 0x48($sp)
    ctx->pc = 0x2c98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
    // 0x2c98b8: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c98b8u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2c98bc: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x2c98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c98c0:
    // 0x2c98c0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c98c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c98c4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c98c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c98c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c98c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c98cc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c98ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c98d0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c98d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c98d4: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x2c98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c98d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c98d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c98dc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c98dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c98e0: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x2c98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c98e4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c98e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c98e8: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c98e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c98ec: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x2c98ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c98f0: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c98f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c98f4: 0x0  nop
    ctx->pc = 0x2c98f4u;
    // NOP
    // 0x2c98f8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2C98F8u;
    {
        const bool branch_taken_0x2c98f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c98f8) {
            ctx->pc = 0x2C98FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C98F8u;
            // 0x2c98fc: 0xc4600078  lwc1        $f0, 0x78($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9920u;
            goto label_2c9920;
        }
    }
    ctx->pc = 0x2C9900u;
    // 0x2c9900: 0x686c0057  ldl         $t4, 0x57($v1)
    ctx->pc = 0x2c9900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2c9904: 0x6c6c0050  ldr         $t4, 0x50($v1)
    ctx->pc = 0x2c9904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2c9908: 0x8c6d0058  lw          $t5, 0x58($v1)
    ctx->pc = 0x2c9908u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2c990c: 0xb3ac0047  sdl         $t4, 0x47($sp)
    ctx->pc = 0x2c990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9910: 0xb7ac0040  sdr         $t4, 0x40($sp)
    ctx->pc = 0x2c9910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9914: 0xafad0048  sw          $t5, 0x48($sp)
    ctx->pc = 0x2c9914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
    // 0x2c9918: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c9918u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2c991c: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x2c991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9920:
    // 0x2c9920: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9924: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9928: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9928u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c992c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9930: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c9934: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x2c9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9938: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c9938u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c993c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c993cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c9940: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x2c9940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9944: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c9944u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c9948: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c9948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c994c: 0xc4c00084  lwc1        $f0, 0x84($a2)
    ctx->pc = 0x2c994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9950: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2c9950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9954: 0x0  nop
    ctx->pc = 0x2c9954u;
    // NOP
    // 0x2c9958: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9958u;
    {
        const bool branch_taken_0x2c9958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9958u;
        // 0x2c995c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9958) {
            ctx->pc = 0x2C997Cu;
            goto label_2c997c;
        }
    }
    ctx->pc = 0x2C9960u;
    // 0x2c9960: 0x686c007f  ldl         $t4, 0x7F($v1)
    ctx->pc = 0x2c9960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2c9964: 0x6c6c0078  ldr         $t4, 0x78($v1)
    ctx->pc = 0x2c9964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2c9968: 0x8c6d0080  lw          $t5, 0x80($v1)
    ctx->pc = 0x2c9968u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2c996c: 0xb3ac0047  sdl         $t4, 0x47($sp)
    ctx->pc = 0x2c996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9970: 0xb7ac0040  sdr         $t4, 0x40($sp)
    ctx->pc = 0x2c9970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9974: 0xafad0048  sw          $t5, 0x48($sp)
    ctx->pc = 0x2c9974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
    // 0x2c9978: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c9978u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_2c997c:
    // 0x2c997c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2c9980: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2c9980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2c9984: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x2c9984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x2c9988: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2c9988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c998c: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2C998Cu;
    {
        const bool branch_taken_0x2c998c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C998Cu;
        // 0x2c9990: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c998c) {
            ctx->pc = 0x2C97F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97f8;
        }
    }
    ctx->pc = 0x2C9994u;
label_2c9994:
    // 0x2c9994: 0x8d0800dc  lw          $t0, 0xDC($t0)
    ctx->pc = 0x2c9994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
    // 0x2c9998: 0x5500ff07  bnel        $t0, $zero, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x2C9998u;
    {
        const bool branch_taken_0x2c9998 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9998) {
            ctx->pc = 0x2C999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9998u;
            // 0x2c999c: 0x8d0a00ac  lw          $t2, 0xAC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c95b8;
        }
    }
    ctx->pc = 0x2C99A0u;
label_2c99a0:
    // 0x2c99a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c99a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c99a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99a8: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x2c99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x2c99ac: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2C99ACu;
    SET_GPR_U32(ctx, 31, 0x2C99B4u);
    ctx->pc = 0x2C99B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99ACu;
    // 0x2c99b0: 0x7fb90080  sq          $t9, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2C99ACu, 0x2C99B4u)) {
        return;
    }
    ctx->pc = 0x2C99B4u;
label_2c99b4:
    // 0x2c99b4: 0x7ba70070  lq          $a3, 0x70($sp)
    ctx->pc = 0x2c99b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c99b8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C99B8u;
    {
        const bool branch_taken_0x2c99b8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99B8u;
        // 0x2c99bc: 0x7bb90080  lq          $t9, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99b8) {
            ctx->pc = 0x2C99D0u;
            goto label_2c99d0;
        }
    }
    ctx->pc = 0x2C99C0u;
    // 0x2c99c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2c99c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c99c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c99c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c99c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C99C8u;
    {
        const bool branch_taken_0x2c99c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c99c8) {
            ctx->pc = 0x2C99E8u;
            goto label_2c99e8;
        }
    }
    ctx->pc = 0x2C99D0u;
label_2c99d0:
    // 0x2c99d0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2c99d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2c99d4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2c99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2c99d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c99d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c99dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c99dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c99e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c99e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c99e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c99e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c99e8:
    // 0x2c99e8: 0x4600c043  div.s       $f1, $f24, $f0
    ctx->pc = 0x2c99e8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[0]);
    // 0x2c99ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2c99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c99f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c99f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c99f4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C99F4u;
    {
        const bool branch_taken_0x2c99f4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99F4u;
        // 0x2c99f8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99f4) {
            ctx->pc = 0x2C9A0Cu;
            goto label_2c9a0c;
        }
    }
    ctx->pc = 0x2C99FCu;
    // 0x2c99fc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2c99fcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c9a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c9a04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A04u;
    {
        const bool branch_taken_0x2c9a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a04) {
            ctx->pc = 0x2C9A24u;
            goto label_2c9a24;
        }
    }
    ctx->pc = 0x2C9A0Cu;
label_2c9a0c:
    // 0x2c9a0c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2c9a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2c9a10: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2c9a14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c9a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c9a20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c9a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c9a24:
    // 0x2c9a24: 0x4600c043  div.s       $f1, $f24, $f0
    ctx->pc = 0x2c9a24u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[0]);
    // 0x2c9a28: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2c9a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9a30: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9A30u;
    {
        const bool branch_taken_0x2c9a30 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A30u;
        // 0x2c9a34: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a30) {
            ctx->pc = 0x2C9A48u;
            goto label_2c9a48;
        }
    }
    ctx->pc = 0x2C9A38u;
    // 0x2c9a38: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2c9a38u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9a3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c9a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c9a40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A40u;
    {
        const bool branch_taken_0x2c9a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a40) {
            ctx->pc = 0x2C9A60u;
            goto label_2c9a60;
        }
    }
    ctx->pc = 0x2C9A48u;
label_2c9a48:
    // 0x2c9a48: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2c9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2c9a4c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2c9a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2c9a50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9a58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c9a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c9a5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c9a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c9a60:
    // 0x2c9a60: 0x4600c043  div.s       $f1, $f24, $f0
    ctx->pc = 0x2c9a60u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[0]);
    // 0x2c9a64: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2c9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a68: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x2c9a68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9a6c: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2c9a6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c9a70: 0x8fac0068  lw          $t4, 0x68($sp)
    ctx->pc = 0x2c9a70u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c9a74: 0x118000fa  beqz        $t4, . + 4 + (0xFA << 2)
    ctx->pc = 0x2C9A74u;
    {
        const bool branch_taken_0x2c9a74 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A74u;
        // 0x2c9a78: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a74) {
            ctx->pc = 0x2C9E60u;
            goto label_2c9e60;
        }
    }
    ctx->pc = 0x2C9A7Cu;
    // 0x2c9a7c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2c9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c9a80: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x2c9a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9a84: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x2c9a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c9a88: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2c9a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c9a8c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c9a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c9a90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9A90u;
    {
        const bool branch_taken_0x2c9a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A90u;
        // 0x2c9a94: 0x8c6500b0  lw          $a1, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a90) {
            ctx->pc = 0x2C9AF0u;
            goto label_2c9af0;
        }
    }
    ctx->pc = 0x2C9A98u;
    // 0x2c9a98: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x2c9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_2c9a9c:
    // 0x2c9a9c: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x2c9a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c9aa0: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x2c9aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c9aa4: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x2c9aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c9aa8: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x2c9aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c9aac: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x2c9aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c9ab0: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x2c9ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c9ab4: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x2c9ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c9ab8: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x2c9ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c9abc: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2c9abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ac0: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x2c9ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ac4: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x2c9ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ac8: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x2c9ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9acc: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x2c9accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ad0: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x2c9ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ad4: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x2c9ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ad8: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x2c9ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9adc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c9adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c9ae0: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C9AE0u;
    {
        const bool branch_taken_0x2c9ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AE0u;
        // 0x2c9ae4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ae0) {
            ctx->pc = 0x2C9A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9a9c;
        }
    }
    ctx->pc = 0x2C9AE8u;
    // 0x2c9ae8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C9AE8u;
    {
        const bool branch_taken_0x2c9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AE8u;
        // 0x2c9aec: 0x2561818  mult        $v1, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ae8) {
            ctx->pc = 0x2C9B24u;
            goto label_2c9b24;
        }
    }
    ctx->pc = 0x2C9AF0u;
label_2c9af0:
    // 0x2c9af0: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x2c9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_2c9af4:
    // 0x2c9af4: 0xdc8b0000  ld          $t3, 0x0($a0)
    ctx->pc = 0x2c9af4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9af8: 0xdc8c0008  ld          $t4, 0x8($a0)
    ctx->pc = 0x2c9af8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c9afc: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x2c9afcu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c9b00: 0xdc860018  ld          $a2, 0x18($a0)
    ctx->pc = 0x2c9b00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c9b04: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x2c9b04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x2c9b08: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x2c9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x2c9b0c: 0xfc6d0010  sd          $t5, 0x10($v1)
    ctx->pc = 0x2c9b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 13));
    // 0x2c9b10: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x2c9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x2c9b14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c9b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c9b18: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C9B18u;
    {
        const bool branch_taken_0x2c9b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B18u;
        // 0x2c9b1c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b18) {
            ctx->pc = 0x2C9AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9af4;
        }
    }
    ctx->pc = 0x2C9B20u;
    // 0x2c9b20: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x2c9b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c9b24:
    // 0x2c9b24: 0x2362018  mult        $a0, $s1, $s6
    ctx->pc = 0x2c9b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c9b28: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2c9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2c9b2c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x2c9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2c9b30: 0x8c4800dc  lw          $t0, 0xDC($v0)
    ctx->pc = 0x2c9b30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x2c9b34: 0x110000c1  beqz        $t0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2C9B34u;
    {
        const bool branch_taken_0x2c9b34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B34u;
        // 0x2c9b38: 0xac6500b0  sw          $a1, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b34) {
            ctx->pc = 0x2C9E3Cu;
            goto label_2c9e3c;
        }
    }
    ctx->pc = 0x2C9B3Cu;
    // 0x2c9b3c: 0x241200e0  addiu       $s2, $zero, 0xE0
    ctx->pc = 0x2c9b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c9b40: 0x8d0a00ac  lw          $t2, 0xAC($t0)
    ctx->pc = 0x2c9b40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x2c9b44: 0x0  nop
    ctx->pc = 0x2c9b44u;
    // NOP
label_2c9b48:
    // 0x2c9b48: 0x250b000c  addiu       $t3, $t0, 0xC
    ctx->pc = 0x2c9b48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2c9b4c: 0x114000b8  beqz        $t2, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2C9B4Cu;
    {
        const bool branch_taken_0x2c9b4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B4Cu;
        // 0x2c9b50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b4c) {
            ctx->pc = 0x2C9E30u;
            goto label_2c9e30;
        }
    }
    ctx->pc = 0x2C9B54u;
    // 0x2c9b54: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x2c9b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9b58: 0xc7878220  lwc1        $f7, -0x7DE0($gp)
    ctx->pc = 0x2c9b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c9b5c: 0x536021  addu        $t4, $v0, $s3
    ctx->pc = 0x2c9b5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2c9b60:
    // 0x2c9b60: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2c9b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c9b64: 0x8d8d00ac  lw          $t5, 0xAC($t4)
    ctx->pc = 0x2c9b64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 172)));
    // 0x2c9b68: 0x910e00cc  lbu         $t6, 0xCC($t0)
    ctx->pc = 0x2c9b68u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 204)));
    // 0x2c9b6c: 0x2585000c  addiu       $a1, $t4, 0xC
    ctx->pc = 0x2c9b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x2c9b70: 0x910600cd  lbu         $a2, 0xCD($t0)
    ctx->pc = 0x2c9b70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 205)));
    // 0x2c9b74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c9b74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b78: 0x11a00089  beqz        $t5, . + 4 + (0x89 << 2)
    ctx->pc = 0x2C9B78u;
    {
        const bool branch_taken_0x2c9b78 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B78u;
        // 0x2c9b7c: 0x256f0028  addiu       $t7, $t3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b78) {
            ctx->pc = 0x2C9DA0u;
            goto label_2c9da0;
        }
    }
    ctx->pc = 0x2C9B80u;
    // 0x2c9b80: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x2c9b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c9b84: 0x4607b142  mul.s       $f5, $f22, $f7
    ctx->pc = 0x2c9b84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[7]);
    // 0x2c9b88: 0xc5640004  lwc1        $f4, 0x4($t3)
    ctx->pc = 0x2c9b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9b8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c9b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b90: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x2c9b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9b94: 0x19a0002a  blez        $t5, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C9B94u;
    {
        const bool branch_taken_0x2c9b94 = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x2C9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B94u;
        // 0x2c9b98: 0x31a30003  andi        $v1, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b94) {
            ctx->pc = 0x2C9C40u;
            goto label_2c9c40;
        }
    }
    ctx->pc = 0x2C9B9Cu;
    // 0x2c9b9c: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C9B9Cu;
    {
        const bool branch_taken_0x2c9b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B9Cu;
        // 0x2c9ba0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b9c) {
            ctx->pc = 0x2C9C8Cu;
            goto label_2c9c8c;
        }
    }
    ctx->pc = 0x2C9BA4u;
    // 0x2c9ba4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C9BA4u;
    {
        const bool branch_taken_0x2c9ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ba4) {
            ctx->pc = 0x2C9BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9BA4u;
            // 0x2c9ba8: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C44u;
            goto label_2c9c44;
        }
    }
    ctx->pc = 0x2C9BACu;
    // 0x2c9bac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c9bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c9bb0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C9BB0u;
    {
        const bool branch_taken_0x2c9bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bb0) {
            ctx->pc = 0x2C9BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9BB0u;
            // 0x2c9bb4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C00u;
            goto label_2c9c00;
        }
    }
    ctx->pc = 0x2C9BB8u;
    // 0x2c9bb8: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x2c9bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9bbc: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9bc0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9bc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9bc4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2c9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9bc8: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9bc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9bcc: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9bccu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9bd0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9bd4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9bd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9bd8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9bd8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9bdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9be0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9be4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9be8: 0x0  nop
    ctx->pc = 0x2c9be8u;
    // NOP
    // 0x2c9bec: 0x4501008c  bc1t        . + 4 + (0x8C << 2)
    ctx->pc = 0x2C9BECu;
    {
        const bool branch_taken_0x2c9bec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BECu;
        // 0x2c9bf0: 0x25840034  addiu       $a0, $t4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9bec) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9BF4u;
    // 0x2c9bf4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c9bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9bf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c9bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bfc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9c00:
    // 0x2c9c00: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9c04: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9c04u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9c08: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2c9c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9c0c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9c0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9c10: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9c10u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9c14: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c9c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9c18: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9c1c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9c1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9c20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9c28: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9c2c: 0x0  nop
    ctx->pc = 0x2c9c2cu;
    // NOP
    // 0x2c9c30: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
    ctx->pc = 0x2C9C30u;
    {
        const bool branch_taken_0x2c9c30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C30u;
        // 0x2c9c34: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c30) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9C38u;
    // 0x2c9c38: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2c9c3c: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x2c9c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_2c9c40:
    // 0x2c9c40: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9c44:
    // 0x2c9c44: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9c44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9c48: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9c48u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9c4c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2c9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9c50: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9c50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9c54: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9c54u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9c58: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9c5c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9c5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9c60: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9c60u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9c64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9c68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9c6c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9c70: 0x0  nop
    ctx->pc = 0x2c9c70u;
    // NOP
    // 0x2c9c74: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x2C9C74u;
    {
        const bool branch_taken_0x2c9c74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C74u;
        // 0x2c9c78: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c74) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9C7Cu;
    // 0x2c9c7c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2c9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2c9c80: 0x12d102b  sltu        $v0, $t1, $t5
    ctx->pc = 0x2c9c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2c9c84: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C9C84u;
    {
        const bool branch_taken_0x2c9c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C84u;
        // 0x2c9c88: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c84) {
            ctx->pc = 0x2C9DA0u;
            goto label_2c9da0;
        }
    }
    ctx->pc = 0x2C9C8Cu;
label_2c9c8c:
    // 0x2c9c8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c9c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c90: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2c9c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c94: 0x0  nop
    ctx->pc = 0x2c9c94u;
    // NOP
label_2c9c98:
    // 0x2c9c98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c9c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9ca0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9ca0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9ca4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2c9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9ca8: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9ca8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9cac: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9cacu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9cb0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c9cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9cb4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9cb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9cb8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9cb8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9cbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9cc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9cc4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9cc8: 0x0  nop
    ctx->pc = 0x2c9cc8u;
    // NOP
    // 0x2c9ccc: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x2C9CCCu;
    {
        const bool branch_taken_0x2c9ccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CCCu;
        // 0x2c9cd0: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ccc) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9CD4u;
    // 0x2c9cd4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2c9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9cd8: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9cdc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9cdcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9ce0: 0xc4e2002c  lwc1        $f2, 0x2C($a3)
    ctx->pc = 0x2c9ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9ce4: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9ce4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9ce8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9ce8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9cec: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2c9cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9cf0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9cf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9cf4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9cf4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9cf8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9cfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9d00: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9d04: 0x0  nop
    ctx->pc = 0x2c9d04u;
    // NOP
    // 0x2c9d08: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x2C9D08u;
    {
        const bool branch_taken_0x2c9d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D08u;
        // 0x2c9d0c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d08) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9D10u;
    // 0x2c9d10: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x2c9d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9d14: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9d18: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9d18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9d1c: 0xc4e20054  lwc1        $f2, 0x54($a3)
    ctx->pc = 0x2c9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9d20: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9d20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9d24: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9d24u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9d28: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x2c9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9d2c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9d2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9d30: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9d30u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9d34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9d3c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9d40: 0x0  nop
    ctx->pc = 0x2c9d40u;
    // NOP
    // 0x2c9d44: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x2C9D44u;
    {
        const bool branch_taken_0x2c9d44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D44u;
        // 0x2c9d48: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d44) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9D4Cu;
    // 0x2c9d4c: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2c9d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9d50: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2c9d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c9d54: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9d54u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9d58: 0xc4e2007c  lwc1        $f2, 0x7C($a3)
    ctx->pc = 0x2c9d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9d5c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2c9d5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c9d60: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9d60u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9d64: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x2c9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9d68: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2c9d68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c9d6c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9d6cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9d70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9d74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9d78: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c9d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9d7c: 0x0  nop
    ctx->pc = 0x2c9d7cu;
    // NOP
    // 0x2c9d80: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2C9D80u;
    {
        const bool branch_taken_0x2c9d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D80u;
        // 0x2c9d84: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d80) {
            ctx->pc = 0x2C9E20u;
            goto label_2c9e20;
        }
    }
    ctx->pc = 0x2C9D88u;
    // 0x2c9d88: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2c9d8c: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x2c9d90: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2c9d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2c9d94: 0x12d102b  sltu        $v0, $t1, $t5
    ctx->pc = 0x2c9d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2c9d98: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2C9D98u;
    {
        const bool branch_taken_0x2c9d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D98u;
        // 0x2c9d9c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d98) {
            ctx->pc = 0x2C9C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9c98;
        }
    }
    ctx->pc = 0x2C9DA0u;
label_2c9da0:
    // 0x2c9da0: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x2c9da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c9da4: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x2c9da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c9da8: 0x6964000f  ldl         $a0, 0xF($t3)
    ctx->pc = 0x2c9da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c9dac: 0x6d640008  ldr         $a0, 0x8($t3)
    ctx->pc = 0x2c9dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c9db0: 0x69670017  ldl         $a3, 0x17($t3)
    ctx->pc = 0x2c9db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c9db4: 0x6d670010  ldr         $a3, 0x10($t3)
    ctx->pc = 0x2c9db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c9db8: 0x6969001f  ldl         $t1, 0x1F($t3)
    ctx->pc = 0x2c9db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c9dbc: 0x6d690018  ldr         $t1, 0x18($t3)
    ctx->pc = 0x2c9dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c9dc0: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x2c9dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dc4: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x2c9dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dc8: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2c9dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dcc: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2c9dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dd0: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x2c9dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dd4: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x2c9dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dd8: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x2c9dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9ddc: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x2c9ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9de0: 0x69630027  ldl         $v1, 0x27($t3)
    ctx->pc = 0x2c9de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c9de4: 0x6d630020  ldr         $v1, 0x20($t3)
    ctx->pc = 0x2c9de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c9de8: 0xb0a30027  sdl         $v1, 0x27($a1)
    ctx->pc = 0x2c9de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9dec: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x2c9decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2c9df0: 0xb4a30020  sdr         $v1, 0x20($a1)
    ctx->pc = 0x2c9df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9df4: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x2c9df4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c9df8: 0x918300cc  lbu         $v1, 0xCC($t4)
    ctx->pc = 0x2c9df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 204)));
    // 0x2c9dfc: 0x4e1004  sllv        $v0, $t6, $v0
    ctx->pc = 0x2c9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c9e00: 0x918400cd  lbu         $a0, 0xCD($t4)
    ctx->pc = 0x2c9e00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 205)));
    // 0x2c9e04: 0x8d8500ac  lw          $a1, 0xAC($t4)
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 172)));
    // 0x2c9e08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c9e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c9e0c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2c9e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2c9e10: 0xa18300cc  sb          $v1, 0xCC($t4)
    ctx->pc = 0x2c9e10u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9e14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c9e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c9e18: 0xa18400cd  sb          $a0, 0xCD($t4)
    ctx->pc = 0x2c9e18u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 205), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9e1c: 0xad8500ac  sw          $a1, 0xAC($t4)
    ctx->pc = 0x2c9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 172), GPR_U32(ctx, 5));
label_2c9e20:
    // 0x2c9e20: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2c9e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e24: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2c9e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c9e28: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2C9E28u;
    {
        const bool branch_taken_0x2c9e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E28u;
        // 0x2c9e2c: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e28) {
            ctx->pc = 0x2C9B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9b60;
        }
    }
    ctx->pc = 0x2C9E30u;
label_2c9e30:
    // 0x2c9e30: 0x8d0800dc  lw          $t0, 0xDC($t0)
    ctx->pc = 0x2c9e30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
    // 0x2c9e34: 0x5500ff44  bnel        $t0, $zero, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2C9E34u;
    {
        const bool branch_taken_0x2c9e34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e34) {
            ctx->pc = 0x2C9E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9E34u;
            // 0x2c9e38: 0x8d0a00ac  lw          $t2, 0xAC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9b48;
        }
    }
    ctx->pc = 0x2C9E3Cu;
label_2c9e3c:
    // 0x2c9e3c: 0x2361818  mult        $v1, $s1, $s6
    ctx->pc = 0x2c9e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9e40: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x2c9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2c9e44: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2c9e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c9e48: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2c9e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c9e4c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9e50: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x2c9e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9e54: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x2c9e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9e58: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x2C9E58u;
    {
        const bool branch_taken_0x2c9e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E58u;
        // 0x2c9e5c: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e58) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2C9E60u;
label_2c9e60:
    // 0x2c9e60: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c9e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9e64: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2c9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9e68: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9e6c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x2c9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9e70: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c9e70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c9e74: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2c9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e78: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c9e78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c9e7c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2c9e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c9e80: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2c9e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c9e84: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2c9e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c9e88: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c9e8c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c9e8cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c9e90: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c9e90u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c9e94: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c9e94u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c9e98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c9e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c9e9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9ea0: 0x461a0834  c.lt.s      $f1, $f26
    ctx->pc = 0x2c9ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9ea4: 0x0  nop
    ctx->pc = 0x2c9ea4u;
    // NOP
    // 0x2c9ea8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C9EA8u;
    {
        const bool branch_taken_0x2c9ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9ea8) {
            ctx->pc = 0x2C9EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9EA8u;
            // 0x2c9eac: 0xe7b80030  swc1        $f24, 0x30($sp) (Delay Slot)
            { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9EB0u;
            goto label_2c9eb0;
        }
    }
    ctx->pc = 0x2C9EB0u;
label_2c9eb0:
    // 0x2c9eb0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9eb4: 0xc7a80038  lwc1        $f8, 0x38($sp)
    ctx->pc = 0x2c9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c9eb8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9ebc: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x2c9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c9ec0: 0x46081942  mul.s       $f5, $f3, $f8
    ctx->pc = 0x2c9ec0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2c9ec4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ec8: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x2c9ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c9ecc: 0x46071042  mul.s       $f1, $f2, $f7
    ctx->pc = 0x2c9eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c9ed0: 0x46070102  mul.s       $f4, $f0, $f7
    ctx->pc = 0x2c9ed0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2c9ed4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2c9ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2c9ed8: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2c9ed8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2c9edc: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2c9edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2c9ee0: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2c9ee0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2c9ee4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2c9ee4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c9ee8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c9ee8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c9eec: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x2c9eecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c9ef0: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2c9ef0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c9ef4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2c9ef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c9ef8: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2c9ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x2c9efc: 0xc50b3b4c  lwc1        $f11, 0x3B4C($t0)
    ctx->pc = 0x2c9efcu;
    { uint32_t bits = FAST_READ32(0x6B3B4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2c9f00: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x2c9f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9f04: 0xc4ea3b48  lwc1        $f10, 0x3B48($a3)
    ctx->pc = 0x2c9f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 15176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c9f08: 0x46005a46  mov.s       $f9, $f11
    ctx->pc = 0x2c9f08u;
    ctx->f[9] = FPU_MOV_S(ctx->f[11]);
    // 0x2c9f0c: 0x544021  addu        $t0, $v0, $s4
    ctx->pc = 0x2c9f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c9f10: 0x1100009d  beqz        $t0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2C9F10u;
    {
        const bool branch_taken_0x2c9f10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F10u;
        // 0x2c9f14: 0x46005386  mov.s       $f14, $f10 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f10) {
            ctx->pc = 0x2CA188u;
            goto label_2ca188;
        }
    }
    ctx->pc = 0x2C9F18u;
    // 0x2c9f18: 0x46003546  mov.s       $f21, $f6
    ctx->pc = 0x2c9f18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[6]);
    // 0x2c9f1c: 0x46003d06  mov.s       $f20, $f7
    ctx->pc = 0x2c9f1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[7]);
    // 0x2c9f20: 0x460044c6  mov.s       $f19, $f8
    ctx->pc = 0x2c9f20u;
    ctx->f[19] = FPU_MOV_S(ctx->f[8]);
    // 0x2c9f24: 0x46001486  mov.s       $f18, $f2
    ctx->pc = 0x2c9f24u;
    ctx->f[18] = FPU_MOV_S(ctx->f[2]);
    // 0x2c9f28: 0x8d0a00ac  lw          $t2, 0xAC($t0)
    ctx->pc = 0x2c9f28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x2c9f2c: 0x0  nop
    ctx->pc = 0x2c9f2cu;
    // NOP
label_2c9f30:
    // 0x2c9f30: 0x250b000c  addiu       $t3, $t0, 0xC
    ctx->pc = 0x2c9f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2c9f34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c9f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f38: 0x11400090  beqz        $t2, . + 4 + (0x90 << 2)
    ctx->pc = 0x2C9F38u;
    {
        const bool branch_taken_0x2c9f38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F38u;
        // 0x2c9f3c: 0x8d0700dc  lw          $a3, 0xDC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f38) {
            ctx->pc = 0x2CA17Cu;
            goto label_2ca17c;
        }
    }
    ctx->pc = 0x2C9F40u;
    // 0x2c9f40: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x2c9f40u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x2c9f44: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2c9f44u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2c9f48: 0x46009bc6  mov.s       $f15, $f19
    ctx->pc = 0x2c9f48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[19]);
    // 0x2c9f4c: 0x46002b46  mov.s       $f13, $f5
    ctx->pc = 0x2c9f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[5]);
    // 0x2c9f50: 0x46009306  mov.s       $f12, $f18
    ctx->pc = 0x2c9f50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[18]);
    // 0x2c9f54: 0x46002206  mov.s       $f8, $f4
    ctx->pc = 0x2c9f54u;
    ctx->f[8] = FPU_MOV_S(ctx->f[4]);
    // 0x2c9f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f5c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x2c9f5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f60: 0x19400003  blez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9F60u;
    {
        const bool branch_taken_0x2c9f60 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2C9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F60u;
        // 0x2c9f64: 0x31420001  andi        $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f60) {
            ctx->pc = 0x2C9F70u;
            goto label_2c9f70;
        }
    }
    ctx->pc = 0x2C9F68u;
    // 0x2c9f68: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C9F68u;
    {
        const bool branch_taken_0x2c9f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F68u;
        // 0x2c9f6c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f68) {
            ctx->pc = 0x2CA020u;
            goto label_2ca020;
        }
    }
    ctx->pc = 0x2C9F70u;
label_2c9f70:
    // 0x2c9f70: 0xc506000c  lwc1        $f6, 0xC($t0)
    ctx->pc = 0x2c9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c9f74: 0xc5670004  lwc1        $f7, 0x4($t3)
    ctx->pc = 0x2c9f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c9f78: 0x46068802  mul.s       $f0, $f17, $f6
    ctx->pc = 0x2c9f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
    // 0x2c9f7c: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x2c9f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9f80: 0x46078042  mul.s       $f1, $f16, $f7
    ctx->pc = 0x2c9f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x2c9f84: 0x46037882  mul.s       $f2, $f15, $f3
    ctx->pc = 0x2c9f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x2c9f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9f90: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2c9f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9f94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9F94u;
    {
        const bool branch_taken_0x2c9f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9f94) {
            ctx->pc = 0x2C9FA8u;
            goto label_2c9fa8;
        }
    }
    ctx->pc = 0x2C9F9Cu;
    // 0x2c9f9c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2c9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2c9fa0: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2c9fa0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2c9fa4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2c9fa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c9fa8:
    // 0x2c9fa8: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x2c9fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9fac: 0x0  nop
    ctx->pc = 0x2c9facu;
    // NOP
    // 0x2c9fb0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9FB0u;
    {
        const bool branch_taken_0x2c9fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9fb0) {
            ctx->pc = 0x2C9FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9FB0u;
            // 0x2c9fb4: 0x46066802  mul.s       $f0, $f13, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9FC8u;
            goto label_2c9fc8;
        }
    }
    ctx->pc = 0x2C9FB8u;
    // 0x2c9fb8: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x2c9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x2c9fbc: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2c9fbcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x2c9fc0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2c9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2c9fc4: 0x46066802  mul.s       $f0, $f13, $f6
    ctx->pc = 0x2c9fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
label_2c9fc8:
    // 0x2c9fc8: 0x46076042  mul.s       $f1, $f12, $f7
    ctx->pc = 0x2c9fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x2c9fcc: 0x46034082  mul.s       $f2, $f8, $f3
    ctx->pc = 0x2c9fccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2c9fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9fd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9fd8: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2c9fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9fdc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9FDCu;
    {
        const bool branch_taken_0x2c9fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9fdc) {
            ctx->pc = 0x2C9FF0u;
            goto label_2c9ff0;
        }
    }
    ctx->pc = 0x2C9FE4u;
    // 0x2c9fe4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2c9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2c9fe8: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x2c9fe8u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x2c9fec: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2c9fecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c9ff0:
    // 0x2c9ff0: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x2c9ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9ff4: 0x0  nop
    ctx->pc = 0x2c9ff4u;
    // NOP
    // 0x2c9ff8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9FF8u;
    {
        const bool branch_taken_0x2c9ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FF8u;
        // 0x2c9ffc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ff8) {
            ctx->pc = 0x2CA00Cu;
            goto label_2ca00c;
        }
    }
    ctx->pc = 0x2CA000u;
    // 0x2ca000: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2ca000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2ca004: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2ca004u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca008: 0x100c82d  daddu       $t9, $t0, $zero
    ctx->pc = 0x2ca008u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ca00c:
    // 0x2ca00c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca010: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2ca010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ca014: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2CA014u;
    {
        const bool branch_taken_0x2ca014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA014u;
        // 0x2ca018: 0x25030034  addiu       $v1, $t0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca014) {
            ctx->pc = 0x2CA17Cu;
            goto label_2ca17c;
        }
    }
    ctx->pc = 0x2CA01Cu;
    // 0x2ca01c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ca01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ca020:
    // 0x2ca020: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ca020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca024: 0x0  nop
    ctx->pc = 0x2ca024u;
    // NOP
label_2ca028:
    // 0x2ca028: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x2ca028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ca02c: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x2ca02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ca030: 0x46068802  mul.s       $f0, $f17, $f6
    ctx->pc = 0x2ca030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
    // 0x2ca034: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2ca034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ca038: 0x46078042  mul.s       $f1, $f16, $f7
    ctx->pc = 0x2ca038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x2ca03c: 0x46037882  mul.s       $f2, $f15, $f3
    ctx->pc = 0x2ca03cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x2ca040: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca044: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca048: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2ca048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca04c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA04Cu;
    {
        const bool branch_taken_0x2ca04c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca04c) {
            ctx->pc = 0x2CA060u;
            goto label_2ca060;
        }
    }
    ctx->pc = 0x2CA054u;
    // 0x2ca054: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x2ca054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x2ca058: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2ca058u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca05c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2ca05cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ca060:
    // 0x2ca060: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x2ca060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca064: 0x0  nop
    ctx->pc = 0x2ca064u;
    // NOP
    // 0x2ca068: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA068u;
    {
        const bool branch_taken_0x2ca068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca068) {
            ctx->pc = 0x2CA06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA068u;
            // 0x2ca06c: 0x46066802  mul.s       $f0, $f13, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA080u;
            goto label_2ca080;
        }
    }
    ctx->pc = 0x2CA070u;
    // 0x2ca070: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x2ca070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x2ca074: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2ca074u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca078: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x2ca078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x2ca07c: 0x46066802  mul.s       $f0, $f13, $f6
    ctx->pc = 0x2ca07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
label_2ca080:
    // 0x2ca080: 0x46076042  mul.s       $f1, $f12, $f7
    ctx->pc = 0x2ca080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x2ca084: 0x46034082  mul.s       $f2, $f8, $f3
    ctx->pc = 0x2ca084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2ca088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca08c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca090: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2ca090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca094: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA094u;
    {
        const bool branch_taken_0x2ca094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca094) {
            ctx->pc = 0x2CA0A8u;
            goto label_2ca0a8;
        }
    }
    ctx->pc = 0x2CA09Cu;
    // 0x2ca09c: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x2ca09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x2ca0a0: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x2ca0a0u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca0a4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2ca0a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ca0a8:
    // 0x2ca0a8: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x2ca0a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca0ac: 0x0  nop
    ctx->pc = 0x2ca0acu;
    // NOP
    // 0x2ca0b0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA0B0u;
    {
        const bool branch_taken_0x2ca0b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca0b0) {
            ctx->pc = 0x2CA0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA0B0u;
            // 0x2ca0b4: 0xc4870028  lwc1        $f7, 0x28($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA0C8u;
            goto label_2ca0c8;
        }
    }
    ctx->pc = 0x2CA0B8u;
    // 0x2ca0b8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2ca0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2ca0bc: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2ca0bcu;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca0c0: 0x100c82d  daddu       $t9, $t0, $zero
    ctx->pc = 0x2ca0c0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0c4: 0xc4870028  lwc1        $f7, 0x28($a0)
    ctx->pc = 0x2ca0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2ca0c8:
    // 0x2ca0c8: 0xc4a6002c  lwc1        $f6, 0x2C($a1)
    ctx->pc = 0x2ca0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ca0cc: 0x46078802  mul.s       $f0, $f17, $f7
    ctx->pc = 0x2ca0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[7]);
    // 0x2ca0d0: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x2ca0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ca0d4: 0x46068042  mul.s       $f1, $f16, $f6
    ctx->pc = 0x2ca0d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x2ca0d8: 0x46037882  mul.s       $f2, $f15, $f3
    ctx->pc = 0x2ca0d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x2ca0dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca0e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca0e4: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2ca0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca0e8: 0x0  nop
    ctx->pc = 0x2ca0e8u;
    // NOP
    // 0x2ca0ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA0ECu;
    {
        const bool branch_taken_0x2ca0ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0ECu;
        // 0x2ca0f0: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0ec) {
            ctx->pc = 0x2CA100u;
            goto label_2ca100;
        }
    }
    ctx->pc = 0x2CA0F4u;
    // 0x2ca0f4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2ca0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2ca0f8: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2ca0f8u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca0fc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2ca0fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ca100:
    // 0x2ca100: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x2ca100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca104: 0x0  nop
    ctx->pc = 0x2ca104u;
    // NOP
    // 0x2ca108: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA108u;
    {
        const bool branch_taken_0x2ca108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca108) {
            ctx->pc = 0x2CA10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA108u;
            // 0x2ca10c: 0x46076802  mul.s       $f0, $f13, $f7 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA120u;
            goto label_2ca120;
        }
    }
    ctx->pc = 0x2CA110u;
    // 0x2ca110: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x2ca110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x2ca114: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2ca114u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca118: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2ca118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2ca11c: 0x46076802  mul.s       $f0, $f13, $f7
    ctx->pc = 0x2ca11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
label_2ca120:
    // 0x2ca120: 0x46066042  mul.s       $f1, $f12, $f6
    ctx->pc = 0x2ca120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2ca124: 0x46034082  mul.s       $f2, $f8, $f3
    ctx->pc = 0x2ca124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2ca128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca12c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca12cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca130: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2ca130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca134: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA134u;
    {
        const bool branch_taken_0x2ca134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca134) {
            ctx->pc = 0x2CA148u;
            goto label_2ca148;
        }
    }
    ctx->pc = 0x2CA13Cu;
    // 0x2ca13c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2ca13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2ca140: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x2ca140u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca144: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2ca144u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ca148:
    // 0x2ca148: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x2ca148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca14c: 0x0  nop
    ctx->pc = 0x2ca14cu;
    // NOP
    // 0x2ca150: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA150u;
    {
        const bool branch_taken_0x2ca150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA150u;
        // 0x2ca154: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca150) {
            ctx->pc = 0x2CA164u;
            goto label_2ca164;
        }
    }
    ctx->pc = 0x2CA158u;
    // 0x2ca158: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2ca158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2ca15c: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2ca15cu;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2ca160: 0x100c82d  daddu       $t9, $t0, $zero
    ctx->pc = 0x2ca160u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ca164:
    // 0x2ca164: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2ca164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2ca168: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2ca168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2ca16c: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x2ca16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2ca170: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2ca170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ca174: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2CA174u;
    {
        const bool branch_taken_0x2ca174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA174u;
        // 0x2ca178: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca174) {
            ctx->pc = 0x2CA028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2CA17Cu;
label_2ca17c:
    // 0x2ca17c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ca17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca180: 0x5500ff6b  bnel        $t0, $zero, . + 4 + (-0x95 << 2)
    ctx->pc = 0x2CA180u;
    {
        const bool branch_taken_0x2ca180 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca180) {
            ctx->pc = 0x2CA184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA180u;
            // 0x2ca184: 0x8d0a00ac  lw          $t2, 0xAC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9f30;
        }
    }
    ctx->pc = 0x2CA188u;
label_2ca188:
    // 0x2ca188: 0x2361018  mult        $v0, $s1, $s6
    ctx->pc = 0x2ca188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ca18c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ca18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca190: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2ca190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ca194: 0x2e31025  or          $v0, $s7, $v1
    ctx->pc = 0x2ca194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x2ca198: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2ca198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2ca19c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CA19Cu;
    {
        const bool branch_taken_0x2ca19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA19Cu;
        // 0x2ca1a0: 0x8c6500b0  lw          $a1, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca19c) {
            ctx->pc = 0x2CA1FCu;
            goto label_2ca1fc;
        }
    }
    ctx->pc = 0x2CA1A4u;
    // 0x2ca1a4: 0x26e200e0  addiu       $v0, $s7, 0xE0
    ctx->pc = 0x2ca1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 224));
label_2ca1a8:
    // 0x2ca1a8: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x2ca1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ca1ac: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x2ca1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ca1b0: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x2ca1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ca1b4: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x2ca1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ca1b8: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x2ca1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ca1bc: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x2ca1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ca1c0: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x2ca1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ca1c4: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x2ca1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ca1c8: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2ca1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1cc: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x2ca1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1d0: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x2ca1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1d4: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x2ca1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1d8: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x2ca1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1dc: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x2ca1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1e0: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x2ca1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1e4: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x2ca1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca1e8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2ca1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ca1ec: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CA1ECu;
    {
        const bool branch_taken_0x2ca1ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1ECu;
        // 0x2ca1f0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1ec) {
            ctx->pc = 0x2CA1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca1a8;
        }
    }
    ctx->pc = 0x2CA1F4u;
    // 0x2ca1f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CA1F4u;
    {
        const bool branch_taken_0x2ca1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1F4u;
        // 0x2ca1f8: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1f4) {
            ctx->pc = 0x2CA230u;
            goto label_2ca230;
        }
    }
    ctx->pc = 0x2CA1FCu;
label_2ca1fc:
    // 0x2ca1fc: 0x26e200e0  addiu       $v0, $s7, 0xE0
    ctx->pc = 0x2ca1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 224));
label_2ca200:
    // 0x2ca200: 0xdc8b0000  ld          $t3, 0x0($a0)
    ctx->pc = 0x2ca200u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ca204: 0xdc8c0008  ld          $t4, 0x8($a0)
    ctx->pc = 0x2ca204u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ca208: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x2ca208u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ca20c: 0xdc860018  ld          $a2, 0x18($a0)
    ctx->pc = 0x2ca20cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ca210: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x2ca210u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x2ca214: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x2ca214u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x2ca218: 0xfc6d0010  sd          $t5, 0x10($v1)
    ctx->pc = 0x2ca218u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 13));
    // 0x2ca21c: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x2ca21cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x2ca220: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ca224: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CA224u;
    {
        const bool branch_taken_0x2ca224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA224u;
        // 0x2ca228: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca224) {
            ctx->pc = 0x2CA200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca200;
        }
    }
    ctx->pc = 0x2CA22Cu;
    // 0x2ca22c: 0x2361018  mult        $v0, $s1, $s6
    ctx->pc = 0x2ca22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2ca230:
    // 0x2ca230: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2ca230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2ca234: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2ca234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ca238: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2ca238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ca23c: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x2ca23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ca240: 0xace500b0  sw          $a1, 0xB0($a3)
    ctx->pc = 0x2ca240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 5));
    // 0x2ca244: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x2ca244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ca248: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x2ca248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ca24c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2ca24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca250: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x2ca250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca254: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x2ca254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca258: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2ca258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2ca25c: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x2ca25cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x2ca260: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x2ca260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2ca264: 0x684b0013  ldl         $t3, 0x13($v0)
    ctx->pc = 0x2ca264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2ca268: 0x6c4b000c  ldr         $t3, 0xC($v0)
    ctx->pc = 0x2ca268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2ca26c: 0x684c001b  ldl         $t4, 0x1B($v0)
    ctx->pc = 0x2ca26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2ca270: 0x6c4c0014  ldr         $t4, 0x14($v0)
    ctx->pc = 0x2ca270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2ca274: 0x684d0023  ldl         $t5, 0x23($v0)
    ctx->pc = 0x2ca274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2ca278: 0x6c4d001c  ldr         $t5, 0x1C($v0)
    ctx->pc = 0x2ca278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2ca27c: 0x6845002b  ldl         $a1, 0x2B($v0)
    ctx->pc = 0x2ca27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ca280: 0x6c450024  ldr         $a1, 0x24($v0)
    ctx->pc = 0x2ca280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ca284: 0xb0eb0013  sdl         $t3, 0x13($a3)
    ctx->pc = 0x2ca284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca288: 0xb4eb000c  sdr         $t3, 0xC($a3)
    ctx->pc = 0x2ca288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca28c: 0xb0ec001b  sdl         $t4, 0x1B($a3)
    ctx->pc = 0x2ca28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca290: 0xb4ec0014  sdr         $t4, 0x14($a3)
    ctx->pc = 0x2ca290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca294: 0xb0ed0023  sdl         $t5, 0x23($a3)
    ctx->pc = 0x2ca294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca298: 0xb4ed001c  sdr         $t5, 0x1C($a3)
    ctx->pc = 0x2ca298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca29c: 0xb0e5002b  sdl         $a1, 0x2B($a3)
    ctx->pc = 0x2ca29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca2a0: 0xb4e50024  sdr         $a1, 0x24($a3)
    ctx->pc = 0x2ca2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca2a4: 0x684b0033  ldl         $t3, 0x33($v0)
    ctx->pc = 0x2ca2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2ca2a8: 0x6c4b002c  ldr         $t3, 0x2C($v0)
    ctx->pc = 0x2ca2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2ca2ac: 0xb0eb0033  sdl         $t3, 0x33($a3)
    ctx->pc = 0x2ca2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca2b0: 0xb4eb002c  sdr         $t3, 0x2C($a3)
    ctx->pc = 0x2ca2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca2b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2b8: 0x17d70005  bne         $fp, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA2B8u;
    {
        const bool branch_taken_0x2ca2b8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 23));
        ctx->pc = 0x2CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2B8u;
        // 0x2ca2bc: 0xace600ac  sw          $a2, 0xAC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2b8) {
            ctx->pc = 0x2CA2D0u;
            goto label_2ca2d0;
        }
    }
    ctx->pc = 0x2CA2C0u;
    // 0x2ca2c0: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x2ca2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ca2c4: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x2ca2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2ca2c8: 0x1109003a  beq         $t0, $t1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2CA2C8u;
    {
        const bool branch_taken_0x2ca2c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x2CA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2C8u;
        // 0x2ca2cc: 0x8fad0050  lw          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2c8) {
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2CA2D0u;
label_2ca2d0:
    // 0x2ca2d0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2ca2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ca2d4: 0x4619b102  mul.s       $f4, $f22, $f25
    ctx->pc = 0x2ca2d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2ca2d8: 0x93c600cd  lbu         $a2, 0xCD($fp)
    ctx->pc = 0x2ca2d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 205)));
    // 0x2ca2dc: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2ca2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ca2e0: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x2ca2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x2ca2e4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2ca2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2ca2e8: 0x93c500cc  lbu         $a1, 0xCC($fp)
    ctx->pc = 0x2ca2e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 204)));
    // 0x2ca2ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2ca2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca2f0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ca2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca2f4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2ca2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ca2f8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2ca2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca2fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ca2fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ca300: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca300u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca304: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ca304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca308: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2ca308u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ca30c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca30cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca310: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ca310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca314: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ca314u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca318: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x2ca318u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x2ca31c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ca31cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ca320: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2ca320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2ca324: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2ca324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca328: 0x0  nop
    ctx->pc = 0x2ca328u;
    // NOP
    // 0x2ca32c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x2CA32Cu;
    {
        const bool branch_taken_0x2ca32c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA32Cu;
        // 0x2ca330: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca32c) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2CA334u;
    // 0x2ca334: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2ca334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ca338: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2ca338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ca33c: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x2ca33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ca340: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x2ca340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ca344: 0x684b0017  ldl         $t3, 0x17($v0)
    ctx->pc = 0x2ca344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2ca348: 0x6c4b0010  ldr         $t3, 0x10($v0)
    ctx->pc = 0x2ca348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2ca34c: 0x684c001f  ldl         $t4, 0x1F($v0)
    ctx->pc = 0x2ca34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2ca350: 0x6c4c0018  ldr         $t4, 0x18($v0)
    ctx->pc = 0x2ca350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2ca354: 0xb0e8003b  sdl         $t0, 0x3B($a3)
    ctx->pc = 0x2ca354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca358: 0xb4e80034  sdr         $t0, 0x34($a3)
    ctx->pc = 0x2ca358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca35c: 0xb0e90043  sdl         $t1, 0x43($a3)
    ctx->pc = 0x2ca35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca360: 0xb4e9003c  sdr         $t1, 0x3C($a3)
    ctx->pc = 0x2ca360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca364: 0xb0eb004b  sdl         $t3, 0x4B($a3)
    ctx->pc = 0x2ca364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca368: 0xb4eb0044  sdr         $t3, 0x44($a3)
    ctx->pc = 0x2ca368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca36c: 0xb0ec0053  sdl         $t4, 0x53($a3)
    ctx->pc = 0x2ca36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca370: 0xb4ec004c  sdr         $t4, 0x4C($a3)
    ctx->pc = 0x2ca370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca374: 0x68480027  ldl         $t0, 0x27($v0)
    ctx->pc = 0x2ca374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ca378: 0x6c480020  ldr         $t0, 0x20($v0)
    ctx->pc = 0x2ca378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ca37c: 0xb0e8005b  sdl         $t0, 0x5B($a3)
    ctx->pc = 0x2ca37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca380: 0xb4e80054  sdr         $t0, 0x54($a3)
    ctx->pc = 0x2ca380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca384: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ca384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ca388: 0x90e200cc  lbu         $v0, 0xCC($a3)
    ctx->pc = 0x2ca388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2ca38c: 0x90e300cd  lbu         $v1, 0xCD($a3)
    ctx->pc = 0x2ca38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 205)));
    // 0x2ca390: 0x8ce400ac  lw          $a0, 0xAC($a3)
    ctx->pc = 0x2ca390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x2ca394: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ca394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ca398: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2ca398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2ca39c: 0xa0e200cc  sb          $v0, 0xCC($a3)
    ctx->pc = 0x2ca39cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 204), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca3a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ca3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ca3a4: 0xa0e300cd  sb          $v1, 0xCD($a3)
    ctx->pc = 0x2ca3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 205), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca3a8: 0xace400ac  sw          $a0, 0xAC($a3)
    ctx->pc = 0x2ca3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 4));
    // 0x2ca3ac: 0x0  nop
    ctx->pc = 0x2ca3acu;
    // NOP
label_2ca3b0:
    // 0x2ca3b0: 0x8fad0050  lw          $t5, 0x50($sp)
    ctx->pc = 0x2ca3b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2ca3b4:
    // 0x2ca3b4: 0x15b70005  bne         $t5, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA3B4u;
    {
        const bool branch_taken_0x2ca3b4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 23));
        ctx->pc = 0x2CA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3B4u;
        // 0x2ca3b8: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3b4) {
            ctx->pc = 0x2CA3CCu;
            goto label_2ca3cc;
        }
    }
    ctx->pc = 0x2CA3BCu;
    // 0x2ca3bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ca3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca3c0: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2ca3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2ca3c4: 0x104300be  beq         $v0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x2CA3C4u;
    {
        const bool branch_taken_0x2ca3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ca3c4) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA3CCu;
label_2ca3cc:
    // 0x2ca3cc: 0x149e0005  bne         $a0, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA3CCu;
    {
        const bool branch_taken_0x2ca3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 30));
        ctx->pc = 0x2CA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3CCu;
        // 0x2ca3d0: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3cc) {
            ctx->pc = 0x2CA3E4u;
            goto label_2ca3e4;
        }
    }
    ctx->pc = 0x2CA3D4u;
    // 0x2ca3d4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2ca3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca3d8: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2ca3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ca3dc: 0x10a600b8  beq         $a1, $a2, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2CA3DCu;
    {
        const bool branch_taken_0x2ca3dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ca3dc) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA3E4u;
label_2ca3e4:
    // 0x2ca3e4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2ca3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ca3e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ca3e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3ec: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x2ca3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ca3f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ca3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca3f4: 0x2525000c  addiu       $a1, $t1, 0xC
    ctx->pc = 0x2ca3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2ca3f8: 0x8d2a00ac  lw          $t2, 0xAC($t1)
    ctx->pc = 0x2ca3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x2ca3fc: 0x400013  mtlo        $v0
    ctx->pc = 0x2ca3fcu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2ca400: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca404: 0x70435800  madd        $t3, $v0, $v1
    ctx->pc = 0x2ca404u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2ca408: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2ca408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca40c: 0x906c00cc  lbu         $t4, 0xCC($v1)
    ctx->pc = 0x2ca40cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x2ca410: 0x906600cd  lbu         $a2, 0xCD($v1)
    ctx->pc = 0x2ca410u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 205)));
    // 0x2ca414: 0x1140008a  beqz        $t2, . + 4 + (0x8A << 2)
    ctx->pc = 0x2CA414u;
    {
        const bool branch_taken_0x2ca414 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA414u;
        // 0x2ca418: 0x256b000c  addiu       $t3, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca414) {
            ctx->pc = 0x2CA640u;
            goto label_2ca640;
        }
    }
    ctx->pc = 0x2CA41Cu;
    // 0x2ca41c: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x2ca41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ca420: 0x4619b142  mul.s       $f5, $f22, $f25
    ctx->pc = 0x2ca420u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2ca424: 0xc5640004  lwc1        $f4, 0x4($t3)
    ctx->pc = 0x2ca424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ca428: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ca428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca42c: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x2ca42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ca430: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CA430u;
    {
        const bool branch_taken_0x2ca430 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2CA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA430u;
        // 0x2ca434: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca430) {
            ctx->pc = 0x2CA4E0u;
            goto label_2ca4e0;
        }
    }
    ctx->pc = 0x2CA438u;
    // 0x2ca438: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CA438u;
    {
        const bool branch_taken_0x2ca438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA438u;
        // 0x2ca43c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca438) {
            ctx->pc = 0x2CA52Cu;
            goto label_2ca52c;
        }
    }
    ctx->pc = 0x2CA440u;
    // 0x2ca440: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CA440u;
    {
        const bool branch_taken_0x2ca440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca440) {
            ctx->pc = 0x2CA444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA440u;
            // 0x2ca444: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4E4u;
            goto label_2ca4e4;
        }
    }
    ctx->pc = 0x2CA448u;
    // 0x2ca448: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2ca448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ca44c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CA44Cu;
    {
        const bool branch_taken_0x2ca44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca44c) {
            ctx->pc = 0x2CA450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA44Cu;
            // 0x2ca450: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4A0u;
            goto label_2ca4a0;
        }
    }
    ctx->pc = 0x2CA454u;
    // 0x2ca454: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2ca454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca458: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2ca458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2ca45c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca45cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca460: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2ca460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca464: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2ca464u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ca468: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca468u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca46c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2ca46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca470: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ca470u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ca474: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca474u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca478: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca47c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca47cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca480: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ca480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca484: 0x0  nop
    ctx->pc = 0x2ca484u;
    // NOP
    // 0x2ca488: 0x4501008d  bc1t        . + 4 + (0x8D << 2)
    ctx->pc = 0x2CA488u;
    {
        const bool branch_taken_0x2ca488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA488u;
        // 0x2ca48c: 0x25220034  addiu       $v0, $t1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca488) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA490u;
    // 0x2ca490: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ca490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca498: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ca498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca49c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ca49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca4a0:
    // 0x2ca4a0: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2ca4a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2ca4a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca4a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca4a8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2ca4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca4ac: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2ca4acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ca4b0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca4b0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca4b4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ca4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca4b8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ca4b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ca4bc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca4bcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca4c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca4c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca4c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca4c8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ca4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca4cc: 0x0  nop
    ctx->pc = 0x2ca4ccu;
    // NOP
    // 0x2ca4d0: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
    ctx->pc = 0x2CA4D0u;
    {
        const bool branch_taken_0x2ca4d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4D0u;
        // 0x2ca4d4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4d0) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA4D8u;
    // 0x2ca4d8: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2ca4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2ca4dc: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_2ca4e0:
    // 0x2ca4e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ca4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca4e4:
    // 0x2ca4e4: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2ca4e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2ca4e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca4e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca4ec: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2ca4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca4f0: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2ca4f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ca4f4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca4f4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca4f8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ca4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca4fc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ca4fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ca500: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca500u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca504: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca50c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ca50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca510: 0x0  nop
    ctx->pc = 0x2ca510u;
    // NOP
    // 0x2ca514: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x2CA514u;
    {
        const bool branch_taken_0x2ca514 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA514u;
        // 0x2ca518: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca514) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA51Cu;
    // 0x2ca51c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2ca51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2ca520: 0x10a182b  sltu        $v1, $t0, $t2
    ctx->pc = 0x2ca520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ca524: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CA524u;
    {
        const bool branch_taken_0x2ca524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA524u;
        // 0x2ca528: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca524) {
            ctx->pc = 0x2CA640u;
            goto label_2ca640;
        }
    }
    ctx->pc = 0x2CA52Cu;
label_2ca52c:
    // 0x2ca52c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ca52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca530: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ca530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca534: 0x0  nop
    ctx->pc = 0x2ca534u;
    // NOP
label_2ca538:
    // 0x2ca538: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2ca538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca53c: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca53cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca540: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca540u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca544: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2ca544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca548: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca54c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca54cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca550: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ca550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca554: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca558: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca558u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca55c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca55cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca560: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca560u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca564: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca568: 0x0  nop
    ctx->pc = 0x2ca568u;
    // NOP
    // 0x2ca56c: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x2CA56Cu;
    {
        const bool branch_taken_0x2ca56c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA56Cu;
        // 0x2ca570: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca56c) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA574u;
    // 0x2ca574: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x2ca574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca578: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca578u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca57c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca57cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca580: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x2ca580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca584: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca588: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca588u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca58c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ca58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca590: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca594: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca594u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca598: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca59c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca59cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca5a0: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca5a4: 0x0  nop
    ctx->pc = 0x2ca5a4u;
    // NOP
    // 0x2ca5a8: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x2CA5A8u;
    {
        const bool branch_taken_0x2ca5a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5A8u;
        // 0x2ca5ac: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5a8) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA5B0u;
    // 0x2ca5b0: 0xc4820050  lwc1        $f2, 0x50($a0)
    ctx->pc = 0x2ca5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca5b4: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca5b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca5b8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca5b8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca5bc: 0xc4e10054  lwc1        $f1, 0x54($a3)
    ctx->pc = 0x2ca5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca5c0: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca5c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca5c4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca5c4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca5c8: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x2ca5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca5cc: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca5d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca5d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca5d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca5d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca5d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca5d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca5dc: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca5dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca5e0: 0x0  nop
    ctx->pc = 0x2ca5e0u;
    // NOP
    // 0x2ca5e4: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x2CA5E4u;
    {
        const bool branch_taken_0x2ca5e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5E4u;
        // 0x2ca5e8: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5e4) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA5ECu;
    // 0x2ca5ec: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x2ca5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca5f0: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca5f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca5f4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca5f4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca5f8: 0xc4e1007c  lwc1        $f1, 0x7C($a3)
    ctx->pc = 0x2ca5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca5fc: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca5fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca600: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca600u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca604: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2ca604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca608: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca60c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca60cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca610: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca610u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca614: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca614u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca618: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca61c: 0x0  nop
    ctx->pc = 0x2ca61cu;
    // NOP
    // 0x2ca620: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2CA620u;
    {
        const bool branch_taken_0x2ca620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA620u;
        // 0x2ca624: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca620) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA628u;
    // 0x2ca628: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2ca628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2ca62c: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x2ca62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x2ca630: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2ca630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2ca634: 0x10a182b  sltu        $v1, $t0, $t2
    ctx->pc = 0x2ca634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ca638: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2CA638u;
    {
        const bool branch_taken_0x2ca638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA638u;
        // 0x2ca63c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca638) {
            ctx->pc = 0x2CA538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca538;
        }
    }
    ctx->pc = 0x2CA640u;
label_2ca640:
    // 0x2ca640: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x2ca640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ca644: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x2ca644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ca648: 0x6967000f  ldl         $a3, 0xF($t3)
    ctx->pc = 0x2ca648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ca64c: 0x6d670008  ldr         $a3, 0x8($t3)
    ctx->pc = 0x2ca64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ca650: 0x69680017  ldl         $t0, 0x17($t3)
    ctx->pc = 0x2ca650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ca654: 0x6d680010  ldr         $t0, 0x10($t3)
    ctx->pc = 0x2ca654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ca658: 0x696d001f  ldl         $t5, 0x1F($t3)
    ctx->pc = 0x2ca658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2ca65c: 0x6d6d0018  ldr         $t5, 0x18($t3)
    ctx->pc = 0x2ca65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2ca660: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2ca660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca664: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2ca664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca668: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x2ca668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca66c: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x2ca66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca670: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x2ca670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca674: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x2ca674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca678: 0xb0ad001f  sdl         $t5, 0x1F($a1)
    ctx->pc = 0x2ca678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca67c: 0xb4ad0018  sdr         $t5, 0x18($a1)
    ctx->pc = 0x2ca67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca680: 0x69640027  ldl         $a0, 0x27($t3)
    ctx->pc = 0x2ca680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ca684: 0x6d640020  ldr         $a0, 0x20($t3)
    ctx->pc = 0x2ca684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ca688: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x2ca688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca68c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2ca690: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x2ca690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca694: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x2ca694u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ca698: 0x912400cd  lbu         $a0, 0xCD($t1)
    ctx->pc = 0x2ca698u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 205)));
    // 0x2ca69c: 0x4c1004  sllv        $v0, $t4, $v0
    ctx->pc = 0x2ca69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ca6a0: 0x912300cc  lbu         $v1, 0xCC($t1)
    ctx->pc = 0x2ca6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 204)));
    // 0x2ca6a4: 0x8d2500ac  lw          $a1, 0xAC($t1)
    ctx->pc = 0x2ca6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x2ca6a8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2ca6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2ca6ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ca6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ca6b0: 0xa12400cd  sb          $a0, 0xCD($t1)
    ctx->pc = 0x2ca6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 205), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca6b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ca6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ca6b8: 0xa12300cc  sb          $v1, 0xCC($t1)
    ctx->pc = 0x2ca6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca6bc: 0xad2500ac  sw          $a1, 0xAC($t1)
    ctx->pc = 0x2ca6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 5));
label_2ca6c0:
    // 0x2ca6c0: 0x17370004  bne         $t9, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA6C0u;
    {
        const bool branch_taken_0x2ca6c0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 23));
        ctx->pc = 0x2CA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6C0u;
        // 0x2ca6c4: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6c0) {
            ctx->pc = 0x2CA6D4u;
            goto label_2ca6d4;
        }
    }
    ctx->pc = 0x2CA6C8u;
    // 0x2ca6c8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2ca6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2ca6cc: 0x504300c3  beql        $v0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2CA6CCu;
    {
        const bool branch_taken_0x2ca6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ca6cc) {
            ctx->pc = 0x2CA6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6CCu;
            // 0x2ca6d0: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9DCu;
            goto label_2ca9dc;
        }
    }
    ctx->pc = 0x2CA6D4u;
label_2ca6d4:
    // 0x2ca6d4: 0x173e0005  bne         $t9, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA6D4u;
    {
        const bool branch_taken_0x2ca6d4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 30));
        ctx->pc = 0x2CA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6D4u;
        // 0x2ca6d8: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6d4) {
            ctx->pc = 0x2CA6ECu;
            goto label_2ca6ec;
        }
    }
    ctx->pc = 0x2CA6DCu;
    // 0x2ca6dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2ca6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca6e0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2ca6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ca6e4: 0x508500bd  beql        $a0, $a1, . + 4 + (0xBD << 2)
    ctx->pc = 0x2CA6E4u;
    {
        const bool branch_taken_0x2ca6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ca6e4) {
            ctx->pc = 0x2CA6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6E4u;
            // 0x2ca6e8: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9DCu;
            goto label_2ca9dc;
        }
    }
    ctx->pc = 0x2CA6ECu;
label_2ca6ec:
    // 0x2ca6ec: 0x17260005  bne         $t9, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA6ECu;
    {
        const bool branch_taken_0x2ca6ec = (GPR_U64(ctx, 25) != GPR_U64(ctx, 6));
        ctx->pc = 0x2CA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6ECu;
        // 0x2ca6f0: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6ec) {
            ctx->pc = 0x2CA704u;
            goto label_2ca704;
        }
    }
    ctx->pc = 0x2CA6F4u;
    // 0x2ca6f4: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2ca6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca6f8: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2ca6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca6fc: 0x50e800b7  beql        $a3, $t0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2CA6FCu;
    {
        const bool branch_taken_0x2ca6fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ca6fc) {
            ctx->pc = 0x2CA700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6FCu;
            // 0x2ca700: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9DCu;
            goto label_2ca9dc;
        }
    }
    ctx->pc = 0x2CA704u;
label_2ca704:
    // 0x2ca704: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2ca704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ca708: 0x932c00cc  lbu         $t4, 0xCC($t9)
    ctx->pc = 0x2ca708u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 204)));
    // 0x2ca70c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ca70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca710: 0x932600cd  lbu         $a2, 0xCD($t9)
    ctx->pc = 0x2ca710u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 205)));
    // 0x2ca714: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ca718: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ca718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca71c: 0x2525000c  addiu       $a1, $t1, 0xC
    ctx->pc = 0x2ca71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2ca720: 0x8d2a00ac  lw          $t2, 0xAC($t1)
    ctx->pc = 0x2ca720u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x2ca724: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ca724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ca728: 0x595821  addu        $t3, $v0, $t9
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2ca72c: 0x1140008a  beqz        $t2, . + 4 + (0x8A << 2)
    ctx->pc = 0x2CA72Cu;
    {
        const bool branch_taken_0x2ca72c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA72Cu;
        // 0x2ca730: 0x256b000c  addiu       $t3, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca72c) {
            ctx->pc = 0x2CA958u;
            goto label_2ca958;
        }
    }
    ctx->pc = 0x2CA734u;
    // 0x2ca734: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x2ca734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ca738: 0x4619b142  mul.s       $f5, $f22, $f25
    ctx->pc = 0x2ca738u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2ca73c: 0xc5640004  lwc1        $f4, 0x4($t3)
    ctx->pc = 0x2ca73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ca740: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca744: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x2ca744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ca748: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CA748u;
    {
        const bool branch_taken_0x2ca748 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2CA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA748u;
        // 0x2ca74c: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca748) {
            ctx->pc = 0x2CA7F8u;
            goto label_2ca7f8;
        }
    }
    ctx->pc = 0x2CA750u;
    // 0x2ca750: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CA750u;
    {
        const bool branch_taken_0x2ca750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA750u;
        // 0x2ca754: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca750) {
            ctx->pc = 0x2CA844u;
            goto label_2ca844;
        }
    }
    ctx->pc = 0x2CA758u;
    // 0x2ca758: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CA758u;
    {
        const bool branch_taken_0x2ca758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca758) {
            ctx->pc = 0x2CA75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA758u;
            // 0x2ca75c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA7FCu;
            goto label_2ca7fc;
        }
    }
    ctx->pc = 0x2CA760u;
    // 0x2ca760: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2ca760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ca764: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CA764u;
    {
        const bool branch_taken_0x2ca764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca764) {
            ctx->pc = 0x2CA768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA764u;
            // 0x2ca768: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA7B8u;
            goto label_2ca7b8;
        }
    }
    ctx->pc = 0x2CA76Cu;
    // 0x2ca76c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2ca76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca770: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2ca770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2ca774: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca774u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca778: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2ca778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca77c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2ca77cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ca780: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca780u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca784: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2ca784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca788: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ca788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ca78c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca78cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca790: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca798: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ca798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca79c: 0x0  nop
    ctx->pc = 0x2ca79cu;
    // NOP
    // 0x2ca7a0: 0x4501008d  bc1t        . + 4 + (0x8D << 2)
    ctx->pc = 0x2CA7A0u;
    {
        const bool branch_taken_0x2ca7a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7A0u;
        // 0x2ca7a4: 0x25220034  addiu       $v0, $t1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7a0) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA7A8u;
    // 0x2ca7a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ca7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca7ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ca7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7b4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ca7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca7b8:
    // 0x2ca7b8: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2ca7b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2ca7bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca7bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca7c0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2ca7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca7c4: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2ca7c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ca7c8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca7c8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca7cc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ca7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca7d0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ca7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ca7d4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca7d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca7d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca7dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca7e0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ca7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca7e4: 0x0  nop
    ctx->pc = 0x2ca7e4u;
    // NOP
    // 0x2ca7e8: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
    ctx->pc = 0x2CA7E8u;
    {
        const bool branch_taken_0x2ca7e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7E8u;
        // 0x2ca7ec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7e8) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA7F0u;
    // 0x2ca7f0: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2ca7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2ca7f4: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x2ca7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_2ca7f8:
    // 0x2ca7f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca7fc:
    // 0x2ca7fc: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2ca7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2ca800: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca800u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca804: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2ca804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca808: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2ca808u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ca80c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca80cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca810: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ca810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca814: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ca814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ca818: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca818u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca81c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca824: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ca824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca828: 0x0  nop
    ctx->pc = 0x2ca828u;
    // NOP
    // 0x2ca82c: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x2CA82Cu;
    {
        const bool branch_taken_0x2ca82c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA82Cu;
        // 0x2ca830: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca82c) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA834u;
    // 0x2ca834: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2ca834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2ca838: 0x10a182b  sltu        $v1, $t0, $t2
    ctx->pc = 0x2ca838u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ca83c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CA83Cu;
    {
        const bool branch_taken_0x2ca83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA83Cu;
        // 0x2ca840: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca83c) {
            ctx->pc = 0x2CA958u;
            goto label_2ca958;
        }
    }
    ctx->pc = 0x2CA844u;
label_2ca844:
    // 0x2ca844: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ca844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca848: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ca848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca84c: 0x0  nop
    ctx->pc = 0x2ca84cu;
    // NOP
label_2ca850:
    // 0x2ca850: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2ca850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca854: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca854u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca858: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca858u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca85c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2ca85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca860: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca864: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca864u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca868: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ca868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca86c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca86cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca870: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca870u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca874: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca874u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca878: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca87c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca880: 0x0  nop
    ctx->pc = 0x2ca880u;
    // NOP
    // 0x2ca884: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x2CA884u;
    {
        const bool branch_taken_0x2ca884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA884u;
        // 0x2ca888: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca884) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA88Cu;
    // 0x2ca88c: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x2ca88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca890: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca890u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca894: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca894u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca898: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x2ca898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca89c: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca89cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca8a0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca8a0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca8a4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ca8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca8a8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca8a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca8ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca8acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca8b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca8b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca8b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca8b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca8b8: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca8bc: 0x0  nop
    ctx->pc = 0x2ca8bcu;
    // NOP
    // 0x2ca8c0: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x2CA8C0u;
    {
        const bool branch_taken_0x2ca8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8C0u;
        // 0x2ca8c4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8c0) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA8C8u;
    // 0x2ca8c8: 0xc4820050  lwc1        $f2, 0x50($a0)
    ctx->pc = 0x2ca8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca8cc: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca8ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca8d0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca8d0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca8d4: 0xc4e10054  lwc1        $f1, 0x54($a3)
    ctx->pc = 0x2ca8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca8d8: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca8dc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca8dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca8e0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x2ca8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca8e4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca8e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca8e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca8ec: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca8ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca8f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca8f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca8f4: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca8f8: 0x0  nop
    ctx->pc = 0x2ca8f8u;
    // NOP
    // 0x2ca8fc: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x2CA8FCu;
    {
        const bool branch_taken_0x2ca8fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8FCu;
        // 0x2ca900: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8fc) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA904u;
    // 0x2ca904: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x2ca904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca908: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2ca908u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ca90c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2ca90cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2ca910: 0xc4e1007c  lwc1        $f1, 0x7C($a3)
    ctx->pc = 0x2ca910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca914: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ca914u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ca918: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ca918u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ca91c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2ca91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca920: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ca920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ca924: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ca924u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ca928: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ca928u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ca92c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ca92cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ca930: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2ca930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca934: 0x0  nop
    ctx->pc = 0x2ca934u;
    // NOP
    // 0x2ca938: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2CA938u;
    {
        const bool branch_taken_0x2ca938 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA938u;
        // 0x2ca93c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca938) {
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA940u;
    // 0x2ca940: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2ca940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2ca944: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x2ca944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x2ca948: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2ca948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2ca94c: 0x10a182b  sltu        $v1, $t0, $t2
    ctx->pc = 0x2ca94cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ca950: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2CA950u;
    {
        const bool branch_taken_0x2ca950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA950u;
        // 0x2ca954: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca950) {
            ctx->pc = 0x2CA850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca850;
        }
    }
    ctx->pc = 0x2CA958u;
label_2ca958:
    // 0x2ca958: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x2ca958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ca95c: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x2ca95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ca960: 0x6964000f  ldl         $a0, 0xF($t3)
    ctx->pc = 0x2ca960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ca964: 0x6d640008  ldr         $a0, 0x8($t3)
    ctx->pc = 0x2ca964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ca968: 0x69670017  ldl         $a3, 0x17($t3)
    ctx->pc = 0x2ca968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ca96c: 0x6d670010  ldr         $a3, 0x10($t3)
    ctx->pc = 0x2ca96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ca970: 0x6968001f  ldl         $t0, 0x1F($t3)
    ctx->pc = 0x2ca970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ca974: 0x6d680018  ldr         $t0, 0x18($t3)
    ctx->pc = 0x2ca974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ca978: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x2ca978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca97c: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x2ca97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca980: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2ca980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca984: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2ca984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca988: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x2ca988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca98c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x2ca98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca990: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x2ca990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca994: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x2ca994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca998: 0x69630027  ldl         $v1, 0x27($t3)
    ctx->pc = 0x2ca998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ca99c: 0x6d630020  ldr         $v1, 0x20($t3)
    ctx->pc = 0x2ca99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ca9a0: 0xb0a30027  sdl         $v1, 0x27($a1)
    ctx->pc = 0x2ca9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca9a4: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x2ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2ca9a8: 0xb4a30020  sdr         $v1, 0x20($a1)
    ctx->pc = 0x2ca9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca9ac: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x2ca9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ca9b0: 0x912300cc  lbu         $v1, 0xCC($t1)
    ctx->pc = 0x2ca9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 204)));
    // 0x2ca9b4: 0x4c1004  sllv        $v0, $t4, $v0
    ctx->pc = 0x2ca9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ca9b8: 0x912400cd  lbu         $a0, 0xCD($t1)
    ctx->pc = 0x2ca9b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 205)));
    // 0x2ca9bc: 0x8d2500ac  lw          $a1, 0xAC($t1)
    ctx->pc = 0x2ca9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x2ca9c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ca9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ca9c4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2ca9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2ca9c8: 0xa12300cc  sb          $v1, 0xCC($t1)
    ctx->pc = 0x2ca9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca9cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ca9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ca9d0: 0xa12400cd  sb          $a0, 0xCD($t1)
    ctx->pc = 0x2ca9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 205), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca9d4: 0xad2500ac  sw          $a1, 0xAC($t1)
    ctx->pc = 0x2ca9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 5));
label_2ca9d8:
    // 0x2ca9d8: 0x8fb10064  lw          $s1, 0x64($sp)
    ctx->pc = 0x2ca9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2ca9dc:
    // 0x2ca9dc: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x2ca9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2ca9e0: 0x1440fa61  bnez        $v0, . + 4 + (-0x59F << 2)
    ctx->pc = 0x2CA9E0u;
    {
        const bool branch_taken_0x2ca9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9E0u;
        // 0x2ca9e4: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9e0) {
            ctx->pc = 0x2C9368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9368;
        }
    }
    ctx->pc = 0x2CA9E8u;
label_2ca9e8:
    // 0x2ca9e8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2ca9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca9ec:
    // 0x2ca9ec: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2ca9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ca9f0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2ca9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ca9f4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2ca9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ca9f8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2ca9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ca9fc: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2ca9fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2caa00: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2caa00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2caa04: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2caa04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2caa08: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2caa08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2caa0c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2caa0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2caa10: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2caa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2caa14: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x2caa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2caa18: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x2caa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2caa1c: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x2caa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2caa20: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x2caa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2caa24: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2caa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2caa28: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2caa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2caa2c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2caa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2caa30: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA30u;
        // 0x2caa34: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA38u;
}
