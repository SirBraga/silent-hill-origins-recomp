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

// Function: sub_001D0488
// Address: 0x1d0488 - 0x1d04d8
void sub_001D0488_0x1d0488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0488_0x1d0488");
#endif

    switch (ctx->pc) {
        case 0x1d0488u: goto label_1d0488;
        case 0x1d048cu: goto label_1d048c;
        case 0x1d0490u: goto label_1d0490;
        case 0x1d0494u: goto label_1d0494;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d049cu: goto label_1d049c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04a4u: goto label_1d04a4;
        case 0x1d04a8u: goto label_1d04a8;
        case 0x1d04acu: goto label_1d04ac;
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04b8u: goto label_1d04b8;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c0u: goto label_1d04c0;
        case 0x1d04c4u: goto label_1d04c4;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ccu: goto label_1d04cc;
        case 0x1d04d0u: goto label_1d04d0;
        case 0x1d04d4u: goto label_1d04d4;
        default: break;
    }

    ctx->pc = 0x1d0488u;

label_1d0488:
    // 0x1d0488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d048c:
    // 0x1d048c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d0490:
    // 0x1d0490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d0494:
    // 0x1d0494: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1d0498:
    if (ctx->pc == 0x1D0498u) {
        ctx->pc = 0x1D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0494u;
        // 0x1d0498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D049Cu;
        goto label_1d049c;
    }
    ctx->pc = 0x1D0494u;
    {
        const bool branch_taken_0x1d0494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0494u;
        // 0x1d0498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0494) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D049Cu;
label_1d049c:
    // 0x1d049c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d049cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d04a0:
    // 0x1d04a0: 0xc06c994  jal         func_1B2650
label_1d04a4:
    if (ctx->pc == 0x1D04A4u) {
        ctx->pc = 0x1D04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A0u;
        // 0x1d04a4: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04A8u;
        goto label_1d04a8;
    }
    ctx->pc = 0x1D04A0u;
    SET_GPR_U32(ctx, 31, 0x1D04A8u);
    ctx->pc = 0x1D04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04A0u;
    // 0x1d04a4: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D04A0u, 0x1D04A8u)) {
        return;
    }
    ctx->pc = 0x1D04A8u;
label_1d04a8:
    // 0x1d04a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d04a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d04ac:
    // 0x1d04ac: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1d04b0:
    if (ctx->pc == 0x1D04B0u) {
        ctx->pc = 0x1D04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04ACu;
        // 0x1d04b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04B4u;
        goto label_1d04b4;
    }
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04ACu;
        // 0x1d04b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D04B4u;
label_1d04b4:
    // 0x1d04b4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1d04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1d04b8:
    // 0x1d04b8: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1d04b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1d04bc:
    // 0x1d04bc: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1d04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1d04c0:
    // 0x1d04c0: 0x60f809  jalr        $v1
label_1d04c4:
    if (ctx->pc == 0x1D04C4u) {
        ctx->pc = 0x1D04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C0u;
        // 0x1d04c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04C8u;
        goto label_1d04c8;
    }
    ctx->pc = 0x1D04C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D04C8u);
        ctx->pc = 0x1D04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C0u;
        // 0x1d04c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D04C0u, 0x1D04C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D04C8u;
label_1d04c8:
    // 0x1d04c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d04c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d04cc:
    // 0x1d04cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d04ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d04d0:
    // 0x1d04d0: 0x3e00008  jr          $ra
label_1d04d4:
    if (ctx->pc == 0x1D04D4u) {
        ctx->pc = 0x1D04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04D0u;
        // 0x1d04d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04D8u;
        goto label_fallthrough_0x1d04d0;
    }
    ctx->pc = 0x1D04D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04D0u;
        // 0x1d04d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D04D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d04d0:
    ctx->pc = 0x1D04D8u;
}
