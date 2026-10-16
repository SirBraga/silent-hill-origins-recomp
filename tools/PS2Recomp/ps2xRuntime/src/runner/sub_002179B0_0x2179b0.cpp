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

// Function: sub_002179B0
// Address: 0x2179b0 - 0x217b08
void sub_002179B0_0x2179b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179B0_0x2179b0");
#endif

    switch (ctx->pc) {
        case 0x2179e4u: goto label_2179e4;
        case 0x217a0cu: goto label_217a0c;
        case 0x217a1cu: goto label_217a1c;
        case 0x217a38u: goto label_217a38;
        case 0x217a58u: goto label_217a58;
        case 0x217a88u: goto label_217a88;
        case 0x217ac8u: goto label_217ac8;
        case 0x217af4u: goto label_217af4;
        default: break;
    }

    ctx->pc = 0x2179b0u;

    // 0x2179b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2179b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2179b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2179b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2179b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2179b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2179bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2179bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2179c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2179c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2179c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2179c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2179cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2179ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2179d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2179d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2179d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2179d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2179dc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2179DCu;
    SET_GPR_U32(ctx, 31, 0x2179E4u);
    ctx->pc = 0x2179E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179DCu;
    // 0x2179e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2179DCu, 0x2179E4u)) {
        return;
    }
    ctx->pc = 0x2179E4u;
label_2179e4:
    // 0x2179e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2179e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2179e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2179e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2179ec: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x2179ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2179f0: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x2179f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2179f4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2179f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2179f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2179f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2179fc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2179fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a04: 0xc0817da  jal         func_205F68
    ctx->pc = 0x217A04u;
    SET_GPR_U32(ctx, 31, 0x217A0Cu);
    ctx->pc = 0x217A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A04u;
    // 0x217a08: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x217A04u, 0x217A0Cu)) {
        return;
    }
    ctx->pc = 0x217A0Cu;
label_217a0c:
    // 0x217a0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x217a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217a10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217a14: 0xc080924  jal         func_202490
    ctx->pc = 0x217A14u;
    SET_GPR_U32(ctx, 31, 0x217A1Cu);
    ctx->pc = 0x217A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A14u;
    // 0x217a18: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217A14u, 0x217A1Cu)) {
        return;
    }
    ctx->pc = 0x217A1Cu;
label_217a1c:
    // 0x217a1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x217a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x217a20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217a2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x217a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217a30: 0xc0817da  jal         func_205F68
    ctx->pc = 0x217A30u;
    SET_GPR_U32(ctx, 31, 0x217A38u);
    ctx->pc = 0x217A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A30u;
    // 0x217a34: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x217A30u, 0x217A38u)) {
        return;
    }
    ctx->pc = 0x217A38u;
label_217a38:
    // 0x217a38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217a40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x217a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217a48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x217a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a50: 0x3e00008  jr          $ra
    ctx->pc = 0x217A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A50u;
        // 0x217a54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A58u;
label_217a58:
    // 0x217a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217a5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x217a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x217a60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x217a64: 0x24426570  addiu       $v0, $v0, 0x6570
    ctx->pc = 0x217a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25968));
    // 0x217a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217a74: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x217a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x217a78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x217a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217a7c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x217A7Cu;
    {
        const bool branch_taken_0x217a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A7Cu;
        // 0x217a80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a7c) {
            ctx->pc = 0x217AE0u;
            goto label_217ae0;
        }
    }
    ctx->pc = 0x217A84u;
    // 0x217a84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x217a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_217a88:
    // 0x217a88: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x217A88u;
    {
        const bool branch_taken_0x217a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a88) {
            ctx->pc = 0x217A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A88u;
            // 0x217a8c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217AD8u;
            goto label_217ad8;
        }
    }
    ctx->pc = 0x217A90u;
    // 0x217a90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x217a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x217a94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217A94u;
    {
        const bool branch_taken_0x217a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x217A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A94u;
        // 0x217a98: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a94) {
            ctx->pc = 0x217AA4u;
            goto label_217aa4;
        }
    }
    ctx->pc = 0x217A9Cu;
    // 0x217a9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217A9Cu;
    {
        const bool branch_taken_0x217a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A9Cu;
        // 0x217aa0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a9c) {
            ctx->pc = 0x217AA8u;
            goto label_217aa8;
        }
    }
    ctx->pc = 0x217AA4u;
label_217aa4:
    // 0x217aa4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x217aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_217aa8:
    // 0x217aa8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x217aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x217aac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217AACu;
    {
        const bool branch_taken_0x217aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x217AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AACu;
        // 0x217ab0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217aac) {
            ctx->pc = 0x217ABCu;
            goto label_217abc;
        }
    }
    ctx->pc = 0x217AB4u;
    // 0x217ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217AB4u;
    {
        const bool branch_taken_0x217ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AB4u;
        // 0x217ab8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ab4) {
            ctx->pc = 0x217AC0u;
            goto label_217ac0;
        }
    }
    ctx->pc = 0x217ABCu;
label_217abc:
    // 0x217abc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x217abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_217ac0:
    // 0x217ac0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x217AC0u;
    SET_GPR_U32(ctx, 31, 0x217AC8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x217AC0u, 0x217AC8u)) {
        return;
    }
    ctx->pc = 0x217AC8u;
label_217ac8:
    // 0x217ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x217ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217acc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x217ad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x217ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x217ad4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x217ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_217ad8:
    // 0x217ad8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x217AD8u;
    {
        const bool branch_taken_0x217ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217ad8) {
            ctx->pc = 0x217ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217AD8u;
            // 0x217adc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217a88;
        }
    }
    ctx->pc = 0x217AE0u;
label_217ae0:
    // 0x217ae0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x217ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x217ae4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x217AE4u;
    {
        const bool branch_taken_0x217ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ae4) {
            ctx->pc = 0x217AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217AE4u;
            // 0x217ae8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217AF8u;
            goto label_217af8;
        }
    }
    ctx->pc = 0x217AECu;
    // 0x217aec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x217AECu;
    SET_GPR_U32(ctx, 31, 0x217AF4u);
    ctx->pc = 0x217AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AECu;
    // 0x217af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x217AECu, 0x217AF4u)) {
        return;
    }
    ctx->pc = 0x217AF4u;
label_217af4:
    // 0x217af4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217af8:
    // 0x217af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b00: 0x3e00008  jr          $ra
    ctx->pc = 0x217B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B00u;
        // 0x217b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217B08u;
}
