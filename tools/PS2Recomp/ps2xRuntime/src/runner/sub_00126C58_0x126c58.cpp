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

// Function: sub_00126C58
// Address: 0x126c58 - 0x126d00
void sub_00126C58_0x126c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126C58_0x126c58");
#endif

    switch (ctx->pc) {
        case 0x126c58u: goto label_126c58;
        case 0x126c5cu: goto label_126c5c;
        case 0x126c60u: goto label_126c60;
        case 0x126c64u: goto label_126c64;
        case 0x126c68u: goto label_126c68;
        case 0x126c6cu: goto label_126c6c;
        case 0x126c70u: goto label_126c70;
        case 0x126c74u: goto label_126c74;
        case 0x126c78u: goto label_126c78;
        case 0x126c7cu: goto label_126c7c;
        case 0x126c80u: goto label_126c80;
        case 0x126c84u: goto label_126c84;
        case 0x126c88u: goto label_126c88;
        case 0x126c8cu: goto label_126c8c;
        case 0x126c90u: goto label_126c90;
        case 0x126c94u: goto label_126c94;
        case 0x126c98u: goto label_126c98;
        case 0x126c9cu: goto label_126c9c;
        case 0x126ca0u: goto label_126ca0;
        case 0x126ca4u: goto label_126ca4;
        case 0x126ca8u: goto label_126ca8;
        case 0x126cacu: goto label_126cac;
        case 0x126cb0u: goto label_126cb0;
        case 0x126cb4u: goto label_126cb4;
        case 0x126cb8u: goto label_126cb8;
        case 0x126cbcu: goto label_126cbc;
        case 0x126cc0u: goto label_126cc0;
        case 0x126cc4u: goto label_126cc4;
        case 0x126cc8u: goto label_126cc8;
        case 0x126cccu: goto label_126ccc;
        case 0x126cd0u: goto label_126cd0;
        case 0x126cd4u: goto label_126cd4;
        case 0x126cd8u: goto label_126cd8;
        case 0x126cdcu: goto label_126cdc;
        case 0x126ce0u: goto label_126ce0;
        case 0x126ce4u: goto label_126ce4;
        case 0x126ce8u: goto label_126ce8;
        case 0x126cecu: goto label_126cec;
        case 0x126cf0u: goto label_126cf0;
        case 0x126cf4u: goto label_126cf4;
        case 0x126cf8u: goto label_126cf8;
        case 0x126cfcu: goto label_126cfc;
        default: break;
    }

    ctx->pc = 0x126c58u;

label_126c58:
    // 0x126c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_126c5c:
    // 0x126c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_126c60:
    // 0x126c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126c64:
    // 0x126c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126c68:
    // 0x126c68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126c6c:
    // 0x126c6c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_126c70:
    if (ctx->pc == 0x126C70u) {
        ctx->pc = 0x126C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C6Cu;
        // 0x126c70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C74u;
        goto label_126c74;
    }
    ctx->pc = 0x126C6Cu;
    {
        const bool branch_taken_0x126c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C6Cu;
        // 0x126c70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c6c) {
            ctx->pc = 0x126CE8u;
            goto label_126ce8;
        }
    }
    ctx->pc = 0x126C74u;
label_126c74:
    // 0x126c74: 0x8e040c00  lw          $a0, 0xC00($s0)
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_126c78:
    // 0x126c78: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_126c7c:
    if (ctx->pc == 0x126C7Cu) {
        ctx->pc = 0x126C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C78u;
        // 0x126c7c: 0x8e020c70  lw          $v0, 0xC70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C80u;
        goto label_126c80;
    }
    ctx->pc = 0x126C78u;
    {
        const bool branch_taken_0x126c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c78) {
            ctx->pc = 0x126C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C78u;
            // 0x126c7c: 0x8e020c70  lw          $v0, 0xC70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CB4u;
            goto label_126cb4;
        }
    }
    ctx->pc = 0x126C80u;
label_126c80:
    // 0x126c80: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x126c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_126c84:
    // 0x126c84: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x126c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_126c88:
    // 0x126c88: 0x84620038  lh          $v0, 0x38($v1)
    ctx->pc = 0x126c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_126c8c:
    // 0x126c8c: 0x24660038  addiu       $a2, $v1, 0x38
    ctx->pc = 0x126c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_126c90:
    // 0x126c90: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_126c94:
    if (ctx->pc == 0x126C94u) {
        ctx->pc = 0x126C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C90u;
        // 0x126c94: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C98u;
        goto label_126c98;
    }
    ctx->pc = 0x126C90u;
    {
        const bool branch_taken_0x126c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C90u;
        // 0x126c94: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c90) {
            ctx->pc = 0x126CA0u;
            goto label_126ca0;
        }
    }
    ctx->pc = 0x126C98u;
label_126c98:
    // 0x126c98: 0x10000002  b           . + 4 + (0x2 << 2)
label_126c9c:
    if (ctx->pc == 0x126C9Cu) {
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C98u;
        // 0x126c9c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CA0u;
        goto label_126ca0;
    }
    ctx->pc = 0x126C98u;
    {
        const bool branch_taken_0x126c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C98u;
        // 0x126c9c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c98) {
            ctx->pc = 0x126CA4u;
            goto label_126ca4;
        }
    }
    ctx->pc = 0x126CA0u;
label_126ca0:
    // 0x126ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126ca4:
    // 0x126ca4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x126ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_126ca8:
    // 0x126ca8: 0x40f809  jalr        $v0
label_126cac:
    if (ctx->pc == 0x126CACu) {
        ctx->pc = 0x126CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CA8u;
        // 0x126cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CB0u;
        goto label_126cb0;
    }
    ctx->pc = 0x126CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126CB0u);
        ctx->pc = 0x126CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CA8u;
        // 0x126cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CA8u, 0x126CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126CB0u;
label_126cb0:
    // 0x126cb0: 0x8e020c70  lw          $v0, 0xC70($s0)
    ctx->pc = 0x126cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_126cb4:
    // 0x126cb4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_126cb8:
    if (ctx->pc == 0x126CB8u) {
        ctx->pc = 0x126CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB4u;
        // 0x126cb8: 0x8e040eac  lw          $a0, 0xEAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CBCu;
        goto label_126cbc;
    }
    ctx->pc = 0x126CB4u;
    {
        const bool branch_taken_0x126cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126cb4) {
            ctx->pc = 0x126CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126CB4u;
            // 0x126cb8: 0x8e040eac  lw          $a0, 0xEAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CD8u;
            goto label_126cd8;
        }
    }
    ctx->pc = 0x126CBCu;
label_126cbc:
    // 0x126cbc: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x126cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_126cc0:
    // 0x126cc0: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
label_126cc4:
    if (ctx->pc == 0x126CC4u) {
        ctx->pc = 0x126CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CC0u;
        // 0x126cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CC8u;
        goto label_126cc8;
    }
    ctx->pc = 0x126CC0u;
    {
        const bool branch_taken_0x126cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x126cc0) {
            ctx->pc = 0x126CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126CC0u;
            // 0x126cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CCCu;
            goto label_126ccc;
        }
    }
    ctx->pc = 0x126CC8u;
label_126cc8:
    // 0x126cc8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x126cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_126ccc:
    // 0x126ccc: 0xc041612  jal         func_105848
label_126cd0:
    if (ctx->pc == 0x126CD0u) {
        ctx->pc = 0x126CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CCCu;
        // 0x126cd0: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CD4u;
        goto label_126cd4;
    }
    ctx->pc = 0x126CCCu;
    SET_GPR_U32(ctx, 31, 0x126CD4u);
    ctx->pc = 0x126CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CCCu;
    // 0x126cd0: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105848u, 0x126CCCu, 0x126CD4u)) {
        return;
    }
    ctx->pc = 0x126CD4u;
label_126cd4:
    // 0x126cd4: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x126cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_126cd8:
    // 0x126cd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_126cdc:
    if (ctx->pc == 0x126CDCu) {
        ctx->pc = 0x126CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD8u;
        // 0x126cdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CE0u;
        goto label_126ce0;
    }
    ctx->pc = 0x126CD8u;
    {
        const bool branch_taken_0x126cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD8u;
        // 0x126cdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cd8) {
            ctx->pc = 0x126CECu;
            goto label_126cec;
        }
    }
    ctx->pc = 0x126CE0u;
label_126ce0:
    // 0x126ce0: 0xc059c74  jal         func_1671D0
label_126ce4:
    if (ctx->pc == 0x126CE4u) {
        ctx->pc = 0x126CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CE0u;
        // 0x126ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CE8u;
        goto label_126ce8;
    }
    ctx->pc = 0x126CE0u;
    SET_GPR_U32(ctx, 31, 0x126CE8u);
    ctx->pc = 0x126CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CE0u;
    // 0x126ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1671D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1671D0u, 0x126CE0u, 0x126CE8u)) {
        return;
    }
    ctx->pc = 0x126CE8u;
label_126ce8:
    // 0x126ce8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126cec:
    // 0x126cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126cf0:
    // 0x126cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126cf4:
    // 0x126cf4: 0x3e00008  jr          $ra
label_126cf8:
    if (ctx->pc == 0x126CF8u) {
        ctx->pc = 0x126CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CF4u;
        // 0x126cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CFCu;
        goto label_126cfc;
    }
    ctx->pc = 0x126CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CF4u;
        // 0x126cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126CFCu;
label_126cfc:
    // 0x126cfc: 0x0  nop
    ctx->pc = 0x126cfcu;
    // NOP
    ctx->pc = 0x126d00u;
}
