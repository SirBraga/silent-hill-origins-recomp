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

// Function: sub_0016CF08
// Address: 0x16cf08 - 0x16cfd0
void sub_0016CF08_0x16cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CF08_0x16cf08");
#endif

    switch (ctx->pc) {
        case 0x16cf30u: goto label_16cf30;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf58u: goto label_16cf58;
        case 0x16cf64u: goto label_16cf64;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf98u: goto label_16cf98;
        default: break;
    }

    ctx->pc = 0x16cf08u;

    // 0x16cf08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16cf0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16cf10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16cf18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16cf1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16cf20: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16cf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16cf28: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16CF28u;
    SET_GPR_U32(ctx, 31, 0x16CF30u);
    ctx->pc = 0x16CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF28u;
    // 0x16cf2c: 0x2611004c  addiu       $s1, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16CF28u, 0x16CF30u)) {
        return;
    }
    ctx->pc = 0x16CF30u;
label_16cf30:
    // 0x16cf30: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x16cf30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16cf34: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16cf38: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16cf3c: 0x24424c20  addiu       $v0, $v0, 0x4C20
    ctx->pc = 0x16cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19488));
    // 0x16cf40: 0x24634bd8  addiu       $v1, $v1, 0x4BD8
    ctx->pc = 0x16cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19416));
    // 0x16cf44: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16cf48: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16cf4c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16CF4Cu;
    SET_GPR_U32(ctx, 31, 0x16CF54u);
    ctx->pc = 0x16CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF4Cu;
    // 0x16cf50: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16CF4Cu, 0x16CF54u)) {
        return;
    }
    ctx->pc = 0x16CF54u;
label_16cf54:
    // 0x16cf54: 0x0  nop
    ctx->pc = 0x16cf54u;
    // NOP
label_16cf58:
    // 0x16cf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf5c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16CF5Cu;
    SET_GPR_U32(ctx, 31, 0x16CF64u);
    ctx->pc = 0x16CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF5Cu;
    // 0x16cf60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16CF5Cu, 0x16CF64u)) {
        return;
    }
    ctx->pc = 0x16CF64u;
label_16cf64:
    // 0x16cf64: 0x0  nop
    ctx->pc = 0x16cf64u;
    // NOP
    // 0x16cf68: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16CF68u;
    {
        const bool branch_taken_0x16cf68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x16CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF68u;
        // 0x16cf6c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf68) {
            ctx->pc = 0x16CF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cf58;
        }
    }
    ctx->pc = 0x16CF70u;
    // 0x16cf70: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x16cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x16cf74: 0x260400b8  addiu       $a0, $s0, 0xB8
    ctx->pc = 0x16cf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x16cf78: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x16cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x16cf7c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x16cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x16cf80: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x16cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x16cf84: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x16cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x16cf88: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16CF88u;
    SET_GPR_U32(ctx, 31, 0x16CF90u);
    ctx->pc = 0x16CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF88u;
    // 0x16cf8c: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16CF88u, 0x16CF90u)) {
        return;
    }
    ctx->pc = 0x16CF90u;
label_16cf90:
    // 0x16cf90: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16CF90u;
    SET_GPR_U32(ctx, 31, 0x16CF98u);
    ctx->pc = 0x16CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF90u;
    // 0x16cf94: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16CF90u, 0x16CF98u)) {
        return;
    }
    ctx->pc = 0x16CF98u;
label_16cf98:
    // 0x16cf98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cf9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16cf9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfa0: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x16cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x16cfa4: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x16cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x16cfa8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x16cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x16cfac: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x16cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x16cfb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16cfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cfb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16cfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cfb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16cfb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cfbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16cfbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x16CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFC4u;
        // 0x16cfc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CFCCu;
    // 0x16cfcc: 0x0  nop
    ctx->pc = 0x16cfccu;
    // NOP
    ctx->pc = 0x16cfd0u;
}
