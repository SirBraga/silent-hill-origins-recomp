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

// Function: sub_00125BE0
// Address: 0x125be0 - 0x125c50
void sub_00125BE0_0x125be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125BE0_0x125be0");
#endif

    switch (ctx->pc) {
        case 0x125c08u: goto label_125c08;
        case 0x125c24u: goto label_125c24;
        case 0x125c38u: goto label_125c38;
        default: break;
    }

    ctx->pc = 0x125be0u;

    // 0x125be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125be4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x125be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x125be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125bf4: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x125bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
    // 0x125bf8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x125BF8u;
    {
        const bool branch_taken_0x125bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF8u;
        // 0x125bfc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bf8) {
            ctx->pc = 0x125C38u;
            goto label_125c38;
        }
    }
    ctx->pc = 0x125C00u;
    // 0x125c00: 0xc041628  jal         func_1058A0
    ctx->pc = 0x125C00u;
    SET_GPR_U32(ctx, 31, 0x125C08u);
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x125C00u, 0x125C08u)) {
        return;
    }
    ctx->pc = 0x125C08u;
label_125c08:
    // 0x125c08: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x125C08u;
    {
        const bool branch_taken_0x125c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C08u;
        // 0x125c0c: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c08) {
            ctx->pc = 0x125C2Cu;
            goto label_125c2c;
        }
    }
    ctx->pc = 0x125C10u;
    // 0x125c10: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x125c14: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x125c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x125c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c1c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x125C1Cu;
    SET_GPR_U32(ctx, 31, 0x125C24u);
    ctx->pc = 0x125C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C1Cu;
    // 0x125c20: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x125C1Cu, 0x125C24u)) {
        return;
    }
    ctx->pc = 0x125C24u;
label_125c24:
    // 0x125c24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x125C24u;
    {
        const bool branch_taken_0x125c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C24u;
        // 0x125c28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c24) {
            ctx->pc = 0x125C3Cu;
            goto label_125c3c;
        }
    }
    ctx->pc = 0x125C2Cu;
label_125c2c:
    // 0x125c2c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x125c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x125c30: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x125C30u;
    SET_GPR_U32(ctx, 31, 0x125C38u);
    ctx->pc = 0x125C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C30u;
    // 0x125c34: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x125C30u, 0x125C38u)) {
        return;
    }
    ctx->pc = 0x125C38u;
label_125c38:
    // 0x125c38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125c3c:
    // 0x125c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125c44: 0x3e00008  jr          $ra
    ctx->pc = 0x125C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C44u;
        // 0x125c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C4Cu;
    // 0x125c4c: 0x0  nop
    ctx->pc = 0x125c4cu;
    // NOP
    ctx->pc = 0x125c50u;
}
