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

// Function: sub_001C0598
// Address: 0x1c0598 - 0x1c0738
void sub_001C0598_0x1c0598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0598_0x1c0598");
#endif

    ctx->pc = 0x1c0598u;

    // 0x1c0598: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c0598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c059c: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1c059cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1c05a0: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x1c05a4: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1c05a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1c05a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c05a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c05ac: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x1c05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1c05b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C05B0u;
    {
        const bool branch_taken_0x1c05b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05B0u;
        // 0x1c05b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05b0) {
            ctx->pc = 0x1C05C4u;
            goto label_1c05c4;
        }
    }
    ctx->pc = 0x1C05B8u;
    // 0x1c05b8: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1c05b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1c05bc: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1c05bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x1c05c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c05c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c05c4:
    // 0x1c05c4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c05c8: 0x3c0144f0  lui         $at, 0x44F0
    ctx->pc = 0x1c05c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17648 << 16));
    // 0x1c05cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c05ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c05d0: 0x3c014488  lui         $at, 0x4488
    ctx->pc = 0x1c05d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17544 << 16));
    // 0x1c05d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c05d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c05d8: 0x0  nop
    ctx->pc = 0x1c05d8u;
    // NOP
    // 0x1c05dc: 0x0  nop
    ctx->pc = 0x1c05dcu;
    // NOP
    // 0x1c05e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c05e0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c05e4: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1c05e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c05e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c05ec: 0x0  nop
    ctx->pc = 0x1c05ecu;
    // NOP
    // 0x1c05f0: 0x0  nop
    ctx->pc = 0x1c05f0u;
    // NOP
    // 0x1c05f4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1c05f4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x1c05f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c05f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c05fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1c05fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0600: 0x0  nop
    ctx->pc = 0x1c0600u;
    // NOP
    // 0x1c0604: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1C0604u;
    {
        const bool branch_taken_0x1c0604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0604) {
            ctx->pc = 0x1C0608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0604u;
            // 0x1c0608: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0670u;
            goto label_1c0670;
        }
    }
    ctx->pc = 0x1C060Cu;
    // 0x1c060c: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x1c0610: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1c0610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1c0614: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0618u;
    {
        const bool branch_taken_0x1c0618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0618u;
        // 0x1c061c: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0618) {
            ctx->pc = 0x1C062Cu;
            goto label_1c062c;
        }
    }
    ctx->pc = 0x1C0620u;
    // 0x1c0620: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1c0624: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1c0624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x1c0628: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c062c:
    // 0x1c062c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1c062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0630: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1c0630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1c0634: 0x0  nop
    ctx->pc = 0x1c0634u;
    // NOP
    // 0x1c0638: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c0638u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1c063c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c063cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0640: 0x0  nop
    ctx->pc = 0x1c0640u;
    // NOP
    // 0x1c0644: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0644u;
    {
        const bool branch_taken_0x1c0644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0644) {
            ctx->pc = 0x1C0648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0644u;
            // 0x1c0648: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C064Cu;
            goto label_1c064c;
        }
    }
    ctx->pc = 0x1C064Cu;
label_1c064c:
    // 0x1c064c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1c064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0650: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c0650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0654: 0x0  nop
    ctx->pc = 0x1c0654u;
    // NOP
    // 0x1c0658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c065c: 0x0  nop
    ctx->pc = 0x1c065cu;
    // NOP
    // 0x1c0660: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0660u;
    {
        const bool branch_taken_0x1c0660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0660) {
            ctx->pc = 0x1C0664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0660u;
            // 0x1c0664: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0684u;
            goto label_1c0684;
        }
    }
    ctx->pc = 0x1C0668u;
    // 0x1c0668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0668u;
    {
        const bool branch_taken_0x1c0668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0668u;
        // 0x1c066c: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0668) {
            ctx->pc = 0x1C0688u;
            goto label_1c0688;
        }
    }
    ctx->pc = 0x1C0670u;
label_1c0670:
    // 0x1c0670: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0678: 0x0  nop
    ctx->pc = 0x1c0678u;
    // NOP
    // 0x1c067c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c067cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0680: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1c0680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1c0684:
    // 0x1c0684: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c0684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0688:
    // 0x1c0688: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1c068c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c068cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0690: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1c0690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0694: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c0694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0698: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1c0698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c069c: 0x0  nop
    ctx->pc = 0x1c069cu;
    // NOP
    // 0x1c06a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C06A0u;
    {
        const bool branch_taken_0x1c06a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c06a0) {
            ctx->pc = 0x1C06A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C06A0u;
            // 0x1c06a4: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C06A8u;
            goto label_1c06a8;
        }
    }
    ctx->pc = 0x1C06A8u;
label_1c06a8:
    // 0x1c06a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c06a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c06ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c06acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c06b0: 0x0  nop
    ctx->pc = 0x1c06b0u;
    // NOP
    // 0x1c06b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c06b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c06b8: 0x0  nop
    ctx->pc = 0x1c06b8u;
    // NOP
    // 0x1c06bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C06BCu;
    {
        const bool branch_taken_0x1c06bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c06bc) {
            ctx->pc = 0x1C06C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C06BCu;
            // 0x1c06c0: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C06C4u;
            goto label_1c06c4;
        }
    }
    ctx->pc = 0x1C06C4u;
label_1c06c4:
    // 0x1c06c4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c06c8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1c06c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c06cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c06ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c06d0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c06d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c06d4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1c06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c06d8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c06d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c06dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c06dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c06e0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1c06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c06e4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c06e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c06e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c06e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c06ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c06ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c06f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c06f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c06f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c06f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c06f8: 0x0  nop
    ctx->pc = 0x1c06f8u;
    // NOP
    // 0x1c06fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c06fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0704: 0x0  nop
    ctx->pc = 0x1c0704u;
    // NOP
    // 0x1c0708: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c070c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c070cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0710: 0x0  nop
    ctx->pc = 0x1c0710u;
    // NOP
    // 0x1c0714: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c0714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c0718: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c0718u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c071c: 0x0  nop
    ctx->pc = 0x1c071cu;
    // NOP
    // 0x1c0720: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c0720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c0724: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1c0724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1c0728: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1c0728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1c072c: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x1c072cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1c0730: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0730u;
        // 0x1c0734: 0xe4c3000c  swc1        $f3, 0xC($a2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0738u;
}
