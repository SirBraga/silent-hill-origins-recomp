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

// Function: sub_00204BE8
// Address: 0x204be8 - 0x204c98
void sub_00204BE8_0x204be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204BE8_0x204be8");
#endif

    switch (ctx->pc) {
        case 0x204c0cu: goto label_204c0c;
        case 0x204c20u: goto label_204c20;
        case 0x204c3cu: goto label_204c3c;
        default: break;
    }

    ctx->pc = 0x204be8u;

    // 0x204be8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x204bec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x204becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x204bf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x204bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x204bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x204bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204bfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x204bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x204c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204c04: 0xc080fe2  jal         func_203F88
    ctx->pc = 0x204C04u;
    SET_GPR_U32(ctx, 31, 0x204C0Cu);
    ctx->pc = 0x204C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C04u;
    // 0x204c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203F88u, 0x204C04u, 0x204C0Cu)) {
        return;
    }
    ctx->pc = 0x204C0Cu;
label_204c0c:
    // 0x204c0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x204c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c10: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x204c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204c14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x204c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c18: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x204C18u;
    SET_GPR_U32(ctx, 31, 0x204C20u);
    ctx->pc = 0x204C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C18u;
    // 0x204c1c: 0x2672000c  addiu       $s2, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x204C18u, 0x204C20u)) {
        return;
    }
    ctx->pc = 0x204C20u;
label_204c20:
    // 0x204c20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x204c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c28: 0x24633c80  addiu       $v1, $v1, 0x3C80
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15488));
    // 0x204c2c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x204c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x204c30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x204c34: 0xc080858  jal         func_202160
    ctx->pc = 0x204C34u;
    SET_GPR_U32(ctx, 31, 0x204C3Cu);
    ctx->pc = 0x204C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C34u;
    // 0x204c38: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x204C34u, 0x204C3Cu)) {
        return;
    }
    ctx->pc = 0x204C3Cu;
label_204c3c:
    // 0x204c3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c40: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x204c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x204c44: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x204c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x204c48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x204c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x204c4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x204c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x204c50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x204c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x204c54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204C54u;
    {
        const bool branch_taken_0x204c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204c54) {
            ctx->pc = 0x204C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204C54u;
            // 0x204c58: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204C5Cu;
            goto label_204c5c;
        }
    }
    ctx->pc = 0x204C5Cu;
label_204c5c:
    // 0x204c5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x204c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x204c60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204C60u;
    {
        const bool branch_taken_0x204c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204c60) {
            ctx->pc = 0x204C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204C60u;
            // 0x204c64: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204C68u;
            goto label_204c68;
        }
    }
    ctx->pc = 0x204C68u;
label_204c68:
    // 0x204c68: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x204c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x204c6c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x204c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x204c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204c74: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x204c78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x204c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204c7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204c84: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x204c84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x204c88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x204c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204c90: 0x3e00008  jr          $ra
    ctx->pc = 0x204C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C90u;
        // 0x204c94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204C98u;
}
