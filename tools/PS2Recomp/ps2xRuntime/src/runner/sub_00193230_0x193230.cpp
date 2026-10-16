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

// Function: sub_00193230
// Address: 0x193230 - 0x193a30
void sub_00193230_0x193230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193230_0x193230");
#endif

    switch (ctx->pc) {
        case 0x1932a4u: goto label_1932a4;
        case 0x1932b0u: goto label_1932b0;
        case 0x193300u: goto label_193300;
        case 0x193308u: goto label_193308;
        case 0x193310u: goto label_193310;
        case 0x1933e0u: goto label_1933e0;
        case 0x1933f0u: goto label_1933f0;
        case 0x193400u: goto label_193400;
        case 0x193420u: goto label_193420;
        case 0x193440u: goto label_193440;
        case 0x193460u: goto label_193460;
        case 0x193480u: goto label_193480;
        case 0x1934a0u: goto label_1934a0;
        case 0x1934b0u: goto label_1934b0;
        case 0x1934c0u: goto label_1934c0;
        case 0x1934e4u: goto label_1934e4;
        case 0x193800u: goto label_193800;
        case 0x19392cu: goto label_19392c;
        case 0x1939c8u: goto label_1939c8;
        case 0x1939dcu: goto label_1939dc;
        default: break;
    }

    ctx->pc = 0x193230u;

    // 0x193230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x193230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x193234: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x193238: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x193238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19323c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x193240: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x193240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x193244: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193248: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x193248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x19324c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x19324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x193250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193254: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x193254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x193258: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x193258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x19325c: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x19325cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x193260: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x193260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x193264: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193264u;
    {
        const bool branch_taken_0x193264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x193268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193264u;
        // 0x193268: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193264) {
            ctx->pc = 0x19327Cu;
            goto label_19327c;
        }
    }
    ctx->pc = 0x19326Cu;
    // 0x19326c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x193270: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x193270u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8898u));
    // 0x193274: 0x14a30093  bne         $a1, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x193274u;
    {
        const bool branch_taken_0x193274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x193278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193274u;
        // 0x193278: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193274) {
            ctx->pc = 0x1934C4u;
            goto label_1934c4;
        }
    }
    ctx->pc = 0x19327Cu;
label_19327c:
    // 0x19327c: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x193280: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x193284: 0xa2200168  sb          $zero, 0x168($s1)
    ctx->pc = 0x193284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 360), (uint8_t)GPR_U32(ctx, 0));
    // 0x193288: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x193288u;
    {
        const bool branch_taken_0x193288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193288u;
        // 0x19328c: 0xa2200169  sb          $zero, 0x169($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 361), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193288) {
            ctx->pc = 0x1932F0u;
            goto label_1932f0;
        }
    }
    ctx->pc = 0x193290u;
    // 0x193290: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x193290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193294: 0x26340140  addiu       $s4, $s1, 0x140
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x193298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x193298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19329c: 0xc0648b4  jal         func_1922D0
    ctx->pc = 0x19329Cu;
    SET_GPR_U32(ctx, 31, 0x1932A4u);
    ctx->pc = 0x1932A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19329Cu;
    // 0x1932a0: 0x26300154  addiu       $s0, $s1, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1922D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1922D0u, 0x19329Cu, 0x1932A4u)) {
        return;
    }
    ctx->pc = 0x1932A4u;
label_1932a4:
    // 0x1932a4: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1932a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1932a8: 0xc0648b4  jal         func_1922D0
    ctx->pc = 0x1932A8u;
    SET_GPR_U32(ctx, 31, 0x1932B0u);
    ctx->pc = 0x1932ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932A8u;
    // 0x1932ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1922D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1922D0u, 0x1932A8u, 0x1932B0u)) {
        return;
    }
    ctx->pc = 0x1932B0u;
label_1932b0:
    // 0x1932b0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1932b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1932b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1932b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1932b8: 0x0  nop
    ctx->pc = 0x1932b8u;
    // NOP
    // 0x1932bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1932bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1932c0: 0x0  nop
    ctx->pc = 0x1932c0u;
    // NOP
    // 0x1932c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1932C4u;
    {
        const bool branch_taken_0x1932c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1932C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932C4u;
        // 0x1932c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932c4) {
            ctx->pc = 0x1932D0u;
            goto label_1932d0;
        }
    }
    ctx->pc = 0x1932CCu;
    // 0x1932cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1932d0:
    // 0x1932d0: 0xa2220168  sb          $v0, 0x168($s1)
    ctx->pc = 0x1932d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 360), (uint8_t)GPR_U32(ctx, 2));
    // 0x1932d4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1932d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1932d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1932d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1932dc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1932dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1932e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1932e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1932e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1932e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1932e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1932e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1932ec: 0xa2220169  sb          $v0, 0x169($s1)
    ctx->pc = 0x1932ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 361), (uint8_t)GPR_U32(ctx, 2));
label_1932f0:
    // 0x1932f0: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x1932f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1932f4: 0x26260168  addiu       $a2, $s1, 0x168
    ctx->pc = 0x1932f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    // 0x1932f8: 0xc0a5088  jal         func_294220
    ctx->pc = 0x1932F8u;
    SET_GPR_U32(ctx, 31, 0x193300u);
    ctx->pc = 0x1932FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932F8u;
    // 0x1932fc: 0x8e240068  lw          $a0, 0x68($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294220u, 0x1932F8u, 0x193300u)) {
        return;
    }
    ctx->pc = 0x193300u;
label_193300:
    // 0x193300: 0xc065116  jal         func_194458
    ctx->pc = 0x193300u;
    SET_GPR_U32(ctx, 31, 0x193308u);
    ctx->pc = 0x193304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193300u;
    // 0x193304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194458u, 0x193300u, 0x193308u)) {
        return;
    }
    ctx->pc = 0x193308u;
label_193308:
    // 0x193308: 0xc064fa4  jal         func_193E90
    ctx->pc = 0x193308u;
    SET_GPR_U32(ctx, 31, 0x193310u);
    ctx->pc = 0x19330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193308u;
    // 0x19330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x193E90u, 0x193308u, 0x193310u)) {
        return;
    }
    ctx->pc = 0x193310u;
label_193310:
    // 0x193310: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x193314: 0x8c50eaf8  lw          $s0, -0x1508($v0)
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x33EAF8u));
    // 0x193318: 0x12000063  beqz        $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x193318u;
    {
        const bool branch_taken_0x193318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193318) {
            ctx->pc = 0x1934A8u;
            goto label_1934a8;
        }
    }
    ctx->pc = 0x193320u;
    // 0x193320: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x193324: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x193324u;
    {
        const bool branch_taken_0x193324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193324) {
            ctx->pc = 0x1934A8u;
            goto label_1934a8;
        }
    }
    ctx->pc = 0x19332Cu;
    // 0x19332c: 0x9222004c  lbu         $v0, 0x4C($s1)
    ctx->pc = 0x19332cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x193330: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x193334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193338: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19333c: 0x0  nop
    ctx->pc = 0x19333cu;
    // NOP
    // 0x193340: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x193340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x193344: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x193348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19334c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19334cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193350: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x193350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x193354: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x193354u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x193358: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x193358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19335c: 0x0  nop
    ctx->pc = 0x19335cu;
    // NOP
    // 0x193360: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x193360u;
    {
        const bool branch_taken_0x193360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193360) {
            ctx->pc = 0x193364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193360u;
            // 0x193364: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x193370u;
            goto label_193370;
        }
    }
    ctx->pc = 0x193368u;
    // 0x193368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193368u;
    {
        const bool branch_taken_0x193368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193368u;
        // 0x19336c: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193368) {
            ctx->pc = 0x193374u;
            goto label_193374;
        }
    }
    ctx->pc = 0x193370u;
label_193370:
    // 0x193370: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x193370u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_193374:
    // 0x193374: 0x9222004d  lbu         $v0, 0x4D($s1)
    ctx->pc = 0x193374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x193378: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x193378u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x19337c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x19337cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x193380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193384: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193388: 0x0  nop
    ctx->pc = 0x193388u;
    // NOP
    // 0x19338c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x19338cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x193390: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x193390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x193394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193398: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x193398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19339c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x19339cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1933a0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1933a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1933a4: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x1933a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933a8: 0x0  nop
    ctx->pc = 0x1933a8u;
    // NOP
    // 0x1933ac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1933ACu;
    {
        const bool branch_taken_0x1933ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1933ac) {
            ctx->pc = 0x1933B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1933ACu;
            // 0x1933b0: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1933BCu;
            goto label_1933bc;
        }
    }
    ctx->pc = 0x1933B4u;
    // 0x1933b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1933B4u;
    {
        const bool branch_taken_0x1933b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933B4u;
        // 0x1933b8: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933b4) {
            ctx->pc = 0x1933C0u;
            goto label_1933c0;
        }
    }
    ctx->pc = 0x1933BCu;
label_1933bc:
    // 0x1933bc: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x1933bcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_1933c0:
    // 0x1933c0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1933c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1933c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1933c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1933cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1933ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1933d0: 0x0  nop
    ctx->pc = 0x1933d0u;
    // NOP
    // 0x1933d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1933d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1933d8: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x1933D8u;
    SET_GPR_U32(ctx, 31, 0x1933E0u);
    ctx->pc = 0x1933DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933D8u;
    // 0x1933dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x1933D8u, 0x1933E0u)) {
        return;
    }
    ctx->pc = 0x1933E0u;
label_1933e0:
    // 0x1933e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1933e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1933e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1933e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e8: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x1933E8u;
    SET_GPR_U32(ctx, 31, 0x1933F0u);
    ctx->pc = 0x1933ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933E8u;
    // 0x1933ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x1933E8u, 0x1933F0u)) {
        return;
    }
    ctx->pc = 0x1933F0u;
label_1933f0:
    // 0x1933f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1933f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1933f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1933f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933f8: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x1933F8u;
    SET_GPR_U32(ctx, 31, 0x193400u);
    ctx->pc = 0x1933FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933F8u;
    // 0x1933fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x1933F8u, 0x193400u)) {
        return;
    }
    ctx->pc = 0x193400u;
label_193400:
    // 0x193400: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193408: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x193408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19340c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19340cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193410: 0x0  nop
    ctx->pc = 0x193410u;
    // NOP
    // 0x193414: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x193414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193418: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x193418u;
    SET_GPR_U32(ctx, 31, 0x193420u);
    ctx->pc = 0x19341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193418u;
    // 0x19341c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x193418u, 0x193420u)) {
        return;
    }
    ctx->pc = 0x193420u;
label_193420:
    // 0x193420: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193428: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x193428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x19342c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19342cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193430: 0x0  nop
    ctx->pc = 0x193430u;
    // NOP
    // 0x193434: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x193434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193438: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x193438u;
    SET_GPR_U32(ctx, 31, 0x193440u);
    ctx->pc = 0x19343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193438u;
    // 0x19343c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x193438u, 0x193440u)) {
        return;
    }
    ctx->pc = 0x193440u;
label_193440:
    // 0x193440: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193448: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x193448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x19344c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19344cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193450: 0x0  nop
    ctx->pc = 0x193450u;
    // NOP
    // 0x193454: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x193454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193458: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x193458u;
    SET_GPR_U32(ctx, 31, 0x193460u);
    ctx->pc = 0x19345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193458u;
    // 0x19345c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x193458u, 0x193460u)) {
        return;
    }
    ctx->pc = 0x193460u;
label_193460:
    // 0x193460: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193468: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x193468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x19346c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19346cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193470: 0x0  nop
    ctx->pc = 0x193470u;
    // NOP
    // 0x193474: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x193474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193478: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x193478u;
    SET_GPR_U32(ctx, 31, 0x193480u);
    ctx->pc = 0x19347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193478u;
    // 0x19347c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x193478u, 0x193480u)) {
        return;
    }
    ctx->pc = 0x193480u;
label_193480:
    // 0x193480: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193488: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x193488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19348c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193490: 0x0  nop
    ctx->pc = 0x193490u;
    // NOP
    // 0x193494: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x193494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193498: 0xc07cef2  jal         func_1F3BC8
    ctx->pc = 0x193498u;
    SET_GPR_U32(ctx, 31, 0x1934A0u);
    ctx->pc = 0x19349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193498u;
    // 0x19349c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3BC8u, 0x193498u, 0x1934A0u)) {
        return;
    }
    ctx->pc = 0x1934A0u;
label_1934a0:
    // 0x1934a0: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x1934A0u;
    {
        const bool branch_taken_0x1934a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1934A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934A0u;
        // 0x1934a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934a0) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x1934A8u;
label_1934a8:
    // 0x1934a8: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1934A8u;
    SET_GPR_U32(ctx, 31, 0x1934B0u);
    ctx->pc = 0x1AE480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE480u, 0x1934A8u, 0x1934B0u)) {
        return;
    }
    ctx->pc = 0x1934B0u;
label_1934b0:
    // 0x1934b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1934B0u;
    {
        const bool branch_taken_0x1934b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1934B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934B0u;
        // 0x1934b4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934b0) {
            ctx->pc = 0x1934C4u;
            goto label_1934c4;
        }
    }
    ctx->pc = 0x1934B8u;
    // 0x1934b8: 0xc065006  jal         func_194018
    ctx->pc = 0x1934B8u;
    SET_GPR_U32(ctx, 31, 0x1934C0u);
    ctx->pc = 0x1934BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934B8u;
    // 0x1934bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194018u, 0x1934B8u, 0x1934C0u)) {
        return;
    }
    ctx->pc = 0x1934C0u;
label_1934c0:
    // 0x1934c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1934c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1934c4:
    // 0x1934c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1934c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1934c8: 0x8c43bda8  lw          $v1, -0x4258($v0)
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950312)));
    // 0x1934cc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1934CCu;
    {
        const bool branch_taken_0x1934cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1934cc) {
            ctx->pc = 0x1934DCu;
            goto label_1934dc;
        }
    }
    ctx->pc = 0x1934D4u;
    // 0x1934d4: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x1934d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x1934d8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1934d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1934dc:
    // 0x1934dc: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1934DCu;
    SET_GPR_U32(ctx, 31, 0x1934E4u);
    ctx->pc = 0x1AE480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE480u, 0x1934DCu, 0x1934E4u)) {
        return;
    }
    ctx->pc = 0x1934E4u;
label_1934e4:
    // 0x1934e4: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1934E4u;
    {
        const bool branch_taken_0x1934e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1934E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934E4u;
        // 0x1934e8: 0x3c03006d  lui         $v1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934e4) {
            ctx->pc = 0x1938B8u;
            goto label_1938b8;
        }
    }
    ctx->pc = 0x1934ECu;
    // 0x1934ec: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1934f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1934f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1934f4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1934F4u;
    {
        const bool branch_taken_0x1934f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1934f4) {
            ctx->pc = 0x1934F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1934F4u;
            // 0x1934f8: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193510u;
            goto label_193510;
        }
    }
    ctx->pc = 0x1934FCu;
    // 0x1934fc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193500: 0x3042f9fc  andi        $v0, $v0, 0xF9FC
    ctx->pc = 0x193500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63996);
    // 0x193504: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x193504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193508: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x193508u;
    {
        const bool branch_taken_0x193508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193508u;
        // 0x19350c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193508) {
            ctx->pc = 0x1938B4u;
            goto label_1938b4;
        }
    }
    ctx->pc = 0x193510u;
label_193510:
    // 0x193510: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193510u;
    {
        const bool branch_taken_0x193510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193510) {
            ctx->pc = 0x193514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193510u;
            // 0x193514: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193530u;
            goto label_193530;
        }
    }
    ctx->pc = 0x193518u;
    // 0x193518: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19351c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x19351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x193520: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x193520u;
    {
        const bool branch_taken_0x193520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193520) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193528u;
    // 0x193528: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x193528u;
    {
        const bool branch_taken_0x193528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193528) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193530u;
label_193530:
    // 0x193530: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193530u;
    {
        const bool branch_taken_0x193530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193530) {
            ctx->pc = 0x193534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193530u;
            // 0x193534: 0x8e220084  lw          $v0, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193550u;
            goto label_193550;
        }
    }
    ctx->pc = 0x193538u;
    // 0x193538: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19353c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x193540: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x193540u;
    {
        const bool branch_taken_0x193540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193540) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193548u;
    // 0x193548: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x193548u;
    {
        const bool branch_taken_0x193548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193548) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193550u;
label_193550:
    // 0x193550: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193550u;
    {
        const bool branch_taken_0x193550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193550) {
            ctx->pc = 0x193554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193550u;
            // 0x193554: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193570u;
            goto label_193570;
        }
    }
    ctx->pc = 0x193558u;
    // 0x193558: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19355c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x19355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x193560: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x193560u;
    {
        const bool branch_taken_0x193560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193560) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193568u;
    // 0x193568: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x193568u;
    {
        const bool branch_taken_0x193568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193568) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193570u;
label_193570:
    // 0x193570: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193570) {
            ctx->pc = 0x193574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193570u;
            // 0x193574: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193590u;
            goto label_193590;
        }
    }
    ctx->pc = 0x193578u;
    // 0x193578: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19357c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x193580: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x193580u;
    {
        const bool branch_taken_0x193580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193580) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193588u;
    // 0x193588: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x193588u;
    {
        const bool branch_taken_0x193588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193588) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193590u;
label_193590:
    // 0x193590: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193590u;
    {
        const bool branch_taken_0x193590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193590) {
            ctx->pc = 0x193594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193590u;
            // 0x193594: 0x8e22009c  lw          $v0, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x193598u;
    // 0x193598: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19359c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1935a0: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1935A0u;
    {
        const bool branch_taken_0x1935a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1935a0) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x1935A8u;
    // 0x1935a8: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1935A8u;
    {
        const bool branch_taken_0x1935a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935a8) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x1935B0u;
label_1935b0:
    // 0x1935b0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1935B0u;
    {
        const bool branch_taken_0x1935b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1935b0) {
            ctx->pc = 0x1935B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1935B0u;
            // 0x1935b4: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1935D0u;
            goto label_1935d0;
        }
    }
    ctx->pc = 0x1935B8u;
    // 0x1935b8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1935b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1935bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1935bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1935c0: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1935C0u;
    {
        const bool branch_taken_0x1935c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1935c0) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x1935C8u;
    // 0x1935c8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1935C8u;
    {
        const bool branch_taken_0x1935c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935c8) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x1935D0u;
label_1935d0:
    // 0x1935d0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1935D0u;
    {
        const bool branch_taken_0x1935d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1935d0) {
            ctx->pc = 0x1935D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1935D0u;
            // 0x1935d4: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1935F0u;
            goto label_1935f0;
        }
    }
    ctx->pc = 0x1935D8u;
    // 0x1935d8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1935d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1935dc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1935dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1935e0: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1935E0u;
    {
        const bool branch_taken_0x1935e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1935e0) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x1935E8u;
    // 0x1935e8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1935E8u;
    {
        const bool branch_taken_0x1935e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935e8) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x1935F0u;
label_1935f0:
    // 0x1935f0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1935F0u;
    {
        const bool branch_taken_0x1935f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1935f0) {
            ctx->pc = 0x1935F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1935F0u;
            // 0x1935f4: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193610u;
            goto label_193610;
        }
    }
    ctx->pc = 0x1935F8u;
    // 0x1935f8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1935f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1935fc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1935fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x193600: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x193600u;
    {
        const bool branch_taken_0x193600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193600) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193608u;
    // 0x193608: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x193608u;
    {
        const bool branch_taken_0x193608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193608) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193610u;
label_193610:
    // 0x193610: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193610u;
    {
        const bool branch_taken_0x193610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193610) {
            ctx->pc = 0x193614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193610u;
            // 0x193614: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193630u;
            goto label_193630;
        }
    }
    ctx->pc = 0x193618u;
    // 0x193618: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19361c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19361cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193620: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x193620u;
    {
        const bool branch_taken_0x193620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193620) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193628u;
    // 0x193628: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x193628u;
    {
        const bool branch_taken_0x193628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193628) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193630u;
label_193630:
    // 0x193630: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193630u;
    {
        const bool branch_taken_0x193630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193630) {
            ctx->pc = 0x193634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193630u;
            // 0x193634: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193650u;
            goto label_193650;
        }
    }
    ctx->pc = 0x193638u;
    // 0x193638: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19363c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x193640: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x193640u;
    {
        const bool branch_taken_0x193640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193640) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193648u;
    // 0x193648: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x193648u;
    {
        const bool branch_taken_0x193648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193648) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193650u;
label_193650:
    // 0x193650: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x193650u;
    {
        const bool branch_taken_0x193650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193650) {
            ctx->pc = 0x193654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193650u;
            // 0x193654: 0x8e2200cc  lw          $v0, 0xCC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19367Cu;
            goto label_19367c;
        }
    }
    ctx->pc = 0x193658u;
    // 0x193658: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x193658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19365c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19365cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193660: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x193660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x193664: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x193664u;
    {
        const bool branch_taken_0x193664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193664u;
        // 0x193668: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193664) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x19366Cu;
    // 0x19366c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193674: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x193674u;
    {
        const bool branch_taken_0x193674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193674) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x19367Cu;
label_19367c:
    // 0x19367c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19367Cu;
    {
        const bool branch_taken_0x19367c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19367c) {
            ctx->pc = 0x193680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19367Cu;
            // 0x193680: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1936A8u;
            goto label_1936a8;
        }
    }
    ctx->pc = 0x193684u;
    // 0x193684: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x193684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193688: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x193688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19368c: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x19368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x193690: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x193690u;
    {
        const bool branch_taken_0x193690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193690u;
        // 0x193694: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193690) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x193698u;
    // 0x193698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19369c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19369cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1936a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1936A0u;
    {
        const bool branch_taken_0x1936a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1936a0) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936A8u;
label_1936a8:
    // 0x1936a8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1936A8u;
    {
        const bool branch_taken_0x1936a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1936a8) {
            ctx->pc = 0x1936ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1936A8u;
            // 0x1936ac: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1936D4u;
            goto label_1936d4;
        }
    }
    ctx->pc = 0x1936B0u;
    // 0x1936b0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1936b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1936b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1936b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1936b8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1936b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1936bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1936BCu;
    {
        const bool branch_taken_0x1936bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936BCu;
        // 0x1936c0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936bc) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936C4u;
    // 0x1936c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1936c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1936c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1936cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1936CCu;
    {
        const bool branch_taken_0x1936cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1936cc) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936D4u;
label_1936d4:
    // 0x1936d4: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1936D4u;
    {
        const bool branch_taken_0x1936d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1936d4) {
            ctx->pc = 0x1936D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1936D4u;
            // 0x1936d8: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193718u;
            goto label_193718;
        }
    }
    ctx->pc = 0x1936DCu;
    // 0x1936dc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1936e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1936e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1936e4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1936e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1936e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1936E8u;
    {
        const bool branch_taken_0x1936e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936E8u;
        // 0x1936ec: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936e8) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936F0u;
    // 0x1936f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1936f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1936f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1936f8:
    // 0x1936f8: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x1936F8u;
    {
        const bool branch_taken_0x1936f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1936f8) {
            ctx->pc = 0x1936FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1936F8u;
            // 0x1936fc: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1938B4u;
            goto label_1938b4;
        }
    }
    ctx->pc = 0x193700u;
    // 0x193700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193708: 0x0  nop
    ctx->pc = 0x193708u;
    // NOP
    // 0x19370c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19370cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193710: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x193710u;
    {
        const bool branch_taken_0x193710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193710u;
        // 0x193714: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193710) {
            ctx->pc = 0x1938B4u;
            goto label_1938b4;
        }
    }
    ctx->pc = 0x193718u;
label_193718:
    // 0x193718: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193718u;
    {
        const bool branch_taken_0x193718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193718) {
            ctx->pc = 0x19371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193718u;
            // 0x19371c: 0x8e2200ec  lw          $v0, 0xEC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193738u;
            goto label_193738;
        }
    }
    ctx->pc = 0x193720u;
    // 0x193720: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193724: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x193724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x193728: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x193728u;
    {
        const bool branch_taken_0x193728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193728) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193730u;
    // 0x193730: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x193730u;
    {
        const bool branch_taken_0x193730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193730) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193738u;
label_193738:
    // 0x193738: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193738u;
    {
        const bool branch_taken_0x193738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193738) {
            ctx->pc = 0x19373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193738u;
            // 0x19373c: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193758u;
            goto label_193758;
        }
    }
    ctx->pc = 0x193740u;
    // 0x193740: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193748: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x193748u;
    {
        const bool branch_taken_0x193748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193748) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193750u;
    // 0x193750: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x193750u;
    {
        const bool branch_taken_0x193750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193750) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193758u;
label_193758:
    // 0x193758: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193758u;
    {
        const bool branch_taken_0x193758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193758) {
            ctx->pc = 0x19375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193758u;
            // 0x19375c: 0x8e220134  lw          $v0, 0x134($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193778u;
            goto label_193778;
        }
    }
    ctx->pc = 0x193760u;
    // 0x193760: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193764: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x193764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x193768: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x193768u;
    {
        const bool branch_taken_0x193768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193768) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193770u;
    // 0x193770: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x193770u;
    {
        const bool branch_taken_0x193770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193770) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193778u;
label_193778:
    // 0x193778: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193778u;
    {
        const bool branch_taken_0x193778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193778) {
            ctx->pc = 0x19377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193778u;
            // 0x19377c: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193798u;
            goto label_193798;
        }
    }
    ctx->pc = 0x193780u;
    // 0x193780: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x193784: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x193784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x193788: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x193788u;
    {
        const bool branch_taken_0x193788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193788) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x193790u;
    // 0x193790: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x193790u;
    {
        const bool branch_taken_0x193790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193790) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x193798u;
label_193798:
    // 0x193798: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193798u;
    {
        const bool branch_taken_0x193798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193798) {
            ctx->pc = 0x19379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193798u;
            // 0x19379c: 0x8e2200fc  lw          $v0, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1937B8u;
            goto label_1937b8;
        }
    }
    ctx->pc = 0x1937A0u;
    // 0x1937a0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1937a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1937a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1937a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1937A8u;
    {
        const bool branch_taken_0x1937a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1937a8) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x1937B0u;
    // 0x1937b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1937B0u;
    {
        const bool branch_taken_0x1937b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937b0) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x1937B8u;
label_1937b8:
    // 0x1937b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1937b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1937bc: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1937BCu;
    {
        const bool branch_taken_0x1937bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1937bc) {
            ctx->pc = 0x1937C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1937BCu;
            // 0x1937c0: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1937F4u;
            goto label_1937f4;
        }
    }
    ctx->pc = 0x1937C4u;
    // 0x1937c4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1937c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1937c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1937c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1937cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1937CCu;
    {
        const bool branch_taken_0x1937cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937cc) {
            ctx->pc = 0x1937E4u;
            goto label_1937e4;
        }
    }
    ctx->pc = 0x1937D4u;
label_1937d4:
    // 0x1937d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1937d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1937d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937dc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1937DCu;
    {
        const bool branch_taken_0x1937dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937DCu;
        // 0x1937e0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937dc) {
            ctx->pc = 0x1938B4u;
            goto label_1938b4;
        }
    }
    ctx->pc = 0x1937E4u;
label_1937e4:
    // 0x1937e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1937e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1937e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937ec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1937ECu;
    {
        const bool branch_taken_0x1937ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937ECu;
        // 0x1937f0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937ec) {
            ctx->pc = 0x1938B4u;
            goto label_1938b4;
        }
    }
    ctx->pc = 0x1937F4u;
label_1937f4:
    // 0x1937f4: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1937F4u;
    {
        const bool branch_taken_0x1937f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1937f4) {
            ctx->pc = 0x1937F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1937F4u;
            // 0x1937f8: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193840u;
            goto label_193840;
        }
    }
    ctx->pc = 0x1937FCu;
    // 0x1937fc: 0x9222004e  lbu         $v0, 0x4E($s1)
    ctx->pc = 0x1937fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 78)));
label_193800:
    // 0x193800: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x193804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193808: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x193808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19380c: 0x0  nop
    ctx->pc = 0x19380cu;
    // NOP
    // 0x193810: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x193814: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x193814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x193818: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19381c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19381cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193820: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x193820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x193824: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x193824u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x193828: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x193828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19382c: 0x0  nop
    ctx->pc = 0x19382cu;
    // NOP
    // 0x193830: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
    ctx->pc = 0x193830u;
    {
        const bool branch_taken_0x193830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193830) {
            ctx->pc = 0x193834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193830u;
            // 0x193834: 0x460318c2  mul.s       $f3, $f3, $f3 (Delay Slot)
            ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1938B0u;
            goto label_1938b0;
        }
    }
    ctx->pc = 0x193838u;
    // 0x193838: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x193838u;
    {
        const bool branch_taken_0x193838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193838u;
        // 0x19383c: 0x46031802  mul.s       $f0, $f3, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193838) {
            ctx->pc = 0x1938ACu;
            goto label_1938ac;
        }
    }
    ctx->pc = 0x193840u;
label_193840:
    // 0x193840: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193840u;
    {
        const bool branch_taken_0x193840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193840) {
            ctx->pc = 0x193844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193840u;
            // 0x193844: 0x8e220114  lw          $v0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x193848u;
    // 0x193848: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x193848u;
    {
        const bool branch_taken_0x193848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193848u;
        // 0x19384c: 0x9222004f  lbu         $v0, 0x4F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 79)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193848) {
            ctx->pc = 0x193800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193800;
        }
    }
    ctx->pc = 0x193850u;
label_193850:
    // 0x193850: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193850u;
    {
        const bool branch_taken_0x193850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193850) {
            ctx->pc = 0x193854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193850u;
            // 0x193854: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193860u;
            goto label_193860;
        }
    }
    ctx->pc = 0x193858u;
    // 0x193858: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x193858u;
    {
        const bool branch_taken_0x193858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193858u;
        // 0x19385c: 0x9222004c  lbu         $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193858) {
            ctx->pc = 0x193800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193800;
        }
    }
    ctx->pc = 0x193860u;
label_193860:
    // 0x193860: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x193860u;
    {
        const bool branch_taken_0x193860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x193864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193860u;
        // 0x193864: 0x3c03006d  lui         $v1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193860) {
            ctx->pc = 0x1938B8u;
            goto label_1938b8;
        }
    }
    ctx->pc = 0x193868u;
    // 0x193868: 0x9222004d  lbu         $v0, 0x4D($s1)
    ctx->pc = 0x193868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19386c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x193870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193874: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x193874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x193878: 0x0  nop
    ctx->pc = 0x193878u;
    // NOP
    // 0x19387c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19387cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x193880: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x193880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x193884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193888: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x193888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19388c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x19388cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x193890: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x193890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x193894: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x193894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193898: 0x0  nop
    ctx->pc = 0x193898u;
    // NOP
    // 0x19389c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x19389Cu;
    {
        const bool branch_taken_0x19389c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19389c) {
            ctx->pc = 0x1938A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19389Cu;
            // 0x1938a0: 0x46031802  mul.s       $f0, $f3, $f3 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1938ACu;
            goto label_1938ac;
        }
    }
    ctx->pc = 0x1938A4u;
    // 0x1938a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1938A4u;
    {
        const bool branch_taken_0x1938a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1938A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938A4u;
        // 0x1938a8: 0x460318c2  mul.s       $f3, $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938a4) {
            ctx->pc = 0x1938B0u;
            goto label_1938b0;
        }
    }
    ctx->pc = 0x1938ACu;
label_1938ac:
    // 0x1938ac: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x1938acu;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
label_1938b0:
    // 0x1938b0: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x1938b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1938b4:
    // 0x1938b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1938b8:
    // 0x1938b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1938b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1938bc: 0x8c62bdb8  lw          $v0, -0x4248($v1)
    ctx->pc = 0x1938bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950328)));
    // 0x1938c0: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1938C0u;
    {
        const bool branch_taken_0x1938c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1938C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938C0u;
        // 0x1938c4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938c0) {
            ctx->pc = 0x1938F0u;
            goto label_1938f0;
        }
    }
    ctx->pc = 0x1938C8u;
    // 0x1938c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1938cc: 0x10a0004f  beqz        $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1938CCu;
    {
        const bool branch_taken_0x1938cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1938D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938CCu;
        // 0x1938d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938cc) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x1938D4u;
    // 0x1938d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1938d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1938d8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1938d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1938dc: 0x5462004c  bnel        $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1938DCu;
    {
        const bool branch_taken_0x1938dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1938dc) {
            ctx->pc = 0x1938E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1938DCu;
            // 0x1938e0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A10u;
            goto label_193a10;
        }
    }
    ctx->pc = 0x1938E4u;
    // 0x1938e4: 0xc4ae000c  lwc1        $f14, 0xC($a1)
    ctx->pc = 0x1938e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1938e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1938E8u;
    {
        const bool branch_taken_0x1938e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1938ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938E8u;
        // 0x1938ec: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938e8) {
            ctx->pc = 0x193920u;
            goto label_193920;
        }
    }
    ctx->pc = 0x1938F0u;
label_1938f0:
    // 0x1938f0: 0x8c43bdc0  lw          $v1, -0x4240($v0)
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950336)));
    // 0x1938f4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1938F4u;
    {
        const bool branch_taken_0x1938f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938F4u;
        // 0x1938f8: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938f4) {
            ctx->pc = 0x193934u;
            goto label_193934;
        }
    }
    ctx->pc = 0x1938FCu;
    // 0x1938fc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x193900: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x193900u;
    {
        const bool branch_taken_0x193900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193900u;
        // 0x193904: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193900) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x193908u;
    // 0x193908: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x193908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19390c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x19390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x193910: 0x5462003f  bnel        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x193910u;
    {
        const bool branch_taken_0x193910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193910) {
            ctx->pc = 0x193914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193910u;
            // 0x193914: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A10u;
            goto label_193a10;
        }
    }
    ctx->pc = 0x193918u;
    // 0x193918: 0xc4ae000c  lwc1        $f14, 0xC($a1)
    ctx->pc = 0x193918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19391c: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_193920:
    // 0x193920: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x193920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193924: 0xc0648e0  jal         func_192380
    ctx->pc = 0x193924u;
    SET_GPR_U32(ctx, 31, 0x19392Cu);
    ctx->pc = 0x193928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193924u;
    // 0x193928: 0xc4ad0008  lwc1        $f13, 0x8($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192380u, 0x193924u, 0x19392Cu)) {
        return;
    }
    ctx->pc = 0x19392Cu;
label_19392c:
    // 0x19392c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19392Cu;
    {
        const bool branch_taken_0x19392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19392Cu;
        // 0x193930: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19392c) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x193934u;
label_193934:
    // 0x193934: 0x8c43bdc8  lw          $v1, -0x4238($v0)
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950344)));
    // 0x193938: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x193938u;
    {
        const bool branch_taken_0x193938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193938u;
        // 0x19393c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193938) {
            ctx->pc = 0x19396Cu;
            goto label_19396c;
        }
    }
    ctx->pc = 0x193940u;
    // 0x193940: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x193940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x193944: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x193944u;
    {
        const bool branch_taken_0x193944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193944u;
        // 0x193948: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193944) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x19394Cu;
    // 0x19394c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193950: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x193954: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x193954u;
    {
        const bool branch_taken_0x193954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193954) {
            ctx->pc = 0x193958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193954u;
            // 0x193958: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A10u;
            goto label_193a10;
        }
    }
    ctx->pc = 0x19395Cu;
    // 0x19395c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19395cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193960: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x193960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x193964: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x193964u;
    {
        const bool branch_taken_0x193964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193964u;
        // 0x193968: 0xc4ad0004  lwc1        $f13, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193964) {
            ctx->pc = 0x1939D4u;
            goto label_1939d4;
        }
    }
    ctx->pc = 0x19396Cu;
label_19396c:
    // 0x19396c: 0x8c43bdd0  lw          $v1, -0x4230($v0)
    ctx->pc = 0x19396cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950352)));
    // 0x193970: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x193970u;
    {
        const bool branch_taken_0x193970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x193974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193970u;
        // 0x193974: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193970) {
            ctx->pc = 0x1939A4u;
            goto label_1939a4;
        }
    }
    ctx->pc = 0x193978u;
    // 0x193978: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19397c: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x19397Cu;
    {
        const bool branch_taken_0x19397c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19397Cu;
        // 0x193980: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19397c) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x193984u;
    // 0x193984: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x193984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193988: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x193988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x19398c: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19398Cu;
    {
        const bool branch_taken_0x19398c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19398c) {
            ctx->pc = 0x193990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19398Cu;
            // 0x193990: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A10u;
            goto label_193a10;
        }
    }
    ctx->pc = 0x193994u;
    // 0x193994: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193998: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x193998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    // 0x19399c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19399Cu;
    {
        const bool branch_taken_0x19399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19399Cu;
        // 0x1939a0: 0xc4ad0004  lwc1        $f13, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19399c) {
            ctx->pc = 0x1939D4u;
            goto label_1939d4;
        }
    }
    ctx->pc = 0x1939A4u;
label_1939a4:
    // 0x1939a4: 0x8c43bdd8  lw          $v1, -0x4228($v0)
    ctx->pc = 0x1939a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950360)));
    // 0x1939a8: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1939A8u;
    {
        const bool branch_taken_0x1939a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1939ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939A8u;
        // 0x1939ac: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939a8) {
            ctx->pc = 0x1939E4u;
            goto label_1939e4;
        }
    }
    ctx->pc = 0x1939B0u;
    // 0x1939b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1939b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1939b4: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x1939b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1939b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1939b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1939bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1939bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1939c0: 0xc0648e0  jal         func_192380
    ctx->pc = 0x1939C0u;
    SET_GPR_U32(ctx, 31, 0x1939C8u);
    ctx->pc = 0x1939C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939C0u;
    // 0x1939c4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192380u, 0x1939C0u, 0x1939C8u)) {
        return;
    }
    ctx->pc = 0x1939C8u;
label_1939c8:
    // 0x1939c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1939c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1939cc: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x1939ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    // 0x1939d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1939d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1939d4:
    // 0x1939d4: 0xc0648e0  jal         func_192380
    ctx->pc = 0x1939D4u;
    SET_GPR_U32(ctx, 31, 0x1939DCu);
    ctx->pc = 0x1939D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939D4u;
    // 0x1939d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192380u, 0x1939D4u, 0x1939DCu)) {
        return;
    }
    ctx->pc = 0x1939DCu;
label_1939dc:
    // 0x1939dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1939DCu;
    {
        const bool branch_taken_0x1939dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939DCu;
        // 0x1939e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939dc) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x1939E4u;
label_1939e4:
    // 0x1939e4: 0x8c43bde0  lw          $v1, -0x4220($v0)
    ctx->pc = 0x1939e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1939e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1939E8u;
    {
        const bool branch_taken_0x1939e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1939ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939E8u;
        // 0x1939ec: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939e8) {
            ctx->pc = 0x1939FCu;
            goto label_1939fc;
        }
    }
    ctx->pc = 0x1939F0u;
    // 0x1939f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1939f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0xae220170  sw          $v0, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x193A08u;
            goto label_193a08;
        }
    }
    ctx->pc = 0x1939FCu;
label_1939fc:
    // 0x1939fc: 0x8c43bde8  lw          $v1, -0x4218($v0)
    ctx->pc = 0x1939fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x193a00: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x193A00u;
    {
        const bool branch_taken_0x193a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x193a00) {
            ctx->pc = 0x193A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A00u;
            // 0x193a04: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A08u;
            goto label_193a08;
        }
    }
    ctx->pc = 0x193A08u;
label_193a08:
    // 0x193a08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x193a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_193a0c:
    // 0x193a0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x193a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_193a10:
    // 0x193a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x193a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193a14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x193a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193a18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x193a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a20: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x193a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x193a24: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x193a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193a28: 0x3e00008  jr          $ra
    ctx->pc = 0x193A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A28u;
        // 0x193a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193A30u;
}
