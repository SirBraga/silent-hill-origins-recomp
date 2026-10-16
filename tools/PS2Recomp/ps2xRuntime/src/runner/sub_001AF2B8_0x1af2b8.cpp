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

// Function: sub_001AF2B8
// Address: 0x1af2b8 - 0x1af310
void sub_001AF2B8_0x1af2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF2B8_0x1af2b8");
#endif

    switch (ctx->pc) {
        case 0x1af2b8u: goto label_1af2b8;
        case 0x1af2bcu: goto label_1af2bc;
        case 0x1af2c0u: goto label_1af2c0;
        case 0x1af2c4u: goto label_1af2c4;
        case 0x1af2c8u: goto label_1af2c8;
        case 0x1af2ccu: goto label_1af2cc;
        case 0x1af2d0u: goto label_1af2d0;
        case 0x1af2d4u: goto label_1af2d4;
        case 0x1af2d8u: goto label_1af2d8;
        case 0x1af2dcu: goto label_1af2dc;
        case 0x1af2e0u: goto label_1af2e0;
        case 0x1af2e4u: goto label_1af2e4;
        case 0x1af2e8u: goto label_1af2e8;
        case 0x1af2ecu: goto label_1af2ec;
        case 0x1af2f0u: goto label_1af2f0;
        case 0x1af2f4u: goto label_1af2f4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af2fcu: goto label_1af2fc;
        case 0x1af300u: goto label_1af300;
        case 0x1af304u: goto label_1af304;
        case 0x1af308u: goto label_1af308;
        case 0x1af30cu: goto label_1af30c;
        default: break;
    }

    ctx->pc = 0x1af2b8u;

label_1af2b8:
    // 0x1af2b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af2bc:
    // 0x1af2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af2c0:
    // 0x1af2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af2c4:
    // 0x1af2c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af2c8:
    // 0x1af2c8: 0x8c900034  lw          $s0, 0x34($a0)
    ctx->pc = 0x1af2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1af2cc:
    // 0x1af2cc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1af2d0:
    if (ctx->pc == 0x1AF2D0u) {
        ctx->pc = 0x1AF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2CCu;
        // 0x1af2d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2D4u;
        goto label_1af2d4;
    }
    ctx->pc = 0x1AF2CCu;
    {
        const bool branch_taken_0x1af2cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2CCu;
        // 0x1af2d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2cc) {
            ctx->pc = 0x1AF2FCu;
            goto label_1af2fc;
        }
    }
    ctx->pc = 0x1AF2D4u;
label_1af2d4:
    // 0x1af2d4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af2d8:
    // 0x1af2d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af2dc:
    // 0x1af2dc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1af2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1af2e0:
    // 0x1af2e0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1af2e4:
    // 0x1af2e4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1af2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1af2e8:
    // 0x1af2e8: 0x60f809  jalr        $v1
label_1af2ec:
    if (ctx->pc == 0x1AF2ECu) {
        ctx->pc = 0x1AF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2E8u;
        // 0x1af2ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2F0u;
        goto label_1af2f0;
    }
    ctx->pc = 0x1AF2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF2F0u);
        ctx->pc = 0x1AF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2E8u;
        // 0x1af2ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF2E8u, 0x1AF2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF2F0u;
label_1af2f0:
    // 0x1af2f0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1af2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1af2f4:
    // 0x1af2f4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1af2f8:
    if (ctx->pc == 0x1AF2F8u) {
        ctx->pc = 0x1AF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2F4u;
        // 0x1af2f8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2FCu;
        goto label_1af2fc;
    }
    ctx->pc = 0x1AF2F4u;
    {
        const bool branch_taken_0x1af2f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af2f4) {
            ctx->pc = 0x1AF2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF2F4u;
            // 0x1af2f8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af2d8;
        }
    }
    ctx->pc = 0x1AF2FCu;
label_1af2fc:
    // 0x1af2fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af300:
    // 0x1af300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af304:
    // 0x1af304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af308:
    // 0x1af308: 0x3e00008  jr          $ra
label_1af30c:
    if (ctx->pc == 0x1AF30Cu) {
        ctx->pc = 0x1AF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF308u;
        // 0x1af30c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF310u;
        goto label_fallthrough_0x1af308;
    }
    ctx->pc = 0x1AF308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF308u;
        // 0x1af30c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af308:
    ctx->pc = 0x1AF310u;
}
