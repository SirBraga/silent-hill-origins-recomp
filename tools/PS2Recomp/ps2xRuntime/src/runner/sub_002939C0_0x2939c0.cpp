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

// Function: sub_002939C0
// Address: 0x2939c0 - 0x293ad8
void sub_002939C0_0x2939c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002939C0_0x2939c0");
#endif

    switch (ctx->pc) {
        case 0x293a18u: goto label_293a18;
        case 0x293a64u: goto label_293a64;
        case 0x293a84u: goto label_293a84;
        case 0x293aa8u: goto label_293aa8;
        default: break;
    }

    ctx->pc = 0x2939c0u;

    // 0x2939c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2939c4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2939c8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2939c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2939cc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2939ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2939d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2939d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2939d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939d8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2939d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2939dc: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x2939dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2939e0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2939e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2939e4: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x2939e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x2939e8: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x2939e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x2939ec: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2939ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2939f0: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x2939f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2939f4: 0x26627690  addiu       $v0, $s3, 0x7690
    ctx->pc = 0x2939f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30352));
    // 0x2939f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2939f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2939fc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2939fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293a00: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x293a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a04: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x293a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x293a08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293A08u;
    {
        const bool branch_taken_0x293a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A08u;
        // 0x293a0c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a08) {
            ctx->pc = 0x293A20u;
            goto label_293a20;
        }
    }
    ctx->pc = 0x293A10u;
    // 0x293a10: 0xc0c85b0  jal         func_3216C0
    ctx->pc = 0x293A10u;
    SET_GPR_U32(ctx, 31, 0x293A18u);
    ctx->pc = 0x3216C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216C0u, 0x293A10u, 0x293A18u)) {
        return;
    }
    ctx->pc = 0x293A18u;
label_293a18:
    // 0x293a18: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x293A18u;
    {
        const bool branch_taken_0x293a18 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x293A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A18u;
        // 0x293a1c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a18) {
            ctx->pc = 0x293A94u;
            goto label_293a94;
        }
    }
    ctx->pc = 0x293A20u;
label_293a20:
    // 0x293a20: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x293a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x293a24: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x293a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x293a28: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x293a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x293a2c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x293a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x293a30: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x293a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293a34: 0x26737690  addiu       $s3, $s3, 0x7690
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 30352));
    // 0x293a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a3c: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x293a40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x293a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x293a44: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x293a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x293a48: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x293a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x293a4c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x293a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x293a50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x293a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x293a54: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x293a58: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x293a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x293a5c: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x293A5Cu;
    SET_GPR_U32(ctx, 31, 0x293A64u);
    ctx->pc = 0x293A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A5Cu;
    // 0x293a60: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x293A5Cu, 0x293A64u)) {
        return;
    }
    ctx->pc = 0x293A64u;
label_293a64:
    // 0x293a64: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x293a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x293a68: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x293a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x293a6c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x293a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x293a70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a74: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x293a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x293a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293a7c: 0xc0c85b8  jal         func_3216E0
    ctx->pc = 0x293A7Cu;
    SET_GPR_U32(ctx, 31, 0x293A84u);
    ctx->pc = 0x293A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A7Cu;
    // 0x293a80: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3216E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216E0u, 0x293A7Cu, 0x293A84u)) {
        return;
    }
    ctx->pc = 0x293A84u;
label_293a84:
    // 0x293a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a88: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x293A88u;
    {
        const bool branch_taken_0x293a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x293A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A88u;
        // 0x293a8c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a88) {
            ctx->pc = 0x293AB0u;
            goto label_293ab0;
        }
    }
    ctx->pc = 0x293A90u;
    // 0x293a90: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x293a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_293a94:
    // 0x293a94: 0x8c43e724  lw          $v1, -0x18DC($v0)
    ctx->pc = 0x293a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960932)));
    // 0x293a98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293A98u;
    {
        const bool branch_taken_0x293a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A98u;
        // 0x293a9c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a98) {
            ctx->pc = 0x293AA8u;
            goto label_293aa8;
        }
    }
    ctx->pc = 0x293AA0u;
    // 0x293aa0: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x293AA0u;
    SET_GPR_U32(ctx, 31, 0x293AA8u);
    ctx->pc = 0x293AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293AA0u;
    // 0x293aa4: 0x2484cf38  addiu       $a0, $a0, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x293AA0u, 0x293AA8u)) {
        return;
    }
    ctx->pc = 0x293AA8u;
label_293aa8:
    // 0x293aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293AA8u;
    {
        const bool branch_taken_0x293aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AA8u;
        // 0x293aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293aa8) {
            ctx->pc = 0x293AB8u;
            goto label_293ab8;
        }
    }
    ctx->pc = 0x293AB0u;
label_293ab0:
    // 0x293ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293ab4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x293ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_293ab8:
    // 0x293ab8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x293ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x293abc: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x293abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x293ac0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x293ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x293ac4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x293ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x293ac8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x293ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x293acc: 0x3e00008  jr          $ra
    ctx->pc = 0x293ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293ACCu;
        // 0x293ad0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293AD4u;
    // 0x293ad4: 0x0  nop
    ctx->pc = 0x293ad4u;
    // NOP
    ctx->pc = 0x293ad8u;
}
