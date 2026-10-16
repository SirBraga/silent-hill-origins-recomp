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

// Function: sub_00309C18
// Address: 0x309c18 - 0x309da8
void sub_00309C18_0x309c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309C18_0x309c18");
#endif

    switch (ctx->pc) {
        case 0x309c44u: goto label_309c44;
        case 0x309c70u: goto label_309c70;
        case 0x309c9cu: goto label_309c9c;
        case 0x309cf0u: goto label_309cf0;
        case 0x309d1cu: goto label_309d1c;
        default: break;
    }

    ctx->pc = 0x309c18u;

    // 0x309c18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x309c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x309c1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x309c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x309c20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x309c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x309c24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x309c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x309c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x309c2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x309c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x309c34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309c38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309c3c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x309C3Cu;
    SET_GPR_U32(ctx, 31, 0x309C44u);
    ctx->pc = 0x309C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309C3Cu;
    // 0x309c40: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x309C3Cu, 0x309C44u)) {
        return;
    }
    ctx->pc = 0x309C44u;
label_309c44:
    // 0x309c44: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x309C44u;
    {
        const bool branch_taken_0x309c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C44u;
        // 0x309c48: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c44) {
            ctx->pc = 0x309D68u;
            goto label_309d68;
        }
    }
    ctx->pc = 0x309C4Cu;
    // 0x309c4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x309c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x309c50: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x309c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x309c54: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x309C54u;
    {
        const bool branch_taken_0x309c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x309C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C54u;
        // 0x309c58: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c54) {
            ctx->pc = 0x309D68u;
            goto label_309d68;
        }
    }
    ctx->pc = 0x309C5Cu;
    // 0x309c5c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x309C5Cu;
    {
        const bool branch_taken_0x309c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C5Cu;
        // 0x309c60: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c5c) {
            ctx->pc = 0x309D68u;
            goto label_309d68;
        }
    }
    ctx->pc = 0x309C64u;
    // 0x309c64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309c68: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x309C68u;
    SET_GPR_U32(ctx, 31, 0x309C70u);
    ctx->pc = 0x309C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309C68u;
    // 0x309c6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x309C68u, 0x309C70u)) {
        return;
    }
    ctx->pc = 0x309C70u;
label_309c70:
    // 0x309c70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309C70u;
    {
        const bool branch_taken_0x309c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C70u;
        // 0x309c74: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c70) {
            ctx->pc = 0x309CA8u;
            goto label_309ca8;
        }
    }
    ctx->pc = 0x309C78u;
    // 0x309c78: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x309c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x309c7c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x309c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x309c80: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x309C80u;
    {
        const bool branch_taken_0x309c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x309C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C80u;
        // 0x309c84: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c80) {
            ctx->pc = 0x309CA8u;
            goto label_309ca8;
        }
    }
    ctx->pc = 0x309C88u;
    // 0x309c88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309C88u;
    {
        const bool branch_taken_0x309c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C88u;
        // 0x309c8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c88) {
            ctx->pc = 0x309CA8u;
            goto label_309ca8;
        }
    }
    ctx->pc = 0x309C90u;
    // 0x309c90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309c94: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x309C94u;
    SET_GPR_U32(ctx, 31, 0x309C9Cu);
    ctx->pc = 0x309C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309C94u;
    // 0x309c98: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x309C94u, 0x309C9Cu)) {
        return;
    }
    ctx->pc = 0x309C9Cu;
label_309c9c:
    // 0x309c9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309C9Cu;
    {
        const bool branch_taken_0x309c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C9Cu;
        // 0x309ca0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c9c) {
            ctx->pc = 0x309CB0u;
            goto label_309cb0;
        }
    }
    ctx->pc = 0x309CA4u;
    // 0x309ca4: 0x0  nop
    ctx->pc = 0x309ca4u;
    // NOP
label_309ca8:
    // 0x309ca8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x309CA8u;
    {
        const bool branch_taken_0x309ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CA8u;
        // 0x309cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ca8) {
            ctx->pc = 0x309CD8u;
            goto label_309cd8;
        }
    }
    ctx->pc = 0x309CB0u;
label_309cb0:
    // 0x309cb0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x309cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309cb4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x309cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309cb8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x309cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x309cbc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x309cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x309cc0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309CC0u;
    {
        const bool branch_taken_0x309cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CC0u;
        // 0x309cc4: 0xe6420008  swc1        $f2, 0x8($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cc0) {
            ctx->pc = 0x309CD4u;
            goto label_309cd4;
        }
    }
    ctx->pc = 0x309CC8u;
    // 0x309cc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309ccc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x309cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x309cd0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_309cd4:
    // 0x309cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309cd8:
    // 0x309cd8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x309CD8u;
    {
        const bool branch_taken_0x309cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CD8u;
        // 0x309cdc: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cd8) {
            ctx->pc = 0x309D68u;
            goto label_309d68;
        }
    }
    ctx->pc = 0x309CE0u;
    // 0x309ce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309ce4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309ce8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x309CE8u;
    SET_GPR_U32(ctx, 31, 0x309CF0u);
    ctx->pc = 0x309CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309CE8u;
    // 0x309cec: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x309CE8u, 0x309CF0u)) {
        return;
    }
    ctx->pc = 0x309CF0u;
label_309cf0:
    // 0x309cf0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309CF0u;
    {
        const bool branch_taken_0x309cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CF0u;
        // 0x309cf4: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cf0) {
            ctx->pc = 0x309D28u;
            goto label_309d28;
        }
    }
    ctx->pc = 0x309CF8u;
    // 0x309cf8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x309cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x309cfc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x309cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x309d00: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x309D00u;
    {
        const bool branch_taken_0x309d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x309D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D00u;
        // 0x309d04: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d00) {
            ctx->pc = 0x309D28u;
            goto label_309d28;
        }
    }
    ctx->pc = 0x309D08u;
    // 0x309d08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309D08u;
    {
        const bool branch_taken_0x309d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D08u;
        // 0x309d0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d08) {
            ctx->pc = 0x309D28u;
            goto label_309d28;
        }
    }
    ctx->pc = 0x309D10u;
    // 0x309d10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309d14: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x309D14u;
    SET_GPR_U32(ctx, 31, 0x309D1Cu);
    ctx->pc = 0x309D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309D14u;
    // 0x309d18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x309D14u, 0x309D1Cu)) {
        return;
    }
    ctx->pc = 0x309D1Cu;
label_309d1c:
    // 0x309d1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309D1Cu;
    {
        const bool branch_taken_0x309d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D1Cu;
        // 0x309d20: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d1c) {
            ctx->pc = 0x309D30u;
            goto label_309d30;
        }
    }
    ctx->pc = 0x309D24u;
    // 0x309d24: 0x0  nop
    ctx->pc = 0x309d24u;
    // NOP
label_309d28:
    // 0x309d28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x309D28u;
    {
        const bool branch_taken_0x309d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D28u;
        // 0x309d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d28) {
            ctx->pc = 0x309D60u;
            goto label_309d60;
        }
    }
    ctx->pc = 0x309D30u;
label_309d30:
    // 0x309d30: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x309d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d34: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x309d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x309d38: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x309d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x309d3c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x309d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309d40: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x309d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x309d44: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x309d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d48: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309D48u;
    {
        const bool branch_taken_0x309d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D48u;
        // 0x309d4c: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d48) {
            ctx->pc = 0x309D5Cu;
            goto label_309d5c;
        }
    }
    ctx->pc = 0x309D50u;
    // 0x309d50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309d54: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x309d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x309d58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_309d5c:
    // 0x309d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309d60:
    // 0x309d60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309D60u;
    {
        const bool branch_taken_0x309d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309d60) {
            ctx->pc = 0x309D70u;
            goto label_309d70;
        }
    }
    ctx->pc = 0x309D68u;
label_309d68:
    // 0x309d68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309D68u;
    {
        const bool branch_taken_0x309d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D68u;
        // 0x309d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d68) {
            ctx->pc = 0x309D88u;
            goto label_309d88;
        }
    }
    ctx->pc = 0x309D70u;
label_309d70:
    // 0x309d70: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309D70u;
    {
        const bool branch_taken_0x309d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D70u;
        // 0x309d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d70) {
            ctx->pc = 0x309D88u;
            goto label_309d88;
        }
    }
    ctx->pc = 0x309D78u;
    // 0x309d78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309d7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x309d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x309d80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309d88:
    // 0x309d88: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x309d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309d8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x309d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309d90: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x309d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309d94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309d98: 0x3e00008  jr          $ra
    ctx->pc = 0x309D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D98u;
        // 0x309d9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309DA0u;
    // 0x309da0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x309da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x309da4: 0x0  nop
    ctx->pc = 0x309da4u;
    // NOP
    ctx->pc = 0x309da8u;
}
