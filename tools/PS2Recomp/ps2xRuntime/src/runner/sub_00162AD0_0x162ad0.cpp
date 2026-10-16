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

// Function: sub_00162AD0
// Address: 0x162ad0 - 0x162b48
void sub_00162AD0_0x162ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162AD0_0x162ad0");
#endif

    switch (ctx->pc) {
        case 0x162af8u: goto label_162af8;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b34u: goto label_162b34;
        default: break;
    }

    ctx->pc = 0x162ad0u;

    // 0x162ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162ad4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x162ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x162ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x162adc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x162ADCu;
    {
        const bool branch_taken_0x162adc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x162AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ADCu;
        // 0x162ae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162adc) {
            ctx->pc = 0x162B34u;
            goto label_162b34;
        }
    }
    ctx->pc = 0x162AE4u;
    // 0x162ae4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x162AE4u;
    {
        const bool branch_taken_0x162ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x162AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AE4u;
        // 0x162ae8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ae4) {
            ctx->pc = 0x162B24u;
            goto label_162b24;
        }
    }
    ctx->pc = 0x162AECu;
    // 0x162aec: 0x26103c10  addiu       $s0, $s0, 0x3C10
    ctx->pc = 0x162aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15376));
    // 0x162af0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x162AF0u;
    SET_GPR_U32(ctx, 31, 0x162AF8u);
    ctx->pc = 0x162AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AF0u;
    // 0x162af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x162AF0u, 0x162AF8u)) {
        return;
    }
    ctx->pc = 0x162AF8u;
label_162af8:
    // 0x162af8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x162afc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x162afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x162b00: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x162b04: 0xac62f5c8  sw          $v0, -0xA38($v1)
    ctx->pc = 0x162b04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF5C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF5C8u, _value); } while (0);
    // 0x162b08: 0x2484f5d0  addiu       $a0, $a0, -0xA30
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
    // 0x162b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b10: 0x24c62b48  addiu       $a2, $a2, 0x2B48
    ctx->pc = 0x162b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11080));
    // 0x162b14: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x162B14u;
    SET_GPR_U32(ctx, 31, 0x162B1Cu);
    ctx->pc = 0x162B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B14u;
    // 0x162b18: 0x24071dac  addiu       $a3, $zero, 0x1DAC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x162B14u, 0x162B1Cu)) {
        return;
    }
    ctx->pc = 0x162B1Cu;
label_162b1c:
    // 0x162b1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162B1Cu;
    {
        const bool branch_taken_0x162b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B1Cu;
        // 0x162b20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b1c) {
            ctx->pc = 0x162B38u;
            goto label_162b38;
        }
    }
    ctx->pc = 0x162B24u;
label_162b24:
    // 0x162b24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x162b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x162b28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162b2c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x162B2Cu;
    SET_GPR_U32(ctx, 31, 0x162B34u);
    ctx->pc = 0x162B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B2Cu;
    // 0x162b30: 0x2484f5d0  addiu       $a0, $a0, -0xA30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x162B2Cu, 0x162B34u)) {
        return;
    }
    ctx->pc = 0x162B34u;
label_162b34:
    // 0x162b34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_162b38:
    // 0x162b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x162B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B3Cu;
        // 0x162b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162B44u;
    // 0x162b44: 0x0  nop
    ctx->pc = 0x162b44u;
    // NOP
    ctx->pc = 0x162b48u;
}
