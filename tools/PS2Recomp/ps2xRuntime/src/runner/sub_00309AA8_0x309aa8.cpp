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

// Function: sub_00309AA8
// Address: 0x309aa8 - 0x309c18
void sub_00309AA8_0x309aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309AA8_0x309aa8");
#endif

    switch (ctx->pc) {
        case 0x309adcu: goto label_309adc;
        case 0x309b04u: goto label_309b04;
        case 0x309b3cu: goto label_309b3c;
        case 0x309b80u: goto label_309b80;
        case 0x309bbcu: goto label_309bbc;
        default: break;
    }

    ctx->pc = 0x309aa8u;

    // 0x309aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x309aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x309aac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x309aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x309ab0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x309ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x309ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x309ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x309abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ac0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x309ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x309ac4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309ac8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309AC8u;
    {
        const bool branch_taken_0x309ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AC8u;
        // 0x309acc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ac8) {
            ctx->pc = 0x309AE8u;
            goto label_309ae8;
        }
    }
    ctx->pc = 0x309AD0u;
    // 0x309ad0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x309ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x309ad4: 0xc092782  jal         func_249E08
    ctx->pc = 0x309AD4u;
    SET_GPR_U32(ctx, 31, 0x309ADCu);
    ctx->pc = 0x309AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AD4u;
    // 0x309ad8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309AD4u, 0x309ADCu)) {
        return;
    }
    ctx->pc = 0x309ADCu;
label_309adc:
    // 0x309adc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x309ADCu;
    {
        const bool branch_taken_0x309adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ADCu;
        // 0x309ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309adc) {
            ctx->pc = 0x309C04u;
            goto label_309c04;
        }
    }
    ctx->pc = 0x309AE4u;
    // 0x309ae4: 0x0  nop
    ctx->pc = 0x309ae4u;
    // NOP
label_309ae8:
    // 0x309ae8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x309ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x309aec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309af0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309AF0u;
    {
        const bool branch_taken_0x309af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AF0u;
        // 0x309af4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309af0) {
            ctx->pc = 0x309B10u;
            goto label_309b10;
        }
    }
    ctx->pc = 0x309AF8u;
    // 0x309af8: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x309af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x309afc: 0xc092782  jal         func_249E08
    ctx->pc = 0x309AFCu;
    SET_GPR_U32(ctx, 31, 0x309B04u);
    ctx->pc = 0x309B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AFCu;
    // 0x309b00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309AFCu, 0x309B04u)) {
        return;
    }
    ctx->pc = 0x309B04u;
label_309b04:
    // 0x309b04: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x309B04u;
    {
        const bool branch_taken_0x309b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B04u;
        // 0x309b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b04) {
            ctx->pc = 0x309B5Cu;
            goto label_309b5c;
        }
    }
    ctx->pc = 0x309B0Cu;
    // 0x309b0c: 0x0  nop
    ctx->pc = 0x309b0cu;
    // NOP
label_309b10:
    // 0x309b10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b14: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x309b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309b18: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x309b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309b1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309b20: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x309b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x309b24: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x309b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x309b28: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309B28u;
    {
        const bool branch_taken_0x309b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B28u;
        // 0x309b2c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b28) {
            ctx->pc = 0x309B44u;
            goto label_309b44;
        }
    }
    ctx->pc = 0x309B30u;
    // 0x309b30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x309b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b34: 0xc09275c  jal         func_249D70
    ctx->pc = 0x309B34u;
    SET_GPR_U32(ctx, 31, 0x309B3Cu);
    ctx->pc = 0x309B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B34u;
    // 0x309b38: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x309B34u, 0x309B3Cu)) {
        return;
    }
    ctx->pc = 0x309B3Cu;
label_309b3c:
    // 0x309b3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309B3Cu;
    {
        const bool branch_taken_0x309b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B3Cu;
        // 0x309b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b3c) {
            ctx->pc = 0x309B5Cu;
            goto label_309b5c;
        }
    }
    ctx->pc = 0x309B44u;
label_309b44:
    // 0x309b44: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309B44u;
    {
        const bool branch_taken_0x309b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B44u;
        // 0x309b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b44) {
            ctx->pc = 0x309B5Cu;
            goto label_309b5c;
        }
    }
    ctx->pc = 0x309B4Cu;
    // 0x309b4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309b50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x309b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x309b54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309b5c:
    // 0x309b5c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x309B5Cu;
    {
        const bool branch_taken_0x309b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B5Cu;
        // 0x309b60: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b5c) {
            ctx->pc = 0x309BE4u;
            goto label_309be4;
        }
    }
    ctx->pc = 0x309B64u;
    // 0x309b64: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x309b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x309b68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309b6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309B6Cu;
    {
        const bool branch_taken_0x309b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B6Cu;
        // 0x309b70: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b6c) {
            ctx->pc = 0x309B88u;
            goto label_309b88;
        }
    }
    ctx->pc = 0x309B74u;
    // 0x309b74: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x309b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x309b78: 0xc092782  jal         func_249E08
    ctx->pc = 0x309B78u;
    SET_GPR_U32(ctx, 31, 0x309B80u);
    ctx->pc = 0x309B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B78u;
    // 0x309b7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309B78u, 0x309B80u)) {
        return;
    }
    ctx->pc = 0x309B80u;
label_309b80:
    // 0x309b80: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x309B80u;
    {
        const bool branch_taken_0x309b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B80u;
        // 0x309b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b80) {
            ctx->pc = 0x309BDCu;
            goto label_309bdc;
        }
    }
    ctx->pc = 0x309B88u;
label_309b88:
    // 0x309b88: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x309b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309b8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309b90: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x309b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x309b94: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x309b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x309b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x309b9c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x309b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309ba0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x309ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x309ba4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x309ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309ba8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309BA8u;
    {
        const bool branch_taken_0x309ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BA8u;
        // 0x309bac: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ba8) {
            ctx->pc = 0x309BC4u;
            goto label_309bc4;
        }
    }
    ctx->pc = 0x309BB0u;
    // 0x309bb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x309bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309bb4: 0xc09275c  jal         func_249D70
    ctx->pc = 0x309BB4u;
    SET_GPR_U32(ctx, 31, 0x309BBCu);
    ctx->pc = 0x309BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BB4u;
    // 0x309bb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x309BB4u, 0x309BBCu)) {
        return;
    }
    ctx->pc = 0x309BBCu;
label_309bbc:
    // 0x309bbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309BBCu;
    {
        const bool branch_taken_0x309bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BBCu;
        // 0x309bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309bbc) {
            ctx->pc = 0x309BDCu;
            goto label_309bdc;
        }
    }
    ctx->pc = 0x309BC4u;
label_309bc4:
    // 0x309bc4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309BC4u;
    {
        const bool branch_taken_0x309bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BC4u;
        // 0x309bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309bc4) {
            ctx->pc = 0x309BDCu;
            goto label_309bdc;
        }
    }
    ctx->pc = 0x309BCCu;
    // 0x309bcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309bd0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x309bd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309bdc:
    // 0x309bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309BDCu;
    {
        const bool branch_taken_0x309bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309bdc) {
            ctx->pc = 0x309BECu;
            goto label_309bec;
        }
    }
    ctx->pc = 0x309BE4u;
label_309be4:
    // 0x309be4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309BE4u;
    {
        const bool branch_taken_0x309be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BE4u;
        // 0x309be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309be4) {
            ctx->pc = 0x309C04u;
            goto label_309c04;
        }
    }
    ctx->pc = 0x309BECu;
label_309bec:
    // 0x309bec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309BECu;
    {
        const bool branch_taken_0x309bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BECu;
        // 0x309bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309bec) {
            ctx->pc = 0x309C04u;
            goto label_309c04;
        }
    }
    ctx->pc = 0x309BF4u;
    // 0x309bf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309bf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x309bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x309bfc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309c04:
    // 0x309c04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x309c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309c08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x309c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309c0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309c10: 0x3e00008  jr          $ra
    ctx->pc = 0x309C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C10u;
        // 0x309c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C18u;
}
