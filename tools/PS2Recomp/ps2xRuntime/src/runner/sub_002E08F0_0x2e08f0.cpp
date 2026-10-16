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

// Function: sub_002E08F0
// Address: 0x2e08f0 - 0x2e0970
void sub_002E08F0_0x2e08f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E08F0_0x2e08f0");
#endif

    switch (ctx->pc) {
        case 0x2e0930u: goto label_2e0930;
        default: break;
    }

    ctx->pc = 0x2e08f0u;

    // 0x2e08f0: 0x27839040  addiu       $v1, $gp, -0x6FC0
    ctx->pc = 0x2e08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938688));
    // 0x2e08f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e08f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e08f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e08fc: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2e08fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2e0900: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2e0900u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2e0904: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e0904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e0908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e090c: 0x250880b8  addiu       $t0, $t0, -0x7F48
    ctx->pc = 0x2e090cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934712));
    // 0x2e0910: 0xaf839044  sw          $v1, -0x6FBC($gp)
    ctx->pc = 0x2e0910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938692), GPR_U32(ctx, 3));
    // 0x2e0914: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2e0914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e0918: 0xaf828c2c  sw          $v0, -0x73D4($gp)
    ctx->pc = 0x2e0918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937644), GPR_U32(ctx, 2));
    // 0x2e091c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e0920: 0xaf839040  sw          $v1, -0x6FC0($gp)
    ctx->pc = 0x2e0920u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938688), GPR_U32(ctx, 3));
    // 0x2e0924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e0924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0928: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2E0928u;
    SET_GPR_U32(ctx, 31, 0x2E0930u);
    ctx->pc = 0x2E092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0928u;
    // 0x2e092c: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2E0928u, 0x2E0930u)) {
        return;
    }
    ctx->pc = 0x2E0930u;
label_2e0930:
    // 0x2e0930: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e0930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0934: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0934u;
    {
        const bool branch_taken_0x2e0934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0934u;
        // 0x2e0938: 0xaf868c30  sw          $a2, -0x73D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937648), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0934) {
            ctx->pc = 0x2E095Cu;
            goto label_2e095c;
        }
    }
    ctx->pc = 0x2E093Cu;
    // 0x2e093c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x2e093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2e0940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0944: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x2e0944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2e0948: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e0948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e094c: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x2e094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2e0950: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x2e0950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2e0954: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0954u;
    {
        const bool branch_taken_0x2e0954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0954u;
        // 0x2e0958: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0954) {
            ctx->pc = 0x2E0964u;
            goto label_2e0964;
        }
    }
    ctx->pc = 0x2E095Cu;
label_2e095c:
    // 0x2e095c: 0xaf808c2c  sw          $zero, -0x73D4($gp)
    ctx->pc = 0x2e095cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937644), GPR_U32(ctx, 0));
    // 0x2e0960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0964:
    // 0x2e0964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0968: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0968u;
        // 0x2e096c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0970u;
}
