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

// Function: sub_001B2C20
// Address: 0x1b2c20 - 0x1b2df0
void sub_001B2C20_0x1b2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C20_0x1b2c20");
#endif

    switch (ctx->pc) {
        case 0x1b2c48u: goto label_1b2c48;
        case 0x1b2c68u: goto label_1b2c68;
        case 0x1b2c80u: goto label_1b2c80;
        case 0x1b2cdcu: goto label_1b2cdc;
        case 0x1b2cf4u: goto label_1b2cf4;
        case 0x1b2da8u: goto label_1b2da8;
        default: break;
    }

    ctx->pc = 0x1b2c20u;

    // 0x1b2c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b2c24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2c28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2c2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b2c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c30: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1b2c30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b2c34: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1b2c34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b2c38: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b2c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b2c3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2c40: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1B2C40u;
    SET_GPR_U32(ctx, 31, 0x1B2C48u);
    ctx->pc = 0x1B2C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C40u;
    // 0x1b2c44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1B2C40u, 0x1B2C48u)) {
        return;
    }
    ctx->pc = 0x1B2C48u;
label_1b2c48:
    // 0x1b2c48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b2c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b2c4c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b2c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c54: 0x8c468620  lw          $a2, -0x79E0($v0)
    ctx->pc = 0x1b2c54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F8620u));
    // 0x1b2c58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b2c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c5c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1b2c5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2c60: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1B2C60u;
    SET_GPR_U32(ctx, 31, 0x1B2C68u);
    ctx->pc = 0x1B2C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C60u;
    // 0x1b2c64: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1B2C60u, 0x1B2C68u)) {
        return;
    }
    ctx->pc = 0x1B2C68u;
label_1b2c68:
    // 0x1b2c68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2c70: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1B2C70u;
    {
        const bool branch_taken_0x1b2c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c70) {
            ctx->pc = 0x1B2C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C70u;
            // 0x1b2c74: 0x4614a800  add.s       $f0, $f21, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2DBCu;
            goto label_1b2dbc;
        }
    }
    ctx->pc = 0x1B2C78u;
    // 0x1b2c78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b2c80:
    // 0x1b2c80: 0x2c83000d  sltiu       $v1, $a0, 0xD
    ctx->pc = 0x1b2c80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1b2c84: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1B2C84u;
    {
        const bool branch_taken_0x1b2c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C84u;
        // 0x1b2c88: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c84) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2C8Cu;
    // 0x1b2c8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b2c90: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x1b2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x1b2c94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2c98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2c9c: 0x800008  jr          $a0
    ctx->pc = 0x1B2C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2CA4u: goto label_1b2ca4;
            case 0x1B2CB4u: goto label_1b2cb4;
            case 0x1B2CC4u: goto label_1b2cc4;
            case 0x1B2CE4u: goto label_1b2ce4;
            case 0x1B2CFCu: goto label_1b2cfc;
            case 0x1B2D10u: goto label_1b2d10;
            case 0x1B2D24u: goto label_1b2d24;
            case 0x1B2D38u: goto label_1b2d38;
            case 0x1B2D4Cu: goto label_1b2d4c;
            case 0x1B2D5Cu: goto label_1b2d5c;
            case 0x1B2D6Cu: goto label_1b2d6c;
            case 0x1B2D78u: goto label_1b2d78;
            case 0x1B2D84u: goto label_1b2d84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B2CA4u;
label_1b2ca4:
    // 0x1b2ca4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ca8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1b2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1b2cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2CACu;
    {
        const bool branch_taken_0x1b2cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CACu;
        // 0x1b2cb0: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cac) {
            ctx->pc = 0x1B2CD0u;
            goto label_1b2cd0;
        }
    }
    ctx->pc = 0x1B2CB4u;
label_1b2cb4:
    // 0x1b2cb4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b2cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2cb8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1b2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1b2cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2CBCu;
    {
        const bool branch_taken_0x1b2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CBCu;
        // 0x1b2cc0: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cbc) {
            ctx->pc = 0x1B2CD0u;
            goto label_1b2cd0;
        }
    }
    ctx->pc = 0x1B2CC4u;
label_1b2cc4:
    // 0x1b2cc4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b2cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2cc8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1b2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1b2ccc: 0x26250054  addiu       $a1, $s1, 0x54
    ctx->pc = 0x1b2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_1b2cd0:
    // 0x1b2cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b2cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cd4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1B2CD4u;
    SET_GPR_U32(ctx, 31, 0x1B2CDCu);
    ctx->pc = 0x1B2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CD4u;
    // 0x1b2cd8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1B2CD4u, 0x1B2CDCu)) {
        return;
    }
    ctx->pc = 0x1B2CDCu;
label_1b2cdc:
    // 0x1b2cdc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B2CDCu;
    {
        const bool branch_taken_0x1b2cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CDCu;
        // 0x1b2ce0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cdc) {
            ctx->pc = 0x1B2D90u;
            goto label_1b2d90;
        }
    }
    ctx->pc = 0x1B2CE4u;
label_1b2ce4:
    // 0x1b2ce4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cec: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1B2CECu;
    SET_GPR_U32(ctx, 31, 0x1B2CF4u);
    ctx->pc = 0x1B2CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CECu;
    // 0x1b2cf0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B2CECu, 0x1B2CF4u)) {
        return;
    }
    ctx->pc = 0x1B2CF4u;
label_1b2cf4:
    // 0x1b2cf4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B2CF4u;
    {
        const bool branch_taken_0x1b2cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CF4u;
        // 0x1b2cf8: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cf4) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2CFCu;
label_1b2cfc:
    // 0x1b2cfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2d08: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B2D08u;
    {
        const bool branch_taken_0x1b2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D08u;
        // 0x1b2d0c: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d08) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D10u;
label_1b2d10:
    // 0x1b2d10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2d1c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B2D1Cu;
    {
        const bool branch_taken_0x1b2d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D1Cu;
        // 0x1b2d20: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d1c) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D24u;
label_1b2d24:
    // 0x1b2d24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2d30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2D30u;
    {
        const bool branch_taken_0x1b2d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D30u;
        // 0x1b2d34: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d30) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D38u;
label_1b2d38:
    // 0x1b2d38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2d44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2D44u;
    {
        const bool branch_taken_0x1b2d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D44u;
        // 0x1b2d48: 0xe620006c  swc1        $f0, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d44) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D4Cu;
label_1b2d4c:
    // 0x1b2d4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2d54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B2D54u;
    {
        const bool branch_taken_0x1b2d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D54u;
        // 0x1b2d58: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d54) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D5Cu;
label_1b2d5c:
    // 0x1b2d5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2D64u;
    {
        const bool branch_taken_0x1b2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D64u;
        // 0x1b2d68: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d64) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D6Cu;
label_1b2d6c:
    // 0x1b2d6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2D70u;
    {
        const bool branch_taken_0x1b2d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D70u;
        // 0x1b2d74: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d70) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D78u;
label_1b2d78:
    // 0x1b2d78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2D7Cu;
    {
        const bool branch_taken_0x1b2d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D7Cu;
        // 0x1b2d80: 0xc4560008  lwc1        $f22, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d7c) {
            ctx->pc = 0x1B2D8Cu;
            goto label_1b2d8c;
        }
    }
    ctx->pc = 0x1B2D84u;
label_1b2d84:
    // 0x1b2d84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d88: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x1b2d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b2d8c:
    // 0x1b2d8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2d90:
    // 0x1b2d90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b2d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2d9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2da0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1B2DA0u;
    SET_GPR_U32(ctx, 31, 0x1B2DA8u);
    ctx->pc = 0x1B2DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DA0u;
    // 0x1b2da4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1B2DA0u, 0x1B2DA8u)) {
        return;
    }
    ctx->pc = 0x1B2DA8u;
label_1b2da8:
    // 0x1b2da8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2dac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2db0: 0x5460ffb3  bnel        $v1, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1B2DB0u;
    {
        const bool branch_taken_0x1b2db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2db0) {
            ctx->pc = 0x1B2DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2DB0u;
            // 0x1b2db4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2c80;
        }
    }
    ctx->pc = 0x1B2DB8u;
    // 0x1b2db8: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x1b2db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_1b2dbc:
    // 0x1b2dbc: 0xe635007c  swc1        $f21, 0x7C($s1)
    ctx->pc = 0x1b2dbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x1b2dc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2dc8: 0x46160040  add.s       $f1, $f0, $f22
    ctx->pc = 0x1b2dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1b2dcc: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x1b2dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x1b2dd0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1b2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b2dd4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1b2dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b2dd8: 0xe6210080  swc1        $f1, 0x80($s1)
    ctx->pc = 0x1b2dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x1b2ddc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2de0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b2de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DE4u;
        // 0x1b2de8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2DECu;
    // 0x1b2dec: 0x0  nop
    ctx->pc = 0x1b2decu;
    // NOP
    ctx->pc = 0x1b2df0u;
}
