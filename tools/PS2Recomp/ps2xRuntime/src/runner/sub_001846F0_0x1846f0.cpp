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

// Function: sub_001846F0
// Address: 0x1846f0 - 0x184778
void sub_001846F0_0x1846f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001846F0_0x1846f0");
#endif

    switch (ctx->pc) {
        case 0x184754u: goto label_184754;
        case 0x184760u: goto label_184760;
        default: break;
    }

    ctx->pc = 0x1846f0u;

    // 0x1846f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1846f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1846f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1846f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1846f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1846f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1846fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x184700: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x184700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x184704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184708: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x184708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x18470c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x18470cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x184710: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x184710u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x184714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18471c: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x184720: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x184720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
    // 0x184724: 0x24c68130  addiu       $a2, $a2, -0x7ED0
    ctx->pc = 0x184724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934832));
    // 0x184728: 0x24e78118  addiu       $a3, $a3, -0x7EE8
    ctx->pc = 0x184728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934808));
    // 0x18472c: 0x250882b0  addiu       $t0, $t0, -0x7D50
    ctx->pc = 0x18472cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935216));
    // 0x184730: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x184730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x184734: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x184734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x184738: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x184738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x18473c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x18473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x184740: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x184740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
    // 0x184744: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x184744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x184748: 0xae070314  sw          $a3, 0x314($s0)
    ctx->pc = 0x184748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 7));
    // 0x18474c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18474Cu;
    SET_GPR_U32(ctx, 31, 0x184754u);
    ctx->pc = 0x184750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18474Cu;
    // 0x184750: 0xae080034  sw          $t0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18474Cu, 0x184754u)) {
        return;
    }
    ctx->pc = 0x184754u;
label_184754:
    // 0x184754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184758: 0xc047fcc  jal         func_11FF30
    ctx->pc = 0x184758u;
    SET_GPR_U32(ctx, 31, 0x184760u);
    ctx->pc = 0x18475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184758u;
    // 0x18475c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11FF30u, 0x184758u, 0x184760u)) {
        return;
    }
    ctx->pc = 0x184760u;
label_184760:
    // 0x184760: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x184760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18476c: 0x3e00008  jr          $ra
    ctx->pc = 0x18476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18476Cu;
        // 0x184770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184774u;
    // 0x184774: 0x0  nop
    ctx->pc = 0x184774u;
    // NOP
    ctx->pc = 0x184778u;
}
