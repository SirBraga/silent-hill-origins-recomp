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

// Function: sub_001D06C8
// Address: 0x1d06c8 - 0x1d0720
void sub_001D06C8_0x1d06c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D06C8_0x1d06c8");
#endif

    switch (ctx->pc) {
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d0700u: goto label_1d0700;
        default: break;
    }

    ctx->pc = 0x1d06c8u;

    // 0x1d06c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d06c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d06cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d06d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d06d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d06d4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D06D4u;
    {
        const bool branch_taken_0x1d06d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06D4u;
        // 0x1d06d8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06d4) {
            ctx->pc = 0x1D0708u;
            goto label_1d0708;
        }
    }
    ctx->pc = 0x1D06DCu;
    // 0x1d06dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d06e0: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D06E0u;
    SET_GPR_U32(ctx, 31, 0x1D06E8u);
    ctx->pc = 0x1D06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06E0u;
    // 0x1d06e4: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D06E0u, 0x1D06E8u)) {
        return;
    }
    ctx->pc = 0x1D06E8u;
label_1d06e8:
    // 0x1d06e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D06E8u;
    {
        const bool branch_taken_0x1d06e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06E8u;
        // 0x1d06ec: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06e8) {
            ctx->pc = 0x1D070Cu;
            goto label_1d070c;
        }
    }
    ctx->pc = 0x1D06F0u;
    // 0x1d06f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d06f4: 0x24c60720  addiu       $a2, $a2, 0x720
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1824));
    // 0x1d06f8: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D06F8u;
    SET_GPR_U32(ctx, 31, 0x1D0700u);
    ctx->pc = 0x1D06FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06F8u;
    // 0x1d06fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D06F8u, 0x1D0700u)) {
        return;
    }
    ctx->pc = 0x1D0700u;
label_1d0700:
    // 0x1d0700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0700u;
    {
        const bool branch_taken_0x1d0700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0700u;
        // 0x1d0704: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0700) {
            ctx->pc = 0x1D0710u;
            goto label_1d0710;
        }
    }
    ctx->pc = 0x1D0708u;
label_1d0708:
    // 0x1d0708: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d070c:
    // 0x1d070c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d070cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0710:
    // 0x1d0710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0718: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0718u;
        // 0x1d071c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0720u;
}
