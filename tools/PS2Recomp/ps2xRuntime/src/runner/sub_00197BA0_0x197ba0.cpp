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

// Function: sub_00197BA0
// Address: 0x197ba0 - 0x197cb0
void sub_00197BA0_0x197ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197BA0_0x197ba0");
#endif

    switch (ctx->pc) {
        case 0x197bd0u: goto label_197bd0;
        case 0x197be8u: goto label_197be8;
        case 0x197bf0u: goto label_197bf0;
        case 0x197c04u: goto label_197c04;
        case 0x197c40u: goto label_197c40;
        case 0x197c54u: goto label_197c54;
        case 0x197c6cu: goto label_197c6c;
        case 0x197c74u: goto label_197c74;
        default: break;
    }

    ctx->pc = 0x197ba0u;

    // 0x197ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197ba4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x197ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x197ba8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x197ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x197bac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x197bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x197bb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x197bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x197bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x197bbc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x197bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x197bc0: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x197BC0u;
    {
        const bool branch_taken_0x197bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BC0u;
        // 0x197bc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bc0) {
            ctx->pc = 0x197C88u;
            goto label_197c88;
        }
    }
    ctx->pc = 0x197BC8u;
    // 0x197bc8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197BC8u;
    SET_GPR_U32(ctx, 31, 0x197BD0u);
    ctx->pc = 0x197BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BC8u;
    // 0x197bcc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197BC8u, 0x197BD0u)) {
        return;
    }
    ctx->pc = 0x197BD0u;
label_197bd0:
    // 0x197bd0: 0x2413005f  addiu       $s3, $zero, 0x5F
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x197bd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x197bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x197bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197BDCu;
    {
        const bool branch_taken_0x197bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BDCu;
        // 0x197be0: 0x247211d1  addiu       $s2, $v1, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bdc) {
            ctx->pc = 0x197BF4u;
            goto label_197bf4;
        }
    }
    ctx->pc = 0x197BE4u;
    // 0x197be4: 0x0  nop
    ctx->pc = 0x197be4u;
    // NOP
label_197be8:
    // 0x197be8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197BE8u;
    SET_GPR_U32(ctx, 31, 0x197BF0u);
    ctx->pc = 0x197BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BE8u;
    // 0x197bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197BE8u, 0x197BF0u)) {
        return;
    }
    ctx->pc = 0x197BF0u;
label_197bf0:
    // 0x197bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197bf4:
    // 0x197bf4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x197BF4u;
    {
        const bool branch_taken_0x197bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF4u;
        // 0x197bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf4) {
            ctx->pc = 0x197C88u;
            goto label_197c88;
        }
    }
    ctx->pc = 0x197BFCu;
    // 0x197bfc: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x197BFCu;
    SET_GPR_U32(ctx, 31, 0x197C04u);
    ctx->pc = 0x197C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BFCu;
    // 0x197c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x197BFCu, 0x197C04u)) {
        return;
    }
    ctx->pc = 0x197C04u;
label_197c04:
    // 0x197c04: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197c08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197C08u;
    {
        const bool branch_taken_0x197c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c08) {
            ctx->pc = 0x197C30u;
            goto label_197c30;
        }
    }
    ctx->pc = 0x197C10u;
    // 0x197c10: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197c14: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x197c18: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197c1c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x197c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x197c20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x197C20u;
    {
        const bool branch_taken_0x197c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c20) {
            ctx->pc = 0x197BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197be8;
        }
    }
    ctx->pc = 0x197C28u;
    // 0x197c28: 0x10b3ffef  beq         $a1, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x197C28u;
    {
        const bool branch_taken_0x197c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x197c28) {
            ctx->pc = 0x197BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197be8;
        }
    }
    ctx->pc = 0x197C30u;
label_197c30:
    // 0x197c30: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197C30u;
    {
        const bool branch_taken_0x197c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C30u;
        // 0x197c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c30) {
            ctx->pc = 0x197C88u;
            goto label_197c88;
        }
    }
    ctx->pc = 0x197C38u;
    // 0x197c38: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197C38u;
    SET_GPR_U32(ctx, 31, 0x197C40u);
    ctx->pc = 0x197C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C38u;
    // 0x197c3c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197C38u, 0x197C40u)) {
        return;
    }
    ctx->pc = 0x197C40u;
label_197c40:
    // 0x197c40: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x197c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197c44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x197C44u;
    {
        const bool branch_taken_0x197c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C44u;
        // 0x197c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c44) {
            ctx->pc = 0x197C88u;
            goto label_197c88;
        }
    }
    ctx->pc = 0x197C4Cu;
    // 0x197c4c: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197C4Cu;
    SET_GPR_U32(ctx, 31, 0x197C54u);
    ctx->pc = 0x197C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C4Cu;
    // 0x197c50: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197C4Cu, 0x197C54u)) {
        return;
    }
    ctx->pc = 0x197C54u;
label_197c54:
    // 0x197c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c58: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x197C58u;
    {
        const bool branch_taken_0x197c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c58) {
            ctx->pc = 0x197C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197C58u;
            // 0x197c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197C8Cu;
            goto label_197c8c;
        }
    }
    ctx->pc = 0x197C60u;
    // 0x197c60: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x197c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197c64: 0xc0c53d6  jal         func_314F58
    ctx->pc = 0x197C64u;
    SET_GPR_U32(ctx, 31, 0x197C6Cu);
    ctx->pc = 0x197C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C64u;
    // 0x197c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F58u, 0x197C64u, 0x197C6Cu)) {
        return;
    }
    ctx->pc = 0x197C6Cu;
label_197c6c:
    // 0x197c6c: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x197C6Cu;
    SET_GPR_U32(ctx, 31, 0x197C74u);
    ctx->pc = 0x197C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C6Cu;
    // 0x197c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x197C6Cu, 0x197C74u)) {
        return;
    }
    ctx->pc = 0x197C74u;
label_197c74:
    // 0x197c74: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x197c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197c78: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x197c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x197c7c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x197c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197C80u;
    {
        const bool branch_taken_0x197c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C80u;
        // 0x197c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c80) {
            ctx->pc = 0x197C8Cu;
            goto label_197c8c;
        }
    }
    ctx->pc = 0x197C88u;
label_197c88:
    // 0x197c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c8c:
    // 0x197c8c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x197c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197c90: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x197c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197c94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x197c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197c98: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x197c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197c9c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x197c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x197CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CA4u;
        // 0x197ca8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197CACu;
    // 0x197cac: 0x0  nop
    ctx->pc = 0x197cacu;
    // NOP
    ctx->pc = 0x197cb0u;
}
