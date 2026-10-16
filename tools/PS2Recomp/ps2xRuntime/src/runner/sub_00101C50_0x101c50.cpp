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

// Function: sub_00101C50
// Address: 0x101c50 - 0x101cf8
void sub_00101C50_0x101c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101C50_0x101c50");
#endif

    switch (ctx->pc) {
        case 0x101c50u: goto label_101c50;
        case 0x101c54u: goto label_101c54;
        case 0x101c58u: goto label_101c58;
        case 0x101c5cu: goto label_101c5c;
        case 0x101c60u: goto label_101c60;
        case 0x101c64u: goto label_101c64;
        case 0x101c68u: goto label_101c68;
        case 0x101c6cu: goto label_101c6c;
        case 0x101c70u: goto label_101c70;
        case 0x101c74u: goto label_101c74;
        case 0x101c78u: goto label_101c78;
        case 0x101c7cu: goto label_101c7c;
        case 0x101c80u: goto label_101c80;
        case 0x101c84u: goto label_101c84;
        case 0x101c88u: goto label_101c88;
        case 0x101c8cu: goto label_101c8c;
        case 0x101c90u: goto label_101c90;
        case 0x101c94u: goto label_101c94;
        case 0x101c98u: goto label_101c98;
        case 0x101c9cu: goto label_101c9c;
        case 0x101ca0u: goto label_101ca0;
        case 0x101ca4u: goto label_101ca4;
        case 0x101ca8u: goto label_101ca8;
        case 0x101cacu: goto label_101cac;
        case 0x101cb0u: goto label_101cb0;
        case 0x101cb4u: goto label_101cb4;
        case 0x101cb8u: goto label_101cb8;
        case 0x101cbcu: goto label_101cbc;
        case 0x101cc0u: goto label_101cc0;
        case 0x101cc4u: goto label_101cc4;
        case 0x101cc8u: goto label_101cc8;
        case 0x101cccu: goto label_101ccc;
        case 0x101cd0u: goto label_101cd0;
        case 0x101cd4u: goto label_101cd4;
        case 0x101cd8u: goto label_101cd8;
        case 0x101cdcu: goto label_101cdc;
        case 0x101ce0u: goto label_101ce0;
        case 0x101ce4u: goto label_101ce4;
        case 0x101ce8u: goto label_101ce8;
        case 0x101cecu: goto label_101cec;
        case 0x101cf0u: goto label_101cf0;
        case 0x101cf4u: goto label_101cf4;
        default: break;
    }

    ctx->pc = 0x101c50u;

label_101c50:
    // 0x101c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x101c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_101c54:
    // 0x101c54: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x101c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_101c58:
    // 0x101c58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x101c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_101c5c:
    // 0x101c5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x101c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_101c60:
    // 0x101c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x101c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101c64:
    // 0x101c64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x101c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101c68:
    // 0x101c68: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x101c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_101c6c:
    // 0x101c6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x101c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_101c70:
    // 0x101c70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_101c74:
    // 0x101c74: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x101c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_101c78:
    // 0x101c78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x101c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_101c7c:
    // 0x101c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_101c80:
    // 0x101c80: 0x40f809  jalr        $v0
label_101c84:
    if (ctx->pc == 0x101C84u) {
        ctx->pc = 0x101C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C80u;
        // 0x101c84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C88u;
        goto label_101c88;
    }
    ctx->pc = 0x101C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101C88u);
        ctx->pc = 0x101C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C80u;
        // 0x101c84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C80u, 0x101C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101C88u;
label_101c88:
    // 0x101c88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x101c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101c8c:
    // 0x101c8c: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x101c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_101c90:
    // 0x101c90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_101c94:
    if (ctx->pc == 0x101C94u) {
        ctx->pc = 0x101C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C90u;
        // 0x101c94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C98u;
        goto label_101c98;
    }
    ctx->pc = 0x101C90u;
    {
        const bool branch_taken_0x101c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C90u;
        // 0x101c94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c90) {
            ctx->pc = 0x101CCCu;
            goto label_101ccc;
        }
    }
    ctx->pc = 0x101C98u;
label_101c98:
    // 0x101c98: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x101c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_101c9c:
    // 0x101c9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x101c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_101ca0:
    // 0x101ca0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x101ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101ca4:
    // 0x101ca4: 0xc0c5cd6  jal         func_317358
label_101ca8:
    if (ctx->pc == 0x101CA8u) {
        ctx->pc = 0x101CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CA4u;
        // 0x101ca8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CACu;
        goto label_101cac;
    }
    ctx->pc = 0x101CA4u;
    SET_GPR_U32(ctx, 31, 0x101CACu);
    ctx->pc = 0x101CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CA4u;
    // 0x101ca8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x101CA4u, 0x101CACu)) {
        return;
    }
    ctx->pc = 0x101CACu;
label_101cac:
    // 0x101cac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_101cb0:
    if (ctx->pc == 0x101CB0u) {
        ctx->pc = 0x101CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CACu;
        // 0x101cb0: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CB4u;
        goto label_101cb4;
    }
    ctx->pc = 0x101CACu;
    {
        const bool branch_taken_0x101cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101cac) {
            ctx->pc = 0x101CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101CACu;
            // 0x101cb0: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101CBCu;
            goto label_101cbc;
        }
    }
    ctx->pc = 0x101CB4u;
label_101cb4:
    // 0x101cb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_101cb8:
    if (ctx->pc == 0x101CB8u) {
        ctx->pc = 0x101CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CB4u;
        // 0x101cb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CBCu;
        goto label_101cbc;
    }
    ctx->pc = 0x101CB4u;
    {
        const bool branch_taken_0x101cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CB4u;
        // 0x101cb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cb4) {
            ctx->pc = 0x101CD4u;
            goto label_101cd4;
        }
    }
    ctx->pc = 0x101CBCu;
label_101cbc:
    // 0x101cbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_101cc0:
    // 0x101cc0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101cc4:
    // 0x101cc4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_101cc8:
    if (ctx->pc == 0x101CC8u) {
        ctx->pc = 0x101CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CC4u;
        // 0x101cc8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CCCu;
        goto label_101ccc;
    }
    ctx->pc = 0x101CC4u;
    {
        const bool branch_taken_0x101cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CC4u;
        // 0x101cc8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cc4) {
            ctx->pc = 0x101C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101c98;
        }
    }
    ctx->pc = 0x101CCCu;
label_101ccc:
    // 0x101ccc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x101cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_101cd0:
    // 0x101cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_101cd4:
    // 0x101cd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x101cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_101cd8:
    // 0x101cd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x101cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101cdc:
    // 0x101cdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x101cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101ce0:
    // 0x101ce0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x101ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101ce4:
    // 0x101ce4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x101ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101ce8:
    // 0x101ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101cec:
    // 0x101cec: 0x3e00008  jr          $ra
label_101cf0:
    if (ctx->pc == 0x101CF0u) {
        ctx->pc = 0x101CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CECu;
        // 0x101cf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CF4u;
        goto label_101cf4;
    }
    ctx->pc = 0x101CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CECu;
        // 0x101cf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101CF4u;
label_101cf4:
    // 0x101cf4: 0x0  nop
    ctx->pc = 0x101cf4u;
    // NOP
    ctx->pc = 0x101cf8u;
}
