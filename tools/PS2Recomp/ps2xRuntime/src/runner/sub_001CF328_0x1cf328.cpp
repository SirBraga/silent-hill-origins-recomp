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

// Function: sub_001CF328
// Address: 0x1cf328 - 0x1cf3b0
void sub_001CF328_0x1cf328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF328_0x1cf328");
#endif

    switch (ctx->pc) {
        case 0x1cf35cu: goto label_1cf35c;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf38cu: goto label_1cf38c;
        case 0x1cf39cu: goto label_1cf39c;
        default: break;
    }

    ctx->pc = 0x1cf328u;

    // 0x1cf328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf32c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cf330: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cf330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cf334: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x1cf334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x1cf338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf344: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1cf344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1cf348: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cf348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cf34c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF34Cu;
    {
        const bool branch_taken_0x1cf34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF34Cu;
        // 0x1cf350: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf34c) {
            ctx->pc = 0x1CF360u;
            goto label_1cf360;
        }
    }
    ctx->pc = 0x1CF354u;
    // 0x1cf354: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CF354u;
    SET_GPR_U32(ctx, 31, 0x1CF35Cu);
    ctx->pc = 0x1CF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF354u;
    // 0x1cf358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CF354u, 0x1CF35Cu)) {
        return;
    }
    ctx->pc = 0x1CF35Cu;
label_1cf35c:
    // 0x1cf35c: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cf35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1cf360:
    // 0x1cf360: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1cf364: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF364u;
    {
        const bool branch_taken_0x1cf364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf364) {
            ctx->pc = 0x1CF368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF364u;
            // 0x1cf368: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF37Cu;
            goto label_1cf37c;
        }
    }
    ctx->pc = 0x1CF36Cu;
    // 0x1cf36c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CF36Cu;
    SET_GPR_U32(ctx, 31, 0x1CF374u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CF36Cu, 0x1CF374u)) {
        return;
    }
    ctx->pc = 0x1CF374u;
label_1cf374:
    // 0x1cf374: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cf374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cf378: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1cf37c:
    // 0x1cf37c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF37Cu;
    {
        const bool branch_taken_0x1cf37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf37c) {
            ctx->pc = 0x1CF380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF37Cu;
            // 0x1cf380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF394u;
            goto label_1cf394;
        }
    }
    ctx->pc = 0x1CF384u;
    // 0x1cf384: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CF384u;
    SET_GPR_U32(ctx, 31, 0x1CF38Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CF384u, 0x1CF38Cu)) {
        return;
    }
    ctx->pc = 0x1CF38Cu;
label_1cf38c:
    // 0x1cf38c: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1cf38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1cf390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf394:
    // 0x1cf394: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CF394u;
    SET_GPR_U32(ctx, 31, 0x1CF39Cu);
    ctx->pc = 0x1CF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF394u;
    // 0x1cf398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CF394u, 0x1CF39Cu)) {
        return;
    }
    ctx->pc = 0x1CF39Cu;
label_1cf39c:
    // 0x1cf39c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cf39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A8u;
        // 0x1cf3ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF3B0u;
}
