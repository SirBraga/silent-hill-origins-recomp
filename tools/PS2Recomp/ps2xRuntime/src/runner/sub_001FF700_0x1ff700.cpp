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

// Function: sub_001FF700
// Address: 0x1ff700 - 0x1ff740
void sub_001FF700_0x1ff700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF700_0x1ff700");
#endif

    switch (ctx->pc) {
        case 0x1ff700u: goto label_1ff700;
        case 0x1ff704u: goto label_1ff704;
        case 0x1ff708u: goto label_1ff708;
        case 0x1ff70cu: goto label_1ff70c;
        case 0x1ff710u: goto label_1ff710;
        case 0x1ff714u: goto label_1ff714;
        case 0x1ff718u: goto label_1ff718;
        case 0x1ff71cu: goto label_1ff71c;
        case 0x1ff720u: goto label_1ff720;
        case 0x1ff724u: goto label_1ff724;
        case 0x1ff728u: goto label_1ff728;
        case 0x1ff72cu: goto label_1ff72c;
        case 0x1ff730u: goto label_1ff730;
        case 0x1ff734u: goto label_1ff734;
        case 0x1ff738u: goto label_1ff738;
        case 0x1ff73cu: goto label_1ff73c;
        default: break;
    }

    ctx->pc = 0x1ff700u;

label_1ff700:
    // 0x1ff700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ff704:
    // 0x1ff704: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ff704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff708:
    // 0x1ff708: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1ff70c:
    if (ctx->pc == 0x1FF70Cu) {
        ctx->pc = 0x1FF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF708u;
        // 0x1ff70c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF710u;
        goto label_1ff710;
    }
    ctx->pc = 0x1FF708u;
    {
        const bool branch_taken_0x1ff708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF708u;
        // 0x1ff70c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff708) {
            ctx->pc = 0x1FF734u;
            goto label_1ff734;
        }
    }
    ctx->pc = 0x1FF710u;
label_1ff710:
    // 0x1ff710: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
label_1ff714:
    // 0x1ff714: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1ff714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_1ff718:
    // 0x1ff718: 0x8ce30138  lw          $v1, 0x138($a3)
    ctx->pc = 0x1ff718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 312)));
label_1ff71c:
    // 0x1ff71c: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x1ff71cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_1ff720:
    // 0x1ff720: 0x8c8210e4  lw          $v0, 0x10E4($a0)
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4324)));
label_1ff724:
    // 0x1ff724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ff728:
    // 0x1ff728: 0x8cc40140  lw          $a0, 0x140($a2)
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
label_1ff72c:
    // 0x1ff72c: 0x40f809  jalr        $v0
label_1ff730:
    if (ctx->pc == 0x1FF730u) {
        ctx->pc = 0x1FF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF72Cu;
        // 0x1ff730: 0xace30138  sw          $v1, 0x138($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF734u;
        goto label_1ff734;
    }
    ctx->pc = 0x1FF72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF734u);
        ctx->pc = 0x1FF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF72Cu;
        // 0x1ff730: 0xace30138  sw          $v1, 0x138($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF72Cu, 0x1FF734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF734u;
label_1ff734:
    // 0x1ff734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff738:
    // 0x1ff738: 0x3e00008  jr          $ra
label_1ff73c:
    if (ctx->pc == 0x1FF73Cu) {
        ctx->pc = 0x1FF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF738u;
        // 0x1ff73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF740u;
        goto label_fallthrough_0x1ff738;
    }
    ctx->pc = 0x1FF738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF738u;
        // 0x1ff73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff738:
    ctx->pc = 0x1FF740u;
}
