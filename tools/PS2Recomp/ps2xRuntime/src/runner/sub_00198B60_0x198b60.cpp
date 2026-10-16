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

// Function: sub_00198B60
// Address: 0x198b60 - 0x198c60
void sub_00198B60_0x198b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198B60_0x198b60");
#endif

    switch (ctx->pc) {
        case 0x198bc8u: goto label_198bc8;
        case 0x198bd4u: goto label_198bd4;
        case 0x198c28u: goto label_198c28;
        case 0x198c38u: goto label_198c38;
        default: break;
    }

    ctx->pc = 0x198b60u;

    // 0x198b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198b64: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x198b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x198b68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x198b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x198b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198b74: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x198b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x198b78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x198b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x198b84: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x198b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198b8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b90: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x198b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x198b94: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x198b98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198b9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x198b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x198ba0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x198ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x198ba4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x198ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x198ba8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x198ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x198bac: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x198bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x198bb0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x198bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x198bb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x198bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x198bb8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x198bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x198bbc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x198bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x198bc0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x198bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x198bc4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x198bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_198bc8:
    // 0x198bc8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x198bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x198bcc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x198BCCu;
    SET_GPR_U32(ctx, 31, 0x198BD4u);
    ctx->pc = 0x198BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BCCu;
    // 0x198bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x198BCCu, 0x198BD4u)) {
        return;
    }
    ctx->pc = 0x198BD4u;
label_198bd4:
    // 0x198bd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198bdc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x198bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x198be0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198BE0u;
    {
        const bool branch_taken_0x198be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BE0u;
        // 0x198be4: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198be0) {
            ctx->pc = 0x198BECu;
            goto label_198bec;
        }
    }
    ctx->pc = 0x198BE8u;
    // 0x198be8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x198be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_198bec:
    // 0x198bec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198bf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x198bf4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x198bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x198bf8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x198bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x198bfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x198bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x198c00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198c04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x198c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198c0c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x198c10: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x198C10u;
    {
        const bool branch_taken_0x198c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C10u;
        // 0x198c14: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c10) {
            ctx->pc = 0x198BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198bc8;
        }
    }
    ctx->pc = 0x198C18u;
    // 0x198c18: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x198c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c20: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x198C20u;
    SET_GPR_U32(ctx, 31, 0x198C28u);
    ctx->pc = 0x198C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C20u;
    // 0x198c24: 0x240602c0  addiu       $a2, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x198C20u, 0x198C28u)) {
        return;
    }
    ctx->pc = 0x198C28u;
label_198c28:
    // 0x198c28: 0x262402f0  addiu       $a0, $s1, 0x2F0
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    // 0x198c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c30: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x198C30u;
    SET_GPR_U32(ctx, 31, 0x198C38u);
    ctx->pc = 0x198C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C30u;
    // 0x198c34: 0x240602c0  addiu       $a2, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x198C30u, 0x198C38u)) {
        return;
    }
    ctx->pc = 0x198C38u;
label_198c38:
    // 0x198c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198c3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x198c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c40: 0xae2305b0  sw          $v1, 0x5B0($s1)
    ctx->pc = 0x198c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 3));
    // 0x198c44: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x198c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    // 0x198c48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x198c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198c4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198c50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198c58: 0x3e00008  jr          $ra
    ctx->pc = 0x198C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C58u;
        // 0x198c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198C60u;
}
