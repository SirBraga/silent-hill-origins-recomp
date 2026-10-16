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

// Function: sub_00198A58
// Address: 0x198a58 - 0x198b00
void sub_00198A58_0x198a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198A58_0x198a58");
#endif

    switch (ctx->pc) {
        case 0x198a8cu: goto label_198a8c;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198aacu: goto label_198aac;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ae4u: goto label_198ae4;
        default: break;
    }

    ctx->pc = 0x198a58u;

    // 0x198a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x198a5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x198a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x198a60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x198a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x198a64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x198a68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x198a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x198a70: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x198a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198a78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x198a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a7c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x198a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a80: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x198a84: 0xc0ab650  jal         func_2AD940
    ctx->pc = 0x198A84u;
    SET_GPR_U32(ctx, 31, 0x198A8Cu);
    ctx->pc = 0x198A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A84u;
    // 0x198a88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD940u, 0x198A84u, 0x198A8Cu)) {
        return;
    }
    ctx->pc = 0x198A8Cu;
label_198a8c:
    // 0x198a8c: 0xc0aa702  jal         func_2A9C08
    ctx->pc = 0x198A8Cu;
    SET_GPR_U32(ctx, 31, 0x198A94u);
    ctx->pc = 0x198A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A8Cu;
    // 0x198a90: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C08u, 0x198A8Cu, 0x198A94u)) {
        return;
    }
    ctx->pc = 0x198A94u;
label_198a94:
    // 0x198a94: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x198a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_198a98:
    // 0x198a98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x198a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198a9c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198A9Cu;
    {
        const bool branch_taken_0x198a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a9c) {
            ctx->pc = 0x198AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198A9Cu;
            // 0x198aa0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198AB4u;
            goto label_198ab4;
        }
    }
    ctx->pc = 0x198AA4u;
    // 0x198aa4: 0xc0ab60a  jal         func_2AD828
    ctx->pc = 0x198AA4u;
    SET_GPR_U32(ctx, 31, 0x198AACu);
    ctx->pc = 0x2AD828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD828u, 0x198AA4u, 0x198AACu)) {
        return;
    }
    ctx->pc = 0x198AACu;
label_198aac:
    // 0x198aac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198ab0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_198ab4:
    // 0x198ab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198AB4u;
    {
        const bool branch_taken_0x198ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AB4u;
        // 0x198ab8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ab4) {
            ctx->pc = 0x198AC8u;
            goto label_198ac8;
        }
    }
    ctx->pc = 0x198ABCu;
    // 0x198abc: 0xc0ad286  jal         func_2B4A18
    ctx->pc = 0x198ABCu;
    SET_GPR_U32(ctx, 31, 0x198AC4u);
    ctx->pc = 0x2B4A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A18u, 0x198ABCu, 0x198AC4u)) {
        return;
    }
    ctx->pc = 0x198AC4u;
label_198ac4:
    // 0x198ac4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x198ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_198ac8:
    // 0x198ac8: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x198AC8u;
    {
        const bool branch_taken_0x198ac8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x198ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AC8u;
        // 0x198acc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ac8) {
            ctx->pc = 0x198A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198a98;
        }
    }
    ctx->pc = 0x198AD0u;
    // 0x198ad0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x198ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x198ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198AD4u;
    {
        const bool branch_taken_0x198ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AD4u;
        // 0x198ad8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ad4) {
            ctx->pc = 0x198AE8u;
            goto label_198ae8;
        }
    }
    ctx->pc = 0x198ADCu;
    // 0x198adc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x198ADCu;
    SET_GPR_U32(ctx, 31, 0x198AE4u);
    ctx->pc = 0x198AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198ADCu;
    // 0x198ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x198ADCu, 0x198AE4u)) {
        return;
    }
    ctx->pc = 0x198AE4u;
label_198ae4:
    // 0x198ae4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x198ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_198ae8:
    // 0x198ae8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x198ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198af0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x198af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198af8: 0x3e00008  jr          $ra
    ctx->pc = 0x198AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AF8u;
        // 0x198afc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B00u;
}
