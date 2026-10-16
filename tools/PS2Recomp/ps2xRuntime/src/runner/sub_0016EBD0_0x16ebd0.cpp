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

// Function: sub_0016EBD0
// Address: 0x16ebd0 - 0x16ec50
void sub_0016EBD0_0x16ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EBD0_0x16ebd0");
#endif

    switch (ctx->pc) {
        case 0x16ebf8u: goto label_16ebf8;
        case 0x16ec1cu: goto label_16ec1c;
        case 0x16ec34u: goto label_16ec34;
        default: break;
    }

    ctx->pc = 0x16ebd0u;

    // 0x16ebd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ebd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16ebd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ebdc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16EBDCu;
    {
        const bool branch_taken_0x16ebdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBDCu;
        // 0x16ebe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebdc) {
            ctx->pc = 0x16EC34u;
            goto label_16ec34;
        }
    }
    ctx->pc = 0x16EBE4u;
    // 0x16ebe4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16EBE4u;
    {
        const bool branch_taken_0x16ebe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBE4u;
        // 0x16ebe8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebe4) {
            ctx->pc = 0x16EC24u;
            goto label_16ec24;
        }
    }
    ctx->pc = 0x16EBECu;
    // 0x16ebec: 0x26104fe0  addiu       $s0, $s0, 0x4FE0
    ctx->pc = 0x16ebecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20448));
    // 0x16ebf0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16EBF0u;
    SET_GPR_U32(ctx, 31, 0x16EBF8u);
    ctx->pc = 0x16EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EBF0u;
    // 0x16ebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16EBF0u, 0x16EBF8u)) {
        return;
    }
    ctx->pc = 0x16EBF8u;
label_16ebf8:
    // 0x16ebf8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16ebfc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ec00: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16ec04: 0xac62f6e8  sw          $v0, -0x918($v1)
    ctx->pc = 0x16ec04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF6E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF6E8u, _value); } while (0);
    // 0x16ec08: 0x2484f6f0  addiu       $a0, $a0, -0x910
    ctx->pc = 0x16ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964976));
    // 0x16ec0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec10: 0x24c6ec50  addiu       $a2, $a2, -0x13B0
    ctx->pc = 0x16ec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962256));
    // 0x16ec14: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16EC14u;
    SET_GPR_U32(ctx, 31, 0x16EC1Cu);
    ctx->pc = 0x16EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC14u;
    // 0x16ec18: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16EC14u, 0x16EC1Cu)) {
        return;
    }
    ctx->pc = 0x16EC1Cu;
label_16ec1c:
    // 0x16ec1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16EC1Cu;
    {
        const bool branch_taken_0x16ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC1Cu;
        // 0x16ec20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec1c) {
            ctx->pc = 0x16EC38u;
            goto label_16ec38;
        }
    }
    ctx->pc = 0x16EC24u;
label_16ec24:
    // 0x16ec24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ec28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ec2c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16EC2Cu;
    SET_GPR_U32(ctx, 31, 0x16EC34u);
    ctx->pc = 0x16EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC2Cu;
    // 0x16ec30: 0x2484f6f0  addiu       $a0, $a0, -0x910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16EC2Cu, 0x16EC34u)) {
        return;
    }
    ctx->pc = 0x16EC34u;
label_16ec34:
    // 0x16ec34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ec34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ec38:
    // 0x16ec38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ec38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC3Cu;
        // 0x16ec40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EC44u;
    // 0x16ec44: 0x0  nop
    ctx->pc = 0x16ec44u;
    // NOP
    // 0x16ec48: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16ec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16ec4c: 0x0  nop
    ctx->pc = 0x16ec4cu;
    // NOP
    ctx->pc = 0x16ec50u;
}
