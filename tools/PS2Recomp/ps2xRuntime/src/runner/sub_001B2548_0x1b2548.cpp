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

// Function: sub_001B2548
// Address: 0x1b2548 - 0x1b25f0
void sub_001B2548_0x1b2548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2548_0x1b2548");
#endif

    switch (ctx->pc) {
        case 0x1b2574u: goto label_1b2574;
        case 0x1b2590u: goto label_1b2590;
        default: break;
    }

    ctx->pc = 0x1b2548u;

    // 0x1b2548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b254c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b2550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2554: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2558: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b255c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b255cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2560: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b2564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2568: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b256c: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1B256Cu;
    SET_GPR_U32(ctx, 31, 0x1B2574u);
    ctx->pc = 0x1B2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B256Cu;
    // 0x1b2570: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B256Cu, 0x1B2574u)) {
        return;
    }
    ctx->pc = 0x1B2574u;
label_1b2574:
    // 0x1b2574: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2574u;
    {
        const bool branch_taken_0x1b2574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2574) {
            ctx->pc = 0x1B2578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2574u;
            // 0x1b2578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B25CCu;
            goto label_1b25cc;
        }
    }
    ctx->pc = 0x1B257Cu;
    // 0x1b257c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B257Cu;
    {
        const bool branch_taken_0x1b257c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b257c) {
            ctx->pc = 0x1B2580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B257Cu;
            // 0x1b2580: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B25CCu;
            goto label_1b25cc;
        }
    }
    ctx->pc = 0x1B2584u;
    // 0x1b2584: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b2588: 0xc080858  jal         func_202160
    ctx->pc = 0x1B2588u;
    SET_GPR_U32(ctx, 31, 0x1B2590u);
    ctx->pc = 0x1B258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2588u;
    // 0x1b258c: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1B2588u, 0x1B2590u)) {
        return;
    }
    ctx->pc = 0x1B2590u;
label_1b2590:
    // 0x1b2590: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2594: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1b2594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1b2598: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b2598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b259c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b259cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b25a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1b25a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b25a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B25A8u;
    {
        const bool branch_taken_0x1b25a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a8) {
            ctx->pc = 0x1B25ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B25A8u;
            // 0x1b25ac: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B25B0u;
            goto label_1b25b0;
        }
    }
    ctx->pc = 0x1B25B0u;
label_1b25b0:
    // 0x1b25b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b25b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B25B4u;
    {
        const bool branch_taken_0x1b25b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25b4) {
            ctx->pc = 0x1B25B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B25B4u;
            // 0x1b25b8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B25BCu;
            goto label_1b25bc;
        }
    }
    ctx->pc = 0x1B25BCu;
label_1b25bc:
    // 0x1b25bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b25c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b25c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b25c8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1b25cc:
    // 0x1b25cc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b25ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b25d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b25d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b25d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b25d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b25d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b25dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b25dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b25e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b25e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b25e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B25E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25E4u;
        // 0x1b25e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B25E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B25ECu;
    // 0x1b25ec: 0x0  nop
    ctx->pc = 0x1b25ecu;
    // NOP
    ctx->pc = 0x1b25f0u;
}
