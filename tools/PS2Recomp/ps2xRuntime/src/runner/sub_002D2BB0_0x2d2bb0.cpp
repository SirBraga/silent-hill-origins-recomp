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

// Function: sub_002D2BB0
// Address: 0x2d2bb0 - 0x2d2e08
void sub_002D2BB0_0x2d2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2BB0_0x2d2bb0");
#endif

    switch (ctx->pc) {
        case 0x2d2c00u: goto label_2d2c00;
        case 0x2d2c5cu: goto label_2d2c5c;
        case 0x2d2c84u: goto label_2d2c84;
        case 0x2d2d38u: goto label_2d2d38;
        default: break;
    }

    ctx->pc = 0x2d2bb0u;

    // 0x2d2bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d2bb4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d2bb8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d2bbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d2bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2bc0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d2bc4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d2bc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d2bcc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2d2bd0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2d2bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2d2bd4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2d2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2d2bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2bdc: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x2d2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x2d2be0: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2D2BE0u;
    {
        const bool branch_taken_0x2d2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BE0u;
        // 0x2d2be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2be0) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2BE8u;
    // 0x2d2be8: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x2d2be8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d2bec: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x2d2becu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d2bf0: 0x241500e0  addiu       $s5, $zero, 0xE0
    ctx->pc = 0x2d2bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d2bf4: 0x241400e0  addiu       $s4, $zero, 0xE0
    ctx->pc = 0x2d2bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d2bf8: 0x973018  mult        $a2, $a0, $s7
    ctx->pc = 0x2d2bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d2bfc: 0x0  nop
    ctx->pc = 0x2d2bfcu;
    // NOP
label_2d2c00:
    // 0x2d2c00: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2d2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2d2c04: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d2c08: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2d2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d2c0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2c10: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2D2C10u;
    {
        const bool branch_taken_0x2d2c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C10u;
        // 0x2d2c14: 0x24930001  addiu       $s3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c10) {
            ctx->pc = 0x2D2DC4u;
            goto label_2d2dc4;
        }
    }
    ctx->pc = 0x2D2C18u;
    // 0x2d2c18: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2d2c1c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2d2c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d2c20: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d2c24: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x2d2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2d2c28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d2c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d2c2c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2D2C2Cu;
    {
        const bool branch_taken_0x2d2c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C2Cu;
        // 0x2d2c30: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c2c) {
            ctx->pc = 0x2D2DC4u;
            goto label_2d2dc4;
        }
    }
    ctx->pc = 0x2D2C34u;
    // 0x2d2c34: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2d2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2d2c38: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2d2c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2d2c3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d2c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2c40: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x2d2c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d2c44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2c48: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2c4c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2d2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2d2c50: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2d2c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d2c54: 0xc0b4a44  jal         func_2D2910
    ctx->pc = 0x2D2C54u;
    SET_GPR_U32(ctx, 31, 0x2D2C5Cu);
    ctx->pc = 0x2D2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C54u;
    // 0x2d2c58: 0x8c474018  lw          $a3, 0x4018($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D2910u, 0x2D2C54u, 0x2D2C5Cu)) {
        return;
    }
    ctx->pc = 0x2D2C5Cu;
label_2d2c5c:
    // 0x2d2c5c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2d2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d2c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c64: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2c68: 0x753818  mult        $a3, $v1, $s5
    ctx->pc = 0x2d2c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d2c6c: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x2d2c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2d2c70: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2d2c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2d2c74: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x2d2c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2d2c78: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2d2c78u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2d2c7c: 0xc0b12cc  jal         func_2C4B30
    ctx->pc = 0x2D2C7Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C84u);
    ctx->pc = 0x2D2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C7Cu;
    // 0x2d2c80: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C4B30u, 0x2D2C7Cu, 0x2D2C84u)) {
        return;
    }
    ctx->pc = 0x2D2C84u;
label_2d2c84:
    // 0x2d2c84: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2d2c84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c88: 0x5160004f  beql        $t3, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D2C88u;
    {
        const bool branch_taken_0x2d2c88 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c88) {
            ctx->pc = 0x2D2C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2C88u;
            // 0x2d2c8c: 0x8e4200c8  lw          $v0, 0xC8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2DC8u;
            goto label_2d2dc8;
        }
    }
    ctx->pc = 0x2D2C90u;
    // 0x2d2c90: 0x11600049  beqz        $t3, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D2C90u;
    {
        const bool branch_taken_0x2d2c90 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C90u;
        // 0x2d2c94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c90) {
            ctx->pc = 0x2D2DB8u;
            goto label_2d2db8;
        }
    }
    ctx->pc = 0x2D2C98u;
    // 0x2d2c98: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d2c9c: 0x31630003  andi        $v1, $t3, 0x3
    ctx->pc = 0x2d2c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x2d2ca0: 0x1960001a  blez        $t3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2CA0u;
    {
        const bool branch_taken_0x2d2ca0 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x2D2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CA0u;
        // 0x2d2ca4: 0x544018  mult        $t0, $v0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ca0) {
            ctx->pc = 0x2D2D0Cu;
            goto label_2d2d0c;
        }
    }
    ctx->pc = 0x2D2CA8u;
    // 0x2d2ca8: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D2CA8u;
    {
        const bool branch_taken_0x2d2ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ca8) {
            ctx->pc = 0x2D2CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2CA8u;
            // 0x2d2cac: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2D3Cu;
            goto label_2d2d3c;
        }
    }
    ctx->pc = 0x2D2CB0u;
    // 0x2d2cb0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d2cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d2cb4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2CB4u;
    {
        const bool branch_taken_0x2d2cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cb4) {
            ctx->pc = 0x2D2CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2CB4u;
            // 0x2d2cb8: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2D10u;
            goto label_2d2d10;
        }
    }
    ctx->pc = 0x2D2CBCu;
    // 0x2d2cbc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d2cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d2cc0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2CC0u;
    {
        const bool branch_taken_0x2d2cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CC0u;
        // 0x2d2cc4: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cc0) {
            ctx->pc = 0x2D2CECu;
            goto label_2d2cec;
        }
    }
    ctx->pc = 0x2D2CC8u;
    // 0x2d2cc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2ccc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d2cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d2cd0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d2cd4: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2d2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2d2cd8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2d2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2cdc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d2ce0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d2ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d2ce4: 0x250800e0  addiu       $t0, $t0, 0xE0
    ctx->pc = 0x2d2ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x2d2ce8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2d2cec:
    // 0x2d2cec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d2cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d2cf0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d2cf4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d2cf8: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2d2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2d2cfc: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2d2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d00: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d2d04: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d2d08: 0x250800e0  addiu       $t0, $t0, 0xE0
    ctx->pc = 0x2d2d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
label_2d2d0c:
    // 0x2d2d0c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2d2d10:
    // 0x2d2d10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d2d10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d2d14: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d2d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d2d18: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x2d2d18u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2d2d1c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d2d20: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2d2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2d2d24: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2d2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d28: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d2d2c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d2d30: 0x11400021  beqz        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D2D30u;
    {
        const bool branch_taken_0x2d2d30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D30u;
        // 0x2d2d34: 0x250800e0  addiu       $t0, $t0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d30) {
            ctx->pc = 0x2D2DB8u;
            goto label_2d2db8;
        }
    }
    ctx->pc = 0x2D2D38u;
label_2d2d38:
    // 0x2d2d38: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2d2d3c:
    // 0x2d2d3c: 0x250500e0  addiu       $a1, $t0, 0xE0
    ctx->pc = 0x2d2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x2d2d40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d2d44: 0x250601c0  addiu       $a2, $t0, 0x1C0
    ctx->pc = 0x2d2d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 448));
    // 0x2d2d48: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d2d4c: 0x250702a0  addiu       $a3, $t0, 0x2A0
    ctx->pc = 0x2d2d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 672));
    // 0x2d2d50: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x2d2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x2d2d54: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2d2d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2d2d58: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x2d2d58u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2d2d5c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2d2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d60: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2d2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2d2d64: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2d2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2d2d68: 0x25080380  addiu       $t0, $t0, 0x380
    ctx->pc = 0x2d2d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 896));
    // 0x2d2d6c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d70: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d2d74: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2d2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2d2d78: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2d2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d2d80: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d2d84: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d2d8c: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x2d2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x2d2d90: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2d2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2d94: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d2d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d2d98: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2d2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2d2d9c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2da0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d2da4: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2d2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2d2da8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2d2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2dac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2d2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d2db0: 0x1540ffe1  bnez        $t2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2D2DB0u;
    {
        const bool branch_taken_0x2d2db0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DB0u;
        // 0x2d2db4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2db0) {
            ctx->pc = 0x2D2D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2d38;
        }
    }
    ctx->pc = 0x2D2DB8u;
label_2d2db8:
    // 0x2d2db8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d2dbc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d2dc0: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2d2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_2d2dc4:
    // 0x2d2dc4: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x2d2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2d2dc8:
    // 0x2d2dc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dcc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2d2dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d2dd0: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x2D2DD0u;
    {
        const bool branch_taken_0x2d2dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DD0u;
        // 0x2d2dd4: 0x973018  mult        $a2, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dd0) {
            ctx->pc = 0x2D2C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2c00;
        }
    }
    ctx->pc = 0x2D2DD8u;
label_2d2dd8:
    // 0x2d2dd8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d2dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ddc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d2ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2de0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d2de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2de4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d2de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2de8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d2de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2dec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d2decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2df0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d2df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2df4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2d2df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2df8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2d2df8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E00u;
        // 0x2d2e04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2E08u;
}
