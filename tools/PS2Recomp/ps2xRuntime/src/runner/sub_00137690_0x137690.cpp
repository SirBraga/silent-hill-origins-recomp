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

// Function: sub_00137690
// Address: 0x137690 - 0x1376d8
void sub_00137690_0x137690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137690_0x137690");
#endif

    switch (ctx->pc) {
        case 0x137690u: goto label_137690;
        case 0x137694u: goto label_137694;
        case 0x137698u: goto label_137698;
        case 0x13769cu: goto label_13769c;
        case 0x1376a0u: goto label_1376a0;
        case 0x1376a4u: goto label_1376a4;
        case 0x1376a8u: goto label_1376a8;
        case 0x1376acu: goto label_1376ac;
        case 0x1376b0u: goto label_1376b0;
        case 0x1376b4u: goto label_1376b4;
        case 0x1376b8u: goto label_1376b8;
        case 0x1376bcu: goto label_1376bc;
        case 0x1376c0u: goto label_1376c0;
        case 0x1376c4u: goto label_1376c4;
        case 0x1376c8u: goto label_1376c8;
        case 0x1376ccu: goto label_1376cc;
        case 0x1376d0u: goto label_1376d0;
        case 0x1376d4u: goto label_1376d4;
        default: break;
    }

    ctx->pc = 0x137690u;

label_137690:
    // 0x137690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_137694:
    // 0x137694: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x137694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_137698:
    // 0x137698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13769c:
    // 0x13769c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13769cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1376a0:
    // 0x1376a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1376a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1376a4:
    // 0x1376a4: 0xc08063c  jal         func_2018F0
label_1376a8:
    if (ctx->pc == 0x1376A8u) {
        ctx->pc = 0x1376A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376A4u;
        // 0x1376a8: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376ACu;
        goto label_1376ac;
    }
    ctx->pc = 0x1376A4u;
    SET_GPR_U32(ctx, 31, 0x1376ACu);
    ctx->pc = 0x1376A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376A4u;
    // 0x1376a8: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1376A4u, 0x1376ACu)) {
        return;
    }
    ctx->pc = 0x1376ACu;
label_1376ac:
    // 0x1376ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1376b0:
    if (ctx->pc == 0x1376B0u) {
        ctx->pc = 0x1376B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376ACu;
        // 0x1376b0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376B4u;
        goto label_1376b4;
    }
    ctx->pc = 0x1376ACu;
    {
        const bool branch_taken_0x1376ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376ACu;
        // 0x1376b0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376ac) {
            ctx->pc = 0x1376C8u;
            goto label_1376c8;
        }
    }
    ctx->pc = 0x1376B4u;
label_1376b4:
    // 0x1376b4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1376b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_1376b8:
    // 0x1376b8: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_1376bc:
    // 0x1376bc: 0x2484df10  addiu       $a0, $a0, -0x20F0
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958864));
label_1376c0:
    // 0x1376c0: 0x40f809  jalr        $v0
label_1376c4:
    if (ctx->pc == 0x1376C4u) {
        ctx->pc = 0x1376C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376C0u;
        // 0x1376c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376C8u;
        goto label_1376c8;
    }
    ctx->pc = 0x1376C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1376C8u);
        ctx->pc = 0x1376C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376C0u;
        // 0x1376c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1376C0u, 0x1376C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1376C8u;
label_1376c8:
    // 0x1376c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1376c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1376cc:
    // 0x1376cc: 0x3e00008  jr          $ra
label_1376d0:
    if (ctx->pc == 0x1376D0u) {
        ctx->pc = 0x1376D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376CCu;
        // 0x1376d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376D4u;
        goto label_1376d4;
    }
    ctx->pc = 0x1376CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1376D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376CCu;
        // 0x1376d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1376CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1376D4u;
label_1376d4:
    // 0x1376d4: 0x0  nop
    ctx->pc = 0x1376d4u;
    // NOP
    ctx->pc = 0x1376d8u;
}
