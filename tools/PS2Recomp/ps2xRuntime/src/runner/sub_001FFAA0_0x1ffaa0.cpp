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

// Function: sub_001FFAA0
// Address: 0x1ffaa0 - 0x1ffb50
void sub_001FFAA0_0x1ffaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFAA0_0x1ffaa0");
#endif

    switch (ctx->pc) {
        case 0x1ffadcu: goto label_1ffadc;
        case 0x1ffaf0u: goto label_1ffaf0;
        case 0x1ffb04u: goto label_1ffb04;
        case 0x1ffb30u: goto label_1ffb30;
        default: break;
    }

    ctx->pc = 0x1ffaa0u;

    // 0x1ffaa0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ffaa4: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1ffaa8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ffaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ffaac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ffaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ffab0: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1ffab4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ffab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ffab8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1ffab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1ffabc: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1ffac0: 0x8e242cb8  lw          $a0, 0x2CB8($s1)
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x702CB8u));
    // 0x1ffac4: 0x247201e8  addiu       $s2, $v1, 0x1E8
    ctx->pc = 0x1ffac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 488));
    // 0x1ffac8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ffac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ffacc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFACCu;
    {
        const bool branch_taken_0x1ffacc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFACCu;
        // 0x1ffad0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffacc) {
            ctx->pc = 0x1FFAF0u;
            goto label_1ffaf0;
        }
    }
    ctx->pc = 0x1FFAD4u;
    // 0x1ffad4: 0xc08002c  jal         func_2000B0
    ctx->pc = 0x1FFAD4u;
    SET_GPR_U32(ctx, 31, 0x1FFADCu);
    ctx->pc = 0x1FFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAD4u;
    // 0x1ffad8: 0x26042c98  addiu       $a0, $s0, 0x2C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2000B0u, 0x1FFAD4u, 0x1FFADCu)) {
        return;
    }
    ctx->pc = 0x1FFADCu;
label_1ffadc:
    // 0x1ffadc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffae0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1ffae4: 0xae222cb8  sw          $v0, 0x2CB8($s1)
    ctx->pc = 0x1ffae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11448), GPR_U32(ctx, 2));
    // 0x1ffae8: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x1FFAE8u;
    SET_GPR_U32(ctx, 31, 0x1FFAF0u);
    ctx->pc = 0x1FFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAE8u;
    // 0x1ffaec: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x1FFAE8u, 0x1FFAF0u)) {
        return;
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x26112c98  addiu       $s1, $s0, 0x2C98
    ctx->pc = 0x1ffaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
    // 0x1ffaf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ffaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ffaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffafc: 0xc07fed4  jal         func_1FFB50
    ctx->pc = 0x1FFAFCu;
    SET_GPR_U32(ctx, 31, 0x1FFB04u);
    ctx->pc = 0x1FFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAFCu;
    // 0x1ffb00: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFB50u, 0x1FFAFCu, 0x1FFB04u)) {
        return;
    }
    ctx->pc = 0x1FFB04u;
label_1ffb04:
    // 0x1ffb04: 0x8e022c98  lw          $v0, 0x2C98($s0)
    ctx->pc = 0x1ffb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x1ffb08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ffb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffb0c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFB0Cu;
    {
        const bool branch_taken_0x1ffb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB0Cu;
        // 0x1ffb10: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb0c) {
            ctx->pc = 0x1FFB30u;
            goto label_1ffb30;
        }
    }
    ctx->pc = 0x1FFB14u;
    // 0x1ffb14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ffb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffb18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ffb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb1c: 0xafb20034  sw          $s2, 0x34($sp)
    ctx->pc = 0x1ffb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 18));
    // 0x1ffb20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ffb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ffb24: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1ffb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1ffb28: 0xc07ffd2  jal         func_1FFF48
    ctx->pc = 0x1FFB28u;
    SET_GPR_U32(ctx, 31, 0x1FFB30u);
    ctx->pc = 0x1FFB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB28u;
    // 0x1ffb2c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFF48u, 0x1FFB28u, 0x1FFB30u)) {
        return;
    }
    ctx->pc = 0x1FFB30u;
label_1ffb30:
    // 0x1ffb30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ffb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ffb34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ffb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ffb38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ffb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ffb3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ffb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffb40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB40u;
        // 0x1ffb44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFB48u;
    // 0x1ffb48: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ffb4c: 0x0  nop
    ctx->pc = 0x1ffb4cu;
    // NOP
    ctx->pc = 0x1ffb50u;
}
