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

// Function: sub_0030DCD0
// Address: 0x30dcd0 - 0x30dd70
void sub_0030DCD0_0x30dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DCD0_0x30dcd0");
#endif

    switch (ctx->pc) {
        case 0x30dcf8u: goto label_30dcf8;
        case 0x30dd20u: goto label_30dd20;
        case 0x30dd38u: goto label_30dd38;
        case 0x30dd40u: goto label_30dd40;
        default: break;
    }

    ctx->pc = 0x30dcd0u;

    // 0x30dcd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30dcd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30dcd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30dcdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30dcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30dce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30dce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dce8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30dcec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30dcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30dcf0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DCF0u;
    SET_GPR_U32(ctx, 31, 0x30DCF8u);
    ctx->pc = 0x30DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCF0u;
    // 0x30dcf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DCF0u, 0x30DCF8u)) {
        return;
    }
    ctx->pc = 0x30DCF8u;
label_30dcf8:
    // 0x30dcf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30DCF8u;
    {
        const bool branch_taken_0x30dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCF8u;
        // 0x30dcfc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dcf8) {
            ctx->pc = 0x30DD28u;
            goto label_30dd28;
        }
    }
    ctx->pc = 0x30DD00u;
    // 0x30dd00: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x30dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30dd04: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30dd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30dd08: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DD08u;
    {
        const bool branch_taken_0x30dd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD08u;
        // 0x30dd0c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd08) {
            ctx->pc = 0x30DD28u;
            goto label_30dd28;
        }
    }
    ctx->pc = 0x30DD10u;
    // 0x30dd10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DD10u;
    {
        const bool branch_taken_0x30dd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD10u;
        // 0x30dd14: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd10) {
            ctx->pc = 0x30DD28u;
            goto label_30dd28;
        }
    }
    ctx->pc = 0x30DD18u;
    // 0x30dd18: 0xc0c2bee  jal         func_30AFB8
    ctx->pc = 0x30DD18u;
    SET_GPR_U32(ctx, 31, 0x30DD20u);
    ctx->pc = 0x30DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD18u;
    // 0x30dd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AFB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30AFB8u, 0x30DD18u, 0x30DD20u)) {
        return;
    }
    ctx->pc = 0x30DD20u;
label_30dd20:
    // 0x30dd20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DD20u;
    {
        const bool branch_taken_0x30dd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD20u;
        // 0x30dd24: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd20) {
            ctx->pc = 0x30DD30u;
            goto label_30dd30;
        }
    }
    ctx->pc = 0x30DD28u;
label_30dd28:
    // 0x30dd28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30DD28u;
    {
        const bool branch_taken_0x30dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD28u;
        // 0x30dd2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd28) {
            ctx->pc = 0x30DD58u;
            goto label_30dd58;
        }
    }
    ctx->pc = 0x30DD30u;
label_30dd30:
    // 0x30dd30: 0xc0b5820  jal         func_2D6080
    ctx->pc = 0x30DD30u;
    SET_GPR_U32(ctx, 31, 0x30DD38u);
    ctx->pc = 0x30DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD30u;
    // 0x30dd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6080u, 0x30DD30u, 0x30DD38u)) {
        return;
    }
    ctx->pc = 0x30DD38u;
label_30dd38:
    // 0x30dd38: 0xc0b5a3a  jal         func_2D68E8
    ctx->pc = 0x30DD38u;
    SET_GPR_U32(ctx, 31, 0x30DD40u);
    ctx->pc = 0x30DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD38u;
    // 0x30dd3c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D68E8u, 0x30DD38u, 0x30DD40u)) {
        return;
    }
    ctx->pc = 0x30DD40u;
label_30dd40:
    // 0x30dd40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DD40u;
    {
        const bool branch_taken_0x30dd40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD40u;
        // 0x30dd44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd40) {
            ctx->pc = 0x30DD58u;
            goto label_30dd58;
        }
    }
    ctx->pc = 0x30DD48u;
    // 0x30dd48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30dd4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30dd50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30dd54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dd58:
    // 0x30dd58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30dd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dd5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30dd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dd60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30dd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dd64: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD64u;
        // 0x30dd68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DD6Cu;
    // 0x30dd6c: 0x0  nop
    ctx->pc = 0x30dd6cu;
    // NOP
    ctx->pc = 0x30dd70u;
}
