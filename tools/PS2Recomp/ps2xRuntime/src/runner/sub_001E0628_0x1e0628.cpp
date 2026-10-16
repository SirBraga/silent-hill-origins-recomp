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

// Function: sub_001E0628
// Address: 0x1e0628 - 0x1e0708
void sub_001E0628_0x1e0628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0628_0x1e0628");
#endif

    switch (ctx->pc) {
        case 0x1e06acu: goto label_1e06ac;
        case 0x1e06b8u: goto label_1e06b8;
        case 0x1e06e0u: goto label_1e06e0;
        default: break;
    }

    ctx->pc = 0x1e0628u;

    // 0x1e0628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e062c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e0630: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1e0630u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1e0634: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e0634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e0638: 0x8e23e6d4  lw          $v1, -0x192C($s1)
    ctx->pc = 0x1e0638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e063c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e063cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0640: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e0640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e0644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e064c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1e064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e0650: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0654: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e0654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e0658: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e0658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e065c: 0x8e22e6d4  lw          $v0, -0x192C($s1)
    ctx->pc = 0x1e065cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e0660: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1e0660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0664: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e0664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e0668: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e066c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e066cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e0670: 0x8e23e6d4  lw          $v1, -0x192C($s1)
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e0674: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e0678: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e0678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e067c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e0680: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1e0680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1e0684: 0x8e22e6d4  lw          $v0, -0x192C($s1)
    ctx->pc = 0x1e0684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e0688: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e0688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e068c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e068cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e0690: 0x8e23e6d4  lw          $v1, -0x192C($s1)
    ctx->pc = 0x1e0690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e0694: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e0698: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e0698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e069c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E069Cu;
    {
        const bool branch_taken_0x1e069c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E069Cu;
        // 0x1e06a0: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e069c) {
            ctx->pc = 0x1E06E8u;
            goto label_1e06e8;
        }
    }
    ctx->pc = 0x1E06A4u;
    // 0x1e06a4: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x1E06A4u;
    SET_GPR_U32(ctx, 31, 0x1E06ACu);
    ctx->pc = 0x1E06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06A4u;
    // 0x1e06a8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x1E06A4u, 0x1E06ACu)) {
        return;
    }
    ctx->pc = 0x1E06ACu;
label_1e06ac:
    // 0x1e06ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e06acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06b0: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x1E06B0u;
    SET_GPR_U32(ctx, 31, 0x1E06B8u);
    ctx->pc = 0x1E06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06B0u;
    // 0x1e06b4: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x1E06B0u, 0x1E06B8u)) {
        return;
    }
    ctx->pc = 0x1E06B8u;
label_1e06b8:
    // 0x1e06b8: 0x8e23e6d4  lw          $v1, -0x192C($s1)
    ctx->pc = 0x1e06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960852)));
    // 0x1e06bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e06c0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1e06c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1e06c4: 0x8e23e6d4  lw          $v1, -0x192C($s1)
    ctx->pc = 0x1e06c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960852)));
    // 0x1e06c8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1e06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e06cc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e06d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E06D0u;
    {
        const bool branch_taken_0x1e06d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06D0u;
        // 0x1e06d4: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06d0) {
            ctx->pc = 0x1E06ECu;
            goto label_1e06ec;
        }
    }
    ctx->pc = 0x1E06D8u;
    // 0x1e06d8: 0xc09d918  jal         func_276460
    ctx->pc = 0x1E06D8u;
    SET_GPR_U32(ctx, 31, 0x1E06E0u);
    ctx->pc = 0x1E06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06D8u;
    // 0x1e06dc: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x1E06D8u, 0x1E06E0u)) {
        return;
    }
    ctx->pc = 0x1E06E0u;
label_1e06e0:
    // 0x1e06e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E06E0u;
    {
        const bool branch_taken_0x1e06e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E0u;
        // 0x1e06e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e0) {
            ctx->pc = 0x1E06F0u;
            goto label_1e06f0;
        }
    }
    ctx->pc = 0x1E06E8u;
label_1e06e8:
    // 0x1e06e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1e06ec:
    // 0x1e06ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e06ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e06f0:
    // 0x1e06f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e06f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e06f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e06f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e06f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e06f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e06fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e06fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0700: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0700u;
        // 0x1e0704: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0708u;
}
