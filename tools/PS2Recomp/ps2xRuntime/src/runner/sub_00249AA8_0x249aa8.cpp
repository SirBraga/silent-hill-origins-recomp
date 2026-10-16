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

// Function: sub_00249AA8
// Address: 0x249aa8 - 0x249bd0
void sub_00249AA8_0x249aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249AA8_0x249aa8");
#endif

    switch (ctx->pc) {
        case 0x249adcu: goto label_249adc;
        case 0x249af8u: goto label_249af8;
        case 0x249b04u: goto label_249b04;
        case 0x249b78u: goto label_249b78;
        default: break;
    }

    ctx->pc = 0x249aa8u;

    // 0x249aa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x249aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x249aac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x249aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x249ab0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x249ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x249ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x249ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ab8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x249ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x249abc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x249abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ac0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x249ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x249ac4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x249ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x249ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x249acc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x249accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ad4: 0xc093546  jal         func_24D518
    ctx->pc = 0x249AD4u;
    SET_GPR_U32(ctx, 31, 0x249ADCu);
    ctx->pc = 0x249AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AD4u;
    // 0x249ad8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x249AD4u, 0x249ADCu)) {
        return;
    }
    ctx->pc = 0x249ADCu;
label_249adc:
    // 0x249adc: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x249adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x249ae0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249AE0u;
    {
        const bool branch_taken_0x249ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AE0u;
        // 0x249ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ae0) {
            ctx->pc = 0x249B10u;
            goto label_249b10;
        }
    }
    ctx->pc = 0x249AE8u;
    // 0x249ae8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249aec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x249aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x249af0: 0xc092848  jal         func_24A120
    ctx->pc = 0x249AF0u;
    SET_GPR_U32(ctx, 31, 0x249AF8u);
    ctx->pc = 0x249AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AF0u;
    // 0x249af4: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249AF0u, 0x249AF8u)) {
        return;
    }
    ctx->pc = 0x249AF8u;
label_249af8:
    // 0x249af8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x249af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x249afc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x249AFCu;
    SET_GPR_U32(ctx, 31, 0x249B04u);
    ctx->pc = 0x249B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AFCu;
    // 0x249b00: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249AFCu, 0x249B04u)) {
        return;
    }
    ctx->pc = 0x249B04u;
label_249b04:
    // 0x249b04: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x249B04u;
    {
        const bool branch_taken_0x249b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B04u;
        // 0x249b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b04) {
            ctx->pc = 0x249BB0u;
            goto label_249bb0;
        }
    }
    ctx->pc = 0x249B0Cu;
    // 0x249b0c: 0x0  nop
    ctx->pc = 0x249b0cu;
    // NOP
label_249b10:
    // 0x249b10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249b14: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x249b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x249b18: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x249b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249b1c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249b20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x249b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x249b24: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x249b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x249b28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249B28u;
    {
        const bool branch_taken_0x249b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B28u;
        // 0x249b2c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b28) {
            ctx->pc = 0x249B40u;
            goto label_249b40;
        }
    }
    ctx->pc = 0x249B30u;
    // 0x249b30: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x249b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x249b34: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x249b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x249b38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x249B38u;
    {
        const bool branch_taken_0x249b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B38u;
        // 0x249b3c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b38) {
            ctx->pc = 0x249B70u;
            goto label_249b70;
        }
    }
    ctx->pc = 0x249B40u;
label_249b40:
    // 0x249b40: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x249b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x249b44: 0x61382  srl         $v0, $a2, 14
    ctx->pc = 0x249b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x249b48: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x249b4c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x249b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x249b50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x249b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x249b54: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x249b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x249b58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x249b5c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x249b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x249b60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x249b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x249b64: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x249b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x249b68: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x249b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x249b6c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x249b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_249b70:
    // 0x249b70: 0xc092698  jal         func_249A60
    ctx->pc = 0x249B70u;
    SET_GPR_U32(ctx, 31, 0x249B78u);
    ctx->pc = 0x249B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B70u;
    // 0x249b74: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249A60u, 0x249B70u, 0x249B78u)) {
        return;
    }
    ctx->pc = 0x249B78u;
label_249b78:
    // 0x249b78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249B78u;
    {
        const bool branch_taken_0x249b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B78u;
        // 0x249b7c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b78) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249B80u;
    // 0x249b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249b84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x249b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_249b88:
    // 0x249b88: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249B88u;
    {
        const bool branch_taken_0x249b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B88u;
        // 0x249b8c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b88) {
            ctx->pc = 0x249B94u;
            goto label_249b94;
        }
    }
    ctx->pc = 0x249B90u;
    // 0x249b90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x249b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_249b94:
    // 0x249b94: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x249B94u;
    {
        const bool branch_taken_0x249b94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B94u;
        // 0x249b98: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b94) {
            ctx->pc = 0x249BA0u;
            goto label_249ba0;
        }
    }
    ctx->pc = 0x249B9Cu;
    // 0x249b9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x249b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_249ba0:
    // 0x249ba0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x249BA0u;
    {
        const bool branch_taken_0x249ba0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x249BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BA0u;
        // 0x249ba4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ba0) {
            ctx->pc = 0x249BACu;
            goto label_249bac;
        }
    }
    ctx->pc = 0x249BA8u;
    // 0x249ba8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x249ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_249bac:
    // 0x249bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249bb0:
    // 0x249bb0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x249bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x249bb4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x249bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x249bb8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x249bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x249bbc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x249bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x249bc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x249bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x249BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BC4u;
        // 0x249bc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249BCCu;
    // 0x249bcc: 0x0  nop
    ctx->pc = 0x249bccu;
    // NOP
    ctx->pc = 0x249bd0u;
}
