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

// Function: sub_00190A68
// Address: 0x190a68 - 0x190b58
void sub_00190A68_0x190a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190A68_0x190a68");
#endif

    switch (ctx->pc) {
        case 0x190ab8u: goto label_190ab8;
        case 0x190b14u: goto label_190b14;
        case 0x190b34u: goto label_190b34;
        case 0x190b40u: goto label_190b40;
        default: break;
    }

    ctx->pc = 0x190a68u;

    // 0x190a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190a6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190a70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190a74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x190a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190a80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x190a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190a84: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x190a88: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x190a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x190a8c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x190a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x190a90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190a94: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x190a98: 0x1c400027  bgtz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x190A98u;
    {
        const bool branch_taken_0x190a98 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x190A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A98u;
        // 0x190a9c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a98) {
            ctx->pc = 0x190B38u;
            goto label_190b38;
        }
    }
    ctx->pc = 0x190AA0u;
    // 0x190aa0: 0x2650002c  addiu       $s0, $s2, 0x2C
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x190aa4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x190aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190aa8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x190AA8u;
    {
        const bool branch_taken_0x190aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190aa8) {
            ctx->pc = 0x190AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190AA8u;
            // 0x190aac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190AD4u;
            goto label_190ad4;
        }
    }
    ctx->pc = 0x190AB0u;
    // 0x190ab0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190ab4: 0x0  nop
    ctx->pc = 0x190ab4u;
    // NOP
label_190ab8:
    // 0x190ab8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190AB8u;
    {
        const bool branch_taken_0x190ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x190ab8) {
            ctx->pc = 0x190AD4u;
            goto label_190ad4;
        }
    }
    ctx->pc = 0x190AC0u;
    // 0x190ac0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x190ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190ac4: 0x0  nop
    ctx->pc = 0x190ac4u;
    // NOP
    // 0x190ac8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190AC8u;
    {
        const bool branch_taken_0x190ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ac8) {
            ctx->pc = 0x190ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190AC8u;
            // 0x190acc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190ab8;
        }
    }
    ctx->pc = 0x190AD0u;
    // 0x190ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190ad4:
    // 0x190ad4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190AD4u;
    {
        const bool branch_taken_0x190ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ad4) {
            ctx->pc = 0x190AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190AD4u;
            // 0x190ad8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B24u;
            goto label_190b24;
        }
    }
    ctx->pc = 0x190ADCu;
    // 0x190adc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190ae0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190AE0u;
    {
        const bool branch_taken_0x190ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AE0u;
        // 0x190ae4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ae0) {
            ctx->pc = 0x190AF0u;
            goto label_190af0;
        }
    }
    ctx->pc = 0x190AE8u;
    // 0x190ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190AE8u;
    {
        const bool branch_taken_0x190ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AE8u;
        // 0x190aec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ae8) {
            ctx->pc = 0x190AF4u;
            goto label_190af4;
        }
    }
    ctx->pc = 0x190AF0u;
label_190af0:
    // 0x190af0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x190af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190af4:
    // 0x190af4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190af8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190AF8u;
    {
        const bool branch_taken_0x190af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AF8u;
        // 0x190afc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190af8) {
            ctx->pc = 0x190B08u;
            goto label_190b08;
        }
    }
    ctx->pc = 0x190B00u;
    // 0x190b00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190B00u;
    {
        const bool branch_taken_0x190b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B00u;
        // 0x190b04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b00) {
            ctx->pc = 0x190B0Cu;
            goto label_190b0c;
        }
    }
    ctx->pc = 0x190B08u;
label_190b08:
    // 0x190b08: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190b0c:
    // 0x190b0c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190B0Cu;
    SET_GPR_U32(ctx, 31, 0x190B14u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190B0Cu, 0x190B14u)) {
        return;
    }
    ctx->pc = 0x190B14u;
label_190b14:
    // 0x190b14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190b18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190b1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190b20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x190b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_190b24:
    // 0x190b24: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190B24u;
    {
        const bool branch_taken_0x190b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b24) {
            ctx->pc = 0x190B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190B24u;
            // 0x190b28: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B38u;
            goto label_190b38;
        }
    }
    ctx->pc = 0x190B2Cu;
    // 0x190b2c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190B2Cu;
    SET_GPR_U32(ctx, 31, 0x190B34u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190B2Cu, 0x190B34u)) {
        return;
    }
    ctx->pc = 0x190B34u;
label_190b34:
    // 0x190b34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x190b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_190b38:
    // 0x190b38: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190B38u;
    SET_GPR_U32(ctx, 31, 0x190B40u);
    ctx->pc = 0x190B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B38u;
    // 0x190b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190B38u, 0x190B40u)) {
        return;
    }
    ctx->pc = 0x190B40u;
label_190b40:
    // 0x190b40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190b44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190b48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190b50: 0x3e00008  jr          $ra
    ctx->pc = 0x190B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B50u;
        // 0x190b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190B58u;
}
