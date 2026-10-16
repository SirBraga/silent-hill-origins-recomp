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

// Function: sub_00103150
// Address: 0x103150 - 0x1031b0
void sub_00103150_0x103150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103150_0x103150");
#endif

    switch (ctx->pc) {
        case 0x103170u: goto label_103170;
        case 0x1031a4u: goto label_1031a4;
        default: break;
    }

    ctx->pc = 0x103150u;

    // 0x103150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x103150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x103154: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x103154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x103158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10315c: 0x8c438280  lw          $v1, -0x7D80($v0)
    ctx->pc = 0x10315cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338280u));
    // 0x103160: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x103160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x103164: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x103164u;
    {
        const bool branch_taken_0x103164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103164u;
        // 0x103168: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103164) {
            ctx->pc = 0x103188u;
            goto label_103188;
        }
    }
    ctx->pc = 0x10316Cu;
    // 0x10316c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_103170:
    // 0x103170: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103170u;
    {
        const bool branch_taken_0x103170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x103170) {
            ctx->pc = 0x103174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103170u;
            // 0x103174: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103180u;
            goto label_103180;
        }
    }
    ctx->pc = 0x103178u;
    // 0x103178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103178u;
    {
        const bool branch_taken_0x103178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103178u;
        // 0x10317c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103178) {
            ctx->pc = 0x10318Cu;
            goto label_10318c;
        }
    }
    ctx->pc = 0x103180u;
label_103180:
    // 0x103180: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x103180u;
    {
        const bool branch_taken_0x103180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x103180) {
            ctx->pc = 0x103184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103180u;
            // 0x103184: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103170;
        }
    }
    ctx->pc = 0x103188u;
label_103188:
    // 0x103188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10318c:
    // 0x10318c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103190: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x103190u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
    // 0x103194: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103194u;
    {
        const bool branch_taken_0x103194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103194u;
        // 0x103198: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103194) {
            ctx->pc = 0x1031A8u;
            goto label_1031a8;
        }
    }
    ctx->pc = 0x10319Cu;
    // 0x10319c: 0xc040dfa  jal         func_1037E8
    ctx->pc = 0x10319Cu;
    SET_GPR_U32(ctx, 31, 0x1031A4u);
    ctx->pc = 0x1031A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10319Cu;
    // 0x1031a0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1037E8u, 0x10319Cu, 0x1031A4u)) {
        return;
    }
    ctx->pc = 0x1031A4u;
label_1031a4:
    // 0x1031a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1031a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1031a8:
    // 0x1031a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1031A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1031ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031A8u;
        // 0x1031ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1031A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1031B0u;
}
