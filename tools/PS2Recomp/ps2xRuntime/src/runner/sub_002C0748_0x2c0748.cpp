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

// Function: sub_002C0748
// Address: 0x2c0748 - 0x2c0880
void sub_002C0748_0x2c0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0748_0x2c0748");
#endif

    ctx->pc = 0x2c0748u;

    // 0x2c0748: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c074c: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x2c074cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0750: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c0754: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x2c0754u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c0758: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2c0758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c075c: 0x8c880020  lw          $t0, 0x20($a0)
    ctx->pc = 0x2c075cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c0760: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x2c0760u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c0764: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x2c0764u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c0768: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x2c0768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2c076c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2c076cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c0770: 0x97940  sll         $t7, $t1, 5
    ctx->pc = 0x2c0770u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2c0774: 0x86080  sll         $t4, $t0, 2
    ctx->pc = 0x2c0774u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2c0778: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2c0778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c077c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c0780: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x2c0780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c0784: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x2c0784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2c0788: 0x258c000f  addiu       $t4, $t4, 0xF
    ctx->pc = 0x2c0788u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15));
    // 0x2c078c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c0790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0794: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0798: 0x18a6024  and         $t4, $t4, $t2
    ctx->pc = 0x2c0798u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x2c079c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c07a0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x2c07a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2c07a4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2c07a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c07a8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c07ac: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2c07acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2c07b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c07b4: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x2c07b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x2c07b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c07bc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2c07bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2c07c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c07c4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2c07c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2c07c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c07cc: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x2c07ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x2c07d0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2c07d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2c07d4: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C07D4u;
    {
        const bool branch_taken_0x2c07d4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c07d4) {
            ctx->pc = 0x2C07D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C07D4u;
            // 0x2c07d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C07DCu;
            goto label_2c07dc;
        }
    }
    ctx->pc = 0x2C07DCu;
label_2c07dc:
    // 0x2c07dc: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2c07dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c07e0: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x2c07e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x2c07e4: 0x5812  mflo        $t3
    ctx->pc = 0x2c07e4u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x2c07e8: 0x12d4818  mult        $t1, $t1, $t5
    ctx->pc = 0x2c07e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2c07ec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x2c07ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2c07f0: 0x256b000f  addiu       $t3, $t3, 0xF
    ctx->pc = 0x2c07f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x2c07f4: 0x16a5824  and         $t3, $t3, $t2
    ctx->pc = 0x2c07f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x2c07f8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2c07f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c07fc: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2c07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2c0800: 0x6a4824  and         $t1, $v1, $t2
    ctx->pc = 0x2c0800u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2c0804: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c0804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0808: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x2c0808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x2c080c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2c080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2c0810: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0814: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c0814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c0818: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2c0818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2c081c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2c081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2c0820: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c0820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c0824: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0828: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c082c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0830: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0834: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0838: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c083c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0840: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0844: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0848: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c084c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0854: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2c0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c0858: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2c0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c085c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c0860: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c0860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0864: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c0864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0868: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c086c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0870: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c0874: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0874u;
        // 0x2c0878: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C087Cu;
    // 0x2c087c: 0x0  nop
    ctx->pc = 0x2c087cu;
    // NOP
    ctx->pc = 0x2c0880u;
}
