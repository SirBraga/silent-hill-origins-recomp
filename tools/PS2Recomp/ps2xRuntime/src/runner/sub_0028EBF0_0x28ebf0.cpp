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

// Function: sub_0028EBF0
// Address: 0x28ebf0 - 0x28ed88
void sub_0028EBF0_0x28ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EBF0_0x28ebf0");
#endif

    switch (ctx->pc) {
        case 0x28ec28u: goto label_28ec28;
        case 0x28ec48u: goto label_28ec48;
        case 0x28ed40u: goto label_28ed40;
        case 0x28ed60u: goto label_28ed60;
        default: break;
    }

    ctx->pc = 0x28ebf0u;

    // 0x28ebf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28ebf4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28ebf8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28ebfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ebfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28ec04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EC04u;
    {
        const bool branch_taken_0x28ec04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC04u;
        // 0x28ec08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec04) {
            ctx->pc = 0x28EC14u;
            goto label_28ec14;
        }
    }
    ctx->pc = 0x28EC0Cu;
    // 0x28ec0c: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x28EC0Cu;
    {
        const bool branch_taken_0x28ec0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC0Cu;
        // 0x28ec10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec0c) {
            ctx->pc = 0x28ED70u;
            goto label_28ed70;
        }
    }
    ctx->pc = 0x28EC14u;
label_28ec14:
    // 0x28ec14: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x28ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x28ec18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EC18u;
    {
        const bool branch_taken_0x28ec18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC18u;
        // 0x28ec1c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec18) {
            ctx->pc = 0x28EC2Cu;
            goto label_28ec2c;
        }
    }
    ctx->pc = 0x28EC20u;
    // 0x28ec20: 0xc088c9e  jal         func_223278
    ctx->pc = 0x28EC20u;
    SET_GPR_U32(ctx, 31, 0x28EC28u);
    ctx->pc = 0x223278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223278u, 0x28EC20u, 0x28EC28u)) {
        return;
    }
    ctx->pc = 0x28EC28u;
label_28ec28:
    // 0x28ec28: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x28ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_28ec2c:
    // 0x28ec2c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x28ec2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x28ec30: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x28ec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x28ec34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec38: 0x240501a2  addiu       $a1, $zero, 0x1A2
    ctx->pc = 0x28ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    // 0x28ec3c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x28ec3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x28ec40: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x28EC40u;
    SET_GPR_U32(ctx, 31, 0x28EC48u);
    ctx->pc = 0x28EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC40u;
    // 0x28ec44: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x28EC40u, 0x28EC48u)) {
        return;
    }
    ctx->pc = 0x28EC48u;
label_28ec48:
    // 0x28ec48: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x28EC48u;
    {
        const bool branch_taken_0x28ec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC48u;
        // 0x28ec4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec48) {
            ctx->pc = 0x28ED48u;
            goto label_28ed48;
        }
    }
    ctx->pc = 0x28EC50u;
    // 0x28ec50: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x28ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x28ec54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28ec54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28ec58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec5c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x28ec5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28ec60: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x28ec60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28ec64: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x28ec64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28ec68: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x28ec68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28ec6c: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x28ec6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ec70: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x28ec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ec74: 0xb3a50013  sdl         $a1, 0x13($sp)
    ctx->pc = 0x28ec74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ec78: 0xb7a5000c  sdr         $a1, 0xC($sp)
    ctx->pc = 0x28ec78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ec7c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28ec7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28ec80: 0x6a080017  ldl         $t0, 0x17($s0)
    ctx->pc = 0x28ec80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x28ec84: 0x6e080010  ldr         $t0, 0x10($s0)
    ctx->pc = 0x28ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28ec88: 0xb3a8001b  sdl         $t0, 0x1B($sp)
    ctx->pc = 0x28ec88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ec8c: 0xb7a80014  sdr         $t0, 0x14($sp)
    ctx->pc = 0x28ec8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ec90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28ec90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec94: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x28ec94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28ec98: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x28ec98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28ec9c: 0x6a070027  ldl         $a3, 0x27($s0)
    ctx->pc = 0x28ec9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28eca0: 0x6e070020  ldr         $a3, 0x20($s0)
    ctx->pc = 0x28eca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28eca4: 0xb3a60023  sdl         $a2, 0x23($sp)
    ctx->pc = 0x28eca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eca8: 0xb7a6001c  sdr         $a2, 0x1C($sp)
    ctx->pc = 0x28eca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecac: 0xb3a7002b  sdl         $a3, 0x2B($sp)
    ctx->pc = 0x28ecacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecb0: 0xb7a70024  sdr         $a3, 0x24($sp)
    ctx->pc = 0x28ecb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecb4: 0x6a0a002f  ldl         $t2, 0x2F($s0)
    ctx->pc = 0x28ecb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x28ecb8: 0x6e0a0028  ldr         $t2, 0x28($s0)
    ctx->pc = 0x28ecb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x28ecbc: 0xb3aa0033  sdl         $t2, 0x33($sp)
    ctx->pc = 0x28ecbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecc0: 0xb7aa002c  sdr         $t2, 0x2C($sp)
    ctx->pc = 0x28ecc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecc4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x28ecc8: 0x6a090037  ldl         $t1, 0x37($s0)
    ctx->pc = 0x28ecc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x28eccc: 0x6e090030  ldr         $t1, 0x30($s0)
    ctx->pc = 0x28ecccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x28ecd0: 0x6a0a003f  ldl         $t2, 0x3F($s0)
    ctx->pc = 0x28ecd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x28ecd4: 0x6e0a0038  ldr         $t2, 0x38($s0)
    ctx->pc = 0x28ecd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x28ecd8: 0xb3a9003b  sdl         $t1, 0x3B($sp)
    ctx->pc = 0x28ecd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecdc: 0xb7a90034  sdr         $t1, 0x34($sp)
    ctx->pc = 0x28ecdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ece0: 0xb3aa0043  sdl         $t2, 0x43($sp)
    ctx->pc = 0x28ece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ece4: 0xb7aa003c  sdr         $t2, 0x3C($sp)
    ctx->pc = 0x28ece4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ece8: 0x6a080047  ldl         $t0, 0x47($s0)
    ctx->pc = 0x28ece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x28ecec: 0x6e080040  ldr         $t0, 0x40($s0)
    ctx->pc = 0x28ececu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28ecf0: 0xb3a8004b  sdl         $t0, 0x4B($sp)
    ctx->pc = 0x28ecf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecf4: 0xb7a80044  sdr         $t0, 0x44($sp)
    ctx->pc = 0x28ecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ecf8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28ecfc: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x28ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ed00: 0x6a07004f  ldl         $a3, 0x4F($s0)
    ctx->pc = 0x28ed00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28ed04: 0x6e070048  ldr         $a3, 0x48($s0)
    ctx->pc = 0x28ed04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28ed08: 0x6a080057  ldl         $t0, 0x57($s0)
    ctx->pc = 0x28ed08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x28ed0c: 0x6e080050  ldr         $t0, 0x50($s0)
    ctx->pc = 0x28ed0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28ed10: 0xb3a70053  sdl         $a3, 0x53($sp)
    ctx->pc = 0x28ed10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed14: 0xb7a7004c  sdr         $a3, 0x4C($sp)
    ctx->pc = 0x28ed14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed18: 0xb3a8005b  sdl         $t0, 0x5B($sp)
    ctx->pc = 0x28ed18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed1c: 0xb7a80054  sdr         $t0, 0x54($sp)
    ctx->pc = 0x28ed1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed20: 0x6a07005f  ldl         $a3, 0x5F($s0)
    ctx->pc = 0x28ed20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28ed24: 0x6e070058  ldr         $a3, 0x58($s0)
    ctx->pc = 0x28ed24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28ed28: 0xb3a70063  sdl         $a3, 0x63($sp)
    ctx->pc = 0x28ed28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed2c: 0xb7a7005c  sdr         $a3, 0x5C($sp)
    ctx->pc = 0x28ed2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed30: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x28ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x28ed34: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x28ed34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28ed38: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28ED38u;
    SET_GPR_U32(ctx, 31, 0x28ED40u);
    ctx->pc = 0x28ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED38u;
    // 0x28ed3c: 0xafa3006c  sw          $v1, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28ED38u, 0x28ED40u)) {
        return;
    }
    ctx->pc = 0x28ED40u;
label_28ed40:
    // 0x28ed40: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28ED40u;
    {
        const bool branch_taken_0x28ed40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ed40) {
            ctx->pc = 0x28ED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED40u;
            // 0x28ed44: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ED50u;
            goto label_28ed50;
        }
    }
    ctx->pc = 0x28ED48u;
label_28ed48:
    // 0x28ed48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28ED48u;
    {
        const bool branch_taken_0x28ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED48u;
        // 0x28ed4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed48) {
            ctx->pc = 0x28ED70u;
            goto label_28ed70;
        }
    }
    ctx->pc = 0x28ED50u;
label_28ed50:
    // 0x28ed50: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28ED50u;
    {
        const bool branch_taken_0x28ed50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed50) {
            ctx->pc = 0x28ED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED50u;
            // 0x28ed54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ED70u;
            goto label_28ed70;
        }
    }
    ctx->pc = 0x28ED58u;
    // 0x28ed58: 0xc088cb6  jal         func_2232D8
    ctx->pc = 0x28ED58u;
    SET_GPR_U32(ctx, 31, 0x28ED60u);
    ctx->pc = 0x28ED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED58u;
    // 0x28ed5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2232D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2232D8u, 0x28ED58u, 0x28ED60u)) {
        return;
    }
    ctx->pc = 0x28ED60u;
label_28ed60:
    // 0x28ed60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ed60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ed64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28ED64u;
    {
        const bool branch_taken_0x28ed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED64u;
        // 0x28ed68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed64) {
            ctx->pc = 0x28ED70u;
            goto label_28ed70;
        }
    }
    ctx->pc = 0x28ED6Cu;
    // 0x28ed6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28ed6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ed70:
    // 0x28ed70: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28ed70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ed74: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28ed74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ed78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28ed78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28ED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED7Cu;
        // 0x28ed80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED84u;
    // 0x28ed84: 0x0  nop
    ctx->pc = 0x28ed84u;
    // NOP
    ctx->pc = 0x28ed88u;
}
