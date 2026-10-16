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

// Function: sub_00200B78
// Address: 0x200b78 - 0x200c08
void sub_00200B78_0x200b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200B78_0x200b78");
#endif

    switch (ctx->pc) {
        case 0x200b78u: goto label_200b78;
        case 0x200b7cu: goto label_200b7c;
        case 0x200b80u: goto label_200b80;
        case 0x200b84u: goto label_200b84;
        case 0x200b88u: goto label_200b88;
        case 0x200b8cu: goto label_200b8c;
        case 0x200b90u: goto label_200b90;
        case 0x200b94u: goto label_200b94;
        case 0x200b98u: goto label_200b98;
        case 0x200b9cu: goto label_200b9c;
        case 0x200ba0u: goto label_200ba0;
        case 0x200ba4u: goto label_200ba4;
        case 0x200ba8u: goto label_200ba8;
        case 0x200bacu: goto label_200bac;
        case 0x200bb0u: goto label_200bb0;
        case 0x200bb4u: goto label_200bb4;
        case 0x200bb8u: goto label_200bb8;
        case 0x200bbcu: goto label_200bbc;
        case 0x200bc0u: goto label_200bc0;
        case 0x200bc4u: goto label_200bc4;
        case 0x200bc8u: goto label_200bc8;
        case 0x200bccu: goto label_200bcc;
        case 0x200bd0u: goto label_200bd0;
        case 0x200bd4u: goto label_200bd4;
        case 0x200bd8u: goto label_200bd8;
        case 0x200bdcu: goto label_200bdc;
        case 0x200be0u: goto label_200be0;
        case 0x200be4u: goto label_200be4;
        case 0x200be8u: goto label_200be8;
        case 0x200becu: goto label_200bec;
        case 0x200bf0u: goto label_200bf0;
        case 0x200bf4u: goto label_200bf4;
        case 0x200bf8u: goto label_200bf8;
        case 0x200bfcu: goto label_200bfc;
        case 0x200c00u: goto label_200c00;
        case 0x200c04u: goto label_200c04;
        default: break;
    }

    ctx->pc = 0x200b78u;

label_200b78:
    // 0x200b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_200b7c:
    // 0x200b7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x200b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_200b80:
    // 0x200b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_200b84:
    // 0x200b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200b88:
    // 0x200b88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200b8c:
    // 0x200b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200b90:
    // 0x200b90: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x200b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_200b94:
    // 0x200b94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200b98:
    // 0x200b98: 0xc080858  jal         func_202160
label_200b9c:
    if (ctx->pc == 0x200B9Cu) {
        ctx->pc = 0x200B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B98u;
        // 0x200b9c: 0xae260004  sw          $a2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BA0u;
        goto label_200ba0;
    }
    ctx->pc = 0x200B98u;
    SET_GPR_U32(ctx, 31, 0x200BA0u);
    ctx->pc = 0x200B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B98u;
    // 0x200b9c: 0xae260004  sw          $a2, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x200B98u, 0x200BA0u)) {
        return;
    }
    ctx->pc = 0x200BA0u;
label_200ba0:
    // 0x200ba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x200ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200ba4:
    // 0x200ba4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_200ba8:
    // 0x200ba8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x200ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_200bac:
    // 0x200bac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x200bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_200bb0:
    // 0x200bb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_200bb4:
    if (ctx->pc == 0x200BB4u) {
        ctx->pc = 0x200BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BB0u;
        // 0x200bb4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BB8u;
        goto label_200bb8;
    }
    ctx->pc = 0x200BB0u;
    {
        const bool branch_taken_0x200bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BB0u;
        // 0x200bb4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bb0) {
            ctx->pc = 0x200BBCu;
            goto label_200bbc;
        }
    }
    ctx->pc = 0x200BB8u;
label_200bb8:
    // 0x200bb8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x200bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_200bbc:
    // 0x200bbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200bc0:
    // 0x200bc0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_200bc4:
    if (ctx->pc == 0x200BC4u) {
        ctx->pc = 0x200BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BC0u;
        // 0x200bc4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BC8u;
        goto label_200bc8;
    }
    ctx->pc = 0x200BC0u;
    {
        const bool branch_taken_0x200bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200bc0) {
            ctx->pc = 0x200BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200BC0u;
            // 0x200bc4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200BC8u;
            goto label_200bc8;
        }
    }
    ctx->pc = 0x200BC8u;
label_200bc8:
    // 0x200bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200bcc:
    // 0x200bcc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x200bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_200bd0:
    // 0x200bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_200bd4:
    // 0x200bd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x200bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_200bd8:
    // 0x200bd8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x200bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_200bdc:
    // 0x200bdc: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x200bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_200be0:
    // 0x200be0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x200be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_200be4:
    // 0x200be4: 0x40f809  jalr        $v0
label_200be8:
    if (ctx->pc == 0x200BE8u) {
        ctx->pc = 0x200BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BE4u;
        // 0x200be8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BECu;
        goto label_200bec;
    }
    ctx->pc = 0x200BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200BECu);
        ctx->pc = 0x200BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BE4u;
        // 0x200be8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200BE4u, 0x200BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200BECu;
label_200bec:
    // 0x200bec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x200becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200bf0:
    // 0x200bf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200bf4:
    // 0x200bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200bf8:
    // 0x200bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200bfc:
    // 0x200bfc: 0x3e00008  jr          $ra
label_200c00:
    if (ctx->pc == 0x200C00u) {
        ctx->pc = 0x200C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BFCu;
        // 0x200c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C04u;
        goto label_200c04;
    }
    ctx->pc = 0x200BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BFCu;
        // 0x200c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C04u;
label_200c04:
    // 0x200c04: 0x0  nop
    ctx->pc = 0x200c04u;
    // NOP
    ctx->pc = 0x200c08u;
}
