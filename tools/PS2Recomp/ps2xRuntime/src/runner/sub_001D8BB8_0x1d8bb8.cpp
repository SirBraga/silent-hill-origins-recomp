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

// Function: sub_001D8BB8
// Address: 0x1d8bb8 - 0x1d8ea0
void sub_001D8BB8_0x1d8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8BB8_0x1d8bb8");
#endif

    switch (ctx->pc) {
        case 0x1d8c10u: goto label_1d8c10;
        case 0x1d8c18u: goto label_1d8c18;
        case 0x1d8c28u: goto label_1d8c28;
        case 0x1d8c30u: goto label_1d8c30;
        case 0x1d8c38u: goto label_1d8c38;
        case 0x1d8c50u: goto label_1d8c50;
        case 0x1d8c58u: goto label_1d8c58;
        case 0x1d8e28u: goto label_1d8e28;
        case 0x1d8e30u: goto label_1d8e30;
        case 0x1d8e60u: goto label_1d8e60;
        default: break;
    }

    ctx->pc = 0x1d8bb8u;

    // 0x1d8bb8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d8bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d8bbc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8bc0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1d8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1d8bc4: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1d8bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1d8bc8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8bcc: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1d8bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1d8bd0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8bd4: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1d8bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1d8bd8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1d8bd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bdc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1d8bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1d8be0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1d8be0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8be4: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1d8be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1d8be8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1d8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1d8bec: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1d8becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1d8bf0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1d8bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1d8bf4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d8bf8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1d8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1d8bfc: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x1d8bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
    // 0x1d8c00: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C00u;
    {
        const bool branch_taken_0x1d8c00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C00u;
        // 0x1d8c04: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c00) {
            ctx->pc = 0x1D8C10u;
            goto label_1d8c10;
        }
    }
    ctx->pc = 0x1D8C08u;
    // 0x1d8c08: 0xc08c55c  jal         func_231570
    ctx->pc = 0x1D8C08u;
    SET_GPR_U32(ctx, 31, 0x1D8C10u);
    ctx->pc = 0x1D8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C08u;
    // 0x1d8c0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x231570u, 0x1D8C08u, 0x1D8C10u)) {
        return;
    }
    ctx->pc = 0x1D8C10u;
label_1d8c10:
    // 0x1d8c10: 0xc089600  jal         func_225800
    ctx->pc = 0x1D8C10u;
    SET_GPR_U32(ctx, 31, 0x1D8C18u);
    ctx->pc = 0x1D8C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C10u;
    // 0x1d8c14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225800u, 0x1D8C10u, 0x1D8C18u)) {
        return;
    }
    ctx->pc = 0x1D8C18u;
label_1d8c18:
    // 0x1d8c18: 0x1840007f  blez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1D8C18u;
    {
        const bool branch_taken_0x1d8c18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C18u;
        // 0x1d8c1c: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c18) {
            ctx->pc = 0x1D8E18u;
            goto label_1d8e18;
        }
    }
    ctx->pc = 0x1D8C20u;
    // 0x1d8c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c24: 0x0  nop
    ctx->pc = 0x1d8c24u;
    // NOP
label_1d8c28:
    // 0x1d8c28: 0xc089624  jal         func_225890
    ctx->pc = 0x1D8C28u;
    SET_GPR_U32(ctx, 31, 0x1D8C30u);
    ctx->pc = 0x1D8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C28u;
    // 0x1d8c2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225890u, 0x1D8C28u, 0x1D8C30u)) {
        return;
    }
    ctx->pc = 0x1D8C30u;
label_1d8c30:
    // 0x1d8c30: 0xc089632  jal         func_2258C8
    ctx->pc = 0x1D8C30u;
    SET_GPR_U32(ctx, 31, 0x1D8C38u);
    ctx->pc = 0x1D8C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C30u;
    // 0x1d8c34: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2258C8u, 0x1D8C30u, 0x1D8C38u)) {
        return;
    }
    ctx->pc = 0x1D8C38u;
label_1d8c38:
    // 0x1d8c38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d8c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c3c: 0x1a600072  blez        $s3, . + 4 + (0x72 << 2)
    ctx->pc = 0x1D8C3Cu;
    {
        const bool branch_taken_0x1d8c3c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1D8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C3Cu;
        // 0x1d8c40: 0x8fa3009c  lw          $v1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c3c) {
            ctx->pc = 0x1D8E08u;
            goto label_1d8e08;
        }
    }
    ctx->pc = 0x1D8C44u;
    // 0x1d8c44: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d8c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8c4c: 0x0  nop
    ctx->pc = 0x1d8c4cu;
    // NOP
label_1d8c50:
    // 0x1d8c50: 0xc089642  jal         func_225908
    ctx->pc = 0x1D8C50u;
    SET_GPR_U32(ctx, 31, 0x1D8C58u);
    ctx->pc = 0x1D8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C50u;
    // 0x1d8c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225908u, 0x1D8C50u, 0x1D8C58u)) {
        return;
    }
    ctx->pc = 0x1D8C58u;
label_1d8c58:
    // 0x1d8c58: 0x6410010  bgez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8C58u;
    {
        const bool branch_taken_0x1d8c58 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1D8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C58u;
        // 0x1d8c5c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c58) {
            ctx->pc = 0x1D8C9Cu;
            goto label_1d8c9c;
        }
    }
    ctx->pc = 0x1D8C60u;
    // 0x1d8c60: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1d8c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c64: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1d8c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d8c68: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1d8c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d8c6c: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1d8c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d8c70: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1d8c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d8c74: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1d8c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d8c78: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1d8c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d8c7c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1d8c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8c80: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1d8c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8c84: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1d8c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8c88: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1d8c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8c8c: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1d8c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8c90: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1d8c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8c94: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1D8C94u;
    {
        const bool branch_taken_0x1d8c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C94u;
        // 0x1d8c98: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c94) {
            ctx->pc = 0x1D8DF4u;
            goto label_1d8df4;
        }
    }
    ctx->pc = 0x1D8C9Cu;
label_1d8c9c:
    // 0x1d8c9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ca0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1d8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8ca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ca8: 0x571026  xor         $v0, $v0, $s7
    ctx->pc = 0x1d8ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 23));
    // 0x1d8cac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1d8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8cb0: 0x2a2500a  movz        $t2, $s5, $v0
    ctx->pc = 0x1d8cb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21));
    // 0x1d8cb4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8cb8: 0x771826  xor         $v1, $v1, $s7
    ctx->pc = 0x1d8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 23));
    // 0x1d8cbc: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x1d8cbcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8cc0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1d8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1d8cc4: 0x2a3480a  movz        $t1, $s5, $v1
    ctx->pc = 0x1d8cc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21));
    // 0x1d8cc8: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x1d8cc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ccc: 0xad382a  slt         $a3, $a1, $t5
    ctx->pc = 0x1d8cccu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1d8cd0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8cd4: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x1d8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1d8cd8: 0x8fac0024  lw          $t4, 0x24($sp)
    ctx->pc = 0x1d8cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d8cdc: 0xae202a  slt         $a0, $a1, $t6
    ctx->pc = 0x1d8cdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1d8ce0: 0x67500b  movn        $t2, $v1, $a3
    ctx->pc = 0x1d8ce0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3));
    // 0x1d8ce4: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x1d8ce4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d8ce8: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x1d8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1d8cec: 0xcc382a  slt         $a3, $a2, $t4
    ctx->pc = 0x1d8cecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1d8cf0: 0x44480b  movn        $t1, $v0, $a0
    ctx->pc = 0x1d8cf0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2));
    // 0x1d8cf4: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1d8cf8: 0xcb202a  slt         $a0, $a2, $t3
    ctx->pc = 0x1d8cf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1d8cfc: 0x67500b  movn        $t2, $v1, $a3
    ctx->pc = 0x1d8cfcu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3));
    // 0x1d8d00: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1d8d04: 0x1c53826  xor         $a3, $t6, $a1
    ctx->pc = 0x1d8d04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 5));
    // 0x1d8d08: 0x44480b  movn        $t1, $v0, $a0
    ctx->pc = 0x1d8d08u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2));
    // 0x1d8d0c: 0x25430004  addiu       $v1, $t2, 0x4
    ctx->pc = 0x1d8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d8d10: 0x1a52826  xor         $a1, $t5, $a1
    ctx->pc = 0x1d8d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 5));
    // 0x1d8d14: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x1d8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d8d18: 0x65500a  movz        $t2, $v1, $a1
    ctx->pc = 0x1d8d18u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3));
    // 0x1d8d1c: 0x47480a  movz        $t1, $v0, $a3
    ctx->pc = 0x1d8d1cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2));
    // 0x1d8d20: 0x1664026  xor         $t0, $t3, $a2
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 6));
    // 0x1d8d24: 0x25430004  addiu       $v1, $t2, 0x4
    ctx->pc = 0x1d8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d8d28: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x1d8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d8d2c: 0x1863026  xor         $a2, $t4, $a2
    ctx->pc = 0x1d8d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 6));
    // 0x1d8d30: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d8d34: 0x66500a  movz        $t2, $v1, $a2
    ctx->pc = 0x1d8d34u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3));
    // 0x1d8d38: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1d8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d8d3c: 0x48480a  movz        $t1, $v0, $t0
    ctx->pc = 0x1d8d3cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2));
    // 0x1d8d40: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x1d8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1d8d44: 0xb62826  xor         $a1, $a1, $s6
    ctx->pc = 0x1d8d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 22));
    // 0x1d8d48: 0x962026  xor         $a0, $a0, $s6
    ctx->pc = 0x1d8d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 22));
    // 0x1d8d4c: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1d8d50: 0x45500a  movz        $t2, $v0, $a1
    ctx->pc = 0x1d8d50u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2));
    // 0x1d8d54: 0x64480a  movz        $t1, $v1, $a0
    ctx->pc = 0x1d8d54u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x1d8d58: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1d8d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d8d5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8D5Cu;
    {
        const bool branch_taken_0x1d8d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d5c) {
            ctx->pc = 0x1D8DA0u;
            goto label_1d8da0;
        }
    }
    ctx->pc = 0x1D8D64u;
    // 0x1d8d64: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1d8d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d68: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x1d8d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d8d6c: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x1d8d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d8d70: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x1d8d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d8d74: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x1d8d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d8d78: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x1d8d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d8d7c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x1d8d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d8d80: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1d8d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8d84: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1d8d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8d88: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1d8d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8d8c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1d8d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8d90: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1d8d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8d94: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1d8d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8d98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8D98u;
    {
        const bool branch_taken_0x1d8d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D98u;
        // 0x1d8d9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d98) {
            ctx->pc = 0x1D8DF4u;
            goto label_1d8df4;
        }
    }
    ctx->pc = 0x1D8DA0u;
label_1d8da0:
    // 0x1d8da0: 0x55490015  bnel        $t2, $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8DA0u;
    {
        const bool branch_taken_0x1d8da0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x1d8da0) {
            ctx->pc = 0x1D8DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8DA0u;
            // 0x1d8da4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8DF8u;
            goto label_1d8df8;
        }
    }
    ctx->pc = 0x1D8DA8u;
    // 0x1d8da8: 0x1ac1018  mult        $v0, $t5, $t4
    ctx->pc = 0x1d8da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d8dac: 0x1cb1818  mult        $v1, $t6, $t3
    ctx->pc = 0x1d8dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d8db0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d8db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d8db4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8DB4u;
    {
        const bool branch_taken_0x1d8db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8db4) {
            ctx->pc = 0x1D8DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8DB4u;
            // 0x1d8db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8DF8u;
            goto label_1d8df8;
        }
    }
    ctx->pc = 0x1D8DBCu;
    // 0x1d8dbc: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1d8dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d8dc0: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1d8dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d8dc4: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1d8dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d8dc8: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1d8dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d8dcc: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1d8dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d8dd0: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1d8dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d8dd4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1d8dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8dd8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1d8dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8ddc: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1d8ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8de0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1d8de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8de4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1d8de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8de8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1d8de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8dec: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1d8decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8df0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d8df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8df4:
    // 0x1d8df4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d8df8:
    // 0x1d8df8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1d8df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d8dfc: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1D8DFCu;
    {
        const bool branch_taken_0x1d8dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DFCu;
        // 0x1d8e00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dfc) {
            ctx->pc = 0x1D8C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8c50;
        }
    }
    ctx->pc = 0x1D8E04u;
    // 0x1d8e04: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1d8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1d8e08:
    // 0x1d8e08: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x1d8e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e0c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1d8e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d8e10: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x1D8E10u;
    {
        const bool branch_taken_0x1d8e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E10u;
        // 0x1d8e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e10) {
            ctx->pc = 0x1D8C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8c28;
        }
    }
    ctx->pc = 0x1D8E18u;
label_1d8e18:
    // 0x1d8e18: 0x6400014  bltz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8E18u;
    {
        const bool branch_taken_0x1d8e18 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1D8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E18u;
        // 0x1d8e1c: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e18) {
            ctx->pc = 0x1D8E6Cu;
            goto label_1d8e6c;
        }
    }
    ctx->pc = 0x1D8E20u;
    // 0x1d8e20: 0xc089624  jal         func_225890
    ctx->pc = 0x1D8E20u;
    SET_GPR_U32(ctx, 31, 0x1D8E28u);
    ctx->pc = 0x1D8E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E20u;
    // 0x1d8e24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225890u, 0x1D8E20u, 0x1D8E28u)) {
        return;
    }
    ctx->pc = 0x1D8E28u;
label_1d8e28:
    // 0x1d8e28: 0xc089664  jal         func_225990
    ctx->pc = 0x1D8E28u;
    SET_GPR_U32(ctx, 31, 0x1D8E30u);
    ctx->pc = 0x1D8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E28u;
    // 0x1d8e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225990u, 0x1D8E28u, 0x1D8E30u)) {
        return;
    }
    ctx->pc = 0x1D8E30u;
label_1d8e30:
    // 0x1d8e30: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1d8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d8e34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d8e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d8e38: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8E38u;
    {
        const bool branch_taken_0x1d8e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E38u;
        // 0x1d8e3c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e38) {
            ctx->pc = 0x1D8E54u;
            goto label_1d8e54;
        }
    }
    ctx->pc = 0x1D8E40u;
    // 0x1d8e40: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1d8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8e44: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d8e48: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d8e4c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1d8e50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1d8e54:
    // 0x1d8e54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d8e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e58: 0xc089610  jal         func_225840
    ctx->pc = 0x1D8E58u;
    SET_GPR_U32(ctx, 31, 0x1D8E60u);
    ctx->pc = 0x1D8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E58u;
    // 0x1d8e5c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225840u, 0x1D8E58u, 0x1D8E60u)) {
        return;
    }
    ctx->pc = 0x1D8E60u;
label_1d8e60:
    // 0x1d8e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8e64: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1d8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1d8e68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1d8e6c:
    // 0x1d8e6c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1d8e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d8e70: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1d8e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d8e74: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1d8e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d8e78: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1d8e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d8e7c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1d8e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d8e80: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1d8e80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d8e84: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1d8e84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d8e88: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x1d8e88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d8e8c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1d8e8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d8e90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d8e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d8e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E94u;
        // 0x1d8e98: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8E9Cu;
    // 0x1d8e9c: 0x0  nop
    ctx->pc = 0x1d8e9cu;
    // NOP
    ctx->pc = 0x1d8ea0u;
}
