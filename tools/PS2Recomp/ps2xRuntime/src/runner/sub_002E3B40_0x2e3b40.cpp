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

// Function: sub_002E3B40
// Address: 0x2e3b40 - 0x2e3c58
void sub_002E3B40_0x2e3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3B40_0x2e3b40");
#endif

    switch (ctx->pc) {
        case 0x2e3b78u: goto label_2e3b78;
        case 0x2e3ba8u: goto label_2e3ba8;
        case 0x2e3bbcu: goto label_2e3bbc;
        case 0x2e3bf8u: goto label_2e3bf8;
        case 0x2e3c0cu: goto label_2e3c0c;
        default: break;
    }

    ctx->pc = 0x2e3b40u;

    // 0x2e3b40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e3b44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e3b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e3b48: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e3b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e3b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e3b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b54: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2e3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2e3b58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e3b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e3b64: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e3b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e3b68: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2e3b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2e3b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3b70: 0xc0b7042  jal         func_2DC108
    ctx->pc = 0x2E3B70u;
    SET_GPR_U32(ctx, 31, 0x2E3B78u);
    ctx->pc = 0x2E3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B70u;
    // 0x2e3b74: 0x24847c98  addiu       $a0, $a0, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC108u, 0x2E3B70u, 0x2E3B78u)) {
        return;
    }
    ctx->pc = 0x2E3B78u;
label_2e3b78:
    // 0x2e3b78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e3b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3b80: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E3B80u;
    {
        const bool branch_taken_0x2e3b80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B80u;
        // 0x2e3b84: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b80) {
            ctx->pc = 0x2E3BD8u;
            goto label_2e3bd8;
        }
    }
    ctx->pc = 0x2E3B88u;
    // 0x2e3b88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e3b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b8c: 0x9451000c  lhu         $s1, 0xC($v0)
    ctx->pc = 0x2e3b8cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e3b90: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E3B90u;
    {
        const bool branch_taken_0x2e3b90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B90u;
        // 0x2e3b94: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b90) {
            ctx->pc = 0x2E3C20u;
            goto label_2e3c20;
        }
    }
    ctx->pc = 0x2E3B98u;
    // 0x2e3b98: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e3b9c: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x2e3b9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e3ba0: 0x24554508  addiu       $s5, $v0, 0x4508
    ctx->pc = 0x2e3ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
    // 0x2e3ba4: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x2e3ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e3ba8:
    // 0x2e3ba8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2e3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e3bac: 0xac93000c  sw          $s3, 0xC($a0)
    ctx->pc = 0x2e3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 19));
    // 0x2e3bb0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2e3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2e3bb4: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2E3BB4u;
    SET_GPR_U32(ctx, 31, 0x2E3BBCu);
    ctx->pc = 0x2E3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3BB4u;
    // 0x2e3bb8: 0xac950014  sw          $s5, 0x14($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2E3BB4u, 0x2E3BBCu)) {
        return;
    }
    ctx->pc = 0x2E3BBCu;
label_2e3bbc:
    // 0x2e3bbc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2e3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3bc0: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x2e3bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e3bc4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e3bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e3bc8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E3BC8u;
    {
        const bool branch_taken_0x2e3bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BC8u;
        // 0x2e3bcc: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bc8) {
            ctx->pc = 0x2E3BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3ba8;
        }
    }
    ctx->pc = 0x2E3BD0u;
    // 0x2e3bd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3BD0u;
    {
        const bool branch_taken_0x2e3bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BD0u;
        // 0x2e3bd4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bd0) {
            ctx->pc = 0x2E3C24u;
            goto label_2e3c24;
        }
    }
    ctx->pc = 0x2E3BD8u;
label_2e3bd8:
    // 0x2e3bd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e3bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3bdc: 0x9451000e  lhu         $s1, 0xE($v0)
    ctx->pc = 0x2e3bdcu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2e3be0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E3BE0u;
    {
        const bool branch_taken_0x2e3be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BE0u;
        // 0x2e3be4: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3be0) {
            ctx->pc = 0x2E3C20u;
            goto label_2e3c20;
        }
    }
    ctx->pc = 0x2E3BE8u;
    // 0x2e3be8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e3bec: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x2e3becu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e3bf0: 0x24554508  addiu       $s5, $v0, 0x4508
    ctx->pc = 0x2e3bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
    // 0x2e3bf4: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x2e3bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e3bf8:
    // 0x2e3bf8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2e3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e3bfc: 0xac93000c  sw          $s3, 0xC($a0)
    ctx->pc = 0x2e3bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 19));
    // 0x2e3c00: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2e3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2e3c04: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2E3C04u;
    SET_GPR_U32(ctx, 31, 0x2E3C0Cu);
    ctx->pc = 0x2E3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C04u;
    // 0x2e3c08: 0xac950014  sw          $s5, 0x14($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2E3C04u, 0x2E3C0Cu)) {
        return;
    }
    ctx->pc = 0x2E3C0Cu;
label_2e3c0c:
    // 0x2e3c0c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2e3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3c10: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x2e3c10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e3c14: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e3c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e3c18: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E3C18u;
    {
        const bool branch_taken_0x2e3c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C18u;
        // 0x2e3c1c: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c18) {
            ctx->pc = 0x2E3BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3bf8;
        }
    }
    ctx->pc = 0x2E3C20u;
label_2e3c20:
    // 0x2e3c20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e3c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e3c24:
    // 0x2e3c24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e3c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3c28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e3c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3c2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3c30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e3c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3c34: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2e3c34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C3Cu;
        // 0x2e3c40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C44u;
    // 0x2e3c44: 0x0  nop
    ctx->pc = 0x2e3c44u;
    // NOP
    // 0x2e3c48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3c4c: 0x0  nop
    ctx->pc = 0x2e3c4cu;
    // NOP
    // 0x2e3c50: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e3c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e3c54: 0x0  nop
    ctx->pc = 0x2e3c54u;
    // NOP
    ctx->pc = 0x2e3c58u;
}
