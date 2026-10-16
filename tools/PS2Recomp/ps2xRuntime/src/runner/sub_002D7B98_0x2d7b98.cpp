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

// Function: sub_002D7B98
// Address: 0x2d7b98 - 0x2d7c88
void sub_002D7B98_0x2d7b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7B98_0x2d7b98");
#endif

    switch (ctx->pc) {
        case 0x2d7be0u: goto label_2d7be0;
        case 0x2d7bfcu: goto label_2d7bfc;
        case 0x2d7c30u: goto label_2d7c30;
        case 0x2d7c5cu: goto label_2d7c5c;
        default: break;
    }

    ctx->pc = 0x2d7b98u;

    // 0x2d7b98: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d7b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d7b9c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2d7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2d7ba0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2d7ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2d7ba4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2d7ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ba8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2d7ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2d7bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d7bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bb0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2d7bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2d7bb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bb8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2d7bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2d7bbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d7bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d7bc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7bc4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d7bc8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d7bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d7bcc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D7BCCu;
    {
        const bool branch_taken_0x2d7bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BCCu;
        // 0x2d7bd0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7bcc) {
            ctx->pc = 0x2D7C48u;
            goto label_2d7c48;
        }
    }
    ctx->pc = 0x2D7BD4u;
    // 0x2d7bd4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d7bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7bd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d7bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bdc: 0x0  nop
    ctx->pc = 0x2d7bdcu;
    // NOP
label_2d7be0:
    // 0x2d7be0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d7be4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7be8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2d7be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7bec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d7becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d7bf0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d7bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7bf4: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D7BF4u;
    SET_GPR_U32(ctx, 31, 0x2D7BFCu);
    ctx->pc = 0x2D7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BF4u;
    // 0x2d7bf8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D7BF4u, 0x2D7BFCu)) {
        return;
    }
    ctx->pc = 0x2D7BFCu;
label_2d7bfc:
    // 0x2d7bfc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7BFCu;
    {
        const bool branch_taken_0x2d7bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bfc) {
            ctx->pc = 0x2D7C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7BFCu;
            // 0x2d7c00: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7C34u;
            goto label_2d7c34;
        }
    }
    ctx->pc = 0x2D7C04u;
    // 0x2d7c04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d7c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7c08: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7C08u;
    {
        const bool branch_taken_0x2d7c08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C08u;
        // 0x2d7c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c08) {
            ctx->pc = 0x2D7C24u;
            goto label_2d7c24;
        }
    }
    ctx->pc = 0x2D7C10u;
    // 0x2d7c10: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2d7c10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7c14: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d7c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d7c18: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2d7c18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7C1Cu;
    {
        const bool branch_taken_0x2d7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C1Cu;
        // 0x2d7c20: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c1c) {
            ctx->pc = 0x2D7C30u;
            goto label_2d7c30;
        }
    }
    ctx->pc = 0x2D7C24u;
label_2d7c24:
    // 0x2d7c24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c28: 0xc0ad05a  jal         func_2B4168
    ctx->pc = 0x2D7C28u;
    SET_GPR_U32(ctx, 31, 0x2D7C30u);
    ctx->pc = 0x2D7C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C28u;
    // 0x2d7c2c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4168u, 0x2D7C28u, 0x2D7C30u)) {
        return;
    }
    ctx->pc = 0x2D7C30u;
label_2d7c30:
    // 0x2d7c30: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d7c34:
    // 0x2d7c34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d7c34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d7c38: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d7c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d7c3c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d7c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7c40: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D7C40u;
    {
        const bool branch_taken_0x2d7c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C40u;
        // 0x2d7c44: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c40) {
            ctx->pc = 0x2D7BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7be0;
        }
    }
    ctx->pc = 0x2D7C48u;
label_2d7c48:
    // 0x2d7c48: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2d7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2d7c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c50: 0x211300b  movn        $a2, $s0, $s1
    ctx->pc = 0x2d7c50u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16));
    // 0x2d7c54: 0xc0ab47e  jal         func_2AD1F8
    ctx->pc = 0x2D7C54u;
    SET_GPR_U32(ctx, 31, 0x2D7C5Cu);
    ctx->pc = 0x2D7C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C54u;
    // 0x2d7c58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD1F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD1F8u, 0x2D7C54u, 0x2D7C5Cu)) {
        return;
    }
    ctx->pc = 0x2D7C5Cu;
label_2d7c5c:
    // 0x2d7c5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d7c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c60: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2d7c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7c64: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2d7c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7c68: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2d7c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7c6c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2d7c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7c70: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2d7c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7c74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d7c74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C7Cu;
        // 0x2d7c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7C84u;
    // 0x2d7c84: 0x0  nop
    ctx->pc = 0x2d7c84u;
    // NOP
    ctx->pc = 0x2d7c88u;
}
