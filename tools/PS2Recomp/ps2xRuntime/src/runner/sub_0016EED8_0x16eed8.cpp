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

// Function: sub_0016EED8
// Address: 0x16eed8 - 0x16ef50
void sub_0016EED8_0x16eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EED8_0x16eed8");
#endif

    switch (ctx->pc) {
        case 0x16ef00u: goto label_16ef00;
        case 0x16ef24u: goto label_16ef24;
        case 0x16ef3cu: goto label_16ef3c;
        default: break;
    }

    ctx->pc = 0x16eed8u;

    // 0x16eed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16eedc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16eee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16eee4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16EEE4u;
    {
        const bool branch_taken_0x16eee4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEE4u;
        // 0x16eee8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eee4) {
            ctx->pc = 0x16EF3Cu;
            goto label_16ef3c;
        }
    }
    ctx->pc = 0x16EEECu;
    // 0x16eeec: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16EEECu;
    {
        const bool branch_taken_0x16eeec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEECu;
        // 0x16eef0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eeec) {
            ctx->pc = 0x16EF2Cu;
            goto label_16ef2c;
        }
    }
    ctx->pc = 0x16EEF4u;
    // 0x16eef4: 0x26105088  addiu       $s0, $s0, 0x5088
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20616));
    // 0x16eef8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16EEF8u;
    SET_GPR_U32(ctx, 31, 0x16EF00u);
    ctx->pc = 0x16EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EEF8u;
    // 0x16eefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16EEF8u, 0x16EF00u)) {
        return;
    }
    ctx->pc = 0x16EF00u;
label_16ef00:
    // 0x16ef00: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16ef04: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ef08: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16ef08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16ef0c: 0xac62f6f8  sw          $v0, -0x908($v1)
    ctx->pc = 0x16ef0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF6F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF6F8u, _value); } while (0);
    // 0x16ef10: 0x2484f700  addiu       $a0, $a0, -0x900
    ctx->pc = 0x16ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
    // 0x16ef14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef18: 0x24c6ef50  addiu       $a2, $a2, -0x10B0
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963024));
    // 0x16ef1c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16EF1Cu;
    SET_GPR_U32(ctx, 31, 0x16EF24u);
    ctx->pc = 0x16EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF1Cu;
    // 0x16ef20: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16EF1Cu, 0x16EF24u)) {
        return;
    }
    ctx->pc = 0x16EF24u;
label_16ef24:
    // 0x16ef24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16EF24u;
    {
        const bool branch_taken_0x16ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF24u;
        // 0x16ef28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef24) {
            ctx->pc = 0x16EF40u;
            goto label_16ef40;
        }
    }
    ctx->pc = 0x16EF2Cu;
label_16ef2c:
    // 0x16ef2c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ef30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ef34: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16EF34u;
    SET_GPR_U32(ctx, 31, 0x16EF3Cu);
    ctx->pc = 0x16EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF34u;
    // 0x16ef38: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16EF34u, 0x16EF3Cu)) {
        return;
    }
    ctx->pc = 0x16EF3Cu;
label_16ef3c:
    // 0x16ef3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ef3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ef40:
    // 0x16ef40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ef40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef44: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF44u;
        // 0x16ef48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EF4Cu;
    // 0x16ef4c: 0x0  nop
    ctx->pc = 0x16ef4cu;
    // NOP
    ctx->pc = 0x16ef50u;
}
