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

// Function: sub_001958D0
// Address: 0x1958d0 - 0x195c18
void sub_001958D0_0x1958d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001958D0_0x1958d0");
#endif

    switch (ctx->pc) {
        case 0x195c08u: goto label_195c08;
        default: break;
    }

    ctx->pc = 0x1958d0u;

    // 0x1958d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1958d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1958d8: 0x8c438bb4  lw          $v1, -0x744C($v0)
    ctx->pc = 0x1958d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338BB4u));
    // 0x1958dc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1958dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1958e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1958e4: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x1958e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958e8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1958e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958ec: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x1958ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958f0: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x1958f0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1958F4u;
    {
        const bool branch_taken_0x1958f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1958F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F4u;
        // 0x1958f8: 0x3c0d0034  lui         $t5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f4) {
            ctx->pc = 0x195910u;
            goto label_195910;
        }
    }
    ctx->pc = 0x1958FCu;
    // 0x1958fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1958fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x195900: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x195904: 0x8c448bb8  lw          $a0, -0x7448($v0)
    ctx->pc = 0x195904u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338BB8u));
    // 0x195908: 0xaf038bb4  sw          $v1, -0x744C($t8)
    ctx->pc = 0x195908u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294937524), GPR_U32(ctx, 3));
    // 0x19590c: 0xada48bbc  sw          $a0, -0x7444($t5)
    ctx->pc = 0x19590cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294937532), GPR_U32(ctx, 4));
label_195910:
    // 0x195910: 0x15000042  bnez        $t0, . + 4 + (0x42 << 2)
    ctx->pc = 0x195910u;
    {
        const bool branch_taken_0x195910 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x195914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195910u;
        // 0x195914: 0x3c060034  lui         $a2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195910) {
            ctx->pc = 0x195A1Cu;
            goto label_195a1c;
        }
    }
    ctx->pc = 0x195918u;
    // 0x195918: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x195918u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19591c: 0x0  nop
    ctx->pc = 0x19591cu;
    // NOP
    // 0x195920: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195924: 0x3c0a0034  lui         $t2, 0x34
    ctx->pc = 0x195924u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)52 << 16));
    // 0x195928: 0xc5458ba4  lwc1        $f5, -0x745C($t2)
    ctx->pc = 0x195928u;
    { uint32_t bits = FAST_READ32(0x338BA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19592c: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x19592cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x195930: 0xc5268bac  lwc1        $f6, -0x7454($t1)
    ctx->pc = 0x195930u;
    { uint32_t bits = FAST_READ32(0x338BACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x195934: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x195934u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195938: 0x0  nop
    ctx->pc = 0x195938u;
    // NOP
    // 0x19593c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19593cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x195940: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x195940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x195944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x195948: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x195948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19594c: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x19594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195950: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
    // 0x195954: 0x460c1102  mul.s       $f4, $f2, $f12
    ctx->pc = 0x195954u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x195958: 0x3c0c0034  lui         $t4, 0x34
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
    // 0x19595c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x19595cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x195960: 0xe4100  sll         $t0, $t6, 4
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x195964: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x195964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x195968: 0xf3900  sll         $a3, $t7, 4
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x19596c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x19596cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x195970: 0x25c60010  addiu       $a2, $t6, 0x10
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x195974: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x195974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x195978: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19597c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x19597cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x195980: 0x25e50010  addiu       $a1, $t7, 0x10
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x195984: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x195984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x195988: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x195988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x19598c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19598cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x195990: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x195990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195994: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x195994u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x195998: 0xc5608ba8  lwc1        $f0, -0x7458($t3)
    ctx->pc = 0x195998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19599c: 0xc5838bb0  lwc1        $f3, -0x7450($t4)
    ctx->pc = 0x19599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1959a0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1959a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1959a4: 0x8da48bbc  lw          $a0, -0x7444($t5)
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x1959a8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1959a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1959ac: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1959acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1959b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1959b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1959b4: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x1959b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1959b8: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x1959b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x1959bc: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1959bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1959c0: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x1959c4: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x1959c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1959c8: 0xc5408ba4  lwc1        $f0, -0x745C($t2)
    ctx->pc = 0x1959c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1959cc: 0xc5238bac  lwc1        $f3, -0x7454($t1)
    ctx->pc = 0x1959ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1959d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1959d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1959d4: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x1959d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x1959d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1959d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1959dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1959dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1959e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1959e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1959e4: 0xa4620018  sh          $v0, 0x18($v1)
    ctx->pc = 0x1959e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x1959e8: 0xc5608ba8  lwc1        $f0, -0x7458($t3)
    ctx->pc = 0x1959e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1959ec: 0xc5818bb0  lwc1        $f1, -0x7450($t4)
    ctx->pc = 0x1959ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1959f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1959f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1959f4: 0x8da48bbc  lw          $a0, -0x7444($t5)
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x1959f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1959f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1959fc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1959fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x195a00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x195a00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195a04: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x195a04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x195a08: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195a0c: 0xa4660010  sh          $a2, 0x10($v1)
    ctx->pc = 0x195a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x195a10: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x195a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195a14: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x195A14u;
    {
        const bool branch_taken_0x195a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A14u;
        // 0x195a18: 0xa4450012  sh          $a1, 0x12($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a14) {
            ctx->pc = 0x195BDCu;
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195A1Cu;
label_195a1c:
    // 0x195a1c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x195a1cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195a20: 0x0  nop
    ctx->pc = 0x195a20u;
    // NOP
    // 0x195a24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x195a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x195a28: 0xc4c08ba4  lwc1        $f0, -0x745C($a2)
    ctx->pc = 0x195a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195a2c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x195a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x195a30: 0xc4a68bac  lwc1        $f6, -0x7454($a1)
    ctx->pc = 0x195a30u;
    { uint32_t bits = FAST_READ32(0x338BACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x195a34: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x195a34u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x195a38: 0x0  nop
    ctx->pc = 0x195a38u;
    // NOP
    // 0x195a3c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x195a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x195a40: 0x460c1102  mul.s       $f4, $f2, $f12
    ctx->pc = 0x195a40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x195a44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x195a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195a4c: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195a50: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x195a54: 0x460c1942  mul.s       $f5, $f3, $f12
    ctx->pc = 0x195a54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x195a58: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x195a5c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x195a5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x195a60: 0xe6100  sll         $t4, $t6, 4
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x195a64: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x195a64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x195a68: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x195a6c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x195a6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x195a70: 0x25ca0010  addiu       $t2, $t6, 0x10
    ctx->pc = 0x195a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x195a74: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x195a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x195a78: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x195a78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x195a7c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x195a7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x195a80: 0x25e90010  addiu       $t1, $t7, 0x10
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x195a84: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x195a84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x195a88: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x195a88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x195a8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x195a90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x195a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195a94: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x195a94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x195a98: 0xc4e08ba8  lwc1        $f0, -0x7458($a3)
    ctx->pc = 0x195a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195a9c: 0xc5018bb0  lwc1        $f1, -0x7450($t0)
    ctx->pc = 0x195a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195aa0: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x195aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x195aa4: 0x8da48bbc  lw          $a0, -0x7444($t5)
    ctx->pc = 0x195aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195aa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x195aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x195aac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195aacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x195ab0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x195ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195ab4: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x195ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x195ab8: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195abc: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x195abcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x195ac0: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x195ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195ac4: 0xa44b0002  sh          $t3, 0x2($v0)
    ctx->pc = 0x195ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x195ac8: 0xc4c08ba4  lwc1        $f0, -0x745C($a2)
    ctx->pc = 0x195ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195acc: 0xc4a18bac  lwc1        $f1, -0x7454($a1)
    ctx->pc = 0x195accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ad0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x195ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x195ad4: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195ad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x195ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x195adc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x195ae0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x195ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195ae4: 0xa4620018  sh          $v0, 0x18($v1)
    ctx->pc = 0x195ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x195ae8: 0xc4e08ba8  lwc1        $f0, -0x7458($a3)
    ctx->pc = 0x195ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195aec: 0xc5018bb0  lwc1        $f1, -0x7450($t0)
    ctx->pc = 0x195aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195af0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x195af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x195af4: 0x8da48bbc  lw          $a0, -0x7444($t5)
    ctx->pc = 0x195af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195af8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x195af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x195afc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x195b00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x195b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195b04: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x195b04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x195b08: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b0c: 0xa46a0010  sh          $t2, 0x10($v1)
    ctx->pc = 0x195b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 10));
    // 0x195b10: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x195b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b14: 0xa4490012  sh          $t1, 0x12($v0)
    ctx->pc = 0x195b14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 9));
    // 0x195b18: 0xc4c08ba4  lwc1        $f0, -0x745C($a2)
    ctx->pc = 0x195b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195b1c: 0xc4a18bac  lwc1        $f1, -0x7454($a1)
    ctx->pc = 0x195b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195b20: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x195b20u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x195b24: 0x8f028bb4  lw          $v0, -0x744C($t8)
    ctx->pc = 0x195b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294937524)));
    // 0x195b28: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x195b30: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x195b30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x195b34: 0xaf028bb4  sw          $v0, -0x744C($t8)
    ctx->pc = 0x195b34u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294937524), GPR_U32(ctx, 2));
    // 0x195b38: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x195b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x195b3c: 0xada38bbc  sw          $v1, -0x7444($t5)
    ctx->pc = 0x195b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294937532), GPR_U32(ctx, 3));
    // 0x195b40: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x195b44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x195b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195b48: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x195b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x195b4c: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x195b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x195b50: 0xc4e08ba8  lwc1        $f0, -0x7458($a3)
    ctx->pc = 0x195b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195b54: 0xc5018bb0  lwc1        $f1, -0x7450($t0)
    ctx->pc = 0x195b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195b58: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x195b58u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x195b5c: 0x8da48bbc  lw          $a0, -0x7444($t5)
    ctx->pc = 0x195b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b60: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x195b60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x195b64: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195b64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x195b68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x195b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195b6c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x195b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x195b70: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x195b70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x195b74: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b78: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x195b78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x195b7c: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x195b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b80: 0xa44b0002  sh          $t3, 0x2($v0)
    ctx->pc = 0x195b80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x195b84: 0xc4c08ba4  lwc1        $f0, -0x745C($a2)
    ctx->pc = 0x195b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195b88: 0xc4a18bac  lwc1        $f1, -0x7454($a1)
    ctx->pc = 0x195b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195b8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x195b8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x195b90: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195b94: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x195b94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x195b98: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195b98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x195b9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x195b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195ba0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x195ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x195ba4: 0xa4620018  sh          $v0, 0x18($v1)
    ctx->pc = 0x195ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x195ba8: 0xc4e08ba8  lwc1        $f0, -0x7458($a3)
    ctx->pc = 0x195ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195bac: 0xc5018bb0  lwc1        $f1, -0x7450($t0)
    ctx->pc = 0x195bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195bb0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x195bb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x195bb4: 0x8da48bbc  lw          $a0, -0x7444($t5)
    ctx->pc = 0x195bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195bb8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x195bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x195bbc: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195bbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x195bc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x195bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195bc4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x195bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x195bc8: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x195bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x195bcc: 0x8da38bbc  lw          $v1, -0x7444($t5)
    ctx->pc = 0x195bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195bd0: 0xa46a0010  sh          $t2, 0x10($v1)
    ctx->pc = 0x195bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 10));
    // 0x195bd4: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195bd8: 0xa4490012  sh          $t1, 0x12($v0)
    ctx->pc = 0x195bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 9));
label_195bdc:
    // 0x195bdc: 0x8f038bb4  lw          $v1, -0x744C($t8)
    ctx->pc = 0x195bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294937524)));
    // 0x195be0: 0x8da28bbc  lw          $v0, -0x7444($t5)
    ctx->pc = 0x195be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937532)));
    // 0x195be4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x195be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x195be8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x195be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x195bec: 0xaf038bb4  sw          $v1, -0x744C($t8)
    ctx->pc = 0x195becu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294937524), GPR_U32(ctx, 3));
    // 0x195bf0: 0xada28bbc  sw          $v0, -0x7444($t5)
    ctx->pc = 0x195bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294937532), GPR_U32(ctx, 2));
    // 0x195bf4: 0x8f028bb4  lw          $v0, -0x744C($t8)
    ctx->pc = 0x195bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294937524)));
    // 0x195bf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195BF8u;
    {
        const bool branch_taken_0x195bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BF8u;
        // 0x195bfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bf8) {
            ctx->pc = 0x195C0Cu;
            goto label_195c0c;
        }
    }
    ctx->pc = 0x195C00u;
    // 0x195c00: 0xc0655fe  jal         func_1957F8
    ctx->pc = 0x195C00u;
    SET_GPR_U32(ctx, 31, 0x195C08u);
    ctx->pc = 0x1957F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1957F8u, 0x195C00u, 0x195C08u)) {
        return;
    }
    ctx->pc = 0x195C08u;
label_195c08:
    // 0x195c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195c0c:
    // 0x195c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x195C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C0Cu;
        // 0x195c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C14u;
    // 0x195c14: 0x0  nop
    ctx->pc = 0x195c14u;
    // NOP
    ctx->pc = 0x195c18u;
}
