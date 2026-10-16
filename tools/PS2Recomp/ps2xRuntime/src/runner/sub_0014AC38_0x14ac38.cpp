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

// Function: sub_0014AC38
// Address: 0x14ac38 - 0x14ad08
void sub_0014AC38_0x14ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AC38_0x14ac38");
#endif

    switch (ctx->pc) {
        case 0x14ac60u: goto label_14ac60;
        case 0x14ac6cu: goto label_14ac6c;
        case 0x14ac78u: goto label_14ac78;
        case 0x14ac90u: goto label_14ac90;
        case 0x14acb4u: goto label_14acb4;
        case 0x14acc8u: goto label_14acc8;
        case 0x14acd8u: goto label_14acd8;
        case 0x14ace8u: goto label_14ace8;
        case 0x14acf8u: goto label_14acf8;
        default: break;
    }

    ctx->pc = 0x14ac38u;

    // 0x14ac38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ac3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14ac40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ac44: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14AC44u;
    {
        const bool branch_taken_0x14ac44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC44u;
        // 0x14ac48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac44) {
            ctx->pc = 0x14ACF8u;
            goto label_14acf8;
        }
    }
    ctx->pc = 0x14AC4Cu;
    // 0x14ac4c: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x14AC4Cu;
    {
        const bool branch_taken_0x14ac4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac4c) {
            ctx->pc = 0x14AC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AC4Cu;
            // 0x14ac50: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ACBCu;
            goto label_14acbc;
        }
    }
    ctx->pc = 0x14AC54u;
    // 0x14ac54: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14ac58: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14AC58u;
    SET_GPR_U32(ctx, 31, 0x14AC60u);
    ctx->pc = 0x14AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC58u;
    // 0x14ac5c: 0x2484eed0  addiu       $a0, $a0, -0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14AC58u, 0x14AC60u)) {
        return;
    }
    ctx->pc = 0x14AC60u;
label_14ac60:
    // 0x14ac60: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14ac64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14AC64u;
    SET_GPR_U32(ctx, 31, 0x14AC6Cu);
    ctx->pc = 0x14AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC64u;
    // 0x14ac68: 0x2484eed8  addiu       $a0, $a0, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14AC64u, 0x14AC6Cu)) {
        return;
    }
    ctx->pc = 0x14AC6Cu;
label_14ac6c:
    // 0x14ac6c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14ac70: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14AC70u;
    SET_GPR_U32(ctx, 31, 0x14AC78u);
    ctx->pc = 0x14AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC70u;
    // 0x14ac74: 0x2484eee0  addiu       $a0, $a0, -0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14AC70u, 0x14AC78u)) {
        return;
    }
    ctx->pc = 0x14AC78u;
label_14ac78:
    // 0x14ac78: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x14ac78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x14ac7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ac80: 0x26101c70  addiu       $s0, $s0, 0x1C70
    ctx->pc = 0x14ac80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7280));
    // 0x14ac84: 0xac40ef30  sw          $zero, -0x10D0($v0)
    ctx->pc = 0x14ac84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BEF30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEF30u, _value); } while (0);
    // 0x14ac88: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x14AC88u;
    SET_GPR_U32(ctx, 31, 0x14AC90u);
    ctx->pc = 0x14AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC88u;
    // 0x14ac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x14AC88u, 0x14AC90u)) {
        return;
    }
    ctx->pc = 0x14AC90u;
label_14ac90:
    // 0x14ac90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14ac94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14ac98: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14ac9c: 0xac62ef40  sw          $v0, -0x10C0($v1)
    ctx->pc = 0x14ac9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEF40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEF40u, _value); } while (0);
    // 0x14aca0: 0x2484ef48  addiu       $a0, $a0, -0x10B8
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963016));
    // 0x14aca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aca8: 0x24c6ad08  addiu       $a2, $a2, -0x52F8
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946056));
    // 0x14acac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x14ACACu;
    SET_GPR_U32(ctx, 31, 0x14ACB4u);
    ctx->pc = 0x14ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACACu;
    // 0x14acb0: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x14ACACu, 0x14ACB4u)) {
        return;
    }
    ctx->pc = 0x14ACB4u;
label_14acb4:
    // 0x14acb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14ACB4u;
    {
        const bool branch_taken_0x14acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACB4u;
        // 0x14acb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acb4) {
            ctx->pc = 0x14ACFCu;
            goto label_14acfc;
        }
    }
    ctx->pc = 0x14ACBCu;
label_14acbc:
    // 0x14acbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14acbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14acc0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x14ACC0u;
    SET_GPR_U32(ctx, 31, 0x14ACC8u);
    ctx->pc = 0x14ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACC0u;
    // 0x14acc4: 0x2484ef48  addiu       $a0, $a0, -0x10B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x14ACC0u, 0x14ACC8u)) {
        return;
    }
    ctx->pc = 0x14ACC8u;
label_14acc8:
    // 0x14acc8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14accc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14acd0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14ACD0u;
    SET_GPR_U32(ctx, 31, 0x14ACD8u);
    ctx->pc = 0x14ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACD0u;
    // 0x14acd4: 0x2484eee0  addiu       $a0, $a0, -0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14ACD0u, 0x14ACD8u)) {
        return;
    }
    ctx->pc = 0x14ACD8u;
label_14acd8:
    // 0x14acd8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14acdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14acdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ace0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14ACE0u;
    SET_GPR_U32(ctx, 31, 0x14ACE8u);
    ctx->pc = 0x14ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACE0u;
    // 0x14ace4: 0x2484eed8  addiu       $a0, $a0, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14ACE0u, 0x14ACE8u)) {
        return;
    }
    ctx->pc = 0x14ACE8u;
label_14ace8:
    // 0x14ace8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14acec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14acf0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14ACF0u;
    SET_GPR_U32(ctx, 31, 0x14ACF8u);
    ctx->pc = 0x14ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACF0u;
    // 0x14acf4: 0x2484eed0  addiu       $a0, $a0, -0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14ACF0u, 0x14ACF8u)) {
        return;
    }
    ctx->pc = 0x14ACF8u;
label_14acf8:
    // 0x14acf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14acf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14acfc:
    // 0x14acfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad00: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD00u;
        // 0x14ad04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD08u;
}
