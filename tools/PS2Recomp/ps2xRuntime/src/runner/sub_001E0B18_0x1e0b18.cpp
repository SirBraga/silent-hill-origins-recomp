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

// Function: sub_001E0B18
// Address: 0x1e0b18 - 0x1e0d70
void sub_001E0B18_0x1e0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0B18_0x1e0b18");
#endif

    switch (ctx->pc) {
        case 0x1e0b90u: goto label_1e0b90;
        case 0x1e0ba8u: goto label_1e0ba8;
        case 0x1e0bbcu: goto label_1e0bbc;
        case 0x1e0bd0u: goto label_1e0bd0;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c38u: goto label_1e0c38;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c6cu: goto label_1e0c6c;
        case 0x1e0c90u: goto label_1e0c90;
        case 0x1e0ca0u: goto label_1e0ca0;
        case 0x1e0cb0u: goto label_1e0cb0;
        case 0x1e0cc0u: goto label_1e0cc0;
        case 0x1e0cd0u: goto label_1e0cd0;
        case 0x1e0ce0u: goto label_1e0ce0;
        case 0x1e0cf0u: goto label_1e0cf0;
        case 0x1e0d00u: goto label_1e0d00;
        case 0x1e0d10u: goto label_1e0d10;
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d34u: goto label_1e0d34;
        default: break;
    }

    ctx->pc = 0x1e0b18u;

    // 0x1e0b18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e0b1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e0b20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1e0b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b28: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e0b2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e0b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e0b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e0b34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e0b38: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1e0b3c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0B3Cu;
    {
        const bool branch_taken_0x1e0b3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B3Cu;
        // 0x1e0b40: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b3c) {
            ctx->pc = 0x1E0B80u;
            goto label_1e0b80;
        }
    }
    ctx->pc = 0x1E0B44u;
    // 0x1e0b44: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e0b48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0b4c: 0x24021103  addiu       $v0, $zero, 0x1103
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4355));
    // 0x1e0b50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0b54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B54u;
    {
        const bool branch_taken_0x1e0b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B54u;
        // 0x1e0b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b54) {
            ctx->pc = 0x1E0B64u;
            goto label_1e0b64;
        }
    }
    ctx->pc = 0x1E0B5Cu;
    // 0x1e0b5c: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1e0b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1e0b60: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e0b64:
    // 0x1e0b64: 0x24021104  addiu       $v0, $zero, 0x1104
    ctx->pc = 0x1e0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
    // 0x1e0b68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B68u;
    {
        const bool branch_taken_0x1e0b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0b68) {
            ctx->pc = 0x1E0B78u;
            goto label_1e0b78;
        }
    }
    ctx->pc = 0x1E0B70u;
    // 0x1e0b70: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1e0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1e0b74: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1e0b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e0b78:
    // 0x1e0b78: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B78u;
    {
        const bool branch_taken_0x1e0b78 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x1e0b78) {
            ctx->pc = 0x1E0B88u;
            goto label_1e0b88;
        }
    }
    ctx->pc = 0x1E0B80u;
label_1e0b80:
    // 0x1e0b80: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1E0B80u;
    {
        const bool branch_taken_0x1e0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B80u;
        // 0x1e0b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b80) {
            ctx->pc = 0x1E0D40u;
            goto label_1e0d40;
        }
    }
    ctx->pc = 0x1E0B88u;
label_1e0b88:
    // 0x1e0b88: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1E0B88u;
    SET_GPR_U32(ctx, 31, 0x1E0B90u);
    ctx->pc = 0x1E0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B88u;
    // 0x1e0b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E0B88u, 0x1E0B90u)) {
        return;
    }
    ctx->pc = 0x1E0B90u;
label_1e0b90:
    // 0x1e0b90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e0b94: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x1e0b94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e0b98: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x1e0b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e0b9c: 0x1a600012  blez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0B9Cu;
    {
        const bool branch_taken_0x1e0b9c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1E0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B9Cu;
        // 0x1e0ba0: 0x8c550008  lw          $s5, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b9c) {
            ctx->pc = 0x1E0BE8u;
            goto label_1e0be8;
        }
    }
    ctx->pc = 0x1E0BA4u;
    // 0x1e0ba4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1e0ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ba8:
    // 0x1e0ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e0bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e0bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bb4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E0BB4u;
    SET_GPR_U32(ctx, 31, 0x1E0BBCu);
    ctx->pc = 0x1E0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0BB4u;
    // 0x1e0bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E0BB4u, 0x1E0BBCu)) {
        return;
    }
    ctx->pc = 0x1E0BBCu;
label_1e0bbc:
    // 0x1e0bbc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e0bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e0bc0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1e0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e0bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bc8: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1E0BC8u;
    SET_GPR_U32(ctx, 31, 0x1E0BD0u);
    ctx->pc = 0x1E0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0BC8u;
    // 0x1e0bcc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E0BC8u, 0x1E0BD0u)) {
        return;
    }
    ctx->pc = 0x1E0BD0u;
label_1e0bd0:
    // 0x1e0bd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0bd4: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1e0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e0bd8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e0bdc: 0x1640fff2  bnez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E0BDCu;
    {
        const bool branch_taken_0x1e0bdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BDCu;
        // 0x1e0be0: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bdc) {
            ctx->pc = 0x1E0BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ba8;
        }
    }
    ctx->pc = 0x1E0BE4u;
    // 0x1e0be4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e0be8:
    // 0x1e0be8: 0x24031103  addiu       $v1, $zero, 0x1103
    ctx->pc = 0x1e0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4355));
    // 0x1e0bec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e0becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0bf0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0BF0u;
    {
        const bool branch_taken_0x1e0bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF0u;
        // 0x1e0bf4: 0x24021104  addiu       $v0, $zero, 0x1104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf0) {
            ctx->pc = 0x1E0C08u;
            goto label_1e0c08;
        }
    }
    ctx->pc = 0x1E0BF8u;
    // 0x1e0bf8: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0C7Cu;
            goto label_1e0c7c;
        }
    }
    ctx->pc = 0x1E0C00u;
    // 0x1e0c00: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E0C00u;
    {
        const bool branch_taken_0x1e0c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C00u;
        // 0x1e0c04: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c00) {
            ctx->pc = 0x1E0D44u;
            goto label_1e0d44;
        }
    }
    ctx->pc = 0x1E0C08u;
label_1e0c08:
    // 0x1e0c08: 0x1a60004c  blez        $s3, . + 4 + (0x4C << 2)
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0D3Cu;
            goto label_1e0d3c;
        }
    }
    ctx->pc = 0x1E0C10u;
    // 0x1e0c10: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1e0c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c14: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1e0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e0c18:
    // 0x1e0c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e0c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0c20: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E0C20u;
    SET_GPR_U32(ctx, 31, 0x1E0C28u);
    ctx->pc = 0x1E0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C20u;
    // 0x1e0c24: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E0C20u, 0x1E0C28u)) {
        return;
    }
    ctx->pc = 0x1E0C28u;
label_1e0c28:
    // 0x1e0c28: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1e0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e0c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c30: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0C30u;
    SET_GPR_U32(ctx, 31, 0x1E0C38u);
    ctx->pc = 0x1E0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C30u;
    // 0x1e0c34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0C30u, 0x1E0C38u)) {
        return;
    }
    ctx->pc = 0x1E0C38u;
label_1e0c38:
    // 0x1e0c38: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x1e0c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1e0c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c40: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0C40u;
    SET_GPR_U32(ctx, 31, 0x1E0C48u);
    ctx->pc = 0x1E0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C40u;
    // 0x1e0c44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0C40u, 0x1E0C48u)) {
        return;
    }
    ctx->pc = 0x1E0C48u;
label_1e0c48:
    // 0x1e0c48: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e0c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e0c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c50: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0C50u;
    SET_GPR_U32(ctx, 31, 0x1E0C58u);
    ctx->pc = 0x1E0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C50u;
    // 0x1e0c54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0C50u, 0x1E0C58u)) {
        return;
    }
    ctx->pc = 0x1E0C58u;
label_1e0c58:
    // 0x1e0c58: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x1e0c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1e0c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0c64: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0C64u;
    SET_GPR_U32(ctx, 31, 0x1E0C6Cu);
    ctx->pc = 0x1E0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C64u;
    // 0x1e0c68: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0C64u, 0x1E0C6Cu)) {
        return;
    }
    ctx->pc = 0x1E0C6Cu;
label_1e0c6c:
    // 0x1e0c6c: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E0C6Cu;
    {
        const bool branch_taken_0x1e0c6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C6Cu;
        // 0x1e0c70: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c6c) {
            ctx->pc = 0x1E0C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c18;
        }
    }
    ctx->pc = 0x1E0C74u;
    // 0x1e0c74: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E0C74u;
    {
        const bool branch_taken_0x1e0c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C74u;
        // 0x1e0c78: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c74) {
            ctx->pc = 0x1E0D40u;
            goto label_1e0d40;
        }
    }
    ctx->pc = 0x1E0C7Cu;
label_1e0c7c:
    // 0x1e0c7c: 0x1a60002f  blez        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E0C7Cu;
    {
        const bool branch_taken_0x1e0c7c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1E0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C7Cu;
        // 0x1e0c80: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c7c) {
            ctx->pc = 0x1E0D3Cu;
            goto label_1e0d3c;
        }
    }
    ctx->pc = 0x1E0C84u;
    // 0x1e0c84: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1e0c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c88: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1e0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e0c8c: 0x0  nop
    ctx->pc = 0x1e0c8cu;
    // NOP
label_1e0c90:
    // 0x1e0c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e0c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0c98: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0C98u;
    SET_GPR_U32(ctx, 31, 0x1E0CA0u);
    ctx->pc = 0x1E0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C98u;
    // 0x1e0c9c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0C98u, 0x1E0CA0u)) {
        return;
    }
    ctx->pc = 0x1E0CA0u;
label_1e0ca0:
    // 0x1e0ca0: 0x2605000a  addiu       $a1, $s0, 0xA
    ctx->pc = 0x1e0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1e0ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ca8: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0CA8u;
    SET_GPR_U32(ctx, 31, 0x1E0CB0u);
    ctx->pc = 0x1E0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CA8u;
    // 0x1e0cac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0CA8u, 0x1E0CB0u)) {
        return;
    }
    ctx->pc = 0x1E0CB0u;
label_1e0cb0:
    // 0x1e0cb0: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e0cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cb8: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0CB8u;
    SET_GPR_U32(ctx, 31, 0x1E0CC0u);
    ctx->pc = 0x1E0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CB8u;
    // 0x1e0cbc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0CB8u, 0x1E0CC0u)) {
        return;
    }
    ctx->pc = 0x1E0CC0u;
label_1e0cc0:
    // 0x1e0cc0: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x1e0cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1e0cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cc8: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0CC8u;
    SET_GPR_U32(ctx, 31, 0x1E0CD0u);
    ctx->pc = 0x1E0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CC8u;
    // 0x1e0ccc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0CC8u, 0x1E0CD0u)) {
        return;
    }
    ctx->pc = 0x1E0CD0u;
label_1e0cd0:
    // 0x1e0cd0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e0cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cd8: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0CD8u;
    SET_GPR_U32(ctx, 31, 0x1E0CE0u);
    ctx->pc = 0x1E0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CD8u;
    // 0x1e0cdc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0CD8u, 0x1E0CE0u)) {
        return;
    }
    ctx->pc = 0x1E0CE0u;
label_1e0ce0:
    // 0x1e0ce0: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1e0ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ce8: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0CE8u;
    SET_GPR_U32(ctx, 31, 0x1E0CF0u);
    ctx->pc = 0x1E0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CE8u;
    // 0x1e0cec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0CE8u, 0x1E0CF0u)) {
        return;
    }
    ctx->pc = 0x1E0CF0u;
label_1e0cf0:
    // 0x1e0cf0: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1e0cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cf8: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0CF8u;
    SET_GPR_U32(ctx, 31, 0x1E0D00u);
    ctx->pc = 0x1E0CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CF8u;
    // 0x1e0cfc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0CF8u, 0x1E0D00u)) {
        return;
    }
    ctx->pc = 0x1E0D00u;
label_1e0d00:
    // 0x1e0d00: 0x26050016  addiu       $a1, $s0, 0x16
    ctx->pc = 0x1e0d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x1e0d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d08: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0D08u;
    SET_GPR_U32(ctx, 31, 0x1E0D10u);
    ctx->pc = 0x1E0D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0D08u;
    // 0x1e0d0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0D08u, 0x1E0D10u)) {
        return;
    }
    ctx->pc = 0x1E0D10u;
label_1e0d10:
    // 0x1e0d10: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1e0d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d18: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0D18u;
    SET_GPR_U32(ctx, 31, 0x1E0D20u);
    ctx->pc = 0x1E0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0D18u;
    // 0x1e0d1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0D18u, 0x1E0D20u)) {
        return;
    }
    ctx->pc = 0x1E0D20u;
label_1e0d20:
    // 0x1e0d20: 0x2605001a  addiu       $a1, $s0, 0x1A
    ctx->pc = 0x1e0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
    // 0x1e0d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0d2c: 0xc092796  jal         func_249E58
    ctx->pc = 0x1E0D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D34u);
    ctx->pc = 0x1E0D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0D2Cu;
    // 0x1e0d30: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x1E0D2Cu, 0x1E0D34u)) {
        return;
    }
    ctx->pc = 0x1E0D34u;
label_1e0d34:
    // 0x1e0d34: 0x1640ffd6  bnez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1E0D34u;
    {
        const bool branch_taken_0x1e0d34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D34u;
        // 0x1e0d38: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d34) {
            ctx->pc = 0x1E0C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c90;
        }
    }
    ctx->pc = 0x1E0D3Cu;
label_1e0d3c:
    // 0x1e0d3c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e0d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d40:
    // 0x1e0d40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e0d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e0d44:
    // 0x1e0d44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e0d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0d48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e0d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0d4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e0d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0d50: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e0d50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0d54: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e0d54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D5Cu;
        // 0x1e0d60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0D64u;
    // 0x1e0d64: 0x0  nop
    ctx->pc = 0x1e0d64u;
    // NOP
    // 0x1e0d68: 0x27bd0c80  addiu       $sp, $sp, 0xC80
    ctx->pc = 0x1e0d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3200));
    // 0x1e0d6c: 0x0  nop
    ctx->pc = 0x1e0d6cu;
    // NOP
    ctx->pc = 0x1e0d70u;
}
