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

// Function: sub_00157820
// Address: 0x157820 - 0x157fd8
void sub_00157820_0x157820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157820_0x157820");
#endif

    switch (ctx->pc) {
        case 0x157970u: goto label_157970;
        case 0x157a10u: goto label_157a10;
        case 0x157abcu: goto label_157abc;
        case 0x157b20u: goto label_157b20;
        case 0x157bacu: goto label_157bac;
        case 0x157c3cu: goto label_157c3c;
        case 0x157c9cu: goto label_157c9c;
        case 0x157d30u: goto label_157d30;
        case 0x157d3cu: goto label_157d3c;
        case 0x157d58u: goto label_157d58;
        case 0x157d8cu: goto label_157d8c;
        case 0x157dc8u: goto label_157dc8;
        case 0x157e6cu: goto label_157e6c;
        case 0x157f68u: goto label_157f68;
        default: break;
    }

    ctx->pc = 0x157820u;

    // 0x157820: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x157824: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x157824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x157828: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x157828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x15782c: 0x24434fc8  addiu       $v1, $v0, 0x4FC8
    ctx->pc = 0x15782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20424));
    // 0x157830: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x157830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x157834: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x157834u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x157838: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x157838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x15783c: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x15783cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x157840: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x157840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x157844: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157848: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x157848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x15784c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15784cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157850: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x157850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x157854: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x157854u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157858: 0xe7bb0158  swc1        $f27, 0x158($sp)
    ctx->pc = 0x157858u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x15785c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x15785cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157860: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x157860u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x157864: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x157864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x157868: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x157868u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x15786c: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x15786cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x157870: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x157870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x157874: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x157874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x157878: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x157878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x15787c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x15787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x157880: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x157880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x157884: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x157884u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x157888: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x157888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x15788c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x15788cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x157890: 0x8c4a4fc8  lw          $t2, 0x4FC8($v0)
    ctx->pc = 0x157890u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x734FC8u));
    // 0x157894: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x734FCCu));
    // 0x157898: 0x25625048  addiu       $v0, $t3, 0x5048
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 20552));
    // 0x15789c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x15789cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1578a0: 0x0  nop
    ctx->pc = 0x1578a0u;
    // NOP
    // 0x1578a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1578a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1578a8: 0xc5238618  lwc1        $f3, -0x79E8($t1)
    ctx->pc = 0x1578a8u;
    { uint32_t bits = FAST_READ32(0x338618u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1578ac: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1578acu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1578b0: 0x0  nop
    ctx->pc = 0x1578b0u;
    // NOP
    // 0x1578b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1578b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1578b8: 0x8c6c0008  lw          $t4, 0x8($v1)
    ctx->pc = 0x1578b8u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x734FD0u));
    // 0x1578bc: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x1578bcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x734FD4u));
    // 0x1578c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1578c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1578c4: 0xc45a0004  lwc1        $f26, 0x4($v0)
    ctx->pc = 0x1578c4u;
    { uint32_t bits = FAST_READ32(0x73504Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1578c8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1578c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1578cc: 0xc5785048  lwc1        $f24, 0x5048($t3)
    ctx->pc = 0x1578ccu;
    { uint32_t bits = FAST_READ32(0x735048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1578d0: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x1578d0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1578d4: 0x0  nop
    ctx->pc = 0x1578d4u;
    // NOP
    // 0x1578d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1578d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1578dc: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x1578dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x1578e0: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1578e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1578e4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1578e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1578e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1578e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1578ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1578ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1578f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1578f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1578f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1578f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1578f8: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1578f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1578fc: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1578fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x157900: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x157900u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157904: 0x0  nop
    ctx->pc = 0x157904u;
    // NOP
    // 0x157908: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15790c: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x15790cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x157910: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157914: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x157914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x157918: 0x4603d682  mul.s       $f26, $f26, $f3
    ctx->pc = 0x157918u;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[3]);
    // 0x15791c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15791cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157920: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x157920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x157924: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x157924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x157928: 0xaa2823  subu        $a1, $a1, $t2
    ctx->pc = 0x157928u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x15792c: 0x4603c602  mul.s       $f24, $f24, $f3
    ctx->pc = 0x15792cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x157930: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x157930u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x157934: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x157934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x157938: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x157938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15793c: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x15793cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x157940: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x157940u;
    {
        const bool branch_taken_0x157940 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x157940) {
            ctx->pc = 0x157944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157940u;
            // 0x157944: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x157948u;
            goto label_157948;
        }
    }
    ctx->pc = 0x157948u;
label_157948:
    // 0x157948: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x157948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15794c: 0xc579f078  lwc1        $f25, -0xF88($t3)
    ctx->pc = 0x15794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294963320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x157950: 0x2812  mflo        $a1
    ctx->pc = 0x157950u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x157954: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x157954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x157958: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x157958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15795c: 0x12c4823  subu        $t1, $t1, $t4
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x157960: 0x1251018  mult        $v0, $t1, $a1
    ctx->pc = 0x157960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157964: 0x4c9821  addu        $s3, $v0, $t4
    ctx->pc = 0x157964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x157968: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x157968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15796c: 0x0  nop
    ctx->pc = 0x15796cu;
    // NOP
label_157970:
    // 0x157970: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x157970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157974: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x157974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x157978: 0x3c28821  addu        $s1, $fp, $v0
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x15797c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x15797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x157980: 0x5460017d  bnel        $v1, $zero, . + 4 + (0x17D << 2)
    ctx->pc = 0x157980u;
    {
        const bool branch_taken_0x157980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157980) {
            ctx->pc = 0x157984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157980u;
            // 0x157984: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F78u;
            goto label_157f78;
        }
    }
    ctx->pc = 0x157988u;
    // 0x157988: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x157988u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15798c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x15798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x157990: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x157990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x157994: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x157994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x157998: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x157998u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15799c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x15799cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1579a0: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x1579a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1579a4: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x1579a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1579a8: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x1579a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1579ac: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1579acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1579b0: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1579b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1579b4: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1579b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1579b8: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1579b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1579bc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1579bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1579c0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1579c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1579c4: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x1579c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1579c8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1579c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1579cc: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x1579ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1579d0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1579d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1579d4: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x1579d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1579d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1579d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1579dc: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1579dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1579e0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1579e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1579e4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1579e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1579e8: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x1579e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x1579ec: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1579ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1579f0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1579f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1579f4: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x1579f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1579f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1579f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1579fc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1579fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x157a00: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x157a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x157a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a08: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157A08u;
    SET_GPR_U32(ctx, 31, 0x157A10u);
    ctx->pc = 0x157A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A08u;
    // 0x157a0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157A08u, 0x157A10u)) {
        return;
    }
    ctx->pc = 0x157A10u;
label_157a10:
    // 0x157a10: 0x0  nop
    ctx->pc = 0x157a10u;
    // NOP
    // 0x157a14: 0x0  nop
    ctx->pc = 0x157a14u;
    // NOP
    // 0x157a18: 0x46000004  c1          0x4
    ctx->pc = 0x157a18u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x157a1c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x157a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157a20: 0x0  nop
    ctx->pc = 0x157a20u;
    // NOP
    // 0x157a24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x157A24u;
    {
        const bool branch_taken_0x157a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A24u;
        // 0x157a28: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a24) {
            ctx->pc = 0x157A40u;
            goto label_157a40;
        }
    }
    ctx->pc = 0x157A2Cu;
    // 0x157a2c: 0x0  nop
    ctx->pc = 0x157a2cu;
    // NOP
    // 0x157a30: 0x0  nop
    ctx->pc = 0x157a30u;
    // NOP
    // 0x157a34: 0x4600b8c3  div.s       $f3, $f23, $f0
    ctx->pc = 0x157a34u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x157a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157A38u;
    {
        const bool branch_taken_0x157a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A38u;
        // 0x157a3c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a38) {
            ctx->pc = 0x157A48u;
            goto label_157a48;
        }
    }
    ctx->pc = 0x157A40u;
label_157a40:
    // 0x157a40: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x157a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a44: 0x0  nop
    ctx->pc = 0x157a44u;
    // NOP
label_157a48:
    // 0x157a48: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x157a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157a4c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x157a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157a50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x157a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157a54: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x157a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x157a58: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157a58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157a5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x157a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x157a60: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x157a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x157a64: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x157a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x157a68: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x157a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157a6c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x157a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157a70: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x157a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a74: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x157a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x157a78: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x157a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157a7c: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x157a7cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157a80: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x157a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157a84: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x157a84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x157a88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157a8c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x157a8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x157a90: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157a90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157a94: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x157a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x157a98: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x157a98u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x157a9c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x157a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x157aa0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x157aa0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x157aa4: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x157aa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x157aa8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x157aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x157aac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x157aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x157ab0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x157ab4: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157AB4u;
    SET_GPR_U32(ctx, 31, 0x157ABCu);
    ctx->pc = 0x157AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157AB4u;
    // 0x157ab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157AB4u, 0x157ABCu)) {
        return;
    }
    ctx->pc = 0x157ABCu;
label_157abc:
    // 0x157abc: 0x0  nop
    ctx->pc = 0x157abcu;
    // NOP
    // 0x157ac0: 0x0  nop
    ctx->pc = 0x157ac0u;
    // NOP
    // 0x157ac4: 0x46000004  c1          0x4
    ctx->pc = 0x157ac4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x157ac8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x157ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157acc: 0x0  nop
    ctx->pc = 0x157accu;
    // NOP
    // 0x157ad0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x157AD0u;
    {
        const bool branch_taken_0x157ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AD0u;
        // 0x157ad4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ad0) {
            ctx->pc = 0x157AF0u;
            goto label_157af0;
        }
    }
    ctx->pc = 0x157AD8u;
    // 0x157ad8: 0x0  nop
    ctx->pc = 0x157ad8u;
    // NOP
    // 0x157adc: 0x0  nop
    ctx->pc = 0x157adcu;
    // NOP
    // 0x157ae0: 0x4600b8c3  div.s       $f3, $f23, $f0
    ctx->pc = 0x157ae0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x157ae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157AE4u;
    {
        const bool branch_taken_0x157ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AE4u;
        // 0x157ae8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ae4) {
            ctx->pc = 0x157AF8u;
            goto label_157af8;
        }
    }
    ctx->pc = 0x157AECu;
    // 0x157aec: 0x0  nop
    ctx->pc = 0x157aecu;
    // NOP
label_157af0:
    // 0x157af0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x157af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157af4: 0x0  nop
    ctx->pc = 0x157af4u;
    // NOP
label_157af8:
    // 0x157af8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x157af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157afc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x157afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157b00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x157b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157b04: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x157b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x157b08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157b08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157b0c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x157b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x157b10: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x157b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x157b14: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x157b14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x157b18: 0xc0c580c  jal         func_316030
    ctx->pc = 0x157B18u;
    SET_GPR_U32(ctx, 31, 0x157B20u);
    ctx->pc = 0x157B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B18u;
    // 0x157b1c: 0x4600cd07  neg.s       $f20, $f25 (Delay Slot)
    ctx->f[20] = FPU_NEG_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x157B18u, 0x157B20u)) {
        return;
    }
    ctx->pc = 0x157B20u;
label_157b20:
    // 0x157b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157b24: 0x0  nop
    ctx->pc = 0x157b24u;
    // NOP
    // 0x157b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x157b2c: 0x4614cd41  sub.s       $f21, $f25, $f20
    ctx->pc = 0x157b2cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
    // 0x157b30: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x157b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x157b34: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x157b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x157b38: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x157b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x157b3c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x157b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157b40: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x157b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157b44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x157b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157b48: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x157b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157b4c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x157b4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x157b50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x157b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157b54: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x157b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x157b58: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x157b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x157b5c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x157b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x157b60: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x157b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x157b64: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x157b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x157b68: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x157b68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157b6c: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x157b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157b70: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x157b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157b74: 0xafad0038  sw          $t5, 0x38($sp)
    ctx->pc = 0x157b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 13));
    // 0x157b78: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x157b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b7c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x157b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157b80: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x157b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157b84: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x157b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157b88: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x157b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157b8c: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x157b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157b90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x157b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x157b94: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x157b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x157b98: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x157b98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x157b9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x157b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157ba0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x157ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x157ba4: 0xc0c580c  jal         func_316030
    ctx->pc = 0x157BA4u;
    SET_GPR_U32(ctx, 31, 0x157BACu);
    ctx->pc = 0x157BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BA4u;
    // 0x157ba8: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x157BA4u, 0x157BACu)) {
        return;
    }
    ctx->pc = 0x157BACu;
label_157bac:
    // 0x157bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157bb0: 0x0  nop
    ctx->pc = 0x157bb0u;
    // NOP
    // 0x157bb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x157bb8: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x157bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x157bbc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x157bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x157bc0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x157bc0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x157bc4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x157bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157bc8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x157bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157bcc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x157bccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x157bd0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x157bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157bd4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x157bd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x157bd8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x157bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x157bdc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x157bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x157be0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x157be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x157be4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x157be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x157be8: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x157be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x157bec: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x157becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x157bf0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x157bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157bf4: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x157bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157bf8: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x157bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157bfc: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x157bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x157c00: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x157c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c04: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x157c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c08: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x157c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157c0c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x157c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157c10: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x157c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157c14: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x157c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157c18: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x157c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x157c1c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x157c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x157c20: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x157c20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x157c24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x157c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157c28: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x157c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x157c2c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x157c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x157c30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157c34: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157C34u;
    SET_GPR_U32(ctx, 31, 0x157C3Cu);
    ctx->pc = 0x157C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C34u;
    // 0x157c38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157C34u, 0x157C3Cu)) {
        return;
    }
    ctx->pc = 0x157C3Cu;
label_157c3c:
    // 0x157c3c: 0x0  nop
    ctx->pc = 0x157c3cu;
    // NOP
    // 0x157c40: 0x0  nop
    ctx->pc = 0x157c40u;
    // NOP
    // 0x157c44: 0x46000004  c1          0x4
    ctx->pc = 0x157c44u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x157c48: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x157c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c4c: 0x0  nop
    ctx->pc = 0x157c4cu;
    // NOP
    // 0x157c50: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x157C50u;
    {
        const bool branch_taken_0x157c50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C50u;
        // 0x157c54: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c50) {
            ctx->pc = 0x157C70u;
            goto label_157c70;
        }
    }
    ctx->pc = 0x157C58u;
    // 0x157c58: 0x0  nop
    ctx->pc = 0x157c58u;
    // NOP
    // 0x157c5c: 0x0  nop
    ctx->pc = 0x157c5cu;
    // NOP
    // 0x157c60: 0x4600b8c3  div.s       $f3, $f23, $f0
    ctx->pc = 0x157c60u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x157c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157C64u;
    {
        const bool branch_taken_0x157c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C64u;
        // 0x157c68: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c64) {
            ctx->pc = 0x157C78u;
            goto label_157c78;
        }
    }
    ctx->pc = 0x157C6Cu;
    // 0x157c6c: 0x0  nop
    ctx->pc = 0x157c6cu;
    // NOP
label_157c70:
    // 0x157c70: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x157c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c74: 0x0  nop
    ctx->pc = 0x157c74u;
    // NOP
label_157c78:
    // 0x157c78: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x157c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c7c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x157c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157c80: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x157c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157c84: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x157c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x157c88: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157c88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157c8c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x157c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157c90: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x157c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x157c94: 0xc0c580c  jal         func_316030
    ctx->pc = 0x157C94u;
    SET_GPR_U32(ctx, 31, 0x157C9Cu);
    ctx->pc = 0x157C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C94u;
    // 0x157c98: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x157C94u, 0x157C9Cu)) {
        return;
    }
    ctx->pc = 0x157C9Cu;
label_157c9c:
    // 0x157c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157ca0: 0x0  nop
    ctx->pc = 0x157ca0u;
    // NOP
    // 0x157ca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x157ca8: 0x4618d041  sub.s       $f1, $f26, $f24
    ctx->pc = 0x157ca8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[24]);
    // 0x157cac: 0x6acd0007  ldl         $t5, 0x7($s6)
    ctx->pc = 0x157cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x157cb0: 0x6ecd0000  ldr         $t5, 0x0($s6)
    ctx->pc = 0x157cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x157cb4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x157cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x157cb8: 0xb22d0007  sdl         $t5, 0x7($s1)
    ctx->pc = 0x157cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157cbc: 0xb62d0000  sdr         $t5, 0x0($s1)
    ctx->pc = 0x157cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157cc0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x157cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x157cc4: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x157cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x157cc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157ccc: 0x4600c000  add.s       $f0, $f24, $f0
    ctx->pc = 0x157cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x157cd0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x157cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157cd4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x157cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157cd8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x157cd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157cdc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x157cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ce0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x157ce0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x157ce4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x157ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157ce8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x157ce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x157cec: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x157cecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x157cf0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x157cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x157cf4: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x157cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x157cf8: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x157cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x157cfc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157d00: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x157d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157d04: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x157d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157d08: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x157d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x157d0c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x157d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x157d10: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x157d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x157d14: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x157d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x157d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x157d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x157d1c: 0xb2220017  sdl         $v0, 0x17($s1)
    ctx->pc = 0x157d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157d20: 0xb6220010  sdr         $v0, 0x10($s1)
    ctx->pc = 0x157d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157d24: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x157d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x157d28: 0xc05882a  jal         func_1620A8
    ctx->pc = 0x157D28u;
    SET_GPR_U32(ctx, 31, 0x157D30u);
    ctx->pc = 0x157D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D28u;
    // 0x157d2c: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1620A8u, 0x157D28u, 0x157D30u)) {
        return;
    }
    ctx->pc = 0x157D30u;
label_157d30:
    // 0x157d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d34: 0xc05741e  jal         func_15D078
    ctx->pc = 0x157D34u;
    SET_GPR_U32(ctx, 31, 0x157D3Cu);
    ctx->pc = 0x157D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D34u;
    // 0x157d38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D078u, 0x157D34u, 0x157D3Cu)) {
        return;
    }
    ctx->pc = 0x157D3Cu;
label_157d3c:
    // 0x157d3c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x157d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x157d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d44: 0x8c62870c  lw          $v0, -0x78F4($v1)
    ctx->pc = 0x157d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x157d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d50: 0xc057422  jal         func_15D088
    ctx->pc = 0x157D50u;
    SET_GPR_U32(ctx, 31, 0x157D58u);
    ctx->pc = 0x157D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D50u;
    // 0x157d54: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D088u, 0x157D50u, 0x157D58u)) {
        return;
    }
    ctx->pc = 0x157D58u;
label_157d58:
    // 0x157d58: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x157D58u;
    {
        const bool branch_taken_0x157d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d58) {
            ctx->pc = 0x157D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157D58u;
            // 0x157d5c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157D60u;
    // 0x157d60: 0x6a270007  ldl         $a3, 0x7($s1)
    ctx->pc = 0x157d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x157d64: 0x6e270000  ldr         $a3, 0x0($s1)
    ctx->pc = 0x157d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x157d68: 0x8e2d0008  lw          $t5, 0x8($s1)
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x157d6c: 0xb2270067  sdl         $a3, 0x67($s1)
    ctx->pc = 0x157d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157d70: 0xb6270060  sdr         $a3, 0x60($s1)
    ctx->pc = 0x157d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157d74: 0xae2d0068  sw          $t5, 0x68($s1)
    ctx->pc = 0x157d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 13));
    // 0x157d78: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x157d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x157d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x157d80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x157d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x157d84: 0xc092d94  jal         func_24B650
    ctx->pc = 0x157D84u;
    SET_GPR_U32(ctx, 31, 0x157D8Cu);
    ctx->pc = 0x157D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D84u;
    // 0x157d88: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x157D84u, 0x157D8Cu)) {
        return;
    }
    ctx->pc = 0x157D8Cu;
label_157d8c:
    // 0x157d8c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x157d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x157d90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x157d94: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x157d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x157d98: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x157d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x157d9c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x157d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x157da0: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x157da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x157da4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x157da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x157da8: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x157da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x157dac: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x157dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x157db0: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x157db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x157db4: 0xb3a60077  sdl         $a2, 0x77($sp)
    ctx->pc = 0x157db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157db8: 0xb7a60070  sdr         $a2, 0x70($sp)
    ctx->pc = 0x157db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157dbc: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x157dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x157dc0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157DC0u;
    SET_GPR_U32(ctx, 31, 0x157DC8u);
    ctx->pc = 0x157DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DC0u;
    // 0x157dc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157DC0u, 0x157DC8u)) {
        return;
    }
    ctx->pc = 0x157DC8u;
label_157dc8:
    // 0x157dc8: 0x0  nop
    ctx->pc = 0x157dc8u;
    // NOP
    // 0x157dcc: 0x0  nop
    ctx->pc = 0x157dccu;
    // NOP
    // 0x157dd0: 0x46000004  c1          0x4
    ctx->pc = 0x157dd0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x157dd4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x157dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157dd8: 0x0  nop
    ctx->pc = 0x157dd8u;
    // NOP
    // 0x157ddc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x157DDCu;
    {
        const bool branch_taken_0x157ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DDCu;
        // 0x157de0: 0xc7a50070  lwc1        $f5, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ddc) {
            ctx->pc = 0x157DF0u;
            goto label_157df0;
        }
    }
    ctx->pc = 0x157DE4u;
    // 0x157de4: 0x0  nop
    ctx->pc = 0x157de4u;
    // NOP
    // 0x157de8: 0x0  nop
    ctx->pc = 0x157de8u;
    // NOP
    // 0x157dec: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x157decu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_157df0:
    // 0x157df0: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x157df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157df4: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x157df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157df8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x157df8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x157dfc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x157dfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x157e00: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x157e00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x157e04: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x157e04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x157e08: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x157e08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x157e0c: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x157e0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x157e10: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x157e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e14: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x157e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e18: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x157e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x157e1c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x157e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157e20: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x157e20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x157e24: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x157e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x157e28: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x157e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x157e2c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x157e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x157e30: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x157e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x157e34: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x157e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x157e38: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x157e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x157e3c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x157e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e40: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x157e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157e44: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x157e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e48: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x157e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157e4c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x157e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157e50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x157e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x157e54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x157e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x157e58: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x157e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x157e5c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x157e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e64: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157E64u;
    SET_GPR_U32(ctx, 31, 0x157E6Cu);
    ctx->pc = 0x157E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E64u;
    // 0x157e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157E64u, 0x157E6Cu)) {
        return;
    }
    ctx->pc = 0x157E6Cu;
label_157e6c:
    // 0x157e6c: 0x0  nop
    ctx->pc = 0x157e6cu;
    // NOP
    // 0x157e70: 0x0  nop
    ctx->pc = 0x157e70u;
    // NOP
    // 0x157e74: 0x46000004  c1          0x4
    ctx->pc = 0x157e74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x157e78: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x157e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157e7c: 0x0  nop
    ctx->pc = 0x157e7cu;
    // NOP
    // 0x157e80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x157E80u;
    {
        const bool branch_taken_0x157e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E80u;
        // 0x157e84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e80) {
            ctx->pc = 0x157EA0u;
            goto label_157ea0;
        }
    }
    ctx->pc = 0x157E88u;
    // 0x157e88: 0x0  nop
    ctx->pc = 0x157e88u;
    // NOP
    // 0x157e8c: 0x0  nop
    ctx->pc = 0x157e8cu;
    // NOP
    // 0x157e90: 0x4600b8c3  div.s       $f3, $f23, $f0
    ctx->pc = 0x157e90u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x157e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157E94u;
    {
        const bool branch_taken_0x157e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E94u;
        // 0x157e98: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e94) {
            ctx->pc = 0x157EA8u;
            goto label_157ea8;
        }
    }
    ctx->pc = 0x157E9Cu;
    // 0x157e9c: 0x0  nop
    ctx->pc = 0x157e9cu;
    // NOP
label_157ea0:
    // 0x157ea0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x157ea0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x157ea4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x157ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157ea8:
    // 0x157ea8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x157ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157eac: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x157eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157eb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x157eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157eb4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x157eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x157eb8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157ebc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x157ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x157ec0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x157ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x157ec4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x157ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x157ec8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x157ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ecc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x157eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157ed0: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x157ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x157ed4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x157ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157ed8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x157ed8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x157edc: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x157edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157ee0: 0x46003986  mov.s       $f6, $f7
    ctx->pc = 0x157ee0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[7]);
    // 0x157ee4: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x157ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157ee8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x157ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157eec: 0x46050a02  mul.s       $f8, $f1, $f5
    ctx->pc = 0x157eecu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x157ef0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x157ef0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x157ef4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x157ef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x157ef8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x157ef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x157efc: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x157efcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x157f00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157f00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157f04: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x157f04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x157f08: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x157f08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x157f0c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x157f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x157f10: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x157f10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x157f14: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x157f14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x157f18: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x157f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x157f1c: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x157f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x157f20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x157f24: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x157f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157f28: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x157f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157f2c: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x157f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
    // 0x157f30: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x157f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x157f34: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x157f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x157f38: 0x8fad0078  lw          $t5, 0x78($sp)
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x157f3c: 0xb2270037  sdl         $a3, 0x37($s1)
    ctx->pc = 0x157f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157f40: 0xb6270030  sdr         $a3, 0x30($s1)
    ctx->pc = 0x157f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157f44: 0xae2d0038  sw          $t5, 0x38($s1)
    ctx->pc = 0x157f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 13));
    // 0x157f48: 0x6ba50057  ldl         $a1, 0x57($sp)
    ctx->pc = 0x157f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x157f4c: 0x6fa50050  ldr         $a1, 0x50($sp)
    ctx->pc = 0x157f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x157f50: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x157f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x157f54: 0xb2250017  sdl         $a1, 0x17($s1)
    ctx->pc = 0x157f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157f58: 0xb6250010  sdr         $a1, 0x10($s1)
    ctx->pc = 0x157f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157f5c: 0xae260018  sw          $a2, 0x18($s1)
    ctx->pc = 0x157f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 6));
    // 0x157f60: 0xc092d94  jal         func_24B650
    ctx->pc = 0x157F60u;
    SET_GPR_U32(ctx, 31, 0x157F68u);
    ctx->pc = 0x157F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F60u;
    // 0x157f64: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x157F60u, 0x157F68u)) {
        return;
    }
    ctx->pc = 0x157F68u;
label_157f68:
    // 0x157f68: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x157f68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x157f6c: 0x0  nop
    ctx->pc = 0x157f6cu;
    // NOP
label_157f70:
    // 0x157f70: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x157F70u;
    {
        const bool branch_taken_0x157f70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x157F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F70u;
        // 0x157f74: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f70) {
            ctx->pc = 0x157F84u;
            goto label_157f84;
        }
    }
    ctx->pc = 0x157F78u;
label_157f78:
    // 0x157f78: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x157f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x157f7c: 0x1440fe7c  bnez        $v0, . + 4 + (-0x184 << 2)
    ctx->pc = 0x157F7Cu;
    {
        const bool branch_taken_0x157f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F7Cu;
        // 0x157f80: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f7c) {
            ctx->pc = 0x157970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157970;
        }
    }
    ctx->pc = 0x157F84u;
label_157f84:
    // 0x157f84: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x157f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x157f88: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x157f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x157f8c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x157f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x157f90: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x157f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x157f94: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x157f94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x157f98: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x157f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x157f9c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x157f9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x157fa0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x157fa0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x157fa4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x157fa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157fa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x157fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157fac: 0xc7bb0158  lwc1        $f27, 0x158($sp)
    ctx->pc = 0x157facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x157fb0: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x157fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x157fb4: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x157fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x157fb8: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x157fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x157fbc: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x157fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x157fc0: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x157fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x157fc4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x157fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x157fc8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x157fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x157fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x157FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FCCu;
        // 0x157fd0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157FD4u;
    // 0x157fd4: 0x0  nop
    ctx->pc = 0x157fd4u;
    // NOP
    ctx->pc = 0x157fd8u;
}
