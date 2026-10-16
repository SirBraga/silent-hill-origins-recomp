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

// Function: sub_002D8E20
// Address: 0x2d8e20 - 0x2d8f10
void sub_002D8E20_0x2d8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8E20_0x2d8e20");
#endif

    switch (ctx->pc) {
        case 0x2d8e68u: goto label_2d8e68;
        case 0x2d8e84u: goto label_2d8e84;
        case 0x2d8eb8u: goto label_2d8eb8;
        case 0x2d8ee4u: goto label_2d8ee4;
        default: break;
    }

    ctx->pc = 0x2d8e20u;

    // 0x2d8e20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d8e24: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2d8e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2d8e28: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2d8e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2d8e2c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2d8e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e30: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2d8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2d8e34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d8e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2d8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2d8e3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d8e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e40: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2d8e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2d8e44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d8e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d8e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d8e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d8e4c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d8e50: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d8e50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d8e54: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D8E54u;
    {
        const bool branch_taken_0x2d8e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E54u;
        // 0x2d8e58: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e54) {
            ctx->pc = 0x2D8ED0u;
            goto label_2d8ed0;
        }
    }
    ctx->pc = 0x2D8E5Cu;
    // 0x2d8e5c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d8e5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8e60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d8e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e64: 0x0  nop
    ctx->pc = 0x2d8e64u;
    // NOP
label_2d8e68:
    // 0x2d8e68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d8e6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d8e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8e70: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2d8e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d8e74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d8e78: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8e7c: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D8E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D8E84u);
    ctx->pc = 0x2D8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E7Cu;
    // 0x2d8e80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D8E7Cu, 0x2D8E84u)) {
        return;
    }
    ctx->pc = 0x2D8E84u;
label_2d8e84:
    // 0x2d8e84: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8E84u;
    {
        const bool branch_taken_0x2d8e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e84) {
            ctx->pc = 0x2D8E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8E84u;
            // 0x2d8e88: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8EBCu;
            goto label_2d8ebc;
        }
    }
    ctx->pc = 0x2D8E8Cu;
    // 0x2d8e8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d8e90: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8E90u;
    {
        const bool branch_taken_0x2d8e90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E90u;
        // 0x2d8e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e90) {
            ctx->pc = 0x2D8EACu;
            goto label_2d8eac;
        }
    }
    ctx->pc = 0x2D8E98u;
    // 0x2d8e98: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2d8e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8e9c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d8ea0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2d8ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8EA4u;
    {
        const bool branch_taken_0x2d8ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EA4u;
        // 0x2d8ea8: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ea4) {
            ctx->pc = 0x2D8EB8u;
            goto label_2d8eb8;
        }
    }
    ctx->pc = 0x2D8EACu;
label_2d8eac:
    // 0x2d8eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8eb0: 0xc0ad05a  jal         func_2B4168
    ctx->pc = 0x2D8EB0u;
    SET_GPR_U32(ctx, 31, 0x2D8EB8u);
    ctx->pc = 0x2D8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EB0u;
    // 0x2d8eb4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4168u, 0x2D8EB0u, 0x2D8EB8u)) {
        return;
    }
    ctx->pc = 0x2D8EB8u;
label_2d8eb8:
    // 0x2d8eb8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d8ebc:
    // 0x2d8ebc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d8ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d8ec0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d8ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d8ec4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d8ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8ec8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D8EC8u;
    {
        const bool branch_taken_0x2d8ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EC8u;
        // 0x2d8ecc: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ec8) {
            ctx->pc = 0x2D8E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8e68;
        }
    }
    ctx->pc = 0x2D8ED0u;
label_2d8ed0:
    // 0x2d8ed0: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2d8ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2d8ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ed8: 0x211300b  movn        $a2, $s0, $s1
    ctx->pc = 0x2d8ed8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16));
    // 0x2d8edc: 0xc0ab47e  jal         func_2AD1F8
    ctx->pc = 0x2D8EDCu;
    SET_GPR_U32(ctx, 31, 0x2D8EE4u);
    ctx->pc = 0x2D8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EDCu;
    // 0x2d8ee0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD1F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD1F8u, 0x2D8EDCu, 0x2D8EE4u)) {
        return;
    }
    ctx->pc = 0x2D8EE4u;
label_2d8ee4:
    // 0x2d8ee4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d8ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ee8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2d8ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8eec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2d8eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8ef0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2d8ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8ef4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8ef8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2d8ef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8efc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d8efcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8f00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d8f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F04u;
        // 0x2d8f08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8F0Cu;
    // 0x2d8f0c: 0x0  nop
    ctx->pc = 0x2d8f0cu;
    // NOP
    ctx->pc = 0x2d8f10u;
}
