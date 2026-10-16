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

// Function: sub_002E88C8
// Address: 0x2e88c8 - 0x2e8938
void sub_002E88C8_0x2e88c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E88C8_0x2e88c8");
#endif

    switch (ctx->pc) {
        case 0x2e88e4u: goto label_2e88e4;
        case 0x2e88fcu: goto label_2e88fc;
        case 0x2e891cu: goto label_2e891c;
        default: break;
    }

    ctx->pc = 0x2e88c8u;

    // 0x2e88c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e88c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e88cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e88d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e88d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e88d4: 0x24508568  addiu       $s0, $v0, -0x7A98
    ctx->pc = 0x2e88d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935912));
    // 0x2e88d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e88d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e88dc: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2E88DCu;
    SET_GPR_U32(ctx, 31, 0x2E88E4u);
    ctx->pc = 0x2E88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88DCu;
    // 0x2e88e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2E88DCu, 0x2E88E4u)) {
        return;
    }
    ctx->pc = 0x2E88E4u;
label_2e88e4:
    // 0x2e88e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E88E4u;
    {
        const bool branch_taken_0x2e88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88E4u;
        // 0x2e88e8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88e4) {
            ctx->pc = 0x2E8924u;
            goto label_2e8924;
        }
    }
    ctx->pc = 0x2E88ECu;
    // 0x2e88ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88f0: 0x24a5fb90  addiu       $a1, $a1, -0x470
    ctx->pc = 0x2e88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966160));
    // 0x2e88f4: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2E88F4u;
    SET_GPR_U32(ctx, 31, 0x2E88FCu);
    ctx->pc = 0x2E88F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88F4u;
    // 0x2e88f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2E88F4u, 0x2E88FCu)) {
        return;
    }
    ctx->pc = 0x2E88FCu;
label_2e88fc:
    // 0x2e88fc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e8900: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e8900u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e8904: 0x24a556b0  addiu       $a1, $a1, 0x56B0
    ctx->pc = 0x2e8904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
    // 0x2e8908: 0x24e757c8  addiu       $a3, $a3, 0x57C8
    ctx->pc = 0x2e8908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22472));
    // 0x2e890c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8910: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2e8910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e8914: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2E8914u;
    SET_GPR_U32(ctx, 31, 0x2E891Cu);
    ctx->pc = 0x2E8918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8914u;
    // 0x2e8918: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2E8914u, 0x2E891Cu)) {
        return;
    }
    ctx->pc = 0x2E891Cu;
label_2e891c:
    // 0x2e891c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E891Cu;
    {
        const bool branch_taken_0x2e891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E891Cu;
        // 0x2e8920: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e891c) {
            ctx->pc = 0x2E8928u;
            goto label_2e8928;
        }
    }
    ctx->pc = 0x2E8924u;
label_2e8924:
    // 0x2e8924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8928:
    // 0x2e8928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e892c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8930: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8930u;
        // 0x2e8934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8938u;
}
