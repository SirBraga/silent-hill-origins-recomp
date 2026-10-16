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

// Function: sub_0013FB08
// Address: 0x13fb08 - 0x13fb88
void sub_0013FB08_0x13fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB08_0x13fb08");
#endif

    switch (ctx->pc) {
        case 0x13fb30u: goto label_13fb30;
        case 0x13fb54u: goto label_13fb54;
        case 0x13fb6cu: goto label_13fb6c;
        default: break;
    }

    ctx->pc = 0x13fb08u;

    // 0x13fb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13fb0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13fb10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13fb14: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13FB14u;
    {
        const bool branch_taken_0x13fb14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB14u;
        // 0x13fb18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb14) {
            ctx->pc = 0x13FB6Cu;
            goto label_13fb6c;
        }
    }
    ctx->pc = 0x13FB1Cu;
    // 0x13fb1c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13FB1Cu;
    {
        const bool branch_taken_0x13fb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB1Cu;
        // 0x13fb20: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb1c) {
            ctx->pc = 0x13FB5Cu;
            goto label_13fb5c;
        }
    }
    ctx->pc = 0x13FB24u;
    // 0x13fb24: 0x261009b0  addiu       $s0, $s0, 0x9B0
    ctx->pc = 0x13fb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2480));
    // 0x13fb28: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13FB28u;
    SET_GPR_U32(ctx, 31, 0x13FB30u);
    ctx->pc = 0x13FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB28u;
    // 0x13fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13FB28u, 0x13FB30u)) {
        return;
    }
    ctx->pc = 0x13FB30u;
label_13fb30:
    // 0x13fb30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13fb34: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13fb38: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13fb3c: 0xac624828  sw          $v0, 0x4828($v1)
    ctx->pc = 0x13fb3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4828u, _value); } while (0);
    // 0x13fb40: 0x24844830  addiu       $a0, $a0, 0x4830
    ctx->pc = 0x13fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
    // 0x13fb44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb48: 0x24c6fb88  addiu       $a2, $a2, -0x478
    ctx->pc = 0x13fb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966152));
    // 0x13fb4c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13FB4Cu;
    SET_GPR_U32(ctx, 31, 0x13FB54u);
    ctx->pc = 0x13FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB4Cu;
    // 0x13fb50: 0x240700d8  addiu       $a3, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13FB4Cu, 0x13FB54u)) {
        return;
    }
    ctx->pc = 0x13FB54u;
label_13fb54:
    // 0x13fb54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13FB54u;
    {
        const bool branch_taken_0x13fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB54u;
        // 0x13fb58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb54) {
            ctx->pc = 0x13FB70u;
            goto label_13fb70;
        }
    }
    ctx->pc = 0x13FB5Cu;
label_13fb5c:
    // 0x13fb5c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13fb60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13fb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fb64: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13FB64u;
    SET_GPR_U32(ctx, 31, 0x13FB6Cu);
    ctx->pc = 0x13FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB64u;
    // 0x13fb68: 0x24844830  addiu       $a0, $a0, 0x4830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13FB64u, 0x13FB6Cu)) {
        return;
    }
    ctx->pc = 0x13FB6Cu;
label_13fb6c:
    // 0x13fb6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13fb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13fb70:
    // 0x13fb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fb74: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB74u;
        // 0x13fb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB7Cu;
    // 0x13fb7c: 0x0  nop
    ctx->pc = 0x13fb7cu;
    // NOP
    // 0x13fb80: 0x0  nop
    ctx->pc = 0x13fb80u;
    // NOP
    // 0x13fb84: 0x0  nop
    ctx->pc = 0x13fb84u;
    // NOP
    ctx->pc = 0x13fb88u;
}
