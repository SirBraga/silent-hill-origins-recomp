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

// Function: sub_00183B88
// Address: 0x183b88 - 0x183c00
void sub_00183B88_0x183b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183B88_0x183b88");
#endif

    switch (ctx->pc) {
        case 0x183bb0u: goto label_183bb0;
        case 0x183bd4u: goto label_183bd4;
        case 0x183becu: goto label_183bec;
        default: break;
    }

    ctx->pc = 0x183b88u;

    // 0x183b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183b8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183b94: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183B94u;
    {
        const bool branch_taken_0x183b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x183B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B94u;
        // 0x183b98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b94) {
            ctx->pc = 0x183BECu;
            goto label_183bec;
        }
    }
    ctx->pc = 0x183B9Cu;
    // 0x183b9c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x183B9Cu;
    {
        const bool branch_taken_0x183b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B9Cu;
        // 0x183ba0: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b9c) {
            ctx->pc = 0x183BDCu;
            goto label_183bdc;
        }
    }
    ctx->pc = 0x183BA4u;
    // 0x183ba4: 0x26108088  addiu       $s0, $s0, -0x7F78
    ctx->pc = 0x183ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934664));
    // 0x183ba8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x183BA8u;
    SET_GPR_U32(ctx, 31, 0x183BB0u);
    ctx->pc = 0x183BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BA8u;
    // 0x183bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x183BA8u, 0x183BB0u)) {
        return;
    }
    ctx->pc = 0x183BB0u;
label_183bb0:
    // 0x183bb0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x183bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x183bb4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x183bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x183bb8: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x183bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x183bbc: 0xac623c08  sw          $v0, 0x3C08($v1)
    ctx->pc = 0x183bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6C3C08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3C08u, _value); } while (0);
    // 0x183bc0: 0x24843c10  addiu       $a0, $a0, 0x3C10
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15376));
    // 0x183bc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bc8: 0x24c63c00  addiu       $a2, $a2, 0x3C00
    ctx->pc = 0x183bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15360));
    // 0x183bcc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x183BCCu;
    SET_GPR_U32(ctx, 31, 0x183BD4u);
    ctx->pc = 0x183BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BCCu;
    // 0x183bd0: 0x240700b8  addiu       $a3, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x183BCCu, 0x183BD4u)) {
        return;
    }
    ctx->pc = 0x183BD4u;
label_183bd4:
    // 0x183bd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x183BD4u;
    {
        const bool branch_taken_0x183bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BD4u;
        // 0x183bd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bd4) {
            ctx->pc = 0x183BF0u;
            goto label_183bf0;
        }
    }
    ctx->pc = 0x183BDCu;
label_183bdc:
    // 0x183bdc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x183bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x183be0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183be4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x183BE4u;
    SET_GPR_U32(ctx, 31, 0x183BECu);
    ctx->pc = 0x183BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BE4u;
    // 0x183be8: 0x24843c10  addiu       $a0, $a0, 0x3C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x183BE4u, 0x183BECu)) {
        return;
    }
    ctx->pc = 0x183BECu;
label_183bec:
    // 0x183bec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183bf0:
    // 0x183bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x183BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BF4u;
        // 0x183bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183BFCu;
    // 0x183bfc: 0x0  nop
    ctx->pc = 0x183bfcu;
    // NOP
    ctx->pc = 0x183c00u;
}
