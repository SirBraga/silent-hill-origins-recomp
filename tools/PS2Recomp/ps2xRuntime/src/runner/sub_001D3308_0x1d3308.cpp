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

// Function: sub_001D3308
// Address: 0x1d3308 - 0x1d3380
void sub_001D3308_0x1d3308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3308_0x1d3308");
#endif

    switch (ctx->pc) {
        case 0x1d334cu: goto label_1d334c;
        case 0x1d335cu: goto label_1d335c;
        default: break;
    }

    ctx->pc = 0x1d3308u;

    // 0x1d3308: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d330c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3310: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d3314: 0x8c4686c8  lw          $a2, -0x7938($v0)
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F86C8u));
    // 0x1d3318: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d331c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d3320: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d3320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3324: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1d3324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d3328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d332c: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D332Cu;
    {
        const bool branch_taken_0x1d332c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D332Cu;
        // 0x1d3330: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d332c) {
            ctx->pc = 0x1D334Cu;
            goto label_1d334c;
        }
    }
    ctx->pc = 0x1D3334u;
    // 0x1d3334: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d3338: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3338u;
    {
        const bool branch_taken_0x1d3338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3338u;
        // 0x1d333c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3338) {
            ctx->pc = 0x1D334Cu;
            goto label_1d334c;
        }
    }
    ctx->pc = 0x1D3340u;
    // 0x1d3340: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1d3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1d3344: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D3344u;
    SET_GPR_U32(ctx, 31, 0x1D334Cu);
    ctx->pc = 0x1D3348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3344u;
    // 0x1d3348: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D3344u, 0x1D334Cu)) {
        return;
    }
    ctx->pc = 0x1D334Cu;
label_1d334c:
    // 0x1d334c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3354: 0xc074980  jal         func_1D2600
    ctx->pc = 0x1D3354u;
    SET_GPR_U32(ctx, 31, 0x1D335Cu);
    ctx->pc = 0x1D3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3354u;
    // 0x1d3358: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2600u, 0x1D3354u, 0x1D335Cu)) {
        return;
    }
    ctx->pc = 0x1D335Cu;
label_1d335c:
    // 0x1d335c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d335cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d3360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3368: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3368u;
        // 0x1d336c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3370u;
    // 0x1d3370: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3374: 0x0  nop
    ctx->pc = 0x1d3374u;
    // NOP
    // 0x1d3378: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1d3378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d337c: 0x0  nop
    ctx->pc = 0x1d337cu;
    // NOP
    ctx->pc = 0x1d3380u;
}
