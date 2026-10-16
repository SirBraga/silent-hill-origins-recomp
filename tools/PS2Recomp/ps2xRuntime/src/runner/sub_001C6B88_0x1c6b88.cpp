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

// Function: sub_001C6B88
// Address: 0x1c6b88 - 0x1c6cb0
void sub_001C6B88_0x1c6b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B88_0x1c6b88");
#endif

    switch (ctx->pc) {
        case 0x1c6be8u: goto label_1c6be8;
        case 0x1c6c3cu: goto label_1c6c3c;
        default: break;
    }

    ctx->pc = 0x1c6b88u;

    // 0x1c6b88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c6b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c6b8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c6b90: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c6b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1c6b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b98: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c6b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1c6b9c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1c6b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1c6ba0: 0x261102a4  addiu       $s1, $s0, 0x2A4
    ctx->pc = 0x1c6ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x1c6ba4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c6ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1c6ba8: 0x2452f1b8  addiu       $s2, $v0, -0xE48
    ctx->pc = 0x1c6ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
    // 0x1c6bac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c6bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c6bb0: 0x2613029c  addiu       $s3, $s0, 0x29C
    ctx->pc = 0x1c6bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
    // 0x1c6bb4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1c6bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1c6bb8: 0x261402a0  addiu       $s4, $s0, 0x2A0
    ctx->pc = 0x1c6bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x1c6bbc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1c6bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1c6bc0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c6bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bc4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1c6bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1c6bc8: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6bcc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1c6bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1c6bd0: 0x261702a8  addiu       $s7, $s0, 0x2A8
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x1c6bd4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c6bd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c6bd8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1c6bd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6be0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c6be0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c6be4: 0x0  nop
    ctx->pc = 0x1c6be4u;
    // NOP
label_1c6be8:
    // 0x1c6be8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6bec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6BECu;
    {
        const bool branch_taken_0x1c6bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BECu;
        // 0x1c6bf0: 0x2f51021  addu        $v0, $s7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bec) {
            ctx->pc = 0x1C6C5Cu;
            goto label_1c6c5c;
        }
    }
    ctx->pc = 0x1C6BF4u;
    // 0x1c6bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6bfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6BFCu;
    {
        const bool branch_taken_0x1c6bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFCu;
        // 0x1c6c00: 0x260202a8  addiu       $v0, $s0, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bfc) {
            ctx->pc = 0x1C6C0Cu;
            goto label_1c6c0c;
        }
    }
    ctx->pc = 0x1C6C04u;
    // 0x1c6c04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C04u;
    {
        const bool branch_taken_0x1c6c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C04u;
        // 0x1c6c08: 0xc64e0004  lwc1        $f14, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c04) {
            ctx->pc = 0x1C6C10u;
            goto label_1c6c10;
        }
    }
    ctx->pc = 0x1C6C0Cu;
label_1c6c0c:
    // 0x1c6c0c: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x1c6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1c6c10:
    // 0x1c6c10: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1c6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1c6c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6c18: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C18u;
    {
        const bool branch_taken_0x1c6c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c18) {
            ctx->pc = 0x1C6C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6C18u;
            // 0x1c6c1c: 0xc64f0004  lwc1        $f15, 0x4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C24u;
            goto label_1c6c24;
        }
    }
    ctx->pc = 0x1C6C20u;
    // 0x1c6c20: 0xc64f0000  lwc1        $f15, 0x0($s2)
    ctx->pc = 0x1c6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c6c24:
    // 0x1c6c24: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c6c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c6c28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6c2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c6c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6c30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c6c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6c34: 0xc06d02e  jal         func_1B40B8
    ctx->pc = 0x1C6C34u;
    SET_GPR_U32(ctx, 31, 0x1C6C3Cu);
    ctx->pc = 0x1C6C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C34u;
    // 0x1c6c38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C6C34u, 0x1C6C3Cu)) {
        return;
    }
    ctx->pc = 0x1C6C3Cu;
label_1c6c3c:
    // 0x1c6c3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c6c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c6c40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6C40u;
    {
        const bool branch_taken_0x1c6c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C40u;
        // 0x1c6c44: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c40) {
            ctx->pc = 0x1C6C5Cu;
            goto label_1c6c5c;
        }
    }
    ctx->pc = 0x1C6C48u;
    // 0x1c6c48: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1c6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1c6c4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6C4Cu;
    {
        const bool branch_taken_0x1c6c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c4c) {
            ctx->pc = 0x1C6C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6C4Cu;
            // 0x1c6c50: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C60u;
            goto label_1c6c60;
        }
    }
    ctx->pc = 0x1C6C54u;
    // 0x1c6c54: 0xae1e0294  sw          $fp, 0x294($s0)
    ctx->pc = 0x1c6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 30));
    // 0x1c6c58: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
label_1c6c5c:
    // 0x1c6c5c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c6c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c6c60:
    // 0x1c6c60: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1c6c64: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1c6c64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c6c68: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1c6c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c6c6c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1c6c6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c6c70: 0x6c1ffdd  bgez        $s6, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x1C6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C70u;
        // 0x1c6c74: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6be8;
        }
    }
    ctx->pc = 0x1C6C78u;
    // 0x1c6c78: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1c6c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c6c7c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1c6c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c6c80: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1c6c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6c84: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c6c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6c88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c6c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6c8c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1c6c8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6c90: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1c6c90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6c94: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1c6c94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6c98: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1c6c98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ca0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CA4u;
        // 0x1c6ca8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6CACu;
    // 0x1c6cac: 0x0  nop
    ctx->pc = 0x1c6cacu;
    // NOP
    ctx->pc = 0x1c6cb0u;
}
