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

// Function: sub_00133238
// Address: 0x133238 - 0x133440
void sub_00133238_0x133238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133238_0x133238");
#endif

    switch (ctx->pc) {
        case 0x133310u: goto label_133310;
        case 0x13331cu: goto label_13331c;
        case 0x133328u: goto label_133328;
        case 0x133334u: goto label_133334;
        case 0x133340u: goto label_133340;
        case 0x13334cu: goto label_13334c;
        case 0x133380u: goto label_133380;
        case 0x13341cu: goto label_13341c;
        default: break;
    }

    ctx->pc = 0x133238u;

    // 0x133238: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13323c: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x13323cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x133240: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x133240u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x133244: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x133244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x133248: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x133248u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x13324c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x133250: 0x4617b036  c.le.s      $f22, $f23
    ctx->pc = 0x133250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133258: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x133258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13325c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13325cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133260: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x133260u;
    {
        const bool branch_taken_0x133260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133260u;
        // 0x133264: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133260) {
            ctx->pc = 0x133284u;
            goto label_133284;
        }
    }
    ctx->pc = 0x133268u;
    // 0x133268: 0xe6171998  swc1        $f23, 0x1998($s0)
    ctx->pc = 0x133268u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6552), bits); }
    // 0x13326c: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x13326cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x133270: 0xe6171994  swc1        $f23, 0x1994($s0)
    ctx->pc = 0x133270u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6548), bits); }
    // 0x133274: 0xe6171990  swc1        $f23, 0x1990($s0)
    ctx->pc = 0x133274u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6544), bits); }
    // 0x133278: 0xe61719a4  swc1        $f23, 0x19A4($s0)
    ctx->pc = 0x133278u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6564), bits); }
    // 0x13327c: 0xe61719a0  swc1        $f23, 0x19A0($s0)
    ctx->pc = 0x13327cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6560), bits); }
    // 0x133280: 0xe617199c  swc1        $f23, 0x199C($s0)
    ctx->pc = 0x133280u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6556), bits); }
label_133284:
    // 0x133284: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x133284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x133288: 0x460db142  mul.s       $f5, $f22, $f13
    ctx->pc = 0x133288u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[13]);
    // 0x13328c: 0xe45686a4  swc1        $f22, -0x795C($v0)
    ctx->pc = 0x13328cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3386A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3386A4u, _value); } while (0); }
    // 0x133290: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x133290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x133294: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x133294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x133298: 0xc60419ac  lwc1        $f4, 0x19AC($s0)
    ctx->pc = 0x133298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13329c: 0xc60019b0  lwc1        $f0, 0x19B0($s0)
    ctx->pc = 0x13329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1332a0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1332a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1332a4: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1332a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1332a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1332a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1332ac: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1332acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1332b0: 0xc6091990  lwc1        $f9, 0x1990($s0)
    ctx->pc = 0x1332b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1332b4: 0xc6081994  lwc1        $f8, 0x1994($s0)
    ctx->pc = 0x1332b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1332b8: 0x460322c2  mul.s       $f11, $f4, $f3
    ctx->pc = 0x1332b8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1332bc: 0xc6021998  lwc1        $f2, 0x1998($s0)
    ctx->pc = 0x1332bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1332c0: 0x46062a82  mul.s       $f10, $f5, $f6
    ctx->pc = 0x1332c0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1332c4: 0xc607199c  lwc1        $f7, 0x199C($s0)
    ctx->pc = 0x1332c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1332c8: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1332c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1332cc: 0xc60019a0  lwc1        $f0, 0x19A0($s0)
    ctx->pc = 0x1332ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1332d0: 0x46062182  mul.s       $f6, $f4, $f6
    ctx->pc = 0x1332d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1332d4: 0xc60119a4  lwc1        $f1, 0x19A4($s0)
    ctx->pc = 0x1332d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1332d8: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x1332d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x1332dc: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x1332dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1332e0: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x1332e0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x1332e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1332e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1332e8: 0xe6021998  swc1        $f2, 0x1998($s0)
    ctx->pc = 0x1332e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6552), bits); }
    // 0x1332ec: 0x46044a40  add.s       $f9, $f9, $f4
    ctx->pc = 0x1332ecu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x1332f0: 0xe60019a0  swc1        $f0, 0x19A0($s0)
    ctx->pc = 0x1332f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6560), bits); }
    // 0x1332f4: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x1332f4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x1332f8: 0x46004306  mov.s       $f12, $f8
    ctx->pc = 0x1332f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[8]);
    // 0x1332fc: 0xe60119a4  swc1        $f1, 0x19A4($s0)
    ctx->pc = 0x1332fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6564), bits); }
    // 0x133300: 0xe6091990  swc1        $f9, 0x1990($s0)
    ctx->pc = 0x133300u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6544), bits); }
    // 0x133304: 0xe607199c  swc1        $f7, 0x199C($s0)
    ctx->pc = 0x133304u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6556), bits); }
    // 0x133308: 0xc09b164  jal         func_26C590
    ctx->pc = 0x133308u;
    SET_GPR_U32(ctx, 31, 0x133310u);
    ctx->pc = 0x13330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133308u;
    // 0x13330c: 0xe6081994  swc1        $f8, 0x1994($s0) (Delay Slot)
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x133308u, 0x133310u)) {
        return;
    }
    ctx->pc = 0x133310u;
label_133310:
    // 0x133310: 0xc60c1998  lwc1        $f12, 0x1998($s0)
    ctx->pc = 0x133310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133314: 0xc09b164  jal         func_26C590
    ctx->pc = 0x133314u;
    SET_GPR_U32(ctx, 31, 0x13331Cu);
    ctx->pc = 0x133318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133314u;
    // 0x133318: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x133314u, 0x13331Cu)) {
        return;
    }
    ctx->pc = 0x13331Cu;
label_13331c:
    // 0x13331c: 0xc60c1990  lwc1        $f12, 0x1990($s0)
    ctx->pc = 0x13331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133320: 0xc09b164  jal         func_26C590
    ctx->pc = 0x133320u;
    SET_GPR_U32(ctx, 31, 0x133328u);
    ctx->pc = 0x133324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133320u;
    // 0x133324: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x133320u, 0x133328u)) {
        return;
    }
    ctx->pc = 0x133328u;
label_133328:
    // 0x133328: 0xc60c19a0  lwc1        $f12, 0x19A0($s0)
    ctx->pc = 0x133328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13332c: 0xc09b164  jal         func_26C590
    ctx->pc = 0x13332Cu;
    SET_GPR_U32(ctx, 31, 0x133334u);
    ctx->pc = 0x133330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13332Cu;
    // 0x133330: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x13332Cu, 0x133334u)) {
        return;
    }
    ctx->pc = 0x133334u;
label_133334:
    // 0x133334: 0xc60c19a4  lwc1        $f12, 0x19A4($s0)
    ctx->pc = 0x133334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133338: 0xc09b164  jal         func_26C590
    ctx->pc = 0x133338u;
    SET_GPR_U32(ctx, 31, 0x133340u);
    ctx->pc = 0x13333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133338u;
    // 0x13333c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x133338u, 0x133340u)) {
        return;
    }
    ctx->pc = 0x133340u;
label_133340:
    // 0x133340: 0xc60c199c  lwc1        $f12, 0x199C($s0)
    ctx->pc = 0x133340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133344: 0xc09b164  jal         func_26C590
    ctx->pc = 0x133344u;
    SET_GPR_U32(ctx, 31, 0x13334Cu);
    ctx->pc = 0x133348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133344u;
    // 0x133348: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x133344u, 0x13334Cu)) {
        return;
    }
    ctx->pc = 0x13334Cu;
label_13334c:
    // 0x13334c: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x13334cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133350: 0x0  nop
    ctx->pc = 0x133350u;
    // NOP
    // 0x133354: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x133354u;
    {
        const bool branch_taken_0x133354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133354u;
        // 0x133358: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133354) {
            ctx->pc = 0x133360u;
            goto label_133360;
        }
    }
    ctx->pc = 0x13335Cu;
    // 0x13335c: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x13335cu;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_133360:
    // 0x133360: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x133360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133364: 0x0  nop
    ctx->pc = 0x133364u;
    // NOP
    // 0x133368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x133368u;
    {
        const bool branch_taken_0x133368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133368) {
            ctx->pc = 0x13336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133368u;
            // 0x13336c: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x133370u;
            goto label_133370;
        }
    }
    ctx->pc = 0x133370u;
label_133370:
    // 0x133370: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x133370u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x133374: 0xc60d19b4  lwc1        $f13, 0x19B4($s0)
    ctx->pc = 0x133374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x133378: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x133378u;
    SET_GPR_U32(ctx, 31, 0x133380u);
    ctx->pc = 0x13337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133378u;
    // 0x13337c: 0x4616ad42  mul.s       $f21, $f21, $f22 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x133378u, 0x133380u)) {
        return;
    }
    ctx->pc = 0x133380u;
label_133380:
    // 0x133380: 0xc60419a8  lwc1        $f4, 0x19A8($s0)
    ctx->pc = 0x133380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x133384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13338c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13338cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133390: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x133390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x133394: 0xc60219b8  lwc1        $f2, 0x19B8($s0)
    ctx->pc = 0x133394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133398: 0x4604a942  mul.s       $f5, $f21, $f4
    ctx->pc = 0x133398u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x13339c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x13339cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1333a0: 0xc60319bc  lwc1        $f3, 0x19BC($s0)
    ctx->pc = 0x1333a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1333a4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1333a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1333a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1333ac: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1333acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1333b0: 0xc60019c0  lwc1        $f0, 0x19C0($s0)
    ctx->pc = 0x1333b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1333b4: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x1333b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x1333b8: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x1333b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1333bc: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1333bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1333c0: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x1333c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1333c4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1333c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1333c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1333c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1333cc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1333ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1333d0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1333d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1333d4: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1333d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1333d8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1333d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x1333dc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1333dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1333e0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1333e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1333e4: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x1333e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1333e8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1333e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1333ec: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1333ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1333f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1333f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1333f4: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x1333f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1333f8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1333f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1333fc: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1333fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133400: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x133400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x133404: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x133404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x133408: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x133408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13340c: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x13340cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x133410: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x133410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133414: 0xc079206  jal         func_1E4818
    ctx->pc = 0x133414u;
    SET_GPR_U32(ctx, 31, 0x13341Cu);
    ctx->pc = 0x133418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133414u;
    // 0x133418: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4818u, 0x133414u, 0x13341Cu)) {
        return;
    }
    ctx->pc = 0x13341Cu;
label_13341c:
    // 0x13341c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13341cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x133420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133424: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x133424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x133428: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x133428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13342c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x133430: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x133430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x133434: 0x3e00008  jr          $ra
    ctx->pc = 0x133434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133434u;
        // 0x133438: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13343Cu;
    // 0x13343c: 0x0  nop
    ctx->pc = 0x13343cu;
    // NOP
    ctx->pc = 0x133440u;
}
