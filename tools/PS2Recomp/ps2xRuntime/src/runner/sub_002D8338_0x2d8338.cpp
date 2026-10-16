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

// Function: sub_002D8338
// Address: 0x2d8338 - 0x2d8380
void sub_002D8338_0x2d8338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8338_0x2d8338");
#endif

    switch (ctx->pc) {
        case 0x2d8338u: goto label_2d8338;
        case 0x2d833cu: goto label_2d833c;
        case 0x2d8340u: goto label_2d8340;
        case 0x2d8344u: goto label_2d8344;
        case 0x2d8348u: goto label_2d8348;
        case 0x2d834cu: goto label_2d834c;
        case 0x2d8350u: goto label_2d8350;
        case 0x2d8354u: goto label_2d8354;
        case 0x2d8358u: goto label_2d8358;
        case 0x2d835cu: goto label_2d835c;
        case 0x2d8360u: goto label_2d8360;
        case 0x2d8364u: goto label_2d8364;
        case 0x2d8368u: goto label_2d8368;
        case 0x2d836cu: goto label_2d836c;
        case 0x2d8370u: goto label_2d8370;
        case 0x2d8374u: goto label_2d8374;
        case 0x2d8378u: goto label_2d8378;
        case 0x2d837cu: goto label_2d837c;
        default: break;
    }

    ctx->pc = 0x2d8338u;

label_2d8338:
    // 0x2d8338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d833c:
    // 0x2d833c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d8340:
    // 0x2d8340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d8344:
    // 0x2d8344: 0xc0b60e0  jal         func_2D8380
label_2d8348:
    if (ctx->pc == 0x2D8348u) {
        ctx->pc = 0x2D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8344u;
        // 0x2d8348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D834Cu;
        goto label_2d834c;
    }
    ctx->pc = 0x2D8344u;
    SET_GPR_U32(ctx, 31, 0x2D834Cu);
    ctx->pc = 0x2D8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8344u;
    // 0x2d8348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D8380u, 0x2D8344u, 0x2D834Cu)) {
        return;
    }
    ctx->pc = 0x2D834Cu;
label_2d834c:
    // 0x2d834c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8350:
    // 0x2d8350: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2d8354:
    if (ctx->pc == 0x2D8354u) {
        ctx->pc = 0x2D8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8350u;
        // 0x2d8354: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8358u;
        goto label_2d8358;
    }
    ctx->pc = 0x2D8350u;
    {
        const bool branch_taken_0x2d8350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8350) {
            ctx->pc = 0x2D8354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8350u;
            // 0x2d8354: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D8358u;
label_2d8358:
    // 0x2d8358: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d8358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d835c:
    // 0x2d835c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2d835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2d8360:
    // 0x2d8360: 0x40f809  jalr        $v0
label_2d8364:
    if (ctx->pc == 0x2D8364u) {
        ctx->pc = 0x2D8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8360u;
        // 0x2d8364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8368u;
        goto label_2d8368;
    }
    ctx->pc = 0x2D8360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8368u);
        ctx->pc = 0x2D8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8360u;
        // 0x2d8364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8360u, 0x2D8368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8368u;
label_2d8368:
    // 0x2d8368: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d8368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d836c:
    // 0x2d836c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8370:
    // 0x2d8370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8374:
    // 0x2d8374: 0x3e00008  jr          $ra
label_2d8378:
    if (ctx->pc == 0x2D8378u) {
        ctx->pc = 0x2D8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8374u;
        // 0x2d8378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D837Cu;
        goto label_2d837c;
    }
    ctx->pc = 0x2D8374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8374u;
        // 0x2d8378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D837Cu;
label_2d837c:
    // 0x2d837c: 0x0  nop
    ctx->pc = 0x2d837cu;
    // NOP
    ctx->pc = 0x2d8380u;
}
