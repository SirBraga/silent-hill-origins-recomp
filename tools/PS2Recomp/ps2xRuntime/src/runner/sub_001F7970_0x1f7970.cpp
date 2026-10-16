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

// Function: sub_001F7970
// Address: 0x1f7970 - 0x1f7ad8
void sub_001F7970_0x1f7970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7970_0x1f7970");
#endif

    switch (ctx->pc) {
        case 0x1f7990u: goto label_1f7990;
        case 0x1f79a0u: goto label_1f79a0;
        case 0x1f7a70u: goto label_1f7a70;
        case 0x1f7ac8u: goto label_1f7ac8;
        default: break;
    }

    ctx->pc = 0x1f7970u;

    // 0x1f7970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7974: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1f7974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1f7978: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1f7978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1f797c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7980: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f7980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f7984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f7988: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7988u;
    SET_GPR_U32(ctx, 31, 0x1F7990u);
    ctx->pc = 0x1F798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7988u;
    // 0x1f798c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7988u, 0x1F7990u)) {
        return;
    }
    ctx->pc = 0x1F7990u;
label_1f7990:
    // 0x1f7990: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f7990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7994: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1f7994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1f7998: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7998u;
    SET_GPR_U32(ctx, 31, 0x1F79A0u);
    ctx->pc = 0x1F799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7998u;
    // 0x1f799c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7998u, 0x1F79A0u)) {
        return;
    }
    ctx->pc = 0x1F79A0u;
label_1f79a0:
    // 0x1f79a0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1f79a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f79a4: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x1f79a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f79a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79A8u;
    {
        const bool branch_taken_0x1f79a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79A8u;
        // 0x1f79ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79a8) {
            ctx->pc = 0x1F79B8u;
            goto label_1f79b8;
        }
    }
    ctx->pc = 0x1F79B0u;
    // 0x1f79b0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1F79B0u;
    {
        const bool branch_taken_0x1f79b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B0u;
        // 0x1f79b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79b0) {
            ctx->pc = 0x1F7AC0u;
            goto label_1f7ac0;
        }
    }
    ctx->pc = 0x1F79B8u;
label_1f79b8:
    // 0x1f79b8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1f79b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f79bc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1f79bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f79c0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1F79C0u;
    {
        const bool branch_taken_0x1f79c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79C0u;
        // 0x1f79c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79c0) {
            ctx->pc = 0x1F7AC0u;
            goto label_1f7ac0;
        }
    }
    ctx->pc = 0x1F79C8u;
    // 0x1f79c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f79cc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x1f79ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x1f79d0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f79d4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1f79d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1f79d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F79D8u;
    {
        const bool branch_taken_0x1f79d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79D8u;
        // 0x1f79dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79d8) {
            ctx->pc = 0x1F79ECu;
            goto label_1f79ec;
        }
    }
    ctx->pc = 0x1F79E0u;
    // 0x1f79e0: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x1f79e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x1f79e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F79E4u;
    {
        const bool branch_taken_0x1f79e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79E4u;
        // 0x1f79e8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79e4) {
            ctx->pc = 0x1F7A00u;
            goto label_1f7a00;
        }
    }
    ctx->pc = 0x1F79ECu;
label_1f79ec:
    // 0x1f79ec: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F79ECu;
    {
        const bool branch_taken_0x1f79ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79ECu;
        // 0x1f79f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79ec) {
            ctx->pc = 0x1F7AC0u;
            goto label_1f7ac0;
        }
    }
    ctx->pc = 0x1F79F4u;
    // 0x1f79f4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1f79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1f79f8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F79F8u;
    {
        const bool branch_taken_0x1f79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F8u;
        // 0x1f79fc: 0x24441a08  addiu       $a0, $v0, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79f8) {
            ctx->pc = 0x1F7AC0u;
            goto label_1f7ac0;
        }
    }
    ctx->pc = 0x1F7A00u;
label_1f7a00:
    // 0x1f7a00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A00u;
    {
        const bool branch_taken_0x1f7a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A00u;
        // 0x1f7a04: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a00) {
            ctx->pc = 0x1F7A18u;
            goto label_1f7a18;
        }
    }
    ctx->pc = 0x1F7A08u;
    // 0x1f7a08: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f7a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1f7a0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a10: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F7A10u;
    {
        const bool branch_taken_0x1f7a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A10u;
        // 0x1f7a14: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a10) {
            ctx->pc = 0x1F7AC0u;
            goto label_1f7ac0;
        }
    }
    ctx->pc = 0x1F7A18u;
label_1f7a18:
    // 0x1f7a18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A18u;
    {
        const bool branch_taken_0x1f7a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A18u;
        // 0x1f7a1c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a18) {
            ctx->pc = 0x1F7A30u;
            goto label_1f7a30;
        }
    }
    ctx->pc = 0x1F7A20u;
    // 0x1f7a20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7a24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a28: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F7A28u;
    {
        const bool branch_taken_0x1f7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A28u;
        // 0x1f7a2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a28) {
            ctx->pc = 0x1F7AC0u;
            goto label_1f7ac0;
        }
    }
    ctx->pc = 0x1F7A30u;
label_1f7a30:
    // 0x1f7a30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7a34: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1f7a34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7a38: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x1f7a38u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7a3c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7a40: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x1f7a40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1f7a44: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A44u;
    {
        const bool branch_taken_0x1f7a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A44u;
        // 0x1f7a48: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a44) {
            ctx->pc = 0x1F7A5Cu;
            goto label_1f7a5c;
        }
    }
    ctx->pc = 0x1F7A4Cu;
    // 0x1f7a4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7a50: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1f7a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1f7a54: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f7a58: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x1f7a58u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1f7a5c:
    // 0x1f7a5c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f7a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7a60: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1f7a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1f7a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7A64u;
    {
        const bool branch_taken_0x1f7a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A64u;
        // 0x1f7a68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a64) {
            ctx->pc = 0x1F7A74u;
            goto label_1f7a74;
        }
    }
    ctx->pc = 0x1F7A6Cu;
    // 0x1f7a6c: 0x0  nop
    ctx->pc = 0x1f7a6cu;
    // NOP
label_1f7a70:
    // 0x1f7a70: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x1f7a70u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1f7a74:
    // 0x1f7a74: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7A74u;
    {
        const bool branch_taken_0x1f7a74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a74) {
            ctx->pc = 0x1F7A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A74u;
            // 0x1f7a78: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A88u;
            goto label_1f7a88;
        }
    }
    ctx->pc = 0x1F7A7Cu;
    // 0x1f7a7c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f7a7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f7a80: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x1f7a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x1f7a84: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1f7a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1f7a88:
    // 0x1f7a88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F7A88u;
    {
        const bool branch_taken_0x1f7a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A88u;
        // 0x1f7a8c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a88) {
            ctx->pc = 0x1F7A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7a70;
        }
    }
    ctx->pc = 0x1F7A90u;
    // 0x1f7a90: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1f7a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1f7a94: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f7a98: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7A98u;
    {
        const bool branch_taken_0x1f7a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7a98) {
            ctx->pc = 0x1F7A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A98u;
            // 0x1f7a9c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7ABCu;
            goto label_1f7abc;
        }
    }
    ctx->pc = 0x1F7AA0u;
    // 0x1f7aa0: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x1f7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x1f7aa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7AA4u;
    {
        const bool branch_taken_0x1f7aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AA4u;
        // 0x1f7aa8: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7aa4) {
            ctx->pc = 0x1F7AB4u;
            goto label_1f7ab4;
        }
    }
    ctx->pc = 0x1F7AACu;
    // 0x1f7aac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7AACu;
    {
        const bool branch_taken_0x1f7aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AACu;
        // 0x1f7ab0: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7aac) {
            ctx->pc = 0x1F7AB8u;
            goto label_1f7ab8;
        }
    }
    ctx->pc = 0x1F7AB4u;
label_1f7ab4:
    // 0x1f7ab4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x1f7ab4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_1f7ab8:
    // 0x1f7ab8: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1f7ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_1f7abc:
    // 0x1f7abc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f7abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f7ac0:
    // 0x1f7ac0: 0xc07dc7e  jal         func_1F71F8
    ctx->pc = 0x1F7AC0u;
    SET_GPR_U32(ctx, 31, 0x1F7AC8u);
    ctx->pc = 0x1F71F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F71F8u, 0x1F7AC0u, 0x1F7AC8u)) {
        return;
    }
    ctx->pc = 0x1F7AC8u;
label_1f7ac8:
    // 0x1f7ac8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f7ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7acc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f7accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AD0u;
        // 0x1f7ad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7AD8u;
}
