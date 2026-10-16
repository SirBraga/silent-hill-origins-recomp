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

// Function: sub_00126438
// Address: 0x126438 - 0x1264b0
void sub_00126438_0x126438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126438_0x126438");
#endif

    switch (ctx->pc) {
        case 0x126438u: goto label_126438;
        case 0x12643cu: goto label_12643c;
        case 0x126440u: goto label_126440;
        case 0x126444u: goto label_126444;
        case 0x126448u: goto label_126448;
        case 0x12644cu: goto label_12644c;
        case 0x126450u: goto label_126450;
        case 0x126454u: goto label_126454;
        case 0x126458u: goto label_126458;
        case 0x12645cu: goto label_12645c;
        case 0x126460u: goto label_126460;
        case 0x126464u: goto label_126464;
        case 0x126468u: goto label_126468;
        case 0x12646cu: goto label_12646c;
        case 0x126470u: goto label_126470;
        case 0x126474u: goto label_126474;
        case 0x126478u: goto label_126478;
        case 0x12647cu: goto label_12647c;
        case 0x126480u: goto label_126480;
        case 0x126484u: goto label_126484;
        case 0x126488u: goto label_126488;
        case 0x12648cu: goto label_12648c;
        case 0x126490u: goto label_126490;
        case 0x126494u: goto label_126494;
        case 0x126498u: goto label_126498;
        case 0x12649cu: goto label_12649c;
        case 0x1264a0u: goto label_1264a0;
        case 0x1264a4u: goto label_1264a4;
        case 0x1264a8u: goto label_1264a8;
        case 0x1264acu: goto label_1264ac;
        default: break;
    }

    ctx->pc = 0x126438u;

label_126438:
    // 0x126438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12643c:
    // 0x12643c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_126440:
    // 0x126440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126444:
    // 0x126444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126448:
    // 0x126448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12644c:
    // 0x12644c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126450:
    // 0x126450: 0xc068218  jal         func_1A0860
label_126454:
    if (ctx->pc == 0x126454u) {
        ctx->pc = 0x126454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126450u;
        // 0x126454: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126458u;
        goto label_126458;
    }
    ctx->pc = 0x126450u;
    SET_GPR_U32(ctx, 31, 0x126458u);
    ctx->pc = 0x126454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126450u;
    // 0x126454: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x126450u, 0x126458u)) {
        return;
    }
    ctx->pc = 0x126458u;
label_126458:
    // 0x126458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12645c:
    // 0x12645c: 0xc0c5c96  jal         func_317258
label_126460:
    if (ctx->pc == 0x126460u) {
        ctx->pc = 0x126460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12645Cu;
        // 0x126460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126464u;
        goto label_126464;
    }
    ctx->pc = 0x12645Cu;
    SET_GPR_U32(ctx, 31, 0x126464u);
    ctx->pc = 0x126460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12645Cu;
    // 0x126460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x12645Cu, 0x126464u)) {
        return;
    }
    ctx->pc = 0x126464u;
label_126464:
    // 0x126464: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_126468:
    if (ctx->pc == 0x126468u) {
        ctx->pc = 0x126468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126464u;
        // 0x126468: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12646Cu;
        goto label_12646c;
    }
    ctx->pc = 0x126464u;
    {
        const bool branch_taken_0x126464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126464) {
            ctx->pc = 0x126468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126464u;
            // 0x126468: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12649Cu;
            goto label_12649c;
        }
    }
    ctx->pc = 0x12646Cu;
label_12646c:
    // 0x12646c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_126470:
    // 0x126470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_126474:
    // 0x126474: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x126474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_126478:
    // 0x126478: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_12647c:
    // 0x12647c: 0x40f809  jalr        $v0
label_126480:
    if (ctx->pc == 0x126480u) {
        ctx->pc = 0x126480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12647Cu;
        // 0x126480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126484u;
        goto label_126484;
    }
    ctx->pc = 0x12647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126484u);
        ctx->pc = 0x126480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12647Cu;
        // 0x126480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12647Cu, 0x126484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126484u;
label_126484:
    // 0x126484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126488:
    // 0x126488: 0x8e040f6c  lw          $a0, 0xF6C($s0)
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3948)));
label_12648c:
    // 0x12648c: 0xae020c94  sw          $v0, 0xC94($s0)
    ctx->pc = 0x12648cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3220), GPR_U32(ctx, 2));
label_126490:
    // 0x126490: 0xc050400  jal         func_141000
label_126494:
    if (ctx->pc == 0x126494u) {
        ctx->pc = 0x126494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126490u;
        // 0x126494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126498u;
        goto label_126498;
    }
    ctx->pc = 0x126490u;
    SET_GPR_U32(ctx, 31, 0x126498u);
    ctx->pc = 0x126494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126490u;
    // 0x126494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141000u, 0x126490u, 0x126498u)) {
        return;
    }
    ctx->pc = 0x126498u;
label_126498:
    // 0x126498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12649c:
    // 0x12649c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12649cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1264a0:
    // 0x1264a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1264a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1264a4:
    // 0x1264a4: 0x3e00008  jr          $ra
label_1264a8:
    if (ctx->pc == 0x1264A8u) {
        ctx->pc = 0x1264A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264A4u;
        // 0x1264a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264ACu;
        goto label_1264ac;
    }
    ctx->pc = 0x1264A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1264A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264A4u;
        // 0x1264a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1264A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1264ACu;
label_1264ac:
    // 0x1264ac: 0x0  nop
    ctx->pc = 0x1264acu;
    // NOP
    ctx->pc = 0x1264b0u;
}
