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

// Function: sub_00293878
// Address: 0x293878 - 0x2938c0
void sub_00293878_0x293878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293878_0x293878");
#endif

    switch (ctx->pc) {
        case 0x293878u: goto label_293878;
        case 0x29387cu: goto label_29387c;
        case 0x293880u: goto label_293880;
        case 0x293884u: goto label_293884;
        case 0x293888u: goto label_293888;
        case 0x29388cu: goto label_29388c;
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        case 0x2938a0u: goto label_2938a0;
        case 0x2938a4u: goto label_2938a4;
        case 0x2938a8u: goto label_2938a8;
        case 0x2938acu: goto label_2938ac;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        default: break;
    }

    ctx->pc = 0x293878u;

label_293878:
    // 0x293878: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x293878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29387c:
    // 0x29387c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29387cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_293880:
    // 0x293880: 0x8c43e728  lw          $v1, -0x18D8($v0)
    ctx->pc = 0x293880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960936)));
label_293884:
    // 0x293884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_293888:
    // 0x293888: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_29388c:
    if (ctx->pc == 0x29388Cu) {
        ctx->pc = 0x29388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293888u;
        // 0x29388c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293890u;
        goto label_293890;
    }
    ctx->pc = 0x293888u;
    {
        const bool branch_taken_0x293888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293888u;
        // 0x29388c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293888) {
            ctx->pc = 0x2938A8u;
            goto label_2938a8;
        }
    }
    ctx->pc = 0x293890u;
label_293890:
    // 0x293890: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x293890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_293894:
    // 0x293894: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x293894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_293898:
    // 0x293898: 0x8c5c7900  lw          $gp, 0x7900($v0)
    ctx->pc = 0x293898u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30976)));
label_29389c:
    // 0x29389c: 0x60f809  jalr        $v1
label_2938a0:
    if (ctx->pc == 0x2938A0u) {
        ctx->pc = 0x2938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29389Cu;
        // 0x2938a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2938A4u;
        goto label_2938a4;
    }
    ctx->pc = 0x29389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2938A4u);
        ctx->pc = 0x2938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29389Cu;
        // 0x2938a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29389Cu, 0x2938A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2938A4u;
label_2938a4:
    // 0x2938a4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2938a4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2938a8:
    // 0x2938a8: 0xf  sync
    ctx->pc = 0x2938a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2938ac:
    // 0x2938ac: 0x42000038  ei
    ctx->pc = 0x2938acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2938b0:
    // 0x2938b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2938b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2938b4:
    // 0x2938b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2938b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2938b8:
    // 0x2938b8: 0x3e00008  jr          $ra
label_2938bc:
    if (ctx->pc == 0x2938BCu) {
        ctx->pc = 0x2938BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938B8u;
        // 0x2938bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2938C0u;
        goto label_fallthrough_0x2938b8;
    }
    ctx->pc = 0x2938B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2938BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938B8u;
        // 0x2938bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2938B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2938b8:
    ctx->pc = 0x2938C0u;
}
