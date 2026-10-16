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

// Function: sub_001C4C48
// Address: 0x1c4c48 - 0x1c4ce0
void sub_001C4C48_0x1c4c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C48_0x1c4c48");
#endif

    switch (ctx->pc) {
        case 0x1c4c48u: goto label_1c4c48;
        case 0x1c4c4cu: goto label_1c4c4c;
        case 0x1c4c50u: goto label_1c4c50;
        case 0x1c4c54u: goto label_1c4c54;
        case 0x1c4c58u: goto label_1c4c58;
        case 0x1c4c5cu: goto label_1c4c5c;
        case 0x1c4c60u: goto label_1c4c60;
        case 0x1c4c64u: goto label_1c4c64;
        case 0x1c4c68u: goto label_1c4c68;
        case 0x1c4c6cu: goto label_1c4c6c;
        case 0x1c4c70u: goto label_1c4c70;
        case 0x1c4c74u: goto label_1c4c74;
        case 0x1c4c78u: goto label_1c4c78;
        case 0x1c4c7cu: goto label_1c4c7c;
        case 0x1c4c80u: goto label_1c4c80;
        case 0x1c4c84u: goto label_1c4c84;
        case 0x1c4c88u: goto label_1c4c88;
        case 0x1c4c8cu: goto label_1c4c8c;
        case 0x1c4c90u: goto label_1c4c90;
        case 0x1c4c94u: goto label_1c4c94;
        case 0x1c4c98u: goto label_1c4c98;
        case 0x1c4c9cu: goto label_1c4c9c;
        case 0x1c4ca0u: goto label_1c4ca0;
        case 0x1c4ca4u: goto label_1c4ca4;
        case 0x1c4ca8u: goto label_1c4ca8;
        case 0x1c4cacu: goto label_1c4cac;
        case 0x1c4cb0u: goto label_1c4cb0;
        case 0x1c4cb4u: goto label_1c4cb4;
        case 0x1c4cb8u: goto label_1c4cb8;
        case 0x1c4cbcu: goto label_1c4cbc;
        case 0x1c4cc0u: goto label_1c4cc0;
        case 0x1c4cc4u: goto label_1c4cc4;
        case 0x1c4cc8u: goto label_1c4cc8;
        case 0x1c4cccu: goto label_1c4ccc;
        case 0x1c4cd0u: goto label_1c4cd0;
        case 0x1c4cd4u: goto label_1c4cd4;
        case 0x1c4cd8u: goto label_1c4cd8;
        case 0x1c4cdcu: goto label_1c4cdc;
        default: break;
    }

    ctx->pc = 0x1c4c48u;

label_1c4c48:
    // 0x1c4c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c4c4c:
    // 0x1c4c4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c4c50:
    // 0x1c4c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c4c54:
    // 0x1c4c54: 0xc06d60c  jal         func_1B5830
label_1c4c58:
    if (ctx->pc == 0x1C4C58u) {
        ctx->pc = 0x1C4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C54u;
        // 0x1c4c58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C5Cu;
        goto label_1c4c5c;
    }
    ctx->pc = 0x1C4C54u;
    SET_GPR_U32(ctx, 31, 0x1C4C5Cu);
    ctx->pc = 0x1C4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C54u;
    // 0x1c4c58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5830u, 0x1C4C54u, 0x1C4C5Cu)) {
        return;
    }
    ctx->pc = 0x1C4C5Cu;
label_1c4c5c:
    // 0x1c4c5c: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x1c4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_1c4c60:
    // 0x1c4c60: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1c4c64:
    if (ctx->pc == 0x1C4C64u) {
        ctx->pc = 0x1C4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C60u;
        // 0x1c4c64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C68u;
        goto label_1c4c68;
    }
    ctx->pc = 0x1C4C60u;
    {
        const bool branch_taken_0x1c4c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c60) {
            ctx->pc = 0x1C4C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4C60u;
            // 0x1c4c64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4CD4u;
            goto label_1c4cd4;
        }
    }
    ctx->pc = 0x1C4C68u;
label_1c4c68:
    // 0x1c4c68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c4c6c:
    // 0x1c4c6c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c4c70:
    if (ctx->pc == 0x1C4C70u) {
        ctx->pc = 0x1C4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C6Cu;
        // 0x1c4c70: 0x8e0602d0  lw          $a2, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C74u;
        goto label_1c4c74;
    }
    ctx->pc = 0x1C4C6Cu;
    {
        const bool branch_taken_0x1c4c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c6c) {
            ctx->pc = 0x1C4C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4C6Cu;
            // 0x1c4c70: 0x8e0602d0  lw          $a2, 0x2D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4CB8u;
            goto label_1c4cb8;
        }
    }
    ctx->pc = 0x1C4C74u;
label_1c4c74:
    // 0x1c4c74: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c4c78:
    // 0x1c4c78: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1c4c7c:
    if (ctx->pc == 0x1C4C7Cu) {
        ctx->pc = 0x1C4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C78u;
        // 0x1c4c7c: 0x8e0602d0  lw          $a2, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C80u;
        goto label_1c4c80;
    }
    ctx->pc = 0x1C4C78u;
    {
        const bool branch_taken_0x1c4c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c78) {
            ctx->pc = 0x1C4C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4C78u;
            // 0x1c4c7c: 0x8e0602d0  lw          $a2, 0x2D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4CB8u;
            goto label_1c4cb8;
        }
    }
    ctx->pc = 0x1C4C80u;
label_1c4c80:
    // 0x1c4c80: 0xde020260  ld          $v0, 0x260($s0)
    ctx->pc = 0x1c4c80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 608)));
label_1c4c84:
    // 0x1c4c84: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_1c4c88:
    // 0x1c4c88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c4c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c4c8c:
    // 0x1c4c8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c4c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c4c90:
    // 0x1c4c90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1c4c94:
    if (ctx->pc == 0x1C4C94u) {
        ctx->pc = 0x1C4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C90u;
        // 0x1c4c94: 0x26050260  addiu       $a1, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C98u;
        goto label_1c4c98;
    }
    ctx->pc = 0x1C4C90u;
    {
        const bool branch_taken_0x1c4c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C90u;
        // 0x1c4c94: 0x26050260  addiu       $a1, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c90) {
            ctx->pc = 0x1C4CD0u;
            goto label_1c4cd0;
        }
    }
    ctx->pc = 0x1C4C98u;
label_1c4c98:
    // 0x1c4c98: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_1c4c9c:
    // 0x1c4c9c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c4ca0:
    // 0x1c4ca0: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c4ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c4ca4:
    // 0x1c4ca4: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c4ca8:
    // 0x1c4ca8: 0x60f809  jalr        $v1
label_1c4cac:
    if (ctx->pc == 0x1C4CACu) {
        ctx->pc = 0x1C4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CA8u;
        // 0x1c4cac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4CB0u;
        goto label_1c4cb0;
    }
    ctx->pc = 0x1C4CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C4CB0u);
        ctx->pc = 0x1C4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CA8u;
        // 0x1c4cac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CA8u, 0x1C4CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4CB0u;
label_1c4cb0:
    // 0x1c4cb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c4cb4:
    if (ctx->pc == 0x1C4CB4u) {
        ctx->pc = 0x1C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CB0u;
        // 0x1c4cb4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4CB8u;
        goto label_1c4cb8;
    }
    ctx->pc = 0x1C4CB0u;
    {
        const bool branch_taken_0x1c4cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CB0u;
        // 0x1c4cb4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cb0) {
            ctx->pc = 0x1C4CD4u;
            goto label_1c4cd4;
        }
    }
    ctx->pc = 0x1C4CB8u;
label_1c4cb8:
    // 0x1c4cb8: 0x26050250  addiu       $a1, $s0, 0x250
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1c4cbc:
    // 0x1c4cbc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c4cc0:
    // 0x1c4cc0: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c4cc4:
    // 0x1c4cc4: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c4cc8:
    // 0x1c4cc8: 0x60f809  jalr        $v1
label_1c4ccc:
    if (ctx->pc == 0x1C4CCCu) {
        ctx->pc = 0x1C4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CC8u;
        // 0x1c4ccc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4CD0u;
        goto label_1c4cd0;
    }
    ctx->pc = 0x1C4CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C4CD0u);
        ctx->pc = 0x1C4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CC8u;
        // 0x1c4ccc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CC8u, 0x1C4CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4CD0u;
label_1c4cd0:
    // 0x1c4cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4cd4:
    // 0x1c4cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4cd8:
    // 0x1c4cd8: 0x3e00008  jr          $ra
label_1c4cdc:
    if (ctx->pc == 0x1C4CDCu) {
        ctx->pc = 0x1C4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CD8u;
        // 0x1c4cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4CE0u;
        goto label_fallthrough_0x1c4cd8;
    }
    ctx->pc = 0x1C4CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CD8u;
        // 0x1c4cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4cd8:
    ctx->pc = 0x1C4CE0u;
}
