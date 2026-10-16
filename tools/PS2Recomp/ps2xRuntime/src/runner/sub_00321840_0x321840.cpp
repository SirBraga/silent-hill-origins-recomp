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

// Function: sub_00321840
// Address: 0x321840 - 0x3218e8
void sub_00321840_0x321840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321840_0x321840");
#endif

    switch (ctx->pc) {
        case 0x321858u: goto label_321858;
        case 0x321860u: goto label_321860;
        case 0x321884u: goto label_321884;
        case 0x321890u: goto label_321890;
        case 0x3218b4u: goto label_3218b4;
        case 0x3218d4u: goto label_3218d4;
        default: break;
    }

    ctx->pc = 0x321840u;

    // 0x321840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x321848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32184c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x32184cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x321850: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x321850u;
    SET_GPR_U32(ctx, 31, 0x321858u);
    ctx->pc = 0x321854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321850u;
    // 0x321854: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321690u, 0x321850u, 0x321858u)) {
        return;
    }
    ctx->pc = 0x321858u;
label_321858:
    // 0x321858: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321858u;
    SET_GPR_U32(ctx, 31, 0x321860u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321858u, 0x321860u)) {
        return;
    }
    ctx->pc = 0x321860u;
label_321860:
    // 0x321860: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x321860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x321864: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x321864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x321868: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x321868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x32186c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32186cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x321870: 0xf  sync
    ctx->pc = 0x321870u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321874: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321874u;
    {
        const bool branch_taken_0x321874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321874u;
        // 0x321878: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321874) {
            ctx->pc = 0x321888u;
            goto label_321888;
        }
    }
    ctx->pc = 0x32187Cu;
    // 0x32187c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x32187Cu;
    SET_GPR_U32(ctx, 31, 0x321884u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x32187Cu, 0x321884u)) {
        return;
    }
    ctx->pc = 0x321884u;
label_321884:
    // 0x321884: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x321884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_321888:
    // 0x321888: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x321888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x32188c: 0x0  nop
    ctx->pc = 0x32188cu;
    // NOP
label_321890:
    // 0x321890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x321894: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x321894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x321898: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321898u;
    {
        const bool branch_taken_0x321898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321898) {
            ctx->pc = 0x3218ACu;
            goto label_3218ac;
        }
    }
    ctx->pc = 0x3218A0u;
    // 0x3218a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3218a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3218a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3218A4u;
    {
        const bool branch_taken_0x3218a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3218a4) {
            ctx->pc = 0x321890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321890;
        }
    }
    ctx->pc = 0x3218ACu;
label_3218ac:
    // 0x3218ac: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x3218ACu;
    SET_GPR_U32(ctx, 31, 0x3218B4u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x3218ACu, 0x3218B4u)) {
        return;
    }
    ctx->pc = 0x3218B4u;
label_3218b4:
    // 0x3218b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3218b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3218b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3218b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3218bc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x3218bcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x3218c0: 0xf  sync
    ctx->pc = 0x3218c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3218c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3218C4u;
    {
        const bool branch_taken_0x3218c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3218c4) {
            ctx->pc = 0x3218D4u;
            goto label_3218d4;
        }
    }
    ctx->pc = 0x3218CCu;
    // 0x3218cc: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3218CCu;
    SET_GPR_U32(ctx, 31, 0x3218D4u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3218CCu, 0x3218D4u)) {
        return;
    }
    ctx->pc = 0x3218D4u;
label_3218d4:
    // 0x3218d4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3218d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3218d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3218d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3218dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3218DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3218E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218DCu;
        // 0x3218e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3218DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3218E4u;
    // 0x3218e4: 0x0  nop
    ctx->pc = 0x3218e4u;
    // NOP
    ctx->pc = 0x3218e8u;
}
