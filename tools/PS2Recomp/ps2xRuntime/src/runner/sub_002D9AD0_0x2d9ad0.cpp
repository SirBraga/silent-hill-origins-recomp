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

// Function: sub_002D9AD0
// Address: 0x2d9ad0 - 0x2d9be8
void sub_002D9AD0_0x2d9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9AD0_0x2d9ad0");
#endif

    switch (ctx->pc) {
        case 0x2d9af8u: goto label_2d9af8;
        case 0x2d9b24u: goto label_2d9b24;
        case 0x2d9b94u: goto label_2d9b94;
        case 0x2d9bccu: goto label_2d9bcc;
        default: break;
    }

    ctx->pc = 0x2d9ad0u;

    // 0x2d9ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9ad4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d9ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9ad8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d9adc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d9ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9aec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9af0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2D9AF0u;
    SET_GPR_U32(ctx, 31, 0x2D9AF8u);
    ctx->pc = 0x2D9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9AF0u;
    // 0x2d9af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2D9AF0u, 0x2D9AF8u)) {
        return;
    }
    ctx->pc = 0x2D9AF8u;
label_2d9af8:
    // 0x2d9af8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2d9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d9afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9AFCu;
    {
        const bool branch_taken_0x2d9afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AFCu;
        // 0x2d9b00: 0x3b1880a  movz        $s1, $sp, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9afc) {
            ctx->pc = 0x2D9B10u;
            goto label_2d9b10;
        }
    }
    ctx->pc = 0x2D9B04u;
    // 0x2d9b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9b08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D9B08u;
    {
        const bool branch_taken_0x2d9b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B08u;
        // 0x2d9b0c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b08) {
            ctx->pc = 0x2D9BD0u;
            goto label_2d9bd0;
        }
    }
    ctx->pc = 0x2D9B10u;
label_2d9b10:
    // 0x2d9b10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9b14: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9B14u;
    {
        const bool branch_taken_0x2d9b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b14) {
            ctx->pc = 0x2D9B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9B14u;
            // 0x2d9b18: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9B3Cu;
            goto label_2d9b3c;
        }
    }
    ctx->pc = 0x2D9B1Cu;
    // 0x2d9b1c: 0xc0b6c38  jal         func_2DB0E0
    ctx->pc = 0x2D9B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B24u);
    ctx->pc = 0x2DB0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB0E0u, 0x2D9B1Cu, 0x2D9B24u)) {
        return;
    }
    ctx->pc = 0x2D9B24u;
label_2d9b24:
    // 0x2d9b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9b28: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9B28u;
    {
        const bool branch_taken_0x2d9b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d9b28) {
            ctx->pc = 0x2D9B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9B28u;
            // 0x2d9b2c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9B3Cu;
            goto label_2d9b3c;
        }
    }
    ctx->pc = 0x2D9B30u;
    // 0x2d9b30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9b34: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d9b38: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d9b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9b3c:
    // 0x2d9b3c: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x2d9b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2d9b40: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9B40u;
    {
        const bool branch_taken_0x2d9b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B40u;
        // 0x2d9b44: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b40) {
            ctx->pc = 0x2D9B60u;
            goto label_2d9b60;
        }
    }
    ctx->pc = 0x2D9B48u;
    // 0x2d9b48: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2d9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d9b4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d9b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d9b50: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d9b54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d9b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d9b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9B58u;
    {
        const bool branch_taken_0x2d9b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B58u;
        // 0x2d9b5c: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b58) {
            ctx->pc = 0x2D9B64u;
            goto label_2d9b64;
        }
    }
    ctx->pc = 0x2D9B60u;
label_2d9b60:
    // 0x2d9b60: 0x24c30028  addiu       $v1, $a2, 0x28
    ctx->pc = 0x2d9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
label_2d9b64:
    // 0x2d9b64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9b68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9b6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9B6Cu;
    {
        const bool branch_taken_0x2d9b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B6Cu;
        // 0x2d9b70: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b6c) {
            ctx->pc = 0x2D9B94u;
            goto label_2d9b94;
        }
    }
    ctx->pc = 0x2D9B74u;
    // 0x2d9b74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d9b78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d9b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d9b7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9B7Cu;
    {
        const bool branch_taken_0x2d9b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b7c) {
            ctx->pc = 0x2D9B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9B7Cu;
            // 0x2d9b80: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9B98u;
            goto label_2d9b98;
        }
    }
    ctx->pc = 0x2D9B84u;
    // 0x2d9b84: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d9b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9b8c: 0xc0b69c2  jal         func_2DA708
    ctx->pc = 0x2D9B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B94u);
    ctx->pc = 0x2D9B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B8Cu;
    // 0x2d9b90: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x2D9B8Cu, 0x2D9B94u)) {
        return;
    }
    ctx->pc = 0x2D9B94u;
label_2d9b94:
    // 0x2d9b94: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d9b98:
    // 0x2d9b98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9b9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d9ba0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d9ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9ba4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d9ba8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2d9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2d9bac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d9bb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d9bb4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9BB4u;
    {
        const bool branch_taken_0x2d9bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9bb4) {
            ctx->pc = 0x2D9BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9BB4u;
            // 0x2d9bb8: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9BD0u;
            goto label_2d9bd0;
        }
    }
    ctx->pc = 0x2D9BBCu;
    // 0x2d9bbc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2d9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2d9bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d9bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9bc4: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2D9BC4u;
    SET_GPR_U32(ctx, 31, 0x2D9BCCu);
    ctx->pc = 0x2D9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BC4u;
    // 0x2d9bc8: 0x24847bf8  addiu       $a0, $a0, 0x7BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2D9BC4u, 0x2D9BCCu)) {
        return;
    }
    ctx->pc = 0x2D9BCCu;
label_2d9bcc:
    // 0x2d9bcc: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2d9bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_2d9bd0:
    // 0x2d9bd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d9bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9bd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d9bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BDCu;
        // 0x2d9be0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9BE4u;
    // 0x2d9be4: 0x0  nop
    ctx->pc = 0x2d9be4u;
    // NOP
    ctx->pc = 0x2d9be8u;
}
