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

// Function: sub_001D8590
// Address: 0x1d8590 - 0x1d8660
void sub_001D8590_0x1d8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8590_0x1d8590");
#endif

    switch (ctx->pc) {
        case 0x1d85b4u: goto label_1d85b4;
        case 0x1d85c0u: goto label_1d85c0;
        case 0x1d85ccu: goto label_1d85cc;
        case 0x1d85d8u: goto label_1d85d8;
        case 0x1d85e4u: goto label_1d85e4;
        case 0x1d85f0u: goto label_1d85f0;
        case 0x1d8604u: goto label_1d8604;
        case 0x1d8614u: goto label_1d8614;
        case 0x1d8624u: goto label_1d8624;
        case 0x1d8634u: goto label_1d8634;
        case 0x1d8644u: goto label_1d8644;
        case 0x1d8654u: goto label_1d8654;
        default: break;
    }

    ctx->pc = 0x1d8590u;

    // 0x1d8590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8594: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d8594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d8598: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D8598u;
    {
        const bool branch_taken_0x1d8598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8598u;
        // 0x1d859c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8598) {
            ctx->pc = 0x1D8654u;
            goto label_1d8654;
        }
    }
    ctx->pc = 0x1D85A0u;
    // 0x1d85a0: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D85A0u;
    {
        const bool branch_taken_0x1d85a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d85a0) {
            ctx->pc = 0x1D85A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D85A0u;
            // 0x1d85a4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D85F8u;
            goto label_1d85f8;
        }
    }
    ctx->pc = 0x1D85A8u;
    // 0x1d85a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d85ac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D85ACu;
    SET_GPR_U32(ctx, 31, 0x1D85B4u);
    ctx->pc = 0x1D85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85ACu;
    // 0x1d85b0: 0x24848978  addiu       $a0, $a0, -0x7688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D85ACu, 0x1D85B4u)) {
        return;
    }
    ctx->pc = 0x1D85B4u;
label_1d85b4:
    // 0x1d85b4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d85b8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D85B8u;
    SET_GPR_U32(ctx, 31, 0x1D85C0u);
    ctx->pc = 0x1D85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85B8u;
    // 0x1d85bc: 0x24848980  addiu       $a0, $a0, -0x7680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D85B8u, 0x1D85C0u)) {
        return;
    }
    ctx->pc = 0x1D85C0u;
label_1d85c0:
    // 0x1d85c0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d85c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D85C4u;
    SET_GPR_U32(ctx, 31, 0x1D85CCu);
    ctx->pc = 0x1D85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85C4u;
    // 0x1d85c8: 0x24848988  addiu       $a0, $a0, -0x7678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D85C4u, 0x1D85CCu)) {
        return;
    }
    ctx->pc = 0x1D85CCu;
label_1d85cc:
    // 0x1d85cc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d85d0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D85D0u;
    SET_GPR_U32(ctx, 31, 0x1D85D8u);
    ctx->pc = 0x1D85D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85D0u;
    // 0x1d85d4: 0x24848990  addiu       $a0, $a0, -0x7670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D85D0u, 0x1D85D8u)) {
        return;
    }
    ctx->pc = 0x1D85D8u;
label_1d85d8:
    // 0x1d85d8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d85dc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D85DCu;
    SET_GPR_U32(ctx, 31, 0x1D85E4u);
    ctx->pc = 0x1D85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85DCu;
    // 0x1d85e0: 0x24848998  addiu       $a0, $a0, -0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D85DCu, 0x1D85E4u)) {
        return;
    }
    ctx->pc = 0x1D85E4u;
label_1d85e4:
    // 0x1d85e4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d85e8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D85E8u;
    SET_GPR_U32(ctx, 31, 0x1D85F0u);
    ctx->pc = 0x1D85ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85E8u;
    // 0x1d85ec: 0x248489a0  addiu       $a0, $a0, -0x7660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D85E8u, 0x1D85F0u)) {
        return;
    }
    ctx->pc = 0x1D85F0u;
label_1d85f0:
    // 0x1d85f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D85F0u;
    {
        const bool branch_taken_0x1d85f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85F0u;
        // 0x1d85f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85f0) {
            ctx->pc = 0x1D8658u;
            goto label_1d8658;
        }
    }
    ctx->pc = 0x1D85F8u;
label_1d85f8:
    // 0x1d85f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d85fc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D85FCu;
    SET_GPR_U32(ctx, 31, 0x1D8604u);
    ctx->pc = 0x1D8600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85FCu;
    // 0x1d8600: 0x248489a0  addiu       $a0, $a0, -0x7660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D85FCu, 0x1D8604u)) {
        return;
    }
    ctx->pc = 0x1D8604u;
label_1d8604:
    // 0x1d8604: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d860c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D860Cu;
    SET_GPR_U32(ctx, 31, 0x1D8614u);
    ctx->pc = 0x1D8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D860Cu;
    // 0x1d8610: 0x24848998  addiu       $a0, $a0, -0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D860Cu, 0x1D8614u)) {
        return;
    }
    ctx->pc = 0x1D8614u;
label_1d8614:
    // 0x1d8614: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d861c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D861Cu;
    SET_GPR_U32(ctx, 31, 0x1D8624u);
    ctx->pc = 0x1D8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D861Cu;
    // 0x1d8620: 0x24848990  addiu       $a0, $a0, -0x7670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D861Cu, 0x1D8624u)) {
        return;
    }
    ctx->pc = 0x1D8624u;
label_1d8624:
    // 0x1d8624: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d862c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D862Cu;
    SET_GPR_U32(ctx, 31, 0x1D8634u);
    ctx->pc = 0x1D8630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D862Cu;
    // 0x1d8630: 0x24848988  addiu       $a0, $a0, -0x7678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D862Cu, 0x1D8634u)) {
        return;
    }
    ctx->pc = 0x1D8634u;
label_1d8634:
    // 0x1d8634: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d863c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D863Cu;
    SET_GPR_U32(ctx, 31, 0x1D8644u);
    ctx->pc = 0x1D8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D863Cu;
    // 0x1d8640: 0x24848980  addiu       $a0, $a0, -0x7680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D863Cu, 0x1D8644u)) {
        return;
    }
    ctx->pc = 0x1D8644u;
label_1d8644:
    // 0x1d8644: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8648: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d864c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D864Cu;
    SET_GPR_U32(ctx, 31, 0x1D8654u);
    ctx->pc = 0x1D8650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D864Cu;
    // 0x1d8650: 0x24848978  addiu       $a0, $a0, -0x7688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D864Cu, 0x1D8654u)) {
        return;
    }
    ctx->pc = 0x1D8654u;
label_1d8654:
    // 0x1d8654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8658:
    // 0x1d8658: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8658u;
        // 0x1d865c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8660u;
}
