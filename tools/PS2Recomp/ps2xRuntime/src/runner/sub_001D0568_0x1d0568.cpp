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

// Function: sub_001D0568
// Address: 0x1d0568 - 0x1d05c0
void sub_001D0568_0x1d0568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0568_0x1d0568");
#endif

    switch (ctx->pc) {
        case 0x1d0588u: goto label_1d0588;
        case 0x1d05a0u: goto label_1d05a0;
        default: break;
    }

    ctx->pc = 0x1d0568u;

    // 0x1d0568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d056c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0574: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0574u;
    {
        const bool branch_taken_0x1d0574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0574) {
            ctx->pc = 0x1D05A8u;
            goto label_1d05a8;
        }
    }
    ctx->pc = 0x1D057Cu;
    // 0x1d057c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d057cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0580: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0580u;
    SET_GPR_U32(ctx, 31, 0x1D0588u);
    ctx->pc = 0x1D0584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0580u;
    // 0x1d0584: 0x24a50998  addiu       $a1, $a1, 0x998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0580u, 0x1D0588u)) {
        return;
    }
    ctx->pc = 0x1D0588u;
label_1d0588:
    // 0x1d0588: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0588u;
    {
        const bool branch_taken_0x1d0588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0588u;
        // 0x1d058c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0588) {
            ctx->pc = 0x1D05ACu;
            goto label_1d05ac;
        }
    }
    ctx->pc = 0x1D0590u;
    // 0x1d0590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0594: 0x24c605c0  addiu       $a2, $a2, 0x5C0
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1472));
    // 0x1d0598: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0598u;
    SET_GPR_U32(ctx, 31, 0x1D05A0u);
    ctx->pc = 0x1D059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0598u;
    // 0x1d059c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0598u, 0x1D05A0u)) {
        return;
    }
    ctx->pc = 0x1D05A0u;
label_1d05a0:
    // 0x1d05a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D05A0u;
    {
        const bool branch_taken_0x1d05a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A0u;
        // 0x1d05a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05a0) {
            ctx->pc = 0x1D05B0u;
            goto label_1d05b0;
        }
    }
    ctx->pc = 0x1D05A8u;
label_1d05a8:
    // 0x1d05a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d05a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05ac:
    // 0x1d05ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d05acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d05b0:
    // 0x1d05b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d05b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d05b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d05b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d05b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D05B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B8u;
        // 0x1d05bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D05C0u;
}
