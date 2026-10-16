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

// Function: sub_00173A90
// Address: 0x173a90 - 0x173b08
void sub_00173A90_0x173a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173A90_0x173a90");
#endif

    switch (ctx->pc) {
        case 0x173ab8u: goto label_173ab8;
        case 0x173adcu: goto label_173adc;
        case 0x173af4u: goto label_173af4;
        default: break;
    }

    ctx->pc = 0x173a90u;

    // 0x173a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173a94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x173a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x173a98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173a9c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x173A9Cu;
    {
        const bool branch_taken_0x173a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x173AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A9Cu;
        // 0x173aa0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a9c) {
            ctx->pc = 0x173AF4u;
            goto label_173af4;
        }
    }
    ctx->pc = 0x173AA4u;
    // 0x173aa4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x173AA4u;
    {
        const bool branch_taken_0x173aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AA4u;
        // 0x173aa8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173aa4) {
            ctx->pc = 0x173AE4u;
            goto label_173ae4;
        }
    }
    ctx->pc = 0x173AACu;
    // 0x173aac: 0x26105d10  addiu       $s0, $s0, 0x5D10
    ctx->pc = 0x173aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23824));
    // 0x173ab0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x173AB0u;
    SET_GPR_U32(ctx, 31, 0x173AB8u);
    ctx->pc = 0x173AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AB0u;
    // 0x173ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x173AB0u, 0x173AB8u)) {
        return;
    }
    ctx->pc = 0x173AB8u;
label_173ab8:
    // 0x173ab8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x173ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x173abc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x173abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x173ac0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x173ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x173ac4: 0xac62f7c0  sw          $v0, -0x840($v1)
    ctx->pc = 0x173ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF7C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF7C0u, _value); } while (0);
    // 0x173ac8: 0x2484f7c8  addiu       $a0, $a0, -0x838
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965192));
    // 0x173acc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ad0: 0x24c63b08  addiu       $a2, $a2, 0x3B08
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15112));
    // 0x173ad4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x173AD4u;
    SET_GPR_U32(ctx, 31, 0x173ADCu);
    ctx->pc = 0x173AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AD4u;
    // 0x173ad8: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x173AD4u, 0x173ADCu)) {
        return;
    }
    ctx->pc = 0x173ADCu;
label_173adc:
    // 0x173adc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173ADCu;
    {
        const bool branch_taken_0x173adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ADCu;
        // 0x173ae0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173adc) {
            ctx->pc = 0x173AF8u;
            goto label_173af8;
        }
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x173ae8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173aec: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x173AECu;
    SET_GPR_U32(ctx, 31, 0x173AF4u);
    ctx->pc = 0x173AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AECu;
    // 0x173af0: 0x2484f7c8  addiu       $a0, $a0, -0x838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x173AECu, 0x173AF4u)) {
        return;
    }
    ctx->pc = 0x173AF4u;
label_173af4:
    // 0x173af4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173af8:
    // 0x173af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173afc: 0x3e00008  jr          $ra
    ctx->pc = 0x173AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AFCu;
        // 0x173b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173B04u;
    // 0x173b04: 0x0  nop
    ctx->pc = 0x173b04u;
    // NOP
    ctx->pc = 0x173b08u;
}
