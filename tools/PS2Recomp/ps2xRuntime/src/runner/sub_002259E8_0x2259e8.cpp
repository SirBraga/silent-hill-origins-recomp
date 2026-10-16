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

// Function: sub_002259E8
// Address: 0x2259e8 - 0x225a70
void sub_002259E8_0x2259e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002259E8_0x2259e8");
#endif

    switch (ctx->pc) {
        case 0x225a1cu: goto label_225a1c;
        case 0x225a2cu: goto label_225a2c;
        case 0x225a44u: goto label_225a44;
        default: break;
    }

    ctx->pc = 0x2259e8u;

    // 0x2259e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2259e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2259ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2259ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2259f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2259f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2259f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259f8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x2259f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x2259fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2259fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225a00: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
    // 0x225a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a10: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x225a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x225a14: 0xc08959e  jal         func_225678
    ctx->pc = 0x225A14u;
    SET_GPR_U32(ctx, 31, 0x225A1Cu);
    ctx->pc = 0x225A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A14u;
    // 0x225a18: 0x2611fff0  addiu       $s1, $s0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225A14u, 0x225A1Cu)) {
        return;
    }
    ctx->pc = 0x225A1Cu;
label_225a1c:
    // 0x225a1c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x225a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x225a20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a24: 0xc09397e  jal         func_24E5F8
    ctx->pc = 0x225A24u;
    SET_GPR_U32(ctx, 31, 0x225A2Cu);
    ctx->pc = 0x225A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A24u;
    // 0x225a28: 0x248402e8  addiu       $a0, $a0, 0x2E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x225A24u, 0x225A2Cu)) {
        return;
    }
    ctx->pc = 0x225A2Cu;
label_225a2c:
    // 0x225a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a3c: 0xc08959e  jal         func_225678
    ctx->pc = 0x225A3Cu;
    SET_GPR_U32(ctx, 31, 0x225A44u);
    ctx->pc = 0x225A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A3Cu;
    // 0x225a40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225A3Cu, 0x225A44u)) {
        return;
    }
    ctx->pc = 0x225A44u;
label_225a44:
    // 0x225a44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a48: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x225A48u;
    {
        const bool branch_taken_0x225a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A48u;
        // 0x225a4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a48) {
            ctx->pc = 0x225A54u;
            goto label_225a54;
        }
    }
    ctx->pc = 0x225A50u;
    // 0x225a50: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x225a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_225a54:
    // 0x225a54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a64: 0x3e00008  jr          $ra
    ctx->pc = 0x225A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225A6Cu;
    // 0x225a6c: 0x0  nop
    ctx->pc = 0x225a6cu;
    // NOP
    ctx->pc = 0x225a70u;
}
