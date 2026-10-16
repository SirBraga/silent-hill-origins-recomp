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

// Function: sub_00101008
// Address: 0x101008 - 0x101200
void sub_00101008_0x101008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101008_0x101008");
#endif

    switch (ctx->pc) {
        case 0x101030u: goto label_101030;
        case 0x101070u: goto label_101070;
        case 0x101078u: goto label_101078;
        case 0x1010c8u: goto label_1010c8;
        case 0x1010f4u: goto label_1010f4;
        case 0x101144u: goto label_101144;
        case 0x101170u: goto label_101170;
        case 0x10117cu: goto label_10117c;
        case 0x1011a0u: goto label_1011a0;
        case 0x1011a8u: goto label_1011a8;
        case 0x1011ccu: goto label_1011cc;
        case 0x1011e0u: goto label_1011e0;
        default: break;
    }

    ctx->pc = 0x101008u;

    // 0x101008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x101008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10100c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x101010: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x101010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x101014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x101018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10101c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10101cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x101020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101024: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x101024u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x101028: 0xc080d20  jal         func_203480
    ctx->pc = 0x101028u;
    SET_GPR_U32(ctx, 31, 0x101030u);
    ctx->pc = 0x10102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101028u;
    // 0x10102c: 0xe7b50048  swc1        $f21, 0x48($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203480u, 0x101028u, 0x101030u)) {
        return;
    }
    ctx->pc = 0x101030u;
label_101030:
    // 0x101030: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x101030u;
    {
        const bool branch_taken_0x101030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101030u;
        // 0x101034: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101030) {
            ctx->pc = 0x1011E0u;
            goto label_1011e0;
        }
    }
    ctx->pc = 0x101038u;
    // 0x101038: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x101038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10103c: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x10103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101040: 0xc60101c4  lwc1        $f1, 0x1C4($s0)
    ctx->pc = 0x101040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101044: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x101044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x101048: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x10104c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10104cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x101050: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x101050u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x101054: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x101054u;
    {
        const bool branch_taken_0x101054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x101058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101054u;
        // 0x101058: 0x4601a582  mul.s       $f22, $f20, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101054) {
            ctx->pc = 0x10117Cu;
            goto label_10117c;
        }
    }
    ctx->pc = 0x10105Cu;
    // 0x10105c: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x101060: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x101060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x101064: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x101064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x101068: 0xc09d64c  jal         func_275930
    ctx->pc = 0x101068u;
    SET_GPR_U32(ctx, 31, 0x101070u);
    ctx->pc = 0x10106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101068u;
    // 0x10106c: 0xae0001d8  sw          $zero, 0x1D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x101068u, 0x101070u)) {
        return;
    }
    ctx->pc = 0x101070u;
label_101070:
    // 0x101070: 0xc040480  jal         func_101200
    ctx->pc = 0x101070u;
    SET_GPR_U32(ctx, 31, 0x101078u);
    ctx->pc = 0x101074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101070u;
    // 0x101074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101200u, 0x101070u, 0x101078u)) {
        return;
    }
    ctx->pc = 0x101078u;
label_101078:
    // 0x101078: 0xc60001b4  lwc1        $f0, 0x1B4($s0)
    ctx->pc = 0x101078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10107c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10107cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x101080: 0x0  nop
    ctx->pc = 0x101080u;
    // NOP
    // 0x101084: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x101084u;
    {
        const bool branch_taken_0x101084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x101084) {
            ctx->pc = 0x101088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101084u;
            // 0x101088: 0xc60001bc  lwc1        $f0, 0x1BC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1010F8u;
            goto label_1010f8;
        }
    }
    ctx->pc = 0x10108Cu;
    // 0x10108c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x10108cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x101090: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x101094: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x101094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x101098: 0x50510017  beql        $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x101098u;
    {
        const bool branch_taken_0x101098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x101098) {
            ctx->pc = 0x10109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101098u;
            // 0x10109c: 0xc60001bc  lwc1        $f0, 0x1BC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1010F8u;
            goto label_1010f8;
        }
    }
    ctx->pc = 0x1010A0u;
    // 0x1010a0: 0xc60c01b0  lwc1        $f12, 0x1B0($s0)
    ctx->pc = 0x1010a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1010a4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x1010a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1010a8: 0x0  nop
    ctx->pc = 0x1010a8u;
    // NOP
    // 0x1010ac: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1010acu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x1010b0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1010b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1010b4: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1010b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1010b8: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x1010b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1010bc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1010bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1010c0: 0xc09d938  jal         func_2764E0
    ctx->pc = 0x1010C0u;
    SET_GPR_U32(ctx, 31, 0x1010C8u);
    ctx->pc = 0x1010C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010C0u;
    // 0x1010c4: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2764E0u, 0x1010C0u, 0x1010C8u)) {
        return;
    }
    ctx->pc = 0x1010C8u;
label_1010c8:
    // 0x1010c8: 0xc60001b4  lwc1        $f0, 0x1B4($s0)
    ctx->pc = 0x1010c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1010cc: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1010ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1010d0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1010d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1010d4: 0x0  nop
    ctx->pc = 0x1010d4u;
    // NOP
    // 0x1010d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1010D8u;
    {
        const bool branch_taken_0x1010d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1010DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010D8u;
        // 0x1010dc: 0xe60001b4  swc1        $f0, 0x1B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010d8) {
            ctx->pc = 0x1010F4u;
            goto label_1010f4;
        }
    }
    ctx->pc = 0x1010E0u;
    // 0x1010e0: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x1010e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1010e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010e8: 0xae1101a4  sw          $s1, 0x1A4($s0)
    ctx->pc = 0x1010e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 17));
    // 0x1010ec: 0xc040852  jal         func_102148
    ctx->pc = 0x1010ECu;
    SET_GPR_U32(ctx, 31, 0x1010F4u);
    ctx->pc = 0x1010F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010ECu;
    // 0x1010f0: 0xae0201a0  sw          $v0, 0x1A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102148u, 0x1010ECu, 0x1010F4u)) {
        return;
    }
    ctx->pc = 0x1010F4u;
label_1010f4:
    // 0x1010f4: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1010f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1010f8:
    // 0x1010f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1010f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1010fc: 0x0  nop
    ctx->pc = 0x1010fcu;
    // NOP
    // 0x101100: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x101100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x101104: 0x0  nop
    ctx->pc = 0x101104u;
    // NOP
    // 0x101108: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x101108u;
    {
        const bool branch_taken_0x101108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x101108) {
            ctx->pc = 0x10110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101108u;
            // 0x10110c: 0xae0002a8  sw          $zero, 0x2A8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101174u;
            goto label_101174;
        }
    }
    ctx->pc = 0x101110u;
    // 0x101110: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x101110u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x101114: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x101118: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x101118u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x10111c: 0x50510015  beql        $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10111Cu;
    {
        const bool branch_taken_0x10111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x10111c) {
            ctx->pc = 0x101120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10111Cu;
            // 0x101120: 0xae0002a8  sw          $zero, 0x2A8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101174u;
            goto label_101174;
        }
    }
    ctx->pc = 0x101124u;
    // 0x101124: 0xc60c01b8  lwc1        $f12, 0x1B8($s0)
    ctx->pc = 0x101124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x101128: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x101128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x10112c: 0x0  nop
    ctx->pc = 0x10112cu;
    // NOP
    // 0x101130: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x101130u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x101134: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x101134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x101138: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x101138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10113c: 0xc09d938  jal         func_2764E0
    ctx->pc = 0x10113Cu;
    SET_GPR_U32(ctx, 31, 0x101144u);
    ctx->pc = 0x101140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10113Cu;
    // 0x101140: 0x8e060194  lw          $a2, 0x194($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2764E0u, 0x10113Cu, 0x101144u)) {
        return;
    }
    ctx->pc = 0x101144u;
label_101144:
    // 0x101144: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x101144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101148: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x101148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x10114c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x10114cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x101150: 0x0  nop
    ctx->pc = 0x101150u;
    // NOP
    // 0x101154: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x101154u;
    {
        const bool branch_taken_0x101154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x101158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101154u;
        // 0x101158: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101154) {
            ctx->pc = 0x101170u;
            goto label_101170;
        }
    }
    ctx->pc = 0x10115Cu;
    // 0x10115c: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x10115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x101160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101164: 0xae1101ac  sw          $s1, 0x1AC($s0)
    ctx->pc = 0x101164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 17));
    // 0x101168: 0xc04087a  jal         func_1021E8
    ctx->pc = 0x101168u;
    SET_GPR_U32(ctx, 31, 0x101170u);
    ctx->pc = 0x10116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101168u;
    // 0x10116c: 0xae0201a8  sw          $v0, 0x1A8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1021E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1021E8u, 0x101168u, 0x101170u)) {
        return;
    }
    ctx->pc = 0x101170u;
label_101170:
    // 0x101170: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x101170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
label_101174:
    // 0x101174: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x101174u;
    SET_GPR_U32(ctx, 31, 0x10117Cu);
    ctx->pc = 0x101178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101174u;
    // 0x101178: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x101174u, 0x10117Cu)) {
        return;
    }
    ctx->pc = 0x10117Cu;
label_10117c:
    // 0x10117c: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x10117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x101180: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101180u;
    {
        const bool branch_taken_0x101180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101180u;
        // 0x101184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101180) {
            ctx->pc = 0x1011A8u;
            goto label_1011a8;
        }
    }
    ctx->pc = 0x101188u;
    // 0x101188: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x10118c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10118Cu;
    {
        const bool branch_taken_0x10118c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x101190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10118Cu;
        // 0x101190: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10118c) {
            ctx->pc = 0x1011A0u;
            goto label_1011a0;
        }
    }
    ctx->pc = 0x101194u;
    // 0x101194: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x101194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x101198: 0xc09d64c  jal         func_275930
    ctx->pc = 0x101198u;
    SET_GPR_U32(ctx, 31, 0x1011A0u);
    ctx->pc = 0x10119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101198u;
    // 0x10119c: 0x8e04019c  lw          $a0, 0x19C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x101198u, 0x1011A0u)) {
        return;
    }
    ctx->pc = 0x1011A0u;
label_1011a0:
    // 0x1011a0: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x1011A0u;
    SET_GPR_U32(ctx, 31, 0x1011A8u);
    ctx->pc = 0x1011A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011A0u;
    // 0x1011a4: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x1011A0u, 0x1011A8u)) {
        return;
    }
    ctx->pc = 0x1011A8u;
label_1011a8:
    // 0x1011a8: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x1011a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1011ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1011acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1011b0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1011B0u;
    {
        const bool branch_taken_0x1011b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1011b0) {
            ctx->pc = 0x1011C4u;
            goto label_1011c4;
        }
    }
    ctx->pc = 0x1011B8u;
    // 0x1011b8: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1011bc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1011BCu;
    {
        const bool branch_taken_0x1011bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1011bc) {
            ctx->pc = 0x1011C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1011BCu;
            // 0x1011c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1011E4u;
            goto label_1011e4;
        }
    }
    ctx->pc = 0x1011C4u;
label_1011c4:
    // 0x1011c4: 0xc040ad4  jal         func_102B50
    ctx->pc = 0x1011C4u;
    SET_GPR_U32(ctx, 31, 0x1011CCu);
    ctx->pc = 0x1011C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011C4u;
    // 0x1011c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102B50u, 0x1011C4u, 0x1011CCu)) {
        return;
    }
    ctx->pc = 0x1011CCu;
label_1011cc:
    // 0x1011cc: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x1011ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1011d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1011D0u;
    {
        const bool branch_taken_0x1011d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011D0u;
        // 0x1011d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011d0) {
            ctx->pc = 0x1011E4u;
            goto label_1011e4;
        }
    }
    ctx->pc = 0x1011D8u;
    // 0x1011d8: 0xc041fd6  jal         func_107F58
    ctx->pc = 0x1011D8u;
    SET_GPR_U32(ctx, 31, 0x1011E0u);
    ctx->pc = 0x107F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107F58u, 0x1011D8u, 0x1011E0u)) {
        return;
    }
    ctx->pc = 0x1011E0u;
label_1011e0:
    // 0x1011e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1011e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1011e4:
    // 0x1011e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1011e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1011e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1011e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1011ec: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1011ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1011f0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1011f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1011f4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1011f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1011f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1011F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1011FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F8u;
        // 0x1011fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1011F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101200u;
}
