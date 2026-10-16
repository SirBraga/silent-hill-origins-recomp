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

// Function: sub_0016AC68
// Address: 0x16ac68 - 0x16ace0
void sub_0016AC68_0x16ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AC68_0x16ac68");
#endif

    switch (ctx->pc) {
        case 0x16ac90u: goto label_16ac90;
        case 0x16acb4u: goto label_16acb4;
        case 0x16acccu: goto label_16accc;
        default: break;
    }

    ctx->pc = 0x16ac68u;

    // 0x16ac68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ac6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16ac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16ac70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ac74: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16AC74u;
    {
        const bool branch_taken_0x16ac74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC74u;
        // 0x16ac78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac74) {
            ctx->pc = 0x16ACCCu;
            goto label_16accc;
        }
    }
    ctx->pc = 0x16AC7Cu;
    // 0x16ac7c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16AC7Cu;
    {
        const bool branch_taken_0x16ac7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC7Cu;
        // 0x16ac80: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac7c) {
            ctx->pc = 0x16ACBCu;
            goto label_16acbc;
        }
    }
    ctx->pc = 0x16AC84u;
    // 0x16ac84: 0x261046d8  addiu       $s0, $s0, 0x46D8
    ctx->pc = 0x16ac84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18136));
    // 0x16ac88: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16AC88u;
    SET_GPR_U32(ctx, 31, 0x16AC90u);
    ctx->pc = 0x16AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC88u;
    // 0x16ac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16AC88u, 0x16AC90u)) {
        return;
    }
    ctx->pc = 0x16AC90u;
label_16ac90:
    // 0x16ac90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16ac94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ac98: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16ac9c: 0xac62f658  sw          $v0, -0x9A8($v1)
    ctx->pc = 0x16ac9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF658u, _value); } while (0);
    // 0x16aca0: 0x2484f660  addiu       $a0, $a0, -0x9A0
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964832));
    // 0x16aca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aca8: 0x24c6ace0  addiu       $a2, $a2, -0x5320
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946016));
    // 0x16acac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16ACACu;
    SET_GPR_U32(ctx, 31, 0x16ACB4u);
    ctx->pc = 0x16ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACACu;
    // 0x16acb0: 0x2407007c  addiu       $a3, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16ACACu, 0x16ACB4u)) {
        return;
    }
    ctx->pc = 0x16ACB4u;
label_16acb4:
    // 0x16acb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16ACB4u;
    {
        const bool branch_taken_0x16acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACB4u;
        // 0x16acb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acb4) {
            ctx->pc = 0x16ACD0u;
            goto label_16acd0;
        }
    }
    ctx->pc = 0x16ACBCu;
label_16acbc:
    // 0x16acbc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16acc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16acc4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16ACC4u;
    SET_GPR_U32(ctx, 31, 0x16ACCCu);
    ctx->pc = 0x16ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACC4u;
    // 0x16acc8: 0x2484f660  addiu       $a0, $a0, -0x9A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16ACC4u, 0x16ACCCu)) {
        return;
    }
    ctx->pc = 0x16ACCCu;
label_16accc:
    // 0x16accc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16acccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16acd0:
    // 0x16acd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16acd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x16ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACD4u;
        // 0x16acd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ACDCu;
    // 0x16acdc: 0x0  nop
    ctx->pc = 0x16acdcu;
    // NOP
    ctx->pc = 0x16ace0u;
}
