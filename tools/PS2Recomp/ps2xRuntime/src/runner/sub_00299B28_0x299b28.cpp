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

// Function: sub_00299B28
// Address: 0x299b28 - 0x299bc0
void sub_00299B28_0x299b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299B28_0x299b28");
#endif

    switch (ctx->pc) {
        case 0x299b28u: goto label_299b28;
        case 0x299b2cu: goto label_299b2c;
        case 0x299b30u: goto label_299b30;
        case 0x299b34u: goto label_299b34;
        case 0x299b38u: goto label_299b38;
        case 0x299b3cu: goto label_299b3c;
        case 0x299b40u: goto label_299b40;
        case 0x299b44u: goto label_299b44;
        case 0x299b48u: goto label_299b48;
        case 0x299b4cu: goto label_299b4c;
        case 0x299b50u: goto label_299b50;
        case 0x299b54u: goto label_299b54;
        case 0x299b58u: goto label_299b58;
        case 0x299b5cu: goto label_299b5c;
        case 0x299b60u: goto label_299b60;
        case 0x299b64u: goto label_299b64;
        case 0x299b68u: goto label_299b68;
        case 0x299b6cu: goto label_299b6c;
        case 0x299b70u: goto label_299b70;
        case 0x299b74u: goto label_299b74;
        case 0x299b78u: goto label_299b78;
        case 0x299b7cu: goto label_299b7c;
        case 0x299b80u: goto label_299b80;
        case 0x299b84u: goto label_299b84;
        case 0x299b88u: goto label_299b88;
        case 0x299b8cu: goto label_299b8c;
        case 0x299b90u: goto label_299b90;
        case 0x299b94u: goto label_299b94;
        case 0x299b98u: goto label_299b98;
        case 0x299b9cu: goto label_299b9c;
        case 0x299ba0u: goto label_299ba0;
        case 0x299ba4u: goto label_299ba4;
        case 0x299ba8u: goto label_299ba8;
        case 0x299bacu: goto label_299bac;
        case 0x299bb0u: goto label_299bb0;
        case 0x299bb4u: goto label_299bb4;
        case 0x299bb8u: goto label_299bb8;
        case 0x299bbcu: goto label_299bbc;
        default: break;
    }

    ctx->pc = 0x299b28u;

label_299b28:
    // 0x299b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_299b2c:
    // 0x299b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299b30:
    // 0x299b30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_299b34:
    // 0x299b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299b38:
    // 0x299b38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x299b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_299b3c:
    // 0x299b3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x299b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_299b40:
    // 0x299b40: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x299b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_299b44:
    // 0x299b44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_299b48:
    if (ctx->pc == 0x299B48u) {
        ctx->pc = 0x299B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B44u;
        // 0x299b48: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B4Cu;
        goto label_299b4c;
    }
    ctx->pc = 0x299B44u;
    {
        const bool branch_taken_0x299b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b44) {
            ctx->pc = 0x299B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299B44u;
            // 0x299b48: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299B5Cu;
            goto label_299b5c;
        }
    }
    ctx->pc = 0x299B4Cu;
label_299b4c:
    // 0x299b4c: 0xc0a7d0e  jal         func_29F438
label_299b50:
    if (ctx->pc == 0x299B50u) {
        ctx->pc = 0x299B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B4Cu;
        // 0x299b50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B54u;
        goto label_299b54;
    }
    ctx->pc = 0x299B4Cu;
    SET_GPR_U32(ctx, 31, 0x299B54u);
    ctx->pc = 0x299B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B4Cu;
    // 0x299b50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F438u, 0x299B4Cu, 0x299B54u)) {
        return;
    }
    ctx->pc = 0x299B54u;
label_299b54:
    // 0x299b54: 0x10000006  b           . + 4 + (0x6 << 2)
label_299b58:
    if (ctx->pc == 0x299B58u) {
        ctx->pc = 0x299B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B54u;
        // 0x299b58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B5Cu;
        goto label_299b5c;
    }
    ctx->pc = 0x299B54u;
    {
        const bool branch_taken_0x299b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B54u;
        // 0x299b58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b54) {
            ctx->pc = 0x299B70u;
            goto label_299b70;
        }
    }
    ctx->pc = 0x299B5Cu;
label_299b5c:
    // 0x299b5c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x299b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_299b60:
    // 0x299b60: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_299b64:
    // 0x299b64: 0x40f809  jalr        $v0
label_299b68:
    if (ctx->pc == 0x299B68u) {
        ctx->pc = 0x299B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B64u;
        // 0x299b68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B6Cu;
        goto label_299b6c;
    }
    ctx->pc = 0x299B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x299B6Cu);
        ctx->pc = 0x299B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B64u;
        // 0x299b68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299B64u, 0x299B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299B6Cu;
label_299b6c:
    // 0x299b6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x299b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_299b70:
    // 0x299b70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x299b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_299b74:
    // 0x299b74: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x299b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_299b78:
    // 0x299b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299b7c:
    // 0x299b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299b80:
    // 0x299b80: 0x3e00008  jr          $ra
label_299b84:
    if (ctx->pc == 0x299B84u) {
        ctx->pc = 0x299B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B80u;
        // 0x299b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B88u;
        goto label_299b88;
    }
    ctx->pc = 0x299B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B80u;
        // 0x299b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299B88u;
label_299b88:
    // 0x299b88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x299b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_299b8c:
    // 0x299b8c: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x299b8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_299b90:
    // 0x299b90: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x299b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_299b94:
    // 0x299b94: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x299b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_299b98:
    // 0x299b98: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x299b98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_299b9c:
    // 0x299b9c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_299ba0:
    if (ctx->pc == 0x299BA0u) {
        ctx->pc = 0x299BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B9Cu;
        // 0x299ba0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BA4u;
        goto label_299ba4;
    }
    ctx->pc = 0x299B9Cu;
    {
        const bool branch_taken_0x299b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b9c) {
            ctx->pc = 0x299BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299B9Cu;
            // 0x299ba0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299BB0u;
            goto label_299bb0;
        }
    }
    ctx->pc = 0x299BA4u;
label_299ba4:
    // 0x299ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299ba8:
    // 0x299ba8: 0x10000002  b           . + 4 + (0x2 << 2)
label_299bac:
    if (ctx->pc == 0x299BACu) {
        ctx->pc = 0x299BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BA8u;
        // 0x299bac: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BB0u;
        goto label_299bb0;
    }
    ctx->pc = 0x299BA8u;
    {
        const bool branch_taken_0x299ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BA8u;
        // 0x299bac: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ba8) {
            ctx->pc = 0x299BB4u;
            goto label_299bb4;
        }
    }
    ctx->pc = 0x299BB0u;
label_299bb0:
    // 0x299bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299bb4:
    // 0x299bb4: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x299bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_299bb8:
    // 0x299bb8: 0x3e00008  jr          $ra
label_299bbc:
    if (ctx->pc == 0x299BBCu) {
        ctx->pc = 0x299BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BB8u;
        // 0x299bbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BC0u;
        goto label_fallthrough_0x299bb8;
    }
    ctx->pc = 0x299BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BB8u;
        // 0x299bbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x299bb8:
    ctx->pc = 0x299BC0u;
}
