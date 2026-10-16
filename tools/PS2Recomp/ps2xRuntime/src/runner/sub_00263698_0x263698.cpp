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

// Function: sub_00263698
// Address: 0x263698 - 0x263720
void sub_00263698_0x263698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263698_0x263698");
#endif

    switch (ctx->pc) {
        case 0x2636a8u: goto label_2636a8;
        case 0x2636d0u: goto label_2636d0;
        case 0x2636ecu: goto label_2636ec;
        case 0x2636f8u: goto label_2636f8;
        case 0x263708u: goto label_263708;
        default: break;
    }

    ctx->pc = 0x263698u;

    // 0x263698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26369c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2636a0: 0xc09945a  jal         func_265168
    ctx->pc = 0x2636A0u;
    SET_GPR_U32(ctx, 31, 0x2636A8u);
    ctx->pc = 0x2636A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636A0u;
    // 0x2636a4: 0x24041001  addiu       $a0, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x2636A0u, 0x2636A8u)) {
        return;
    }
    ctx->pc = 0x2636A8u;
label_2636a8:
    // 0x2636a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2636a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2636acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2636b0: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x2636b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x2636b4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2636b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2636b8: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2636b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2636bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2636bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2636c0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2636C0u;
    {
        const bool branch_taken_0x2636c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2636C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636C0u;
        // 0x2636c4: 0xac64005c  sw          $a0, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636c0) {
            ctx->pc = 0x263700u;
            goto label_263700;
        }
    }
    ctx->pc = 0x2636C8u;
    // 0x2636c8: 0xc098d9e  jal         func_263678
    ctx->pc = 0x2636C8u;
    SET_GPR_U32(ctx, 31, 0x2636D0u);
    ctx->pc = 0x263678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263678u, 0x2636C8u, 0x2636D0u)) {
        return;
    }
    ctx->pc = 0x2636D0u;
label_2636d0:
    // 0x2636d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2636d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2636d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2636d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2636d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2636d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2636dc: 0x24a5b850  addiu       $a1, $a1, -0x47B0
    ctx->pc = 0x2636dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948944));
    // 0x2636e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2636e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2636e4: 0xc092848  jal         func_24A120
    ctx->pc = 0x2636E4u;
    SET_GPR_U32(ctx, 31, 0x2636ECu);
    ctx->pc = 0x2636E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636E4u;
    // 0x2636e8: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2636E4u, 0x2636ECu)) {
        return;
    }
    ctx->pc = 0x2636ECu;
label_2636ec:
    // 0x2636ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2636ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636f0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2636F0u;
    SET_GPR_U32(ctx, 31, 0x2636F8u);
    ctx->pc = 0x2636F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636F0u;
    // 0x2636f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2636F0u, 0x2636F8u)) {
        return;
    }
    ctx->pc = 0x2636F8u;
label_2636f8:
    // 0x2636f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2636F8u;
    {
        const bool branch_taken_0x2636f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2636FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636F8u;
        // 0x2636fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636f8) {
            ctx->pc = 0x263710u;
            goto label_263710;
        }
    }
    ctx->pc = 0x263700u;
label_263700:
    // 0x263700: 0xc097ba2  jal         func_25EE88
    ctx->pc = 0x263700u;
    SET_GPR_U32(ctx, 31, 0x263708u);
    ctx->pc = 0x25EE88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EE88u, 0x263700u, 0x263708u)) {
        return;
    }
    ctx->pc = 0x263708u;
label_263708:
    // 0x263708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26370c: 0x0  nop
    ctx->pc = 0x26370cu;
    // NOP
label_263710:
    // 0x263710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263714: 0x3e00008  jr          $ra
    ctx->pc = 0x263714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263714u;
        // 0x263718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26371Cu;
    // 0x26371c: 0x0  nop
    ctx->pc = 0x26371cu;
    // NOP
    ctx->pc = 0x263720u;
}
