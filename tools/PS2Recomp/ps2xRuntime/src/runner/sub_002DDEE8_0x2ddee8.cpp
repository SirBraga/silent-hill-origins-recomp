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

// Function: sub_002DDEE8
// Address: 0x2ddee8 - 0x2ddfc8
void sub_002DDEE8_0x2ddee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDEE8_0x2ddee8");
#endif

    switch (ctx->pc) {
        case 0x2ddf18u: goto label_2ddf18;
        case 0x2ddf3cu: goto label_2ddf3c;
        case 0x2ddf74u: goto label_2ddf74;
        default: break;
    }

    ctx->pc = 0x2ddee8u;

    // 0x2ddee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddeec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ddeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ddef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddef4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ddef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddefc: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DDEFCu;
    {
        const bool branch_taken_0x2ddefc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEFCu;
        // 0x2ddf00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddefc) {
            ctx->pc = 0x2DDF30u;
            goto label_2ddf30;
        }
    }
    ctx->pc = 0x2DDF04u;
    // 0x2ddf04: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2ddf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2ddf08: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ddf08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2ddf0c: 0x24848040  addiu       $a0, $a0, -0x7FC0
    ctx->pc = 0x2ddf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    // 0x2ddf10: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2DDF10u;
    SET_GPR_U32(ctx, 31, 0x2DDF18u);
    ctx->pc = 0x2DDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF10u;
    // 0x2ddf14: 0x34a50805  ori         $a1, $a1, 0x805 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2053);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DDF10u, 0x2DDF18u)) {
        return;
    }
    ctx->pc = 0x2DDF18u;
label_2ddf18:
    // 0x2ddf18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf1c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DDF1Cu;
    {
        const bool branch_taken_0x2ddf1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF1Cu;
        // 0x2ddf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf1c) {
            ctx->pc = 0x2DDFB0u;
            goto label_2ddfb0;
        }
    }
    ctx->pc = 0x2DDF24u;
    // 0x2ddf24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ddf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ddf28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDF28u;
    {
        const bool branch_taken_0x2ddf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF28u;
        // 0x2ddf2c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf28) {
            ctx->pc = 0x2DDF34u;
            goto label_2ddf34;
        }
    }
    ctx->pc = 0x2DDF30u;
label_2ddf30:
    // 0x2ddf30: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2ddf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2ddf34:
    // 0x2ddf34: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2DDF34u;
    SET_GPR_U32(ctx, 31, 0x2DDF3Cu);
    ctx->pc = 0x2DDF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF34u;
    // 0x2ddf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2DDF34u, 0x2DDF3Cu)) {
        return;
    }
    ctx->pc = 0x2DDF3Cu;
label_2ddf3c:
    // 0x2ddf3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2ddf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2ddf40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2ddf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2ddf44: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2ddf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2ddf48: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2ddf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2ddf4c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2ddf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2ddf50: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2ddf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2ddf54: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2ddf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2ddf58: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2ddf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ddf5c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2ddf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2ddf60: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2ddf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2ddf64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ddf64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ddf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf6c: 0xc0b7830  jal         func_2DE0C0
    ctx->pc = 0x2DDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDF74u);
    ctx->pc = 0x2DDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF6Cu;
    // 0x2ddf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE0C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE0C0u, 0x2DDF6Cu, 0x2DDF74u)) {
        return;
    }
    ctx->pc = 0x2DDF74u;
label_2ddf74:
    // 0x2ddf74: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x2ddf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2ddf78: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x2ddf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2ddf7c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2ddf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2ddf80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ddf80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf84: 0x71880a  movz        $s1, $v1, $s1
    ctx->pc = 0x2ddf84u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
    // 0x2ddf88: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2ddf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2ddf8c: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x2ddf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x2ddf90: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2ddf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2ddf94: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2ddf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ddf98: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2ddf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x2ddf9c: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x2ddf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x2ddfa0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2ddfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ddfa4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2ddfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2ddfa8: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x2ddfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x2ddfac: 0x0  nop
    ctx->pc = 0x2ddfacu;
    // NOP
label_2ddfb0:
    // 0x2ddfb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ddfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddfb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFBCu;
        // 0x2ddfc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDFC4u;
    // 0x2ddfc4: 0x0  nop
    ctx->pc = 0x2ddfc4u;
    // NOP
    ctx->pc = 0x2ddfc8u;
}
