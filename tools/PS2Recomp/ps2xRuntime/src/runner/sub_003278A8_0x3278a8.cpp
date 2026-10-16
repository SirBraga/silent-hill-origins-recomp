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

// Function: sub_003278A8
// Address: 0x3278a8 - 0x327930
void sub_003278A8_0x3278a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003278A8_0x3278a8");
#endif

    switch (ctx->pc) {
        case 0x3278d8u: goto label_3278d8;
        default: break;
    }

    ctx->pc = 0x3278a8u;

    // 0x3278a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3278a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278ac: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x3278acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x3278b0: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3278b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3278b4: 0x25258590  addiu       $a1, $t1, -0x7A70
    ctx->pc = 0x3278b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935952));
    // 0x3278b8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3278b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3278bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3278bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278c0: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3278c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3278c4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3278c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3278c8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3278c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6885A8u));
    // 0x3278cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3278CCu;
    {
        const bool branch_taken_0x3278cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278CCu;
        // 0x3278d0: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278cc) {
            ctx->pc = 0x3278DCu;
            goto label_3278dc;
        }
    }
    ctx->pc = 0x3278D4u;
    // 0x3278d4: 0x0  nop
    ctx->pc = 0x3278d4u;
    // NOP
label_3278d8:
    // 0x3278d8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3278d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3278dc:
    // 0x3278dc: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3278DCu;
    {
        const bool branch_taken_0x3278dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278dc) {
            ctx->pc = 0x3278E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3278DCu;
            // 0x3278e0: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327908u;
            goto label_327908;
        }
    }
    ctx->pc = 0x3278E4u;
    // 0x3278e4: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x3278e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3278e8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3278e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3278ec: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x3278ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3278f0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3278f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3278f4: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3278f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x3278f8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3278f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3278fc: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3278FCu;
    {
        const bool branch_taken_0x3278fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278fc) {
            ctx->pc = 0x327900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3278FCu;
            // 0x327900: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3278D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3278d8;
        }
    }
    ctx->pc = 0x327904u;
    // 0x327904: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x327904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_327908:
    // 0x327908: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x327908u;
    {
        const bool branch_taken_0x327908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327908u;
        // 0x32790c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327908) {
            ctx->pc = 0x327914u;
            goto label_327914;
        }
    }
    ctx->pc = 0x327910u;
    // 0x327910: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x327910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_327914:
    // 0x327914: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327914u;
    {
        const bool branch_taken_0x327914 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x327918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327914u;
        // 0x327918: 0x25228590  addiu       $v0, $t1, -0x7A70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327914) {
            ctx->pc = 0x327924u;
            goto label_327924;
        }
    }
    ctx->pc = 0x32791Cu;
    // 0x32791c: 0x3e00008  jr          $ra
    ctx->pc = 0x32791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32791Cu;
        // 0x327920: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327924u;
label_327924:
    // 0x327924: 0x3e00008  jr          $ra
    ctx->pc = 0x327924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327924u;
        // 0x327928: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32792Cu;
    // 0x32792c: 0x0  nop
    ctx->pc = 0x32792cu;
    // NOP
    ctx->pc = 0x327930u;
}
