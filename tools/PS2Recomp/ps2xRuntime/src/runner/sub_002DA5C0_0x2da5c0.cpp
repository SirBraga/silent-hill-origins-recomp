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

// Function: sub_002DA5C0
// Address: 0x2da5c0 - 0x2da660
void sub_002DA5C0_0x2da5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA5C0_0x2da5c0");
#endif

    switch (ctx->pc) {
        case 0x2da604u: goto label_2da604;
        case 0x2da630u: goto label_2da630;
        case 0x2da648u: goto label_2da648;
        default: break;
    }

    ctx->pc = 0x2da5c0u;

    // 0x2da5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da5c4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2da5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2da5c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2da5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2da5cc: 0x27838fc8  addiu       $v1, $gp, -0x7038
    ctx->pc = 0x2da5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
    // 0x2da5d0: 0x24507c48  addiu       $s0, $v0, 0x7C48
    ctx->pc = 0x2da5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31816));
    // 0x2da5d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2da5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2da5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da5dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2da5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2da5e0: 0xaf838fcc  sw          $v1, -0x7034($gp)
    ctx->pc = 0x2da5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938572), GPR_U32(ctx, 3));
    // 0x2da5e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2da5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2da5e8: 0xaf838fc8  sw          $v1, -0x7038($gp)
    ctx->pc = 0x2da5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938568), GPR_U32(ctx, 3));
    // 0x2da5ec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2da5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2da5f0: 0xaf808fd0  sw          $zero, -0x7030($gp)
    ctx->pc = 0x2da5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 0));
    // 0x2da5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5f8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2da5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5fc: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DA5FCu;
    SET_GPR_U32(ctx, 31, 0x2DA604u);
    ctx->pc = 0x2DA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5FCu;
    // 0x2da600: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DA5FCu, 0x2DA604u)) {
        return;
    }
    ctx->pc = 0x2DA604u;
label_2da604:
    // 0x2da604: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA604u;
    {
        const bool branch_taken_0x2da604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA604u;
        // 0x2da608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da604) {
            ctx->pc = 0x2DA648u;
            goto label_2da648;
        }
    }
    ctx->pc = 0x2DA60Cu;
    // 0x2da60c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2da60cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2da610: 0x8f849068  lw          $a0, -0x6F98($gp)
    ctx->pc = 0x2da610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2da614: 0x2508ab50  addiu       $t0, $t0, -0x54B0
    ctx->pc = 0x2da614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945616));
    // 0x2da618: 0xaf828b58  sw          $v0, -0x74A8($gp)
    ctx->pc = 0x2da618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U32(ctx, 2));
    // 0x2da61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da628: 0xc0b67f4  jal         func_2D9FD0
    ctx->pc = 0x2DA628u;
    SET_GPR_U32(ctx, 31, 0x2DA630u);
    ctx->pc = 0x2DA62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA628u;
    // 0x2da62c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9FD0u, 0x2DA628u, 0x2DA630u)) {
        return;
    }
    ctx->pc = 0x2DA630u;
label_2da630:
    // 0x2da630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA630u;
    {
        const bool branch_taken_0x2da630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA630u;
        // 0x2da634: 0xaf828b54  sw          $v0, -0x74AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da630) {
            ctx->pc = 0x2DA640u;
            goto label_2da640;
        }
    }
    ctx->pc = 0x2DA638u;
    // 0x2da638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA638u;
    {
        const bool branch_taken_0x2da638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA638u;
        // 0x2da63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da638) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA640u;
label_2da640:
    // 0x2da640: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DA640u;
    SET_GPR_U32(ctx, 31, 0x2DA648u);
    ctx->pc = 0x2DA644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA640u;
    // 0x2da644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DA640u, 0x2DA648u)) {
        return;
    }
    ctx->pc = 0x2DA648u;
label_2da648:
    // 0x2da648: 0xaf808b58  sw          $zero, -0x74A8($gp)
    ctx->pc = 0x2da648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U32(ctx, 0));
    // 0x2da64c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da650:
    // 0x2da650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2da650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da658: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA658u;
        // 0x2da65c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA660u;
}
