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

// Function: sub_00224CA0
// Address: 0x224ca0 - 0x224cf8
void sub_00224CA0_0x224ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224CA0_0x224ca0");
#endif

    switch (ctx->pc) {
        case 0x224ca0u: goto label_224ca0;
        case 0x224ca4u: goto label_224ca4;
        case 0x224ca8u: goto label_224ca8;
        case 0x224cacu: goto label_224cac;
        case 0x224cb0u: goto label_224cb0;
        case 0x224cb4u: goto label_224cb4;
        case 0x224cb8u: goto label_224cb8;
        case 0x224cbcu: goto label_224cbc;
        case 0x224cc0u: goto label_224cc0;
        case 0x224cc4u: goto label_224cc4;
        case 0x224cc8u: goto label_224cc8;
        case 0x224cccu: goto label_224ccc;
        case 0x224cd0u: goto label_224cd0;
        case 0x224cd4u: goto label_224cd4;
        case 0x224cd8u: goto label_224cd8;
        case 0x224cdcu: goto label_224cdc;
        case 0x224ce0u: goto label_224ce0;
        case 0x224ce4u: goto label_224ce4;
        case 0x224ce8u: goto label_224ce8;
        case 0x224cecu: goto label_224cec;
        case 0x224cf0u: goto label_224cf0;
        case 0x224cf4u: goto label_224cf4;
        default: break;
    }

    ctx->pc = 0x224ca0u;

label_224ca0:
    // 0x224ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_224ca4:
    // 0x224ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224ca8:
    // 0x224ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224cac:
    // 0x224cac: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x224cacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_224cb0:
    // 0x224cb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_224cb4:
    // 0x224cb4: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x224cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_224cb8:
    // 0x224cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224cbc:
    // 0x224cbc: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x224cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_224cc0:
    // 0x224cc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x224cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224cc4:
    // 0x224cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224cc8:
    // 0x224cc8: 0x40f809  jalr        $v0
label_224ccc:
    if (ctx->pc == 0x224CCCu) {
        ctx->pc = 0x224CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CC8u;
        // 0x224ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CD0u;
        goto label_224cd0;
    }
    ctx->pc = 0x224CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224CD0u);
        ctx->pc = 0x224CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CC8u;
        // 0x224ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224CC8u, 0x224CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224CD0u;
label_224cd0:
    // 0x224cd0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_224cd4:
    if (ctx->pc == 0x224CD4u) {
        ctx->pc = 0x224CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD0u;
        // 0x224cd4: 0xae200fc8  sw          $zero, 0xFC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CD8u;
        goto label_224cd8;
    }
    ctx->pc = 0x224CD0u;
    {
        const bool branch_taken_0x224cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224cd0) {
            ctx->pc = 0x224CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224CD0u;
            // 0x224cd4: 0xae200fc8  sw          $zero, 0xFC8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4040), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224CE0u;
            goto label_224ce0;
        }
    }
    ctx->pc = 0x224CD8u;
label_224cd8:
    // 0x224cd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_224cdc:
    if (ctx->pc == 0x224CDCu) {
        ctx->pc = 0x224CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD8u;
        // 0x224cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CE0u;
        goto label_224ce0;
    }
    ctx->pc = 0x224CD8u;
    {
        const bool branch_taken_0x224cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD8u;
        // 0x224cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cd8) {
            ctx->pc = 0x224CE4u;
            goto label_224ce4;
        }
    }
    ctx->pc = 0x224CE0u;
label_224ce0:
    // 0x224ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224ce4:
    // 0x224ce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224ce8:
    // 0x224ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224cec:
    // 0x224cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224cf0:
    // 0x224cf0: 0x3e00008  jr          $ra
label_224cf4:
    if (ctx->pc == 0x224CF4u) {
        ctx->pc = 0x224CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CF0u;
        // 0x224cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CF8u;
        goto label_fallthrough_0x224cf0;
    }
    ctx->pc = 0x224CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CF0u;
        // 0x224cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x224cf0:
    ctx->pc = 0x224CF8u;
}
