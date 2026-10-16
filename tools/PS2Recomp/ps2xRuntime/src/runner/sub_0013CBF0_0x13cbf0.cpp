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

// Function: sub_0013CBF0
// Address: 0x13cbf0 - 0x13ccd0
void sub_0013CBF0_0x13cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CBF0_0x13cbf0");
#endif

    switch (ctx->pc) {
        case 0x13cbf0u: goto label_13cbf0;
        case 0x13cbf4u: goto label_13cbf4;
        case 0x13cbf8u: goto label_13cbf8;
        case 0x13cbfcu: goto label_13cbfc;
        case 0x13cc00u: goto label_13cc00;
        case 0x13cc04u: goto label_13cc04;
        case 0x13cc08u: goto label_13cc08;
        case 0x13cc0cu: goto label_13cc0c;
        case 0x13cc10u: goto label_13cc10;
        case 0x13cc14u: goto label_13cc14;
        case 0x13cc18u: goto label_13cc18;
        case 0x13cc1cu: goto label_13cc1c;
        case 0x13cc20u: goto label_13cc20;
        case 0x13cc24u: goto label_13cc24;
        case 0x13cc28u: goto label_13cc28;
        case 0x13cc2cu: goto label_13cc2c;
        case 0x13cc30u: goto label_13cc30;
        case 0x13cc34u: goto label_13cc34;
        case 0x13cc38u: goto label_13cc38;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc40u: goto label_13cc40;
        case 0x13cc44u: goto label_13cc44;
        case 0x13cc48u: goto label_13cc48;
        case 0x13cc4cu: goto label_13cc4c;
        case 0x13cc50u: goto label_13cc50;
        case 0x13cc54u: goto label_13cc54;
        case 0x13cc58u: goto label_13cc58;
        case 0x13cc5cu: goto label_13cc5c;
        case 0x13cc60u: goto label_13cc60;
        case 0x13cc64u: goto label_13cc64;
        case 0x13cc68u: goto label_13cc68;
        case 0x13cc6cu: goto label_13cc6c;
        case 0x13cc70u: goto label_13cc70;
        case 0x13cc74u: goto label_13cc74;
        case 0x13cc78u: goto label_13cc78;
        case 0x13cc7cu: goto label_13cc7c;
        case 0x13cc80u: goto label_13cc80;
        case 0x13cc84u: goto label_13cc84;
        case 0x13cc88u: goto label_13cc88;
        case 0x13cc8cu: goto label_13cc8c;
        case 0x13cc90u: goto label_13cc90;
        case 0x13cc94u: goto label_13cc94;
        case 0x13cc98u: goto label_13cc98;
        case 0x13cc9cu: goto label_13cc9c;
        case 0x13cca0u: goto label_13cca0;
        case 0x13cca4u: goto label_13cca4;
        case 0x13cca8u: goto label_13cca8;
        case 0x13ccacu: goto label_13ccac;
        case 0x13ccb0u: goto label_13ccb0;
        case 0x13ccb4u: goto label_13ccb4;
        case 0x13ccb8u: goto label_13ccb8;
        case 0x13ccbcu: goto label_13ccbc;
        case 0x13ccc0u: goto label_13ccc0;
        case 0x13ccc4u: goto label_13ccc4;
        case 0x13ccc8u: goto label_13ccc8;
        case 0x13ccccu: goto label_13cccc;
        default: break;
    }

    ctx->pc = 0x13cbf0u;

label_13cbf0:
    // 0x13cbf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13cbf4:
    // 0x13cbf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13cbf8:
    // 0x13cbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13cbfc:
    // 0x13cbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cc00:
    // 0x13cc00: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x13cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_13cc04:
    // 0x13cc04: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_13cc08:
    if (ctx->pc == 0x13CC08u) {
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC0Cu;
        goto label_13cc0c;
    }
    ctx->pc = 0x13CC04u;
    {
        const bool branch_taken_0x13cc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cc04) {
            ctx->pc = 0x13CC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CC04u;
            // 0x13cc08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CCC0u;
            goto label_13ccc0;
        }
    }
    ctx->pc = 0x13CC0Cu;
label_13cc0c:
    // 0x13cc0c: 0xc04f22c  jal         func_13C8B0
label_13cc10:
    if (ctx->pc == 0x13CC10u) {
        ctx->pc = 0x13CC14u;
        goto label_13cc14;
    }
    ctx->pc = 0x13CC0Cu;
    SET_GPR_U32(ctx, 31, 0x13CC14u);
    ctx->pc = 0x13C8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C8B0u, 0x13CC0Cu, 0x13CC14u)) {
        return;
    }
    ctx->pc = 0x13CC14u;
label_13cc14:
    // 0x13cc14: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_13cc18:
    // 0x13cc18: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_13cc1c:
    if (ctx->pc == 0x13CC1Cu) {
        ctx->pc = 0x13CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC18u;
        // 0x13cc1c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC20u;
        goto label_13cc20;
    }
    ctx->pc = 0x13CC18u;
    {
        const bool branch_taken_0x13cc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc18) {
            ctx->pc = 0x13CC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CC18u;
            // 0x13cc1c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CC88u;
            goto label_13cc88;
        }
    }
    ctx->pc = 0x13CC20u;
label_13cc20:
    // 0x13cc20: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x13cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_13cc24:
    // 0x13cc24: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_13cc28:
    // 0x13cc28: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_13cc2c:
    // 0x13cc2c: 0xc092e7c  jal         func_24B9F0
label_13cc30:
    if (ctx->pc == 0x13CC30u) {
        ctx->pc = 0x13CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC2Cu;
        // 0x13cc30: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC34u;
        goto label_13cc34;
    }
    ctx->pc = 0x13CC2Cu;
    SET_GPR_U32(ctx, 31, 0x13CC34u);
    ctx->pc = 0x13CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC2Cu;
    // 0x13cc30: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x13CC2Cu, 0x13CC34u)) {
        return;
    }
    ctx->pc = 0x13CC34u;
label_13cc34:
    // 0x13cc34: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x13cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_13cc38:
    // 0x13cc38: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_13cc3c:
    if (ctx->pc == 0x13CC3Cu) {
        ctx->pc = 0x13CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC38u;
        // 0x13cc3c: 0xc6000148  lwc1        $f0, 0x148($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC40u;
        goto label_13cc40;
    }
    ctx->pc = 0x13CC38u;
    {
        const bool branch_taken_0x13cc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc38) {
            ctx->pc = 0x13CC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CC38u;
            // 0x13cc3c: 0xc6000148  lwc1        $f0, 0x148($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CC64u;
            goto label_13cc64;
        }
    }
    ctx->pc = 0x13CC40u;
label_13cc40:
    // 0x13cc40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13cc44:
    // 0x13cc44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13cc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13cc48:
    // 0x13cc48: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x13cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13cc4c:
    // 0x13cc4c: 0xc6010164  lwc1        $f1, 0x164($s0)
    ctx->pc = 0x13cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13cc50:
    // 0x13cc50: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x13cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13cc54:
    // 0x13cc54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13cc54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13cc58:
    // 0x13cc58: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13cc58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_13cc5c:
    // 0x13cc5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_13cc60:
    if (ctx->pc == 0x13CC60u) {
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC64u;
        goto label_13cc64;
    }
    ctx->pc = 0x13CC5Cu;
    {
        const bool branch_taken_0x13cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc5c) {
            ctx->pc = 0x13CC6Cu;
            goto label_13cc6c;
        }
    }
    ctx->pc = 0x13CC64u;
label_13cc64:
    // 0x13cc64: 0xc601014c  lwc1        $f1, 0x14C($s0)
    ctx->pc = 0x13cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13cc68:
    // 0x13cc68: 0xc6020150  lwc1        $f2, 0x150($s0)
    ctx->pc = 0x13cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13cc6c:
    // 0x13cc6c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x13cc6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_13cc70:
    // 0x13cc70: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13cc70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_13cc74:
    // 0x13cc74: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13cc74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_13cc78:
    // 0x13cc78: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x13cc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_13cc7c:
    // 0x13cc7c: 0xe6010158  swc1        $f1, 0x158($s0)
    ctx->pc = 0x13cc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_13cc80:
    // 0x13cc80: 0xe602015c  swc1        $f2, 0x15C($s0)
    ctx->pc = 0x13cc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_13cc84:
    // 0x13cc84: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13cc88:
    // 0x13cc88: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x13cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cc8c:
    // 0x13cc8c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x13cc8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_13cc90:
    // 0x13cc90: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x13cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_13cc94:
    // 0x13cc94: 0x60f809  jalr        $v1
label_13cc98:
    if (ctx->pc == 0x13CC98u) {
        ctx->pc = 0x13CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC94u;
        // 0x13cc98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC9Cu;
        goto label_13cc9c;
    }
    ctx->pc = 0x13CC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CC9Cu);
        ctx->pc = 0x13CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC94u;
        // 0x13cc98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC94u, 0x13CC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CC9Cu;
label_13cc9c:
    // 0x13cc9c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x13cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_13cca0:
    // 0x13cca0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x13cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_13cca4:
    // 0x13cca4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x13cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_13cca8:
    // 0x13cca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13cca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ccac:
    // 0x13ccac: 0xc07fc98  jal         func_1FF260
label_13ccb0:
    if (ctx->pc == 0x13CCB0u) {
        ctx->pc = 0x13CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCACu;
        // 0x13ccb0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CCB4u;
        goto label_13ccb4;
    }
    ctx->pc = 0x13CCACu;
    SET_GPR_U32(ctx, 31, 0x13CCB4u);
    ctx->pc = 0x13CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCACu;
    // 0x13ccb0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13CCACu, 0x13CCB4u)) {
        return;
    }
    ctx->pc = 0x13CCB4u;
label_13ccb4:
    // 0x13ccb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ccb8:
    // 0x13ccb8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x13ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_13ccbc:
    // 0x13ccbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13ccbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ccc0:
    // 0x13ccc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ccc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ccc4:
    // 0x13ccc4: 0x3e00008  jr          $ra
label_13ccc8:
    if (ctx->pc == 0x13CCC8u) {
        ctx->pc = 0x13CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCC4u;
        // 0x13ccc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CCCCu;
        goto label_13cccc;
    }
    ctx->pc = 0x13CCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCC4u;
        // 0x13ccc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CCCCu;
label_13cccc:
    // 0x13cccc: 0x0  nop
    ctx->pc = 0x13ccccu;
    // NOP
    ctx->pc = 0x13ccd0u;
}
