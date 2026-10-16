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

// Function: sub_00228340
// Address: 0x228340 - 0x228388
void sub_00228340_0x228340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228340_0x228340");
#endif

    switch (ctx->pc) {
        case 0x228340u: goto label_228340;
        case 0x228344u: goto label_228344;
        case 0x228348u: goto label_228348;
        case 0x22834cu: goto label_22834c;
        case 0x228350u: goto label_228350;
        case 0x228354u: goto label_228354;
        case 0x228358u: goto label_228358;
        case 0x22835cu: goto label_22835c;
        case 0x228360u: goto label_228360;
        case 0x228364u: goto label_228364;
        case 0x228368u: goto label_228368;
        case 0x22836cu: goto label_22836c;
        case 0x228370u: goto label_228370;
        case 0x228374u: goto label_228374;
        case 0x228378u: goto label_228378;
        case 0x22837cu: goto label_22837c;
        case 0x228380u: goto label_228380;
        case 0x228384u: goto label_228384;
        default: break;
    }

    ctx->pc = 0x228340u;

label_228340:
    // 0x228340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_228344:
    // 0x228344: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x228344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_228348:
    // 0x228348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x228348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22834c:
    // 0x22834c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228350:
    // 0x228350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228354:
    // 0x228354: 0x8c621070  lw          $v0, 0x1070($v1)
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4208)));
label_228358:
    // 0x228358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22835c:
    // 0x22835c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228360:
    // 0x228360: 0x40f809  jalr        $v0
label_228364:
    if (ctx->pc == 0x228364u) {
        ctx->pc = 0x228364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228360u;
        // 0x228364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228368u;
        goto label_228368;
    }
    ctx->pc = 0x228360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228368u);
        ctx->pc = 0x228364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228360u;
        // 0x228364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228360u, 0x228368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228368u;
label_228368:
    // 0x228368: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x228368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_22836c:
    // 0x22836c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22836cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228370:
    // 0x228370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228374:
    // 0x228374: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x228374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
label_228378:
    // 0x228378: 0xa2030022  sb          $v1, 0x22($s0)
    ctx->pc = 0x228378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 3));
label_22837c:
    // 0x22837c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22837cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_228380:
    // 0x228380: 0x3e00008  jr          $ra
label_228384:
    if (ctx->pc == 0x228384u) {
        ctx->pc = 0x228384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228380u;
        // 0x228384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228388u;
        goto label_fallthrough_0x228380;
    }
    ctx->pc = 0x228380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228380u;
        // 0x228384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228380:
    ctx->pc = 0x228388u;
}
