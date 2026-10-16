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

// Function: sub_001BE250
// Address: 0x1be250 - 0x1be2d0
void sub_001BE250_0x1be250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE250_0x1be250");
#endif

    switch (ctx->pc) {
        case 0x1be290u: goto label_1be290;
        default: break;
    }

    ctx->pc = 0x1be250u;

    // 0x1be250: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1be250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be254: 0x8cc402ac  lw          $a0, 0x2AC($a2)
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 684)));
    // 0x1be258: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be25c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1be260: 0x8c430308  lw          $v1, 0x308($v0)
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 776)));
    // 0x1be264: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BE264u;
    {
        const bool branch_taken_0x1be264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE264u;
        // 0x1be268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be264) {
            ctx->pc = 0x1BE2C0u;
            goto label_1be2c0;
        }
    }
    ctx->pc = 0x1BE26Cu;
    // 0x1be26c: 0x8cc202dc  lw          $v0, 0x2DC($a2)
    ctx->pc = 0x1be26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
    // 0x1be270: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be274: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE274u;
    {
        const bool branch_taken_0x1be274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE274u;
        // 0x1be278: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be274) {
            ctx->pc = 0x1BE2B8u;
            goto label_1be2b8;
        }
    }
    ctx->pc = 0x1BE27Cu;
    // 0x1be27c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be280: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE280u;
    {
        const bool branch_taken_0x1be280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE280u;
        // 0x1be284: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be280) {
            ctx->pc = 0x1BE2B4u;
            goto label_1be2b4;
        }
    }
    ctx->pc = 0x1BE288u;
    // 0x1be288: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be28c: 0x0  nop
    ctx->pc = 0x1be28cu;
    // NOP
label_1be290:
    // 0x1be290: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1be290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1be294: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE294u;
    {
        const bool branch_taken_0x1be294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE294u;
        // 0x1be298: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be294) {
            ctx->pc = 0x1BE2B8u;
            goto label_1be2b8;
        }
    }
    ctx->pc = 0x1BE29Cu;
    // 0x1be29c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1be2a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1be2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be2a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1be2a8: 0x8c430308  lw          $v1, 0x308($v0)
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 776)));
    // 0x1be2ac: 0x5464fff8  bnel        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BE2ACu;
    {
        const bool branch_taken_0x1be2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1be2ac) {
            ctx->pc = 0x1BE2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE2ACu;
            // 0x1be2b0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be290;
        }
    }
    ctx->pc = 0x1BE2B4u;
label_1be2b4:
    // 0x1be2b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be2b8:
    // 0x1be2b8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE2B8u;
    {
        const bool branch_taken_0x1be2b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be2b8) {
            ctx->pc = 0x1BE2C8u;
            goto label_1be2c8;
        }
    }
    ctx->pc = 0x1BE2C0u;
label_1be2c0:
    // 0x1be2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2C0u;
        // 0x1be2c4: 0xacc00320  sw          $zero, 0x320($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2C8u;
        // 0x1be2cc: 0xacc70320  sw          $a3, 0x320($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 800), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE2D0u;
}
