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

// Function: sub_00273760
// Address: 0x273760 - 0x2737b8
void sub_00273760_0x273760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273760_0x273760");
#endif

    switch (ctx->pc) {
        case 0x273760u: goto label_273760;
        case 0x273764u: goto label_273764;
        case 0x273768u: goto label_273768;
        case 0x27376cu: goto label_27376c;
        case 0x273770u: goto label_273770;
        case 0x273774u: goto label_273774;
        case 0x273778u: goto label_273778;
        case 0x27377cu: goto label_27377c;
        case 0x273780u: goto label_273780;
        case 0x273784u: goto label_273784;
        case 0x273788u: goto label_273788;
        case 0x27378cu: goto label_27378c;
        case 0x273790u: goto label_273790;
        case 0x273794u: goto label_273794;
        case 0x273798u: goto label_273798;
        case 0x27379cu: goto label_27379c;
        case 0x2737a0u: goto label_2737a0;
        case 0x2737a4u: goto label_2737a4;
        case 0x2737a8u: goto label_2737a8;
        case 0x2737acu: goto label_2737ac;
        case 0x2737b0u: goto label_2737b0;
        case 0x2737b4u: goto label_2737b4;
        default: break;
    }

    ctx->pc = 0x273760u;

label_273760:
    // 0x273760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_273764:
    // 0x273764: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x273764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273768:
    // 0x273768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27376c:
    // 0x27376c: 0x244453c8  addiu       $a0, $v0, 0x53C8
    ctx->pc = 0x27376cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21448));
label_273770:
    // 0x273770: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x273770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_273774:
    // 0x273774: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_273778:
    if (ctx->pc == 0x273778u) {
        ctx->pc = 0x273778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273774u;
        // 0x273778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27377Cu;
        goto label_27377c;
    }
    ctx->pc = 0x273774u;
    {
        const bool branch_taken_0x273774 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x273778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273774u;
        // 0x273778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273774) {
            ctx->pc = 0x2737A8u;
            goto label_2737a8;
        }
    }
    ctx->pc = 0x27377Cu;
label_27377c:
    // 0x27377c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x27377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_273780:
    // 0x273780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x273780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_273784:
    // 0x273784: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x273784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273788:
    // 0x273788: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27378c:
    if (ctx->pc == 0x27378Cu) {
        ctx->pc = 0x27378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273788u;
        // 0x27378c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273790u;
        goto label_273790;
    }
    ctx->pc = 0x273788u;
    {
        const bool branch_taken_0x273788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273788u;
        // 0x27378c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273788) {
            ctx->pc = 0x2737A8u;
            goto label_2737a8;
        }
    }
    ctx->pc = 0x273790u;
label_273790:
    // 0x273790: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x273790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_273794:
    // 0x273794: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_273798:
    if (ctx->pc == 0x273798u) {
        ctx->pc = 0x273798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273794u;
        // 0x273798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27379Cu;
        goto label_27379c;
    }
    ctx->pc = 0x273794u;
    {
        const bool branch_taken_0x273794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273794) {
            ctx->pc = 0x273798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273794u;
            // 0x273798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2737A8u;
            goto label_2737a8;
        }
    }
    ctx->pc = 0x27379Cu;
label_27379c:
    // 0x27379c: 0x40f809  jalr        $v0
label_2737a0:
    if (ctx->pc == 0x2737A0u) {
        ctx->pc = 0x2737A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27379Cu;
        // 0x2737a0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737A4u;
        goto label_2737a4;
    }
    ctx->pc = 0x27379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2737A4u);
        ctx->pc = 0x2737A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27379Cu;
        // 0x2737a0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27379Cu, 0x2737A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2737A4u;
label_2737a4:
    // 0x2737a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2737a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2737a8:
    // 0x2737a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2737a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2737ac:
    // 0x2737ac: 0x3e00008  jr          $ra
label_2737b0:
    if (ctx->pc == 0x2737B0u) {
        ctx->pc = 0x2737B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737ACu;
        // 0x2737b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737B4u;
        goto label_2737b4;
    }
    ctx->pc = 0x2737ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2737B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737ACu;
        // 0x2737b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2737ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2737B4u;
label_2737b4:
    // 0x2737b4: 0x0  nop
    ctx->pc = 0x2737b4u;
    // NOP
    ctx->pc = 0x2737b8u;
}
