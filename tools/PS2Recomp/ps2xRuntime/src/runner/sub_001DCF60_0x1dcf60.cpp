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

// Function: sub_001DCF60
// Address: 0x1dcf60 - 0x1dcfd0
void sub_001DCF60_0x1dcf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCF60_0x1dcf60");
#endif

    switch (ctx->pc) {
        case 0x1dcf60u: goto label_1dcf60;
        case 0x1dcf64u: goto label_1dcf64;
        case 0x1dcf68u: goto label_1dcf68;
        case 0x1dcf6cu: goto label_1dcf6c;
        case 0x1dcf70u: goto label_1dcf70;
        case 0x1dcf74u: goto label_1dcf74;
        case 0x1dcf78u: goto label_1dcf78;
        case 0x1dcf7cu: goto label_1dcf7c;
        case 0x1dcf80u: goto label_1dcf80;
        case 0x1dcf84u: goto label_1dcf84;
        case 0x1dcf88u: goto label_1dcf88;
        case 0x1dcf8cu: goto label_1dcf8c;
        case 0x1dcf90u: goto label_1dcf90;
        case 0x1dcf94u: goto label_1dcf94;
        case 0x1dcf98u: goto label_1dcf98;
        case 0x1dcf9cu: goto label_1dcf9c;
        case 0x1dcfa0u: goto label_1dcfa0;
        case 0x1dcfa4u: goto label_1dcfa4;
        case 0x1dcfa8u: goto label_1dcfa8;
        case 0x1dcfacu: goto label_1dcfac;
        case 0x1dcfb0u: goto label_1dcfb0;
        case 0x1dcfb4u: goto label_1dcfb4;
        case 0x1dcfb8u: goto label_1dcfb8;
        case 0x1dcfbcu: goto label_1dcfbc;
        case 0x1dcfc0u: goto label_1dcfc0;
        case 0x1dcfc4u: goto label_1dcfc4;
        case 0x1dcfc8u: goto label_1dcfc8;
        case 0x1dcfccu: goto label_1dcfcc;
        default: break;
    }

    ctx->pc = 0x1dcf60u;

label_1dcf60:
    // 0x1dcf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dcf64:
    // 0x1dcf64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dcf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dcf68:
    // 0x1dcf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dcf6c:
    // 0x1dcf6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcf70:
    // 0x1dcf70: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1dcf74:
    if (ctx->pc == 0x1DCF74u) {
        ctx->pc = 0x1DCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF70u;
        // 0x1dcf74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF78u;
        goto label_1dcf78;
    }
    ctx->pc = 0x1DCF70u;
    {
        const bool branch_taken_0x1dcf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF70u;
        // 0x1dcf74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf70) {
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCF78u;
label_1dcf78:
    // 0x1dcf78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1dcf7c:
    // 0x1dcf7c: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dcf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dcf80:
    // 0x1dcf80: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1dcf84:
    // 0x1dcf84: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1dcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dcf88:
    // 0x1dcf88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dcf8c:
    if (ctx->pc == 0x1DCF8Cu) {
        ctx->pc = 0x1DCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF88u;
        // 0x1dcf8c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF90u;
        goto label_1dcf90;
    }
    ctx->pc = 0x1DCF88u;
    {
        const bool branch_taken_0x1dcf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF88u;
        // 0x1dcf8c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf88) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF90u;
label_1dcf90:
    // 0x1dcf90: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dcf94:
    // 0x1dcf94: 0x40f809  jalr        $v0
label_1dcf98:
    if (ctx->pc == 0x1DCF98u) {
        ctx->pc = 0x1DCF9Cu;
        goto label_1dcf9c;
    }
    ctx->pc = 0x1DCF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCF9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF94u, 0x1DCF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCF9Cu;
label_1dcf9c:
    // 0x1dcf9c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dcfa0:
    if (ctx->pc == 0x1DCFA0u) {
        ctx->pc = 0x1DCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF9Cu;
        // 0x1dcfa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCFA4u;
        goto label_1dcfa4;
    }
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF9Cu;
        // 0x1dcfa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DCFB4u;
            goto label_1dcfb4;
        }
    }
    ctx->pc = 0x1DCFA4u;
label_1dcfa4:
    // 0x1dcfa4: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dcfa8:
    // 0x1dcfa8: 0x40f809  jalr        $v0
label_1dcfac:
    if (ctx->pc == 0x1DCFACu) {
        ctx->pc = 0x1DCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFA8u;
        // 0x1dcfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCFB0u;
        goto label_1dcfb0;
    }
    ctx->pc = 0x1DCFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCFB0u);
        ctx->pc = 0x1DCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFA8u;
        // 0x1dcfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFA8u, 0x1DCFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCFB0u;
label_1dcfb0:
    // 0x1dcfb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcfb4:
    // 0x1dcfb4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1dcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1dcfb8:
    // 0x1dcfb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfbc:
    // 0x1dcfbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcfc0:
    // 0x1dcfc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dcfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcfc4:
    // 0x1dcfc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcfc8:
    // 0x1dcfc8: 0x3e00008  jr          $ra
label_1dcfcc:
    if (ctx->pc == 0x1DCFCCu) {
        ctx->pc = 0x1DCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFC8u;
        // 0x1dcfcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCFD0u;
        goto label_fallthrough_0x1dcfc8;
    }
    ctx->pc = 0x1DCFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFC8u;
        // 0x1dcfcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dcfc8:
    ctx->pc = 0x1DCFD0u;
}
