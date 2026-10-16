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

// Function: sub_002282C0
// Address: 0x2282c0 - 0x228300
void sub_002282C0_0x2282c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002282C0_0x2282c0");
#endif

    switch (ctx->pc) {
        case 0x2282c0u: goto label_2282c0;
        case 0x2282c4u: goto label_2282c4;
        case 0x2282c8u: goto label_2282c8;
        case 0x2282ccu: goto label_2282cc;
        case 0x2282d0u: goto label_2282d0;
        case 0x2282d4u: goto label_2282d4;
        case 0x2282d8u: goto label_2282d8;
        case 0x2282dcu: goto label_2282dc;
        case 0x2282e0u: goto label_2282e0;
        case 0x2282e4u: goto label_2282e4;
        case 0x2282e8u: goto label_2282e8;
        case 0x2282ecu: goto label_2282ec;
        case 0x2282f0u: goto label_2282f0;
        case 0x2282f4u: goto label_2282f4;
        case 0x2282f8u: goto label_2282f8;
        case 0x2282fcu: goto label_2282fc;
        default: break;
    }

    ctx->pc = 0x2282c0u;

label_2282c0:
    // 0x2282c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2282c4:
    // 0x2282c4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2282c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2282c8:
    // 0x2282c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2282c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2282cc:
    // 0x2282cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2282ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2282d0:
    // 0x2282d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2282d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2282d4:
    // 0x2282d4: 0x8c621050  lw          $v0, 0x1050($v1)
    ctx->pc = 0x2282d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
label_2282d8:
    // 0x2282d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2282d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2282dc:
    // 0x2282dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2282dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2282e0:
    // 0x2282e0: 0x40f809  jalr        $v0
label_2282e4:
    if (ctx->pc == 0x2282E4u) {
        ctx->pc = 0x2282E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282E0u;
        // 0x2282e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282E8u;
        goto label_2282e8;
    }
    ctx->pc = 0x2282E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2282E8u);
        ctx->pc = 0x2282E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282E0u;
        // 0x2282e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2282E0u, 0x2282E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2282E8u;
label_2282e8:
    // 0x2282e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2282e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2282ec:
    // 0x2282ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2282ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2282f0:
    // 0x2282f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2282f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2282f4:
    // 0x2282f4: 0x3e00008  jr          $ra
label_2282f8:
    if (ctx->pc == 0x2282F8u) {
        ctx->pc = 0x2282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282F4u;
        // 0x2282f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282FCu;
        goto label_2282fc;
    }
    ctx->pc = 0x2282F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282F4u;
        // 0x2282f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2282F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2282FCu;
label_2282fc:
    // 0x2282fc: 0x0  nop
    ctx->pc = 0x2282fcu;
    // NOP
    ctx->pc = 0x228300u;
}
