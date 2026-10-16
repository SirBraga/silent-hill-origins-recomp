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

// Function: sub_001264B0
// Address: 0x1264b0 - 0x126518
void sub_001264B0_0x1264b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001264B0_0x1264b0");
#endif

    switch (ctx->pc) {
        case 0x1264b0u: goto label_1264b0;
        case 0x1264b4u: goto label_1264b4;
        case 0x1264b8u: goto label_1264b8;
        case 0x1264bcu: goto label_1264bc;
        case 0x1264c0u: goto label_1264c0;
        case 0x1264c4u: goto label_1264c4;
        case 0x1264c8u: goto label_1264c8;
        case 0x1264ccu: goto label_1264cc;
        case 0x1264d0u: goto label_1264d0;
        case 0x1264d4u: goto label_1264d4;
        case 0x1264d8u: goto label_1264d8;
        case 0x1264dcu: goto label_1264dc;
        case 0x1264e0u: goto label_1264e0;
        case 0x1264e4u: goto label_1264e4;
        case 0x1264e8u: goto label_1264e8;
        case 0x1264ecu: goto label_1264ec;
        case 0x1264f0u: goto label_1264f0;
        case 0x1264f4u: goto label_1264f4;
        case 0x1264f8u: goto label_1264f8;
        case 0x1264fcu: goto label_1264fc;
        case 0x126500u: goto label_126500;
        case 0x126504u: goto label_126504;
        case 0x126508u: goto label_126508;
        case 0x12650cu: goto label_12650c;
        case 0x126510u: goto label_126510;
        case 0x126514u: goto label_126514;
        default: break;
    }

    ctx->pc = 0x1264b0u;

label_1264b0:
    // 0x1264b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1264b4:
    // 0x1264b4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1264b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1264b8:
    // 0x1264b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1264b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1264bc:
    // 0x1264bc: 0x24a5be60  addiu       $a1, $a1, -0x41A0
    ctx->pc = 0x1264bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950496));
label_1264c0:
    // 0x1264c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1264c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1264c4:
    // 0x1264c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1264c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1264c8:
    // 0x1264c8: 0xae000c94  sw          $zero, 0xC94($s0)
    ctx->pc = 0x1264c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3220), GPR_U32(ctx, 0));
label_1264cc:
    // 0x1264cc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1264ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1264d0:
    // 0x1264d0: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1264d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1264d4:
    // 0x1264d4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1264d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1264d8:
    // 0x1264d8: 0x40f809  jalr        $v0
label_1264dc:
    if (ctx->pc == 0x1264DCu) {
        ctx->pc = 0x1264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264D8u;
        // 0x1264dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264E0u;
        goto label_1264e0;
    }
    ctx->pc = 0x1264D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1264E0u);
        ctx->pc = 0x1264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264D8u;
        // 0x1264dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1264D8u, 0x1264E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1264E0u;
label_1264e0:
    // 0x1264e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1264e4:
    if (ctx->pc == 0x1264E4u) {
        ctx->pc = 0x1264E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264E0u;
        // 0x1264e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264E8u;
        goto label_1264e8;
    }
    ctx->pc = 0x1264E0u;
    {
        const bool branch_taken_0x1264e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1264e0) {
            ctx->pc = 0x1264E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1264E0u;
            // 0x1264e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126508u;
            goto label_126508;
        }
    }
    ctx->pc = 0x1264E8u;
label_1264e8:
    // 0x1264e8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1264e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1264ec:
    // 0x1264ec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1264ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1264f0:
    // 0x1264f0: 0x24a5be50  addiu       $a1, $a1, -0x41B0
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950480));
label_1264f4:
    // 0x1264f4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1264f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1264f8:
    // 0x1264f8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1264fc:
    // 0x1264fc: 0x40f809  jalr        $v0
label_126500:
    if (ctx->pc == 0x126500u) {
        ctx->pc = 0x126500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264FCu;
        // 0x126500: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126504u;
        goto label_126504;
    }
    ctx->pc = 0x1264FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126504u);
        ctx->pc = 0x126500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264FCu;
        // 0x126500: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1264FCu, 0x126504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126504u;
label_126504:
    // 0x126504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126508:
    // 0x126508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12650c:
    // 0x12650c: 0x3e00008  jr          $ra
label_126510:
    if (ctx->pc == 0x126510u) {
        ctx->pc = 0x126510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12650Cu;
        // 0x126510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126514u;
        goto label_126514;
    }
    ctx->pc = 0x12650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12650Cu;
        // 0x126510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126514u;
label_126514:
    // 0x126514: 0x0  nop
    ctx->pc = 0x126514u;
    // NOP
    ctx->pc = 0x126518u;
}
