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

// Function: sub_001E33F8
// Address: 0x1e33f8 - 0x1e34b8
void sub_001E33F8_0x1e33f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E33F8_0x1e33f8");
#endif

    switch (ctx->pc) {
        case 0x1e3438u: goto label_1e3438;
        case 0x1e3448u: goto label_1e3448;
        case 0x1e345cu: goto label_1e345c;
        default: break;
    }

    ctx->pc = 0x1e33f8u;

    // 0x1e33f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e33f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e33fc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e3400: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e3404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3408: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1e340c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e340cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3410: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e3410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e3414: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3418: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e341c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1e3420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3424: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e3424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e3428: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E3428u;
    {
        const bool branch_taken_0x1e3428 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3428u;
        // 0x1e342c: 0x8e740010  lw          $s4, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3428) {
            ctx->pc = 0x1E348Cu;
            goto label_1e348c;
        }
    }
    ctx->pc = 0x1E3430u;
    // 0x1e3430: 0x26910004  addiu       $s1, $s4, 0x4
    ctx->pc = 0x1e3430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e3434: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1e3434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3438:
    // 0x1e3438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e3438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e343c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e343cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3440: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1E3440u;
    SET_GPR_U32(ctx, 31, 0x1E3448u);
    ctx->pc = 0x1E3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3440u;
    // 0x1e3444: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E3440u, 0x1E3448u)) {
        return;
    }
    ctx->pc = 0x1E3448u;
label_1e3448:
    // 0x1e3448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3448u;
    {
        const bool branch_taken_0x1e3448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3448u;
        // 0x1e344c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3448) {
            ctx->pc = 0x1E3464u;
            goto label_1e3464;
        }
    }
    ctx->pc = 0x1E3450u;
    // 0x1e3450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3454: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E3454u;
    SET_GPR_U32(ctx, 31, 0x1E345Cu);
    ctx->pc = 0x1E3458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3454u;
    // 0x1e3458: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E3454u, 0x1E345Cu)) {
        return;
    }
    ctx->pc = 0x1E345Cu;
label_1e345c:
    // 0x1e345c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E345Cu;
    {
        const bool branch_taken_0x1e345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E345Cu;
        // 0x1e3460: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e345c) {
            ctx->pc = 0x1E346Cu;
            goto label_1e346c;
        }
    }
    ctx->pc = 0x1E3464u;
label_1e3464:
    // 0x1e3464: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E3464u;
    {
        const bool branch_taken_0x1e3464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3464u;
        // 0x1e3468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3464) {
            ctx->pc = 0x1E3490u;
            goto label_1e3490;
        }
    }
    ctx->pc = 0x1E346Cu;
label_1e346c:
    // 0x1e346c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e346cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e3470: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1e3470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e3474: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e3478: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e347c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e3480: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1e3480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e3484: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E3484u;
    {
        const bool branch_taken_0x1e3484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3484u;
        // 0x1e3488: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3484) {
            ctx->pc = 0x1E3438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3438;
        }
    }
    ctx->pc = 0x1E348Cu;
label_1e348c:
    // 0x1e348c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e348cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3490:
    // 0x1e3490: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e3490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3494: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e3494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3498: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e3498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e349c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e349cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e34a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e34a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e34a4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e34a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e34a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e34a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e34ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E34ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34ACu;
        // 0x1e34b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E34ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E34B4u;
    // 0x1e34b4: 0x0  nop
    ctx->pc = 0x1e34b4u;
    // NOP
    ctx->pc = 0x1e34b8u;
}
