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

// Function: sub_001E3338
// Address: 0x1e3338 - 0x1e33f8
void sub_001E3338_0x1e3338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3338_0x1e3338");
#endif

    switch (ctx->pc) {
        case 0x1e3378u: goto label_1e3378;
        case 0x1e3394u: goto label_1e3394;
        case 0x1e33a8u: goto label_1e33a8;
        default: break;
    }

    ctx->pc = 0x1e3338u;

    // 0x1e3338: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e333c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e3340: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1e3344: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3348: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e3348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1e334c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e334cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3350: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e3350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e3354: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e3354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3358: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e3358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e335c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e3360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3364: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1e3364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e3368: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E3368u;
    {
        const bool branch_taken_0x1e3368 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3368u;
        // 0x1e336c: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3368) {
            ctx->pc = 0x1E33CCu;
            goto label_1e33cc;
        }
    }
    ctx->pc = 0x1E3370u;
    // 0x1e3370: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x1e3370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e3374: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1e3374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3378:
    // 0x1e3378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e337c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3384: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1e3384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e3388: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1e3388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e338c: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1E338Cu;
    SET_GPR_U32(ctx, 31, 0x1E3394u);
    ctx->pc = 0x1E3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E338Cu;
    // 0x1e3390: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1E338Cu, 0x1E3394u)) {
        return;
    }
    ctx->pc = 0x1E3394u;
label_1e3394:
    // 0x1e3394: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3394u;
    {
        const bool branch_taken_0x1e3394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3394u;
        // 0x1e3398: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3394) {
            ctx->pc = 0x1E33B0u;
            goto label_1e33b0;
        }
    }
    ctx->pc = 0x1E339Cu;
    // 0x1e339c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e339cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33a0: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E33A0u;
    SET_GPR_U32(ctx, 31, 0x1E33A8u);
    ctx->pc = 0x1E33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E33A0u;
    // 0x1e33a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E33A0u, 0x1E33A8u)) {
        return;
    }
    ctx->pc = 0x1E33A8u;
label_1e33a8:
    // 0x1e33a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E33A8u;
    {
        const bool branch_taken_0x1e33a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e33a8) {
            ctx->pc = 0x1E33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E33A8u;
            // 0x1e33ac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E33B8u;
            goto label_1e33b8;
        }
    }
    ctx->pc = 0x1E33B0u;
label_1e33b0:
    // 0x1e33b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E33B0u;
    {
        const bool branch_taken_0x1e33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33B0u;
        // 0x1e33b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33b0) {
            ctx->pc = 0x1E33D0u;
            goto label_1e33d0;
        }
    }
    ctx->pc = 0x1E33B8u;
label_1e33b8:
    // 0x1e33b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e33b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e33bc: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1e33bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e33c0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1e33c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e33c4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E33C4u;
    {
        const bool branch_taken_0x1e33c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E33C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33C4u;
        // 0x1e33c8: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33c4) {
            ctx->pc = 0x1E3378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3378;
        }
    }
    ctx->pc = 0x1E33CCu;
label_1e33cc:
    // 0x1e33cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e33d0:
    // 0x1e33d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e33d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e33d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e33d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e33d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e33d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e33dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e33dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e33e0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e33e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e33e4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e33e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e33e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e33e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e33ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E33ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33ECu;
        // 0x1e33f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E33F4u;
    // 0x1e33f4: 0x0  nop
    ctx->pc = 0x1e33f4u;
    // NOP
    ctx->pc = 0x1e33f8u;
}
