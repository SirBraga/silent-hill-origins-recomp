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

// Function: sub_002832E0
// Address: 0x2832e0 - 0x283370
void sub_002832E0_0x2832e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002832E0_0x2832e0");
#endif

    switch (ctx->pc) {
        case 0x283348u: goto label_283348;
        case 0x283358u: goto label_283358;
        default: break;
    }

    ctx->pc = 0x2832e0u;

    // 0x2832e0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2832e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2832e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2832e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2832e8: 0x8c62e6e8  lw          $v0, -0x1918($v1)
    ctx->pc = 0x2832e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x2832ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2832ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2832f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2832f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2832f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2832f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2832f8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2832fc: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2832FCu;
    {
        const bool branch_taken_0x2832fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x283300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832FCu;
        // 0x283300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832fc) {
            ctx->pc = 0x28335Cu;
            goto label_28335c;
        }
    }
    ctx->pc = 0x283304u;
    // 0x283304: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x283304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x283308: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x283308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x28330c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x283310: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x283310u;
    {
        const bool branch_taken_0x283310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283310) {
            ctx->pc = 0x283350u;
            goto label_283350;
        }
    }
    ctx->pc = 0x283318u;
    // 0x283318: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x283318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28331c: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x283320: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x283320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283324: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x283324u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283328: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x283328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28332c: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x28332cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x283330: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x283330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x283334: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x283334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x283338: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x283338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x28333c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x28333cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x283340: 0xc0a0f48  jal         func_283D20
    ctx->pc = 0x283340u;
    SET_GPR_U32(ctx, 31, 0x283348u);
    ctx->pc = 0x283344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283340u;
    // 0x283344: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283D20u, 0x283340u, 0x283348u)) {
        return;
    }
    ctx->pc = 0x283348u;
label_283348:
    // 0x283348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283348u;
    {
        const bool branch_taken_0x283348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283348u;
        // 0x28334c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283348) {
            ctx->pc = 0x28335Cu;
            goto label_28335c;
        }
    }
    ctx->pc = 0x283350u;
label_283350:
    // 0x283350: 0xc0a0e52  jal         func_283948
    ctx->pc = 0x283350u;
    SET_GPR_U32(ctx, 31, 0x283358u);
    ctx->pc = 0x283948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283948u, 0x283350u, 0x283358u)) {
        return;
    }
    ctx->pc = 0x283358u;
label_283358:
    // 0x283358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28335c:
    // 0x28335c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28335cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283364: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x283364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283368: 0x3e00008  jr          $ra
    ctx->pc = 0x283368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283368u;
        // 0x28336c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283370u;
}
