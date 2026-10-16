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

// Function: sub_0022B090
// Address: 0x22b090 - 0x22b0d8
void sub_0022B090_0x22b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B090_0x22b090");
#endif

    switch (ctx->pc) {
        case 0x22b090u: goto label_22b090;
        case 0x22b094u: goto label_22b094;
        case 0x22b098u: goto label_22b098;
        case 0x22b09cu: goto label_22b09c;
        case 0x22b0a0u: goto label_22b0a0;
        case 0x22b0a4u: goto label_22b0a4;
        case 0x22b0a8u: goto label_22b0a8;
        case 0x22b0acu: goto label_22b0ac;
        case 0x22b0b0u: goto label_22b0b0;
        case 0x22b0b4u: goto label_22b0b4;
        case 0x22b0b8u: goto label_22b0b8;
        case 0x22b0bcu: goto label_22b0bc;
        case 0x22b0c0u: goto label_22b0c0;
        case 0x22b0c4u: goto label_22b0c4;
        case 0x22b0c8u: goto label_22b0c8;
        case 0x22b0ccu: goto label_22b0cc;
        case 0x22b0d0u: goto label_22b0d0;
        case 0x22b0d4u: goto label_22b0d4;
        default: break;
    }

    ctx->pc = 0x22b090u;

label_22b090:
    // 0x22b090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22b094:
    // 0x22b094: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22b098:
    // 0x22b098: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22b09c:
    // 0x22b09c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22b0a0:
    // 0x22b0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22b0a4:
    // 0x22b0a4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22b0a8:
    // 0x22b0a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b0ac:
    // 0x22b0ac: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_22b0b0:
    // 0x22b0b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22b0b4:
    if (ctx->pc == 0x22B0B4u) {
        ctx->pc = 0x22B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B0u;
        // 0x22b0b4: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B0B8u;
        goto label_22b0b8;
    }
    ctx->pc = 0x22B0B0u;
    {
        const bool branch_taken_0x22b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B0u;
        // 0x22b0b4: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0b0) {
            ctx->pc = 0x22B0C0u;
            goto label_22b0c0;
        }
    }
    ctx->pc = 0x22B0B8u;
label_22b0b8:
    // 0x22b0b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22b0bc:
    if (ctx->pc == 0x22B0BCu) {
        ctx->pc = 0x22B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B8u;
        // 0x22b0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B0C0u;
        goto label_22b0c0;
    }
    ctx->pc = 0x22B0B8u;
    {
        const bool branch_taken_0x22b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B8u;
        // 0x22b0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0b8) {
            ctx->pc = 0x22B0C8u;
            goto label_22b0c8;
        }
    }
    ctx->pc = 0x22B0C0u;
label_22b0c0:
    // 0x22b0c0: 0x40f809  jalr        $v0
label_22b0c4:
    if (ctx->pc == 0x22B0C4u) {
        ctx->pc = 0x22B0C8u;
        goto label_22b0c8;
    }
    ctx->pc = 0x22B0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B0C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B0C0u, 0x22B0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B0C8u;
label_22b0c8:
    // 0x22b0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b0cc:
    // 0x22b0cc: 0x3e00008  jr          $ra
label_22b0d0:
    if (ctx->pc == 0x22B0D0u) {
        ctx->pc = 0x22B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0CCu;
        // 0x22b0d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B0D4u;
        goto label_22b0d4;
    }
    ctx->pc = 0x22B0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0CCu;
        // 0x22b0d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B0D4u;
label_22b0d4:
    // 0x22b0d4: 0x0  nop
    ctx->pc = 0x22b0d4u;
    // NOP
    ctx->pc = 0x22b0d8u;
}
