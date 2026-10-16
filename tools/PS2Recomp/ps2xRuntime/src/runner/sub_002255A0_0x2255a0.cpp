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

// Function: sub_002255A0
// Address: 0x2255a0 - 0x2255d8
void sub_002255A0_0x2255a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002255A0_0x2255a0");
#endif

    switch (ctx->pc) {
        case 0x2255a0u: goto label_2255a0;
        case 0x2255a4u: goto label_2255a4;
        case 0x2255a8u: goto label_2255a8;
        case 0x2255acu: goto label_2255ac;
        case 0x2255b0u: goto label_2255b0;
        case 0x2255b4u: goto label_2255b4;
        case 0x2255b8u: goto label_2255b8;
        case 0x2255bcu: goto label_2255bc;
        case 0x2255c0u: goto label_2255c0;
        case 0x2255c4u: goto label_2255c4;
        case 0x2255c8u: goto label_2255c8;
        case 0x2255ccu: goto label_2255cc;
        case 0x2255d0u: goto label_2255d0;
        case 0x2255d4u: goto label_2255d4;
        default: break;
    }

    ctx->pc = 0x2255a0u;

label_2255a0:
    // 0x2255a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2255a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2255a4:
    // 0x2255a4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2255a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2255a8:
    // 0x2255a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2255a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2255ac:
    // 0x2255ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2255acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2255b0:
    // 0x2255b0: 0x8c4310d4  lw          $v1, 0x10D4($v0)
    ctx->pc = 0x2255b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4308)));
label_2255b4:
    // 0x2255b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2255b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2255b8:
    // 0x2255b8: 0x60f809  jalr        $v1
label_2255bc:
    if (ctx->pc == 0x2255BCu) {
        ctx->pc = 0x2255BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255B8u;
        // 0x2255bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255C0u;
        goto label_2255c0;
    }
    ctx->pc = 0x2255B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2255C0u);
        ctx->pc = 0x2255BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255B8u;
        // 0x2255bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2255B8u, 0x2255C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2255C0u;
label_2255c0:
    // 0x2255c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2255c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2255c4:
    // 0x2255c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2255c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2255c8:
    // 0x2255c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2255c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2255cc:
    // 0x2255cc: 0x3e00008  jr          $ra
label_2255d0:
    if (ctx->pc == 0x2255D0u) {
        ctx->pc = 0x2255D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255CCu;
        // 0x2255d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255D4u;
        goto label_2255d4;
    }
    ctx->pc = 0x2255CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2255D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255CCu;
        // 0x2255d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2255CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2255D4u;
label_2255d4:
    // 0x2255d4: 0x0  nop
    ctx->pc = 0x2255d4u;
    // NOP
    ctx->pc = 0x2255d8u;
}
