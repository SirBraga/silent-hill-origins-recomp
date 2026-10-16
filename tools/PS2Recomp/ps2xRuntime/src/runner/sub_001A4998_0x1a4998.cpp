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

// Function: sub_001A4998
// Address: 0x1a4998 - 0x1a4ae8
void sub_001A4998_0x1a4998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4998_0x1a4998");
#endif

    switch (ctx->pc) {
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4ac0u: goto label_1a4ac0;
        default: break;
    }

    ctx->pc = 0x1a4998u;

    // 0x1a4998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a499c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a49a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a49a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a49a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1a49ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a49acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a49b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a49b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49b4: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1A49B4u;
    SET_GPR_U32(ctx, 31, 0x1A49BCu);
    ctx->pc = 0x1A49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49B4u;
    // 0x1a49b8: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4D40u, 0x1A49B4u, 0x1A49BCu)) {
        return;
    }
    ctx->pc = 0x1A49BCu;
label_1a49bc:
    // 0x1a49bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a49bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a49c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49c4: 0xc069382  jal         func_1A4E08
    ctx->pc = 0x1A49C4u;
    SET_GPR_U32(ctx, 31, 0x1A49CCu);
    ctx->pc = 0x1A49C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49C4u;
    // 0x1a49c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4E08u, 0x1A49C4u, 0x1A49CCu)) {
        return;
    }
    ctx->pc = 0x1A49CCu;
label_1a49cc:
    // 0x1a49cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a49d0: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A49D0u;
    {
        const bool branch_taken_0x1a49d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a49d0) {
            ctx->pc = 0x1A49D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A49D0u;
            // 0x1a49d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4AD0u;
            goto label_1a4ad0;
        }
    }
    ctx->pc = 0x1A49D8u;
    // 0x1a49d8: 0x2623ffd0  addiu       $v1, $s1, -0x30
    ctx->pc = 0x1a49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1a49dc: 0x3c02f0f0  lui         $v0, 0xF0F0
    ctx->pc = 0x1a49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61680 << 16));
    // 0x1a49e0: 0x3442f0f1  ori         $v0, $v0, 0xF0F1
    ctx->pc = 0x1a49e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61681);
    // 0x1a49e4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1a49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a49e8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a49e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a49ec: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a49f0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a49f4: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x1a49f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a49f8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a49f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a49fc: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1a49fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a4a00: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1a4a04: 0x24c5ffec  addiu       $a1, $a2, -0x14
    ctx->pc = 0x1a4a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x1a4a08: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x1a4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1a4a0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1a4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1a4a10: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x1a4a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a4a14: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a4a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1a4a18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A4A18u;
    {
        const bool branch_taken_0x1a4a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A18u;
        // 0x1a4a1c: 0x24c2002c  addiu       $v0, $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a18) {
            ctx->pc = 0x1A4A74u;
            goto label_1a4a74;
        }
    }
    ctx->pc = 0x1A4A20u;
label_1a4a20:
    // 0x1a4a20: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x1a4a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a4a24: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x1a4a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a4a28: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x1a4a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a4a2c: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x1a4a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a4a30: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x1a4a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a4a34: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x1a4a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a4a38: 0x68a4001f  ldl         $a0, 0x1F($a1)
    ctx->pc = 0x1a4a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a4a3c: 0x6ca40018  ldr         $a0, 0x18($a1)
    ctx->pc = 0x1a4a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a4a40: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1a4a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a44: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1a4a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a48: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x1a4a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a4c: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x1a4a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a50: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x1a4a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a54: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1a4a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a58: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x1a4a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a5c: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x1a4a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4a60: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a4a64: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A4A64u;
    {
        const bool branch_taken_0x1a4a64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A64u;
        // 0x1a4a68: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a64) {
            ctx->pc = 0x1A4A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4a20;
        }
    }
    ctx->pc = 0x1A4A6Cu;
    // 0x1a4a6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A4A6Cu;
    {
        const bool branch_taken_0x1a4a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a6c) {
            ctx->pc = 0x1A4AA0u;
            goto label_1a4aa0;
        }
    }
    ctx->pc = 0x1A4A74u;
label_1a4a74:
    // 0x1a4a74: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x1a4a74u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4a78: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x1a4a78u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a4a7c: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x1a4a7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a4a80: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x1a4a80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a4a84: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1a4a84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1a4a88: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x1a4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x1a4a8c: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x1a4a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x1a4a90: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1a4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1a4a94: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a4a98: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A4A98u;
    {
        const bool branch_taken_0x1a4a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A98u;
        // 0x1a4a9c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a98) {
            ctx->pc = 0x1A4A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4a74;
        }
    }
    ctx->pc = 0x1A4AA0u;
label_1a4aa0:
    // 0x1a4aa0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4aa4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a4aa8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a4aac: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a4ab0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1a4ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a4ab4: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1a4ab8: 0xc069372  jal         func_1A4DC8
    ctx->pc = 0x1A4AB8u;
    SET_GPR_U32(ctx, 31, 0x1A4AC0u);
    ctx->pc = 0x1A4ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AB8u;
    // 0x1a4abc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4DC8u, 0x1A4AB8u, 0x1A4AC0u)) {
        return;
    }
    ctx->pc = 0x1A4AC0u;
label_1a4ac0:
    // 0x1a4ac0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a4ac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4ac8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1a4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1a4acc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a4accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4ad0:
    // 0x1a4ad0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a4ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4ad4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a4ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ADCu;
        // 0x1a4ae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AE4u;
    // 0x1a4ae4: 0x0  nop
    ctx->pc = 0x1a4ae4u;
    // NOP
    ctx->pc = 0x1a4ae8u;
}
