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

// Function: sub_00208318
// Address: 0x208318 - 0x208380
void sub_00208318_0x208318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208318_0x208318");
#endif

    switch (ctx->pc) {
        case 0x208318u: goto label_208318;
        case 0x20831cu: goto label_20831c;
        case 0x208320u: goto label_208320;
        case 0x208324u: goto label_208324;
        case 0x208328u: goto label_208328;
        case 0x20832cu: goto label_20832c;
        case 0x208330u: goto label_208330;
        case 0x208334u: goto label_208334;
        case 0x208338u: goto label_208338;
        case 0x20833cu: goto label_20833c;
        case 0x208340u: goto label_208340;
        case 0x208344u: goto label_208344;
        case 0x208348u: goto label_208348;
        case 0x20834cu: goto label_20834c;
        case 0x208350u: goto label_208350;
        case 0x208354u: goto label_208354;
        case 0x208358u: goto label_208358;
        case 0x20835cu: goto label_20835c;
        case 0x208360u: goto label_208360;
        case 0x208364u: goto label_208364;
        case 0x208368u: goto label_208368;
        case 0x20836cu: goto label_20836c;
        case 0x208370u: goto label_208370;
        case 0x208374u: goto label_208374;
        case 0x208378u: goto label_208378;
        case 0x20837cu: goto label_20837c;
        default: break;
    }

    ctx->pc = 0x208318u;

label_208318:
    // 0x208318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20831c:
    // 0x20831c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_208320:
    // 0x208320: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x208320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_208324:
    // 0x208324: 0x244281e0  addiu       $v0, $v0, -0x7E20
    ctx->pc = 0x208324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935008));
label_208328:
    // 0x208328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20832c:
    // 0x20832c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20832cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208330:
    // 0x208330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208334:
    // 0x208334: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x208334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_208338:
    // 0x208338: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x208338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_20833c:
    // 0x20833c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20833cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_208340:
    // 0x208340: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x208340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_208344:
    // 0x208344: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x208344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_208348:
    // 0x208348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20834c:
    // 0x20834c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_208350:
    // 0x208350: 0x60f809  jalr        $v1
label_208354:
    if (ctx->pc == 0x208354u) {
        ctx->pc = 0x208358u;
        goto label_208358;
    }
    ctx->pc = 0x208350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208350u, 0x208358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208358u;
label_208358:
    // 0x208358: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x208358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20835c:
    // 0x20835c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208360:
    // 0x208360: 0x40f809  jalr        $v0
label_208364:
    if (ctx->pc == 0x208364u) {
        ctx->pc = 0x208364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208360u;
        // 0x208364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208368u;
        goto label_208368;
    }
    ctx->pc = 0x208360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208368u);
        ctx->pc = 0x208364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208360u;
        // 0x208364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208360u, 0x208368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208368u;
label_208368:
    // 0x208368: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x208368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_20836c:
    // 0x20836c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20836cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208370:
    // 0x208370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208374:
    // 0x208374: 0x3e00008  jr          $ra
label_208378:
    if (ctx->pc == 0x208378u) {
        ctx->pc = 0x208378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208374u;
        // 0x208378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20837Cu;
        goto label_20837c;
    }
    ctx->pc = 0x208374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208374u;
        // 0x208378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20837Cu;
label_20837c:
    // 0x20837c: 0x0  nop
    ctx->pc = 0x20837cu;
    // NOP
    ctx->pc = 0x208380u;
}
