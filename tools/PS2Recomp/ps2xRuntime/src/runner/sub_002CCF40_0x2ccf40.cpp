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

// Function: sub_002CCF40
// Address: 0x2ccf40 - 0x2ce908
void sub_002CCF40_0x2ccf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCF40_0x2ccf40");
#endif

    switch (ctx->pc) {
        case 0x2cd0a8u: goto label_2cd0a8;
        case 0x2cd280u: goto label_2cd280;
        case 0x2cd504u: goto label_2cd504;
        case 0x2cd740u: goto label_2cd740;
        case 0x2cd778u: goto label_2cd778;
        case 0x2cd8f4u: goto label_2cd8f4;
        case 0x2cda80u: goto label_2cda80;
        case 0x2cdb68u: goto label_2cdb68;
        case 0x2cdf78u: goto label_2cdf78;
        case 0x2ce138u: goto label_2ce138;
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce60cu: goto label_2ce60c;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce754u: goto label_2ce754;
        case 0x2ce868u: goto label_2ce868;
        default: break;
    }

    ctx->pc = 0x2ccf40u;

    // 0x2ccf40: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x2ccf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x2ccf44: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2ccf44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf48: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x2ccf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
    // 0x2ccf4c: 0xafa70148  sw          $a3, 0x148($sp)
    ctx->pc = 0x2ccf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 7));
    // 0x2ccf50: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x2ccf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x2ccf54: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x2ccf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x2ccf58: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2ccf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2ccf5c: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x2ccf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
    // 0x2ccf60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ccf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf64: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x2ccf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x2ccf68: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2ccf68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf6c: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x2ccf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x2ccf70: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2ccf70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf74: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x2ccf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
    // 0x2ccf78: 0x7fb60220  sq          $s6, 0x220($sp)
    ctx->pc = 0x2ccf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 22));
    // 0x2ccf7c: 0x7fb70210  sq          $s7, 0x210($sp)
    ctx->pc = 0x2ccf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 23));
    // 0x2ccf80: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x2ccf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x2ccf84: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x2ccf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x2ccf88: 0xe7bf02e8  swc1        $f31, 0x2E8($sp)
    ctx->pc = 0x2ccf88u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x2ccf8c: 0xe7be02e0  swc1        $f30, 0x2E0($sp)
    ctx->pc = 0x2ccf8cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x2ccf90: 0xe7bd02d8  swc1        $f29, 0x2D8($sp)
    ctx->pc = 0x2ccf90u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x2ccf94: 0xe7bc02d0  swc1        $f28, 0x2D0($sp)
    ctx->pc = 0x2ccf94u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x2ccf98: 0xe7bb02c8  swc1        $f27, 0x2C8($sp)
    ctx->pc = 0x2ccf98u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x2ccf9c: 0xe7ba02c0  swc1        $f26, 0x2C0($sp)
    ctx->pc = 0x2ccf9cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x2ccfa0: 0xe7b902b8  swc1        $f25, 0x2B8($sp)
    ctx->pc = 0x2ccfa0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x2ccfa4: 0xe7b802b0  swc1        $f24, 0x2B0($sp)
    ctx->pc = 0x2ccfa4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2ccfa8: 0xe7b702a8  swc1        $f23, 0x2A8($sp)
    ctx->pc = 0x2ccfa8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2ccfac: 0xe7b602a0  swc1        $f22, 0x2A0($sp)
    ctx->pc = 0x2ccfacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2ccfb0: 0xe7b50298  swc1        $f21, 0x298($sp)
    ctx->pc = 0x2ccfb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2ccfb4: 0xe7b40290  swc1        $f20, 0x290($sp)
    ctx->pc = 0x2ccfb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2ccfb8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2ccfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2ccfbc: 0xe7ac014c  swc1        $f12, 0x14C($sp)
    ctx->pc = 0x2ccfbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2ccfc0: 0xe7ad0150  swc1        $f13, 0x150($sp)
    ctx->pc = 0x2ccfc0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2ccfc4: 0xafa90154  sw          $t1, 0x154($sp)
    ctx->pc = 0x2ccfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 9));
    // 0x2ccfc8: 0xafaa0158  sw          $t2, 0x158($sp)
    ctx->pc = 0x2ccfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 10));
    // 0x2ccfcc: 0xafab015c  sw          $t3, 0x15C($sp)
    ctx->pc = 0x2ccfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 11));
    // 0x2ccfd0: 0x8fad02f8  lw          $t5, 0x2F8($sp)
    ctx->pc = 0x2ccfd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x2ccfd4: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x2ccfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x2ccfd8: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2CCFD8u;
    {
        const bool branch_taken_0x2ccfd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFD8u;
        // 0x2ccfdc: 0xafa00124  sw          $zero, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfd8) {
            ctx->pc = 0x2CD1B0u;
            goto label_2cd1b0;
        }
    }
    ctx->pc = 0x2CCFE0u;
    // 0x2ccfe0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ccfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfe4: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2CCFE4u;
    {
        const bool branch_taken_0x2ccfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFE4u;
        // 0x2ccfe8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfe4) {
            ctx->pc = 0x2CD1A8u;
            goto label_2cd1a8;
        }
    }
    ctx->pc = 0x2CCFECu;
    // 0x2ccfec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2ccfecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ccff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccff4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2ccff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccff8: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCFF8u;
    {
        const bool branch_taken_0x2ccff8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2CCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFF8u;
        // 0x2ccffc: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccff8) {
            ctx->pc = 0x2CD008u;
            goto label_2cd008;
        }
    }
    ctx->pc = 0x2CD000u;
    // 0x2cd000: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CD000u;
    {
        const bool branch_taken_0x2cd000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD000u;
        // 0x2cd004: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd000) {
            ctx->pc = 0x2CD090u;
            goto label_2cd090;
        }
    }
    ctx->pc = 0x2CD008u;
label_2cd008:
    // 0x2cd008: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x2cd008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd00c: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x2cd00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd010: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2cd010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd014: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2cd014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd018: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x2cd018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2cd01c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd020: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2cd020u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2cd024: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2cd024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd028: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cd028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd02c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cd02cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2cd030: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2cd030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd034: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cd034u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cd038: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2cd038u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2cd03c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2cd03cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2cd040: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2cd040u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2cd044: 0xe5a50000  swc1        $f5, 0x0($t5)
    ctx->pc = 0x2cd044u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2cd048: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cd048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd04c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2cd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd050: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd058: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x2cd058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2cd05c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd060: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2cd060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd064: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd068: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd06c: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2cd06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2cd070: 0x25a50010  addiu       $a1, $t5, 0x10
    ctx->pc = 0x2cd070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2cd074: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x2cd074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd07c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2cd07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2cd080: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CD080u;
    {
        const bool branch_taken_0x2cd080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD080u;
        // 0x2cd084: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd080) {
            ctx->pc = 0x2CD1A8u;
            goto label_2cd1a8;
        }
    }
    ctx->pc = 0x2CD088u;
    // 0x2cd088: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cd088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd08c: 0x0  nop
    ctx->pc = 0x2cd08cu;
    // NOP
label_2cd090:
    // 0x2cd090: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd094: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2cd094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd098: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2cd098u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd09c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2cd09cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0a0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2cd0a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2cd0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd0a8:
    // 0x2cd0a8: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x2cd0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd0ac: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2cd0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd0b0: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x2cd0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd0b4: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2cd0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd0b8: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x2cd0b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2cd0bc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd0c0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2cd0c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2cd0c4: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2cd0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd0c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cd0c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd0cc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2cd0ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2cd0d0: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2cd0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd0d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cd0d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cd0d8: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2cd0d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2cd0dc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2cd0dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd0e0: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2cd0e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2cd0e4: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x2cd0e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2cd0e8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cd0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd0ec: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2cd0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd0f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd0f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd0f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd0f8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2cd0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2cd0fc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd100: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2cd100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd104: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd108: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd10c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2cd10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2cd110: 0xc5240010  lwc1        $f4, 0x10($t1)
    ctx->pc = 0x2cd110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd114: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2cd114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd118: 0xc5450014  lwc1        $f5, 0x14($t2)
    ctx->pc = 0x2cd118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd11c: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2cd11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd120: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x2cd120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2cd124: 0xc5610018  lwc1        $f1, 0x18($t3)
    ctx->pc = 0x2cd124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd128: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2cd128u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2cd12c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd130: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cd130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd134: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2cd134u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2cd138: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cd138u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cd13c: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2cd13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd140: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x2cd140u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2cd144: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2cd144u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd148: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2cd148u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2cd14c: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x2cd14cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2cd150: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cd150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd154: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x2cd154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd158: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd15c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd15cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd160: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x2cd160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2cd164: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd168: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2cd168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd16c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd170: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd174: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2cd174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2cd178: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2cd178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2cd17c: 0x8fac0148  lw          $t4, 0x148($sp)
    ctx->pc = 0x2cd17cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd180: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2cd180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2cd184: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2cd184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2cd188: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2cd188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2cd18c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2cd18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2cd190: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2cd190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2cd194: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2cd194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2cd198: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x2cd198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x2cd19c: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x2cd19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2cd1a0: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2CD1A0u;
    {
        const bool branch_taken_0x2cd1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1A0u;
        // 0x2cd1a4: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1a0) {
            ctx->pc = 0x2CD0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd0a8;
        }
    }
    ctx->pc = 0x2CD1A8u;
label_2cd1a8:
    // 0x2cd1a8: 0x100005be  b           . + 4 + (0x5BE << 2)
    ctx->pc = 0x2CD1A8u;
    {
        const bool branch_taken_0x2cd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1A8u;
        // 0x2cd1ac: 0x8fa20148  lw          $v0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1a8) {
            ctx->pc = 0x2CE8A4u;
            goto label_2ce8a4;
        }
    }
    ctx->pc = 0x2CD1B0u;
label_2cd1b0:
    // 0x2cd1b0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2cd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd1b4: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2CD1B4u;
    {
        const bool branch_taken_0x2cd1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1B4u;
        // 0x2cd1b8: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1b4) {
            ctx->pc = 0x2CD388u;
            goto label_2cd388;
        }
    }
    ctx->pc = 0x2CD1BCu;
    // 0x2cd1bc: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2cd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd1c0: 0x1080006f  beqz        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2CD1C0u;
    {
        const bool branch_taken_0x2cd1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1C0u;
        // 0x2cd1c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1c0) {
            ctx->pc = 0x2CD380u;
            goto label_2cd380;
        }
    }
    ctx->pc = 0x2CD1C8u;
    // 0x2cd1c8: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2cd1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd1cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cd1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1d0: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2cd1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1d4: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD1D4u;
    {
        const bool branch_taken_0x2cd1d4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2CD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1D4u;
        // 0x2cd1d8: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1d4) {
            ctx->pc = 0x2CD1E4u;
            goto label_2cd1e4;
        }
    }
    ctx->pc = 0x2CD1DCu;
    // 0x2cd1dc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CD1DCu;
    {
        const bool branch_taken_0x2cd1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1DCu;
        // 0x2cd1e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1dc) {
            ctx->pc = 0x2CD268u;
            goto label_2cd268;
        }
    }
    ctx->pc = 0x2CD1E4u;
label_2cd1e4:
    // 0x2cd1e4: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2cd1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd1e8: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x2cd1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd1ec: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2cd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd1f0: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2cd1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd1f4: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x2cd1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2cd1f8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd1fc: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2cd1fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2cd200: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2cd200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd204: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cd204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd208: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cd208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2cd20c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2cd20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd210: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cd210u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cd214: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2cd214u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2cd218: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2cd218u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2cd21c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2cd21cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2cd220: 0xe5a50000  swc1        $f5, 0x0($t5)
    ctx->pc = 0x2cd220u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2cd224: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cd224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd228: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2cd228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd22c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd230: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd234: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x2cd234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2cd238: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd23c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2cd23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd240: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd244: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd248: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2cd248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2cd24c: 0x25a50010  addiu       $a1, $t5, 0x10
    ctx->pc = 0x2cd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2cd250: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2cd250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd258: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2cd258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2cd25c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2CD25Cu;
    {
        const bool branch_taken_0x2cd25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD25Cu;
        // 0x2cd260: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd25c) {
            ctx->pc = 0x2CD380u;
            goto label_2cd380;
        }
    }
    ctx->pc = 0x2CD264u;
    // 0x2cd264: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cd264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd268:
    // 0x2cd268: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd26c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2cd26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd270: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2cd270u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd274: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2cd274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd278: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2cd278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd27c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2cd27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd280:
    // 0x2cd280: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x2cd280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd284: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2cd284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd288: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x2cd288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd28c: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2cd28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd290: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x2cd290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2cd294: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd298: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2cd298u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2cd29c: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2cd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cd2a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2a4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2cd2a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2cd2a8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2cd2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2ac: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cd2acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cd2b0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2cd2b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2cd2b4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2cd2b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd2b8: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2cd2b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2cd2bc: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x2cd2bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2cd2c0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cd2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2c4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2cd2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd2cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd2ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2d0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2cd2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2cd2d4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2d8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2cd2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd2e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2e4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2cd2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2cd2e8: 0xc5240010  lwc1        $f4, 0x10($t1)
    ctx->pc = 0x2cd2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd2ec: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2cd2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd2f0: 0xc5450014  lwc1        $f5, 0x14($t2)
    ctx->pc = 0x2cd2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd2f4: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2cd2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd2f8: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x2cd2f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2cd2fc: 0xc5610018  lwc1        $f1, 0x18($t3)
    ctx->pc = 0x2cd2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd300: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2cd300u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2cd304: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd308: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cd308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd30c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2cd30cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2cd310: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cd310u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cd314: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2cd314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd318: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x2cd318u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2cd31c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2cd31cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd320: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2cd320u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2cd324: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x2cd324u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2cd328: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cd328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd32c: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x2cd32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd330: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd338: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x2cd338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2cd33c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cd33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd340: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2cd340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd344: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cd344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd348: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd34c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2cd34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2cd350: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2cd350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2cd354: 0x8fac0144  lw          $t4, 0x144($sp)
    ctx->pc = 0x2cd354u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd358: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2cd35c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2cd35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2cd360: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2cd360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2cd364: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2cd364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2cd368: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2cd368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2cd36c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2cd36cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2cd370: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x2cd370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x2cd374: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x2cd374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2cd378: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2CD378u;
    {
        const bool branch_taken_0x2cd378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD378u;
        // 0x2cd37c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd378) {
            ctx->pc = 0x2CD280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd280;
        }
    }
    ctx->pc = 0x2CD380u;
label_2cd380:
    // 0x2cd380: 0x10000548  b           . + 4 + (0x548 << 2)
    ctx->pc = 0x2CD380u;
    {
        const bool branch_taken_0x2cd380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD380u;
        // 0x2cd384: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd380) {
            ctx->pc = 0x2CE8A4u;
            goto label_2ce8a4;
        }
    }
    ctx->pc = 0x2CD388u;
label_2cd388:
    // 0x2cd388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd38c: 0x14620097  bne         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2CD38Cu;
    {
        const bool branch_taken_0x2cd38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD38Cu;
        // 0x2cd390: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd38c) {
            ctx->pc = 0x2CD5ECu;
            goto label_2cd5ec;
        }
    }
    ctx->pc = 0x2CD394u;
    // 0x2cd394: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2cd394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2cd398: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x2cd398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd39c: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD39Cu;
    {
        const bool branch_taken_0x2cd39c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD39Cu;
        // 0x2cd3a0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd39c) {
            ctx->pc = 0x2CD3C8u;
            goto label_2cd3c8;
        }
    }
    ctx->pc = 0x2CD3A4u;
    // 0x2cd3a4: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x2cd3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2cd3a8: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x2cd3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2cd3ac: 0x8e8c0008  lw          $t4, 0x8($s4)
    ctx->pc = 0x2cd3acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2cd3b0: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x2cd3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cd3b4: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x2cd3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cd3b8: 0xafac0038  sw          $t4, 0x38($sp)
    ctx->pc = 0x2cd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 12));
    // 0x2cd3bc: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2cd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2cd3c0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2CD3C0u;
    {
        const bool branch_taken_0x2cd3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3C0u;
        // 0x2cd3c4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3c0) {
            ctx->pc = 0x2CD590u;
            goto label_2cd590;
        }
    }
    ctx->pc = 0x2CD3C8u;
label_2cd3c8:
    // 0x2cd3c8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2cd3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd3cc: 0x14b10045  bne         $a1, $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2CD3CCu;
    {
        const bool branch_taken_0x2cd3cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3CCu;
        // 0x2cd3d0: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3cc) {
            ctx->pc = 0x2CD4E4u;
            goto label_2cd4e4;
        }
    }
    ctx->pc = 0x2CD3D4u;
    // 0x2cd3d4: 0xc6840010  lwc1        $f4, 0x10($s4)
    ctx->pc = 0x2cd3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd3d8: 0xc6870000  lwc1        $f7, 0x0($s4)
    ctx->pc = 0x2cd3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cd3dc: 0xc6850014  lwc1        $f5, 0x14($s4)
    ctx->pc = 0x2cd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd3e0: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x2cd3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cd3e4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2cd3e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2cd3e8: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x2cd3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd3ec: 0xc6860008  lwc1        $f6, 0x8($s4)
    ctx->pc = 0x2cd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd3f0: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x2cd3f0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x2cd3f4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2cd3f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cd3f8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2cd3f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2cd3fc: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2cd3fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cd400: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2cd400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cd404: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2cd404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2cd408: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2cd408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cd40c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2cd40cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cd410: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd414: 0x46020a40  add.s       $f9, $f1, $f2
    ctx->pc = 0x2cd414u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cd418: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2cd418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd41c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2cd41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd420: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x2cd420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2cd424: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2cd424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd428: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x2cd428u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2cd42c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2cd42cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2cd430: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2cd430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2cd434: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2cd434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2cd438: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2cd438u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cd43c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd440: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cd440u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cd444: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cd444u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cd448: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2cd448u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2cd44c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2cd44cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2cd450: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2cd450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd454: 0x0  nop
    ctx->pc = 0x2cd454u;
    // NOP
    // 0x2cd458: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD458u;
    {
        const bool branch_taken_0x2cd458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD458u;
        // 0x2cd45c: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd458) {
            ctx->pc = 0x2CD470u;
            goto label_2cd470;
        }
    }
    ctx->pc = 0x2CD460u;
    // 0x2cd460: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cd460u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cd464: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CD464u;
    {
        const bool branch_taken_0x2cd464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD464u;
        // 0x2cd468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd464) {
            ctx->pc = 0x2CD498u;
            goto label_2cd498;
        }
    }
    ctx->pc = 0x2CD46Cu;
    // 0x2cd46c: 0x0  nop
    ctx->pc = 0x2cd46cu;
    // NOP
label_2cd470:
    // 0x2cd470: 0x46044836  c.le.s      $f9, $f4
    ctx->pc = 0x2cd470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd474: 0x0  nop
    ctx->pc = 0x2cd474u;
    // NOP
    // 0x2cd478: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD478u;
    {
        const bool branch_taken_0x2cd478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD478u;
        // 0x2cd47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd478) {
            ctx->pc = 0x2CD490u;
            goto label_2cd490;
        }
    }
    ctx->pc = 0x2CD480u;
    // 0x2cd480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd484: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD488u;
    {
        const bool branch_taken_0x2cd488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD488u;
        // 0x2cd48c: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd488) {
            ctx->pc = 0x2CD4A0u;
            goto label_2cd4a0;
        }
    }
    ctx->pc = 0x2CD490u;
label_2cd490:
    // 0x2cd490: 0x46092043  div.s       $f1, $f4, $f9
    ctx->pc = 0x2cd490u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[9]);
    // 0x2cd494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd498:
    // 0x2cd498: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2cd498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd49c: 0x0  nop
    ctx->pc = 0x2cd49cu;
    // NOP
label_2cd4a0:
    // 0x2cd4a0: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2cd4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd4a4: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2cd4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd4a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2cd4a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cd4ac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cd4acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cd4b0: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x2cd4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd4b4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2cd4b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2cd4b8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2cd4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd4bc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2cd4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd4c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cd4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cd4c4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2cd4c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2cd4c8: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2cd4c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2cd4cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cd4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cd4d0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2cd4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cd4d4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2cd4d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cd4d8: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x2cd4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2cd4dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2CD4DCu;
    {
        const bool branch_taken_0x2cd4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4DCu;
        // 0x2cd4e0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4dc) {
            ctx->pc = 0x2CD590u;
            goto label_2cd590;
        }
    }
    ctx->pc = 0x2CD4E4u;
label_2cd4e4:
    // 0x2cd4e4: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x2cd4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd4e8: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2cd4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2cd4ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cd4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cd4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cd4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cd4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4fc: 0xc0b2f1c  jal         func_2CBC70
    ctx->pc = 0x2CD4FCu;
    SET_GPR_U32(ctx, 31, 0x2CD504u);
    ctx->pc = 0x2CD500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4FCu;
    // 0x2cd500: 0x27a90120  addiu       $t1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CBC70u, 0x2CD4FCu, 0x2CD504u)) {
        return;
    }
    ctx->pc = 0x2CD504u;
label_2cd504:
    // 0x2cd504: 0x8fac015c  lw          $t4, 0x15C($sp)
    ctx->pc = 0x2cd504u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2cd508: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2cd508u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2cd50c: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD50Cu;
    {
        const bool branch_taken_0x2cd50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD50Cu;
        // 0x2cd510: 0x7bad01e0  lq          $t5, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd50c) {
            ctx->pc = 0x2CD524u;
            goto label_2cd524;
        }
    }
    ctx->pc = 0x2CD514u;
    // 0x2cd514: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2cd514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2cd518: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2cd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cd51c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2CD51Cu;
    {
        const bool branch_taken_0x2cd51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD51Cu;
        // 0x2cd520: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd51c) {
            ctx->pc = 0x2CD75Cu;
            goto label_2cd75c;
        }
    }
    ctx->pc = 0x2CD524u;
label_2cd524:
    // 0x2cd524: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2cd524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd528: 0x5444001b  bnel        $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CD528u;
    {
        const bool branch_taken_0x2cd528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cd528) {
            ctx->pc = 0x2CD52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD528u;
            // 0x2cd52c: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD598u;
            goto label_2cd598;
        }
    }
    ctx->pc = 0x2CD530u;
    // 0x2cd530: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd534: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2cd534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2cd538: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x2cd538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2cd53c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2cd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cd540: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2cd540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cd544: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2cd544u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2cd548: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2cd548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2cd54c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2cd54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cd550: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cd550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cd554: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2cd554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2cd558: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2cd558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2cd55c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2cd55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd560: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2cd560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd564: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2cd564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd568: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cd568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cd56c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2cd56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd570: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2cd570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd574: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cd574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd578: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd578u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd57c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2cd57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cd580: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cd580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cd584: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2cd584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cd588: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cd588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cd58c: 0x0  nop
    ctx->pc = 0x2cd58cu;
    // NOP
label_2cd590:
    // 0x2cd590: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x2cd590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x2cd594: 0x0  nop
    ctx->pc = 0x2cd594u;
    // NOP
label_2cd598:
    // 0x2cd598: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2cd598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd59c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2cd59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd5a0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2cd5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd5a4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2cd5a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2cd5a8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2cd5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd5ac: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2cd5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd5b0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2cd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd5b4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd5b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd5b8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2cd5b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cd5bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd5bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd5c0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2cd5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2cd5c4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2cd5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cd5c8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2cd5c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cd5cc: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x2cd5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2cd5d0: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x2cd5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2cd5d4: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x2cd5d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2cd5d8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x2cd5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cd5dc: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x2cd5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cd5e0: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x2cd5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x2cd5e4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2CD5E4u;
    {
        const bool branch_taken_0x2cd5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5E4u;
        // 0x2cd5e8: 0x46021082  mul.s       $f2, $f2, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5e4) {
            ctx->pc = 0x2CD840u;
            goto label_2cd840;
        }
    }
    ctx->pc = 0x2CD5ECu;
label_2cd5ec:
    // 0x2cd5ec: 0x14820099  bne         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2CD5ECu;
    {
        const bool branch_taken_0x2cd5ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5ECu;
        // 0x2cd5f0: 0x8fa50160  lw          $a1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5ec) {
            ctx->pc = 0x2CD854u;
            goto label_2cd854;
        }
    }
    ctx->pc = 0x2CD5F4u;
    // 0x2cd5f4: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x2cd5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2cd5f8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2cd5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd5fc: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2cd5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd600: 0x14d10046  bne         $a2, $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CD600u;
    {
        const bool branch_taken_0x2cd600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD600u;
        // 0x2cd604: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd600) {
            ctx->pc = 0x2CD71Cu;
            goto label_2cd71c;
        }
    }
    ctx->pc = 0x2CD608u;
    // 0x2cd608: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x2cd608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd60c: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x2cd60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cd610: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x2cd610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd614: 0xc6680004  lwc1        $f8, 0x4($s3)
    ctx->pc = 0x2cd614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cd618: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2cd618u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2cd61c: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x2cd61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd620: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x2cd620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd624: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x2cd624u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x2cd628: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2cd628u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cd62c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2cd62cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2cd630: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2cd630u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cd634: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2cd634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cd638: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2cd638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd63c: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2cd63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2cd640: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2cd640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cd644: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2cd644u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cd648: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd64c: 0x46020a40  add.s       $f9, $f1, $f2
    ctx->pc = 0x2cd64cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cd650: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2cd650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd654: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2cd654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd658: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x2cd658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2cd65c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2cd65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd660: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x2cd660u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2cd664: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2cd664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2cd668: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2cd668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2cd66c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2cd66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2cd670: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2cd670u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cd674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd678: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cd678u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cd67c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cd67cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cd680: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2cd680u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2cd684: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2cd684u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2cd688: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2cd688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd68c: 0x0  nop
    ctx->pc = 0x2cd68cu;
    // NOP
    // 0x2cd690: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD690u;
    {
        const bool branch_taken_0x2cd690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD690u;
        // 0x2cd694: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd690) {
            ctx->pc = 0x2CD6A8u;
            goto label_2cd6a8;
        }
    }
    ctx->pc = 0x2CD698u;
    // 0x2cd698: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2cd698u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2cd69c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CD69Cu;
    {
        const bool branch_taken_0x2cd69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD69Cu;
        // 0x2cd6a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd69c) {
            ctx->pc = 0x2CD6D0u;
            goto label_2cd6d0;
        }
    }
    ctx->pc = 0x2CD6A4u;
    // 0x2cd6a4: 0x0  nop
    ctx->pc = 0x2cd6a4u;
    // NOP
label_2cd6a8:
    // 0x2cd6a8: 0x46044836  c.le.s      $f9, $f4
    ctx->pc = 0x2cd6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd6ac: 0x0  nop
    ctx->pc = 0x2cd6acu;
    // NOP
    // 0x2cd6b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD6B0u;
    {
        const bool branch_taken_0x2cd6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6B0u;
        // 0x2cd6b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6b0) {
            ctx->pc = 0x2CD6C8u;
            goto label_2cd6c8;
        }
    }
    ctx->pc = 0x2CD6B8u;
    // 0x2cd6b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd6bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2cd6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2cd6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD6C0u;
    {
        const bool branch_taken_0x2cd6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6C0u;
        // 0x2cd6c4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6c0) {
            ctx->pc = 0x2CD6D8u;
            goto label_2cd6d8;
        }
    }
    ctx->pc = 0x2CD6C8u;
label_2cd6c8:
    // 0x2cd6c8: 0x46092103  div.s       $f4, $f4, $f9
    ctx->pc = 0x2cd6c8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[9]);
    // 0x2cd6cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd6d0:
    // 0x2cd6d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd6d4: 0x0  nop
    ctx->pc = 0x2cd6d4u;
    // NOP
label_2cd6d8:
    // 0x2cd6d8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2cd6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd6dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cd6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2cd6e0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2cd6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd6e4: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x2cd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd6e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cd6e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd6ec: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2cd6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd6f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cd6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd6f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cd6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2cd6f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cd6f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cd6fc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2cd6fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cd700: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2cd700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd704: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cd704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2cd708: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cd708u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cd70c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2cd70cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cd710: 0x8fac0158  lw          $t4, 0x158($sp)
    ctx->pc = 0x2cd710u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2cd714: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2CD714u;
    {
        const bool branch_taken_0x2cd714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD714u;
        // 0x2cd718: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd714) {
            ctx->pc = 0x2CD7E8u;
            goto label_2cd7e8;
        }
    }
    ctx->pc = 0x2CD71Cu;
label_2cd71c:
    // 0x2cd71c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cd71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd720: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x2cd720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd724: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2cd724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2cd728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cd728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd72c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cd72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd730: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2cd730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd734: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cd734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd738: 0xc0b2f1c  jal         func_2CBC70
    ctx->pc = 0x2CD738u;
    SET_GPR_U32(ctx, 31, 0x2CD740u);
    ctx->pc = 0x2CD73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD738u;
    // 0x2cd73c: 0x27a90128  addiu       $t1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CBC70u, 0x2CD738u, 0x2CD740u)) {
        return;
    }
    ctx->pc = 0x2CD740u;
label_2cd740:
    // 0x2cd740: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2cd740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2cd744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2cd744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2cd748: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CD748u;
    {
        const bool branch_taken_0x2cd748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD748u;
        // 0x2cd74c: 0x7bad01e0  lq          $t5, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd748) {
            ctx->pc = 0x2CD780u;
            goto label_2cd780;
        }
    }
    ctx->pc = 0x2CD750u;
    // 0x2cd750: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2cd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2cd754: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cd758: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2cd758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2cd75c:
    // 0x2cd75c: 0x10400362  beqz        $v0, . + 4 + (0x362 << 2)
    ctx->pc = 0x2CD75Cu;
    {
        const bool branch_taken_0x2cd75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD75Cu;
        // 0x2cd760: 0xc7ac0150  lwc1        $f12, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd75c) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CD764u;
    // 0x2cd764: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2cd764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cd768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd76c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cd76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd770: 0xc0b335a  jal         func_2CCD68
    ctx->pc = 0x2CD770u;
    SET_GPR_U32(ctx, 31, 0x2CD778u);
    ctx->pc = 0x2CD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD770u;
    // 0x2cd774: 0x27a40124  addiu       $a0, $sp, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCD68u, 0x2CD770u, 0x2CD778u)) {
        return;
    }
    ctx->pc = 0x2CD778u;
label_2cd778:
    // 0x2cd778: 0x1000044a  b           . + 4 + (0x44A << 2)
    ctx->pc = 0x2CD778u;
    {
        const bool branch_taken_0x2cd778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD778u;
        // 0x2cd77c: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd778) {
            ctx->pc = 0x2CE8A4u;
            goto label_2ce8a4;
        }
    }
    ctx->pc = 0x2CD780u;
label_2cd780:
    // 0x2cd780: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x2cd780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd784: 0x5445001a  bnel        $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CD784u;
    {
        const bool branch_taken_0x2cd784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cd784) {
            ctx->pc = 0x2CD788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD784u;
            // 0x2cd788: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7F0u;
            goto label_2cd7f0;
        }
    }
    ctx->pc = 0x2CD78Cu;
    // 0x2cd78c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2cd78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cd790: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2cd790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2cd794: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x2cd794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2cd798: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2cd798u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cd79c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2cd79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cd7a0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2cd7a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2cd7a4: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2cd7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2cd7a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2cd7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cd7ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cd7b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd7b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2cd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cd7b8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2cd7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd7bc: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2cd7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd7c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2cd7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd7c4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cd7c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cd7c8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2cd7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd7cc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2cd7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd7d0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cd7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd7d4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd7d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd7d8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2cd7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cd7dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cd7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cd7e0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2cd7e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cd7e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2cd7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2cd7e8:
    // 0x2cd7e8: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x2cd7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x2cd7ec: 0x0  nop
    ctx->pc = 0x2cd7ecu;
    // NOP
label_2cd7f0:
    // 0x2cd7f0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2cd7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd7f4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2cd7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd7f8: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x2cd7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd7fc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2cd7fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2cd800: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2cd800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd804: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2cd804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd808: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cd808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd80c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd80cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd810: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2cd810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cd814: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd818: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2cd818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2cd81c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2cd81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cd820: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2cd820u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cd824: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cd824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2cd828: 0x6a8c0007  ldl         $t4, 0x7($s4)
    ctx->pc = 0x2cd828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2cd82c: 0x6e8c0000  ldr         $t4, 0x0($s4)
    ctx->pc = 0x2cd82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2cd830: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2cd830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2cd834: 0xb3ac0037  sdl         $t4, 0x37($sp)
    ctx->pc = 0x2cd834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cd838: 0xb7ac0030  sdr         $t4, 0x30($sp)
    ctx->pc = 0x2cd838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cd83c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2cd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2cd840:
    // 0x2cd840: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cd840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2cd844: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2cd844u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2cd848: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cd848u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cd84c: 0x10000330  b           . + 4 + (0x330 << 2)
    ctx->pc = 0x2CD84Cu;
    {
        const bool branch_taken_0x2cd84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD84Cu;
        // 0x2cd850: 0xe7a30164  swc1        $f3, 0x164($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd84c) {
            ctx->pc = 0x2CE510u;
            goto label_2ce510;
        }
    }
    ctx->pc = 0x2CD854u;
label_2cd854:
    // 0x2cd854: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x2cd854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cd858: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CD858u;
    {
        const bool branch_taken_0x2cd858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD858u;
        // 0x2cd85c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd858) {
            ctx->pc = 0x2CD9ECu;
            goto label_2cd9ec;
        }
    }
    ctx->pc = 0x2CD860u;
    // 0x2cd860: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2cd860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd864: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2cd864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd868: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2cd868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd86c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cd86cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cd870: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x2cd870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd874: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2cd874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd878: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x2cd878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd87c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd87cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd880: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2cd880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cd884: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cd884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cd888: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2cd888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cd88c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2cd88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cd890: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2cd890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd894: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x2cd894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd898: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x2cd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd89c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cd89cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cd8a0: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x2cd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd8a4: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x2cd8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8a8: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x2cd8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd8ac: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd8acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd8b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2cd8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cd8b4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cd8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cd8b8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2cd8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cd8bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2cd8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cd8c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd8c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd8c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cd8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cd8cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cd8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cd8d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cd8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cd8d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8d8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cd8d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd8dc: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x2cd8dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x2cd8e0: 0x27a8012c  addiu       $t0, $sp, 0x12C
    ctx->pc = 0x2cd8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x2cd8e4: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x2cd8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2cd8e8: 0x27aa0134  addiu       $t2, $sp, 0x134
    ctx->pc = 0x2cd8e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2cd8ec: 0xc0b2ff0  jal         func_2CBFC0
    ctx->pc = 0x2CD8ECu;
    SET_GPR_U32(ctx, 31, 0x2CD8F4u);
    ctx->pc = 0x2CD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8ECu;
    // 0x2cd8f0: 0x7fad01e0  sq          $t5, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CBFC0u, 0x2CD8ECu, 0x2CD8F4u)) {
        return;
    }
    ctx->pc = 0x2CD8F4u;
label_2cd8f4:
    // 0x2cd8f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2cd8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd8f8: 0xc7a90130  lwc1        $f9, 0x130($sp)
    ctx->pc = 0x2cd8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2cd8fc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2cd8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd900: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2cd900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd904: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2cd904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2cd908: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2cd908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2cd90c: 0xc6680008  lwc1        $f8, 0x8($s3)
    ctx->pc = 0x2cd90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cd910: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2cd910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2cd914: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x2cd914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cd918: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x2cd918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cd91c: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2cd91cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2cd920: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x2cd920u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x2cd924: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x2cd924u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2cd928: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2cd928u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd92c: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x2cd92cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cd930: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x2cd930u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cd934: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2cd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd938: 0xc7aa012c  lwc1        $f10, 0x12C($sp)
    ctx->pc = 0x2cd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2cd93c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2cd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd940: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2cd940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd944: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x2cd944u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2cd948: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2cd948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2cd94c: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x2cd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cd950: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x2cd950u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2cd954: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2cd954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd958: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2cd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd95c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2cd95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2cd960: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cd960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cd964: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2cd964u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2cd968: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cd968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cd96c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2cd96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cd970: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2cd970u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cd974: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2cd974u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2cd978: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x2cd978u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2cd97c: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x2cd97cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cd980: 0x46054201  sub.s       $f8, $f8, $f5
    ctx->pc = 0x2cd980u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x2cd984: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2cd984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2cd988: 0xe7a80048  swc1        $f8, 0x48($sp)
    ctx->pc = 0x2cd988u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cd98c: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x2cd98cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2cd990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd994: 0x46090032  c.eq.s      $f0, $f9
    ctx->pc = 0x2cd994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd998: 0x0  nop
    ctx->pc = 0x2cd998u;
    // NOP
    // 0x2cd99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD99Cu;
    {
        const bool branch_taken_0x2cd99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD99Cu;
        // 0x2cd9a0: 0x7bad01e0  lq          $t5, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd99c) {
            ctx->pc = 0x2CD9A8u;
            goto label_2cd9a8;
        }
    }
    ctx->pc = 0x2CD9A4u;
    // 0x2cd9a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2cd9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9a8:
    // 0x2cd9a8: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x2cd9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2cd9ac: 0x460a0032  c.eq.s      $f0, $f10
    ctx->pc = 0x2cd9acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd9b0: 0x0  nop
    ctx->pc = 0x2cd9b0u;
    // NOP
    // 0x2cd9b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD9B4u;
    {
        const bool branch_taken_0x2cd9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B4u;
        // 0x2cd9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b4) {
            ctx->pc = 0x2CD9C0u;
            goto label_2cd9c0;
        }
    }
    ctx->pc = 0x2CD9BCu;
    // 0x2cd9bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9c0:
    // 0x2cd9c0: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2cd9c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cd9c4: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x2cd9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2cd9c8: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x2cd9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2cd9cc: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x2cd9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2cd9d0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2cd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2cd9d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cd9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cd9d8: 0x8fac015c  lw          $t4, 0x15C($sp)
    ctx->pc = 0x2cd9d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2cd9dc: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2cd9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2cd9e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cd9e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd9e4: 0x100002ca  b           . + 4 + (0x2CA << 2)
    ctx->pc = 0x2CD9E4u;
    {
        const bool branch_taken_0x2cd9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9E4u;
        // 0x2cd9e8: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9e4) {
            ctx->pc = 0x2CE510u;
            goto label_2ce510;
        }
    }
    ctx->pc = 0x2CD9ECu;
label_2cd9ec:
    // 0x2cd9ec: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2cd9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x2cd9f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2cd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2cd9f4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2cd9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cd9f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cd9fc: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x2cd9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cda00: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2cda00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda04: 0xc4403b64  lwc1        $f0, 0x3B64($v0)
    ctx->pc = 0x2cda04u;
    { uint32_t bits = FAST_READ32(0x6B3B64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cda08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cda0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda10: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x2cda10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x2cda14: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2cda14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2cda18: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2cda18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda1c: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x2cda1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x2cda20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cda20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cda24: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x2cda24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x2cda28: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2cda28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x2cda2c: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x2cda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x2cda30: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x2cda30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x2cda34: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x2cda34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2cda38: 0xe7a1018c  swc1        $f1, 0x18C($sp)
    ctx->pc = 0x2cda38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2cda3c: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x2cda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x2cda40: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x2cda40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x2cda44: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2cda44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2cda48: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x2cda48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x2cda4c: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x2cda4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x2cda50: 0x108302ac  beq         $a0, $v1, . + 4 + (0x2AC << 2)
    ctx->pc = 0x2CDA50u;
    {
        const bool branch_taken_0x2cda50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA50u;
        // 0x2cda54: 0xafa4016c  sw          $a0, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda50) {
            ctx->pc = 0x2CE504u;
            goto label_2ce504;
        }
    }
    ctx->pc = 0x2CDA58u;
    // 0x2cda58: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2cda58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2cda5c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2cda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2cda60: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2cda60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cda64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cda64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cda68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2cda68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2cda6c: 0xafa501a4  sw          $a1, 0x1A4($sp)
    ctx->pc = 0x2cda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 5));
    // 0x2cda70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cda70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cda74: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x2cda74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
    // 0x2cda78: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2cda78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x2cda7c: 0x0  nop
    ctx->pc = 0x2cda7cu;
    // NOP
label_2cda80:
    // 0x2cda80: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2cda80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2cda84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cda84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cda88: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cda8c: 0x35900  sll         $t3, $v1, 4
    ctx->pc = 0x2cda8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cda90: 0x13c5000f  beq         $fp, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CDA90u;
    {
        const bool branch_taken_0x2cda90 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA90u;
        // 0x2cda94: 0x4b100  sll         $s6, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda90) {
            ctx->pc = 0x2CDAD0u;
            goto label_2cdad0;
        }
    }
    ctx->pc = 0x2CDA98u;
    // 0x2cda98: 0x1731021  addu        $v0, $t3, $s3
    ctx->pc = 0x2cda98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x2cda9c: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x2cda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x2cdaa0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2cdaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdaa4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2cdaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdaa8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2cdaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdaac: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cdaacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cdab0: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2cdab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cdab4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cdab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdab8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2cdab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdabc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cdabcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cdac0: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2cdac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2cdac4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cdac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cdac8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2cdac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2cdacc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2cdaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2cdad0:
    // 0x2cdad0: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x2cdad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x2cdad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cdad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdad8: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x2cdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2cdadc: 0x6b900  sll         $s7, $a2, 4
    ctx->pc = 0x2cdadcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cdae0: 0x13c3000f  beq         $fp, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CDAE0u;
    {
        const bool branch_taken_0x2cdae0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAE0u;
        // 0x2cdae4: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdae0) {
            ctx->pc = 0x2CDB20u;
            goto label_2cdb20;
        }
    }
    ctx->pc = 0x2CDAE8u;
    // 0x2cdae8: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x2cdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x2cdaec: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x2cdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2cdaf0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2cdaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdaf4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2cdaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdaf8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2cdaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdafc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cdafcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cdb00: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2cdb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cdb04: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cdb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdb08: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2cdb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdb0c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cdb0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cdb10: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2cdb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2cdb14: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cdb14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cdb18: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2cdb18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2cdb1c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2cdb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2cdb20:
    // 0x2cdb20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cdb20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cdb24: 0x2958821  addu        $s1, $s4, $s5
    ctx->pc = 0x2cdb24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x2cdb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cdb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdb2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cdb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cdb30: 0x2768021  addu        $s0, $s3, $s6
    ctx->pc = 0x2cdb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2cdb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb38: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2cdb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cdb3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cdb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb40: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cdb44: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cdb44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cdb48: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x2cdb48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x2cdb4c: 0x27a80138  addiu       $t0, $sp, 0x138
    ctx->pc = 0x2cdb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2cdb50: 0x27a9013c  addiu       $t1, $sp, 0x13C
    ctx->pc = 0x2cdb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x2cdb54: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x2cdb54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2cdb58: 0x7fab01c0  sq          $t3, 0x1C0($sp)
    ctx->pc = 0x2cdb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 11));
    // 0x2cdb5c: 0x7fac01d0  sq          $t4, 0x1D0($sp)
    ctx->pc = 0x2cdb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 12));
    // 0x2cdb60: 0xc0b2ff0  jal         func_2CBFC0
    ctx->pc = 0x2CDB60u;
    SET_GPR_U32(ctx, 31, 0x2CDB68u);
    ctx->pc = 0x2CDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB60u;
    // 0x2cdb64: 0x7fad01e0  sq          $t5, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CBFC0u, 0x2CDB60u, 0x2CDB68u)) {
        return;
    }
    ctx->pc = 0x2CDB68u;
label_2cdb68:
    // 0x2cdb68: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2cdb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdb6c: 0xc7a9013c  lwc1        $f9, 0x13C($sp)
    ctx->pc = 0x2cdb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2cdb70: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2cdb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdb74: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2cdb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2cdb78: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2cdb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdb7c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2cdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdb80: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2cdb80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2cdb84: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cdb84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cdb88: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2cdb88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2cdb8c: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2cdb8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2cdb90: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2cdb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cdb94: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2cdb94u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2cdb98: 0xe7a600b4  swc1        $f6, 0xB4($sp)
    ctx->pc = 0x2cdb98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2cdb9c: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2cdb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cdba0: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2cdba0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2cdba4: 0xe7a500b8  swc1        $f5, 0xB8($sp)
    ctx->pc = 0x2cdba4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2cdba8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2cdba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdbac: 0xc7a80138  lwc1        $f8, 0x138($sp)
    ctx->pc = 0x2cdbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cdbb0: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x2cdbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cdbb4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2cdbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2cdbb8: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x2cdbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdbbc: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x2cdbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cdbc0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2cdbc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2cdbc4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x2cdbc4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x2cdbc8: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x2cdbc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x2cdbcc: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x2cdbccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2cdbd0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2cdbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdbd4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cdbd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cdbd8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2cdbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2cdbdc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2cdbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdbe0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2cdbe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2cdbe4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2cdbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2cdbe8: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x2cdbe8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2cdbec: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x2cdbecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2cdbf0: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x2cdbf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2cdbf4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2cdbf4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2cdbf8: 0xe7a600d4  swc1        $f6, 0xD4($sp)
    ctx->pc = 0x2cdbf8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2cdbfc: 0xe7a500d8  swc1        $f5, 0xD8($sp)
    ctx->pc = 0x2cdbfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2cdc00: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2cdc00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cdc04: 0xc7828248  lwc1        $f2, -0x7DB8($gp)
    ctx->pc = 0x2cdc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdc08: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2cdc08u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2cdc0c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2cdc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdc10: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2cdc10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cdc14: 0x7bab01c0  lq          $t3, 0x1C0($sp)
    ctx->pc = 0x2cdc14u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2cdc18: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2cdc18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cdc1c: 0x7bac01d0  lq          $t4, 0x1D0($sp)
    ctx->pc = 0x2cdc1cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2cdc20: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2cdc20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2cdc24: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2cdc24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2cdc28: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2cdc28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc2c: 0x0  nop
    ctx->pc = 0x2cdc2cu;
    // NOP
    // 0x2cdc30: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2CDC30u;
    {
        const bool branch_taken_0x2cdc30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC30u;
        // 0x2cdc34: 0x7bad01e0  lq          $t5, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc30) {
            ctx->pc = 0x2CDCD0u;
            goto label_2cdcd0;
        }
    }
    ctx->pc = 0x2CDC38u;
    // 0x2cdc38: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2cdc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdc3c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2cdc3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2cdc40: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x2cdc40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc44: 0x0  nop
    ctx->pc = 0x2cdc44u;
    // NOP
    // 0x2cdc48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDC48u;
    {
        const bool branch_taken_0x2cdc48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC48u;
        // 0x2cdc4c: 0xc7a10140  lwc1        $f1, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc48) {
            ctx->pc = 0x2CDC60u;
            goto label_2cdc60;
        }
    }
    ctx->pc = 0x2CDC50u;
    // 0x2cdc50: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x2cdc50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc54: 0x0  nop
    ctx->pc = 0x2cdc54u;
    // NOP
    // 0x2cdc58: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x2CDC58u;
    {
        const bool branch_taken_0x2cdc58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC58u;
        // 0x2cdc5c: 0x2d31021  addu        $v0, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc58) {
            ctx->pc = 0x2CDCD8u;
            goto label_2cdcd8;
        }
    }
    ctx->pc = 0x2CDC60u;
label_2cdc60:
    // 0x2cdc60: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x2cdc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2cdc64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdc68: 0x46090032  c.eq.s      $f0, $f9
    ctx->pc = 0x2cdc68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc6c: 0x0  nop
    ctx->pc = 0x2cdc6cu;
    // NOP
    // 0x2cdc70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CDC70u;
    {
        const bool branch_taken_0x2cdc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC70u;
        // 0x2cdc74: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc70) {
            ctx->pc = 0x2CDC7Cu;
            goto label_2cdc7c;
        }
    }
    ctx->pc = 0x2CDC78u;
    // 0x2cdc78: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x2cdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_2cdc7c:
    // 0x2cdc7c: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x2cdc7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2cdc80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdc84: 0x46080032  c.eq.s      $f0, $f8
    ctx->pc = 0x2cdc84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc88: 0x0  nop
    ctx->pc = 0x2cdc88u;
    // NOP
    // 0x2cdc8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CDC8Cu;
    {
        const bool branch_taken_0x2cdc8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC8Cu;
        // 0x2cdc90: 0xafa301a0  sw          $v1, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc8c) {
            ctx->pc = 0x2CDC98u;
            goto label_2cdc98;
        }
    }
    ctx->pc = 0x2CDC94u;
    // 0x2cdc94: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x2cdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_2cdc98:
    // 0x2cdc98: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2cdc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2cdc9c: 0xe7a90194  swc1        $f9, 0x194($sp)
    ctx->pc = 0x2cdc9cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x2cdca0: 0x6ba400d7  ldl         $a0, 0xD7($sp)
    ctx->pc = 0x2cdca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2cdca4: 0x6fa400d0  ldr         $a0, 0xD0($sp)
    ctx->pc = 0x2cdca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2cdca8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2cdca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2cdcac: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2cdcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cdcb0: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2cdcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cdcb4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2cdcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2cdcb8: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x2cdcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2cdcbc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2cdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cdcc0: 0xe7a80198  swc1        $f8, 0x198($sp)
    ctx->pc = 0x2cdcc0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2cdcc4: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x2cdcc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2cdcc8: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x2cdcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x2cdccc: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x2cdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
label_2cdcd0:
    // 0x2cdcd0: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x2cdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x2cdcd4: 0x0  nop
    ctx->pc = 0x2cdcd4u;
    // NOP
label_2cdcd8:
    // 0x2cdcd8: 0x2f41821  addu        $v1, $s7, $s4
    ctx->pc = 0x2cdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x2cdcdc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2cdcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdce0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2cdce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x2cdce4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2cdce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdce8: 0xc45f0000  lwc1        $f31, 0x0($v0)
    ctx->pc = 0x2cdce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2cdcec: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x2cdcecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2cdcf0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2cdcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdcf4: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2cdcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cdcf8: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x2cdcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cdcfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cdcfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cdd00: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x2cdd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdd04: 0x461f2941  sub.s       $f5, $f5, $f31
    ctx->pc = 0x2cdd04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[31]);
    // 0x2cdd08: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x2cdd08u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x2cdd0c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2cdd0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2cdd10: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x2cdd10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2cdd14: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x2cdd14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2cdd18: 0x1731821  addu        $v1, $t3, $s3
    ctx->pc = 0x2cdd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x2cdd1c: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x2cdd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2cdd20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cdd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdd24: 0xc45d0008  lwc1        $f29, 0x8($v0)
    ctx->pc = 0x2cdd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2cdd28: 0xc4590000  lwc1        $f25, 0x0($v0)
    ctx->pc = 0x2cdd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2cdd2c: 0xc45a0004  lwc1        $f26, 0x4($v0)
    ctx->pc = 0x2cdd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2cdd30: 0x461d0001  sub.s       $f0, $f0, $f29
    ctx->pc = 0x2cdd30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[29]);
    // 0x2cdd34: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2cdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cdd38: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2cdd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdd3c: 0x46192101  sub.s       $f4, $f4, $f25
    ctx->pc = 0x2cdd3cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[25]);
    // 0x2cdd40: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2cdd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2cdd44: 0x461a1081  sub.s       $f2, $f2, $f26
    ctx->pc = 0x2cdd44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[26]);
    // 0x2cdd48: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x2cdd48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2cdd4c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x2cdd4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2cdd50: 0xc7b60084  lwc1        $f22, 0x84($sp)
    ctx->pc = 0x2cdd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2cdd54: 0xc6520000  lwc1        $f18, 0x0($s2)
    ctx->pc = 0x2cdd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2cdd58: 0xc6500008  lwc1        $f16, 0x8($s2)
    ctx->pc = 0x2cdd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2cdd5c: 0xc6510004  lwc1        $f17, 0x4($s2)
    ctx->pc = 0x2cdd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2cdd60: 0x46120b42  mul.s       $f13, $f1, $f18
    ctx->pc = 0x2cdd60u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x2cdd64: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x2cdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2cdd68: 0x46120382  mul.s       $f14, $f0, $f18
    ctx->pc = 0x2cdd68u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x2cdd6c: 0xc7b30080  lwc1        $f19, 0x80($sp)
    ctx->pc = 0x2cdd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2cdd70: 0x46103982  mul.s       $f6, $f7, $f16
    ctx->pc = 0x2cdd70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[16]);
    // 0x2cdd74: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x2cdd74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x2cdd78: 0xc7bc0070  lwc1        $f28, 0x70($sp)
    ctx->pc = 0x2cdd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2cdd7c: 0x461010c2  mul.s       $f3, $f2, $f16
    ctx->pc = 0x2cdd7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x2cdd80: 0xc7bb0074  lwc1        $f27, 0x74($sp)
    ctx->pc = 0x2cdd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2cdd84: 0x46110002  mul.s       $f0, $f0, $f17
    ctx->pc = 0x2cdd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x2cdd88: 0xc7b80078  lwc1        $f24, 0x78($sp)
    ctx->pc = 0x2cdd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2cdd8c: 0x46102b02  mul.s       $f12, $f5, $f16
    ctx->pc = 0x2cdd8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[16]);
    // 0x2cdd90: 0x46102242  mul.s       $f9, $f4, $f16
    ctx->pc = 0x2cdd90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[16]);
    // 0x2cdd94: 0x4610b202  mul.s       $f8, $f22, $f16
    ctx->pc = 0x2cdd94u;
    ctx->f[8] = FPU_MUL_S(ctx->f[22], ctx->f[16]);
    // 0x2cdd98: 0x4611bbc2  mul.s       $f15, $f23, $f17
    ctx->pc = 0x2cdd98u;
    ctx->f[15] = FPU_MUL_S(ctx->f[23], ctx->f[17]);
    // 0x2cdd9c: 0x4612ba82  mul.s       $f10, $f23, $f18
    ctx->pc = 0x2cdd9cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[23], ctx->f[18]);
    // 0x2cdda0: 0x46109ac2  mul.s       $f11, $f19, $f16
    ctx->pc = 0x2cdda0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[19], ctx->f[16]);
    // 0x2cdda4: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x2cdda4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2cdda8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2cdda8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2cddac: 0x460f4201  sub.s       $f8, $f8, $f15
    ctx->pc = 0x2cddacu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[15]);
    // 0x2cddb0: 0x460b5281  sub.s       $f10, $f10, $f11
    ctx->pc = 0x2cddb0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[11]);
    // 0x2cddb4: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x2cddb4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2cddb8: 0x46097381  sub.s       $f14, $f14, $f9
    ctx->pc = 0x2cddb8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[9]);
    // 0x2cddbc: 0x46112942  mul.s       $f5, $f5, $f17
    ctx->pc = 0x2cddbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
    // 0x2cddc0: 0x461239c2  mul.s       $f7, $f7, $f18
    ctx->pc = 0x2cddc0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[18]);
    // 0x2cddc4: 0x46112102  mul.s       $f4, $f4, $f17
    ctx->pc = 0x2cddc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x2cddc8: 0x46121082  mul.s       $f2, $f2, $f18
    ctx->pc = 0x2cddc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x2cddcc: 0x46119842  mul.s       $f1, $f19, $f17
    ctx->pc = 0x2cddccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[17]);
    // 0x2cddd0: 0x4612b002  mul.s       $f0, $f22, $f18
    ctx->pc = 0x2cddd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[18]);
    // 0x2cddd4: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2cddd4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2cddd8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2cddd8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2cdddc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cdddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cdde0: 0x4608e202  mul.s       $f8, $f28, $f8
    ctx->pc = 0x2cdde0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[28], ctx->f[8]);
    // 0x2cdde4: 0x460ada82  mul.s       $f10, $f27, $f10
    ctx->pc = 0x2cdde4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[27], ctx->f[10]);
    // 0x2cdde8: 0x4606e182  mul.s       $f6, $f28, $f6
    ctx->pc = 0x2cdde8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[28], ctx->f[6]);
    // 0x2cddec: 0x460ddb42  mul.s       $f13, $f27, $f13
    ctx->pc = 0x2cddecu;
    ctx->f[13] = FPU_MUL_S(ctx->f[27], ctx->f[13]);
    // 0x2cddf0: 0x460398c2  mul.s       $f3, $f19, $f3
    ctx->pc = 0x2cddf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[19], ctx->f[3]);
    // 0x2cddf4: 0x460eb382  mul.s       $f14, $f22, $f14
    ctx->pc = 0x2cddf4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[22], ctx->f[14]);
    // 0x2cddf8: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x2cddf8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x2cddfc: 0x460d3180  add.s       $f6, $f6, $f13
    ctx->pc = 0x2cddfcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2cde00: 0x460e18c0  add.s       $f3, $f3, $f14
    ctx->pc = 0x2cde00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[14]);
    // 0x2cde04: 0x4601c042  mul.s       $f1, $f24, $f1
    ctx->pc = 0x2cde04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x2cde08: 0x4605c142  mul.s       $f5, $f24, $f5
    ctx->pc = 0x2cde08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[24], ctx->f[5]);
    // 0x2cde0c: 0x4604b902  mul.s       $f4, $f23, $f4
    ctx->pc = 0x2cde0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[4]);
    // 0x2cde10: 0x46014780  add.s       $f30, $f8, $f1
    ctx->pc = 0x2cde10u;
    ctx->f[30] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2cde14: 0x46053540  add.s       $f21, $f6, $f5
    ctx->pc = 0x2cde14u;
    ctx->f[21] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2cde18: 0x13c0005f  beqz        $fp, . + 4 + (0x5F << 2)
    ctx->pc = 0x2CDE18u;
    {
        const bool branch_taken_0x2cde18 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE18u;
        // 0x2cde1c: 0x46041d00  add.s       $f20, $f3, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde18) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDE20u;
    // 0x2cde20: 0xc7a3018c  lwc1        $f3, 0x18C($sp)
    ctx->pc = 0x2cde20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cde24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cde24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cde28: 0x46151802  mul.s       $f0, $f3, $f21
    ctx->pc = 0x2cde28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2cde2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cde2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cde30: 0x0  nop
    ctx->pc = 0x2cde30u;
    // NOP
    // 0x2cde34: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDE34u;
    {
        const bool branch_taken_0x2cde34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE34u;
        // 0x2cde38: 0xc7a50190  lwc1        $f5, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde34) {
            ctx->pc = 0x2CDE50u;
            goto label_2cde50;
        }
    }
    ctx->pc = 0x2CDE3Cu;
    // 0x2cde3c: 0x46142802  mul.s       $f0, $f5, $f20
    ctx->pc = 0x2cde3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2cde40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cde40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cde44: 0x0  nop
    ctx->pc = 0x2cde44u;
    // NOP
    // 0x2cde48: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x2CDE48u;
    {
        const bool branch_taken_0x2cde48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE48u;
        // 0x2cde4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde48) {
            ctx->pc = 0x2CDF9Cu;
            goto label_2cdf9c;
        }
    }
    ctx->pc = 0x2CDE50u;
label_2cde50:
    // 0x2cde50: 0x4600f005  abs.s       $f0, $f30
    ctx->pc = 0x2cde50u;
    ctx->f[0] = FPU_ABS_S(ctx->f[30]);
    // 0x2cde54: 0xc78c824c  lwc1        $f12, -0x7DB4($gp)
    ctx->pc = 0x2cde54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cde58: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2cde58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cde5c: 0x0  nop
    ctx->pc = 0x2cde5cu;
    // NOP
    // 0x2cde60: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x2CDE60u;
    {
        const bool branch_taken_0x2cde60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE60u;
        // 0x2cde64: 0xc7a101a8  lwc1        $f1, 0x1A8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde60) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDE68u;
    // 0x2cde68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cde68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cde6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cde6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cde70: 0x461e01c3  div.s       $f7, $f0, $f30
    ctx->pc = 0x2cde70u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[30]);
    // 0x2cde74: 0x4619f881  sub.s       $f2, $f31, $f25
    ctx->pc = 0x2cde74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], ctx->f[25]);
    // 0x2cde78: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x2cde78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cde7c: 0x461a0901  sub.s       $f4, $f1, $f26
    ctx->pc = 0x2cde7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x2cde80: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x2cde80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2cde84: 0x461d1801  sub.s       $f0, $f3, $f29
    ctx->pc = 0x2cde84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[29]);
    // 0x2cde88: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x2cde88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2cde8c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2cde8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2cde90: 0x46102042  mul.s       $f1, $f4, $f16
    ctx->pc = 0x2cde90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[16]);
    // 0x2cde94: 0xc7888250  lwc1        $f8, -0x7DB0($gp)
    ctx->pc = 0x2cde94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cde98: 0x46120142  mul.s       $f5, $f0, $f18
    ctx->pc = 0x2cde98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x2cde9c: 0x461010c2  mul.s       $f3, $f2, $f16
    ctx->pc = 0x2cde9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x2cdea0: 0x46110002  mul.s       $f0, $f0, $f17
    ctx->pc = 0x2cdea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x2cdea4: 0x46111082  mul.s       $f2, $f2, $f17
    ctx->pc = 0x2cdea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[17]);
    // 0x2cdea8: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x2cdea8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2cdeac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cdeacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cdeb0: 0x46122102  mul.s       $f4, $f4, $f18
    ctx->pc = 0x2cdeb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[18]);
    // 0x2cdeb4: 0x4605b182  mul.s       $f6, $f22, $f5
    ctx->pc = 0x2cdeb4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[22], ctx->f[5]);
    // 0x2cdeb8: 0x46019802  mul.s       $f0, $f19, $f1
    ctx->pc = 0x2cdeb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x2cdebc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cdebcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cdec0: 0x4601e042  mul.s       $f1, $f28, $f1
    ctx->pc = 0x2cdec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[1]);
    // 0x2cdec4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2cdec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2cdec8: 0x4602b8c2  mul.s       $f3, $f23, $f2
    ctx->pc = 0x2cdec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x2cdecc: 0x4605d942  mul.s       $f5, $f27, $f5
    ctx->pc = 0x2cdeccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[27], ctx->f[5]);
    // 0x2cded0: 0x4602c082  mul.s       $f2, $f24, $f2
    ctx->pc = 0x2cded0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x2cded4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2cded4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2cded8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2cded8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2cdedc: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x2cdedcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2cdee0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cdee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cdee4: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x2cdee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdee8: 0x0  nop
    ctx->pc = 0x2cdee8u;
    // NOP
    // 0x2cdeec: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2CDEECu;
    {
        const bool branch_taken_0x2cdeec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEECu;
        // 0x2cdef0: 0x46070842  mul.s       $f1, $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdeec) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDEF4u;
    // 0x2cdef4: 0xc7808254  lwc1        $f0, -0x7DAC($gp)
    ctx->pc = 0x2cdef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdef8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2cdef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdefc: 0x0  nop
    ctx->pc = 0x2cdefcu;
    // NOP
    // 0x2cdf00: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x2CDF00u;
    {
        const bool branch_taken_0x2cdf00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF00u;
        // 0x2cdf04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf00) {
            ctx->pc = 0x2CDF9Cu;
            goto label_2cdf9c;
        }
    }
    ctx->pc = 0x2CDF08u;
    // 0x2cdf08: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x2cdf08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdf0c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2CDF0Cu;
    {
        const bool branch_taken_0x2cdf0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdf0c) {
            ctx->pc = 0x2CDF9Cu;
            goto label_2cdf9c;
        }
    }
    ctx->pc = 0x2CDF14u;
    // 0x2cdf14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cdf14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdf18: 0x0  nop
    ctx->pc = 0x2cdf18u;
    // NOP
    // 0x2cdf1c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2CDF1Cu;
    {
        const bool branch_taken_0x2cdf1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF1Cu;
        // 0x2cdf20: 0xc7a501ac  lwc1        $f5, 0x1AC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf1c) {
            ctx->pc = 0x2CDF9Cu;
            goto label_2cdf9c;
        }
    }
    ctx->pc = 0x2CDF24u;
    // 0x2cdf24: 0x4603c002  mul.s       $f0, $f24, $f3
    ctx->pc = 0x2cdf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x2cdf28: 0x4603e042  mul.s       $f1, $f28, $f3
    ctx->pc = 0x2cdf28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[3]);
    // 0x2cdf2c: 0xc7ac01a8  lwc1        $f12, 0x1A8($sp)
    ctx->pc = 0x2cdf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cdf30: 0x4603d882  mul.s       $f2, $f27, $f3
    ctx->pc = 0x2cdf30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[3]);
    // 0x2cdf34: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2cdf34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2cdf38: 0x4601f840  add.s       $f1, $f31, $f1
    ctx->pc = 0x2cdf38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], ctx->f[1]);
    // 0x2cdf3c: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x2cdf3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2cdf40: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2cdf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2cdf44: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x2cdf44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2cdf48: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x2cdf48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2cdf4c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2cdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2cdf50: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2cdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cdf54: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2cdf54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cdf58: 0x10400163  beqz        $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x2CDF58u;
    {
        const bool branch_taken_0x2cdf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF58u;
        // 0x2cdf5c: 0xc7ac0150  lwc1        $f12, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf58) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CDF60u;
    // 0x2cdf60: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2cdf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf64: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2cdf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2cdf68: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x2cdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2cdf6c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2cdf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2cdf70: 0xc0b335a  jal         func_2CCD68
    ctx->pc = 0x2CDF70u;
    SET_GPR_U32(ctx, 31, 0x2CDF78u);
    ctx->pc = 0x2CDF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF70u;
    // 0x2cdf74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCD68u, 0x2CDF70u, 0x2CDF78u)) {
        return;
    }
    ctx->pc = 0x2CDF78u;
label_2cdf78:
    // 0x2cdf78: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x2CDF78u;
    {
        const bool branch_taken_0x2cdf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF78u;
        // 0x2cdf7c: 0x7bad01e0  lq          $t5, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf78) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CDF80u;
    // 0x2cdf80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cdf80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdf84: 0x4600f034  c.lt.s      $f30, $f0
    ctx->pc = 0x2cdf84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdf88: 0x0  nop
    ctx->pc = 0x2cdf88u;
    // NOP
    // 0x2cdf8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CDF8Cu;
    {
        const bool branch_taken_0x2cdf8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF8Cu;
        // 0x2cdf90: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf8c) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDF94u;
    // 0x2cdf94: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2cdf94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdf98:
    // 0x2cdf98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdf9c:
    // 0x2cdf9c: 0x1582000a  bne         $t4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CDF9Cu;
    {
        const bool branch_taken_0x2cdf9c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF9Cu;
        // 0x2cdfa0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf9c) {
            ctx->pc = 0x2CDFC8u;
            goto label_2cdfc8;
        }
    }
    ctx->pc = 0x2CDFA4u;
    // 0x2cdfa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cdfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdfa8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2cdfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdfac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDFACu;
    {
        const bool branch_taken_0x2cdfac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdfac) {
            ctx->pc = 0x2CDFC8u;
            goto label_2cdfc8;
        }
    }
    ctx->pc = 0x2CDFB4u;
    // 0x2cdfb4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2cdfb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdfb8: 0x0  nop
    ctx->pc = 0x2cdfb8u;
    // NOP
    // 0x2cdfbc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2CDFBCu;
    {
        const bool branch_taken_0x2cdfbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdfbc) {
            ctx->pc = 0x2CDFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDFBCu;
            // 0x2cdfc0: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDFC8u;
            goto label_2cdfc8;
        }
    }
    ctx->pc = 0x2CDFC4u;
    // 0x2cdfc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cdfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cdfc8:
    // 0x2cdfc8: 0x15830009  bne         $t4, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDFC8u;
    {
        const bool branch_taken_0x2cdfc8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cdfc8) {
            ctx->pc = 0x2CDFF0u;
            goto label_2cdff0;
        }
    }
    ctx->pc = 0x2CDFD0u;
    // 0x2cdfd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cdfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdfd4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cdfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdfd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDFD8u;
    {
        const bool branch_taken_0x2cdfd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdfd8) {
            ctx->pc = 0x2CDFF0u;
            goto label_2cdff0;
        }
    }
    ctx->pc = 0x2CDFE0u;
    // 0x2cdfe0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cdfe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdfe4: 0x0  nop
    ctx->pc = 0x2cdfe4u;
    // NOP
    // 0x2cdfe8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDFE8u;
    {
        const bool branch_taken_0x2cdfe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdfe8) {
            ctx->pc = 0x2CDFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDFE8u;
            // 0x2cdfec: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDFF0u;
            goto label_2cdff0;
        }
    }
    ctx->pc = 0x2CDFF0u;
label_2cdff0:
    // 0x2cdff0: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDFF0u;
    {
        const bool branch_taken_0x2cdff0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdff0) {
            ctx->pc = 0x2CE018u;
            goto label_2ce018;
        }
    }
    ctx->pc = 0x2CDFF8u;
    // 0x2cdff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cdff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdffc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cdffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce000: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE000u;
    {
        const bool branch_taken_0x2ce000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce000) {
            ctx->pc = 0x2CE01Cu;
            goto label_2ce01c;
        }
    }
    ctx->pc = 0x2CE008u;
    // 0x2ce008: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ce008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce00c: 0x0  nop
    ctx->pc = 0x2ce00cu;
    // NOP
    // 0x2ce010: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE010u;
    {
        const bool branch_taken_0x2ce010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce010) {
            ctx->pc = 0x2CE014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE010u;
            // 0x2ce014: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE01Cu;
            goto label_2ce01c;
        }
    }
    ctx->pc = 0x2CE018u;
label_2ce018:
    // 0x2ce018: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce01c:
    // 0x2ce01c: 0x461e0034  c.lt.s      $f0, $f30
    ctx->pc = 0x2ce01cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce020: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE020u;
    {
        const bool branch_taken_0x2ce020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce020) {
            ctx->pc = 0x2CE040u;
            goto label_2ce040;
        }
    }
    ctx->pc = 0x2CE028u;
    // 0x2ce028: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2ce028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce02c: 0x0  nop
    ctx->pc = 0x2ce02cu;
    // NOP
    // 0x2ce030: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE030u;
    {
        const bool branch_taken_0x2ce030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE030u;
        // 0x2ce034: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce030) {
            ctx->pc = 0x2CE054u;
            goto label_2ce054;
        }
    }
    ctx->pc = 0x2CE038u;
    // 0x2ce038: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE038u;
    {
        const bool branch_taken_0x2ce038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE038u;
        // 0x2ce03c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce038) {
            ctx->pc = 0x2CE054u;
            goto label_2ce054;
        }
    }
    ctx->pc = 0x2CE040u;
label_2ce040:
    // 0x2ce040: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ce040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce044: 0x0  nop
    ctx->pc = 0x2ce044u;
    // NOP
    // 0x2ce048: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE048u;
    {
        const bool branch_taken_0x2ce048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE048u;
        // 0x2ce04c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce048) {
            ctx->pc = 0x2CE054u;
            goto label_2ce054;
        }
    }
    ctx->pc = 0x2CE050u;
    // 0x2ce050: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2ce050u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce054:
    // 0x2ce054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce058: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2ce058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce05c: 0x0  nop
    ctx->pc = 0x2ce05cu;
    // NOP
    // 0x2ce060: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE060u;
    {
        const bool branch_taken_0x2ce060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE060u;
        // 0x2ce064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce060) {
            ctx->pc = 0x2CE088u;
            goto label_2ce088;
        }
    }
    ctx->pc = 0x2CE068u;
    // 0x2ce068: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2ce068u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce06c: 0x0  nop
    ctx->pc = 0x2ce06cu;
    // NOP
    // 0x2ce070: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE070u;
    {
        const bool branch_taken_0x2ce070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE070u;
        // 0x2ce074: 0x39820001  xori        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce070) {
            ctx->pc = 0x2CE088u;
            goto label_2ce088;
        }
    }
    ctx->pc = 0x2CE078u;
    // 0x2ce078: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2ce078u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce07c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ce07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce080: 0x82f00a  movz        $fp, $a0, $v0
    ctx->pc = 0x2ce080u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4));
    // 0x2ce084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce088:
    // 0x2ce088: 0x57c50016  bnel        $fp, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CE088u;
    {
        const bool branch_taken_0x2ce088 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ce088) {
            ctx->pc = 0x2CE08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE088u;
            // 0x2ce08c: 0x8fa5017c  lw          $a1, 0x17C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE0E4u;
            goto label_2ce0e4;
        }
    }
    ctx->pc = 0x2CE090u;
    // 0x2ce090: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2ce090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2ce094: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2ce094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ce098: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x2ce098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x2ce09c: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x2ce09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ce0a0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2ce0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ce0a4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2ce0a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2ce0a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ce0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce0ac: 0x159e0025  bne         $t4, $fp, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CE0ACu;
    {
        const bool branch_taken_0x2ce0ac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 30));
        ctx->pc = 0x2CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0ACu;
        // 0x2ce0b0: 0xafa30178  sw          $v1, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0ac) {
            ctx->pc = 0x2CE144u;
            goto label_2ce144;
        }
    }
    ctx->pc = 0x2CE0B4u;
    // 0x2ce0b4: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ce0b8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2ce0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ce0bc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2ce0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ce0c0: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x2CE0C0u;
    {
        const bool branch_taken_0x2ce0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0C0u;
        // 0x2ce0c4: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0c0) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CE0C8u;
    // 0x2ce0c8: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x2ce0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce0cc: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2ce0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0d0: 0x7fac01d0  sq          $t4, 0x1D0($sp)
    ctx->pc = 0x2ce0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 12));
    // 0x2ce0d4: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2ce0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2ce0d8: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x2ce0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2ce0dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CE0DCu;
    {
        const bool branch_taken_0x2ce0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0DCu;
        // 0x2ce0e0: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0dc) {
            ctx->pc = 0x2CE130u;
            goto label_2ce130;
        }
    }
    ctx->pc = 0x2CE0E4u;
label_2ce0e4:
    // 0x2ce0e4: 0x8fa601b4  lw          $a2, 0x1B4($sp)
    ctx->pc = 0x2ce0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2ce0e8: 0xafa50174  sw          $a1, 0x174($sp)
    ctx->pc = 0x2ce0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 5));
    // 0x2ce0ec: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x2ce0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ce0f0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ce0f4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2ce0f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2ce0f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ce0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce0fc: 0x159e0011  bne         $t4, $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE0FCu;
    {
        const bool branch_taken_0x2ce0fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 30));
        ctx->pc = 0x2CE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0FCu;
        // 0x2ce100: 0xafa3017c  sw          $v1, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0fc) {
            ctx->pc = 0x2CE144u;
            goto label_2ce144;
        }
    }
    ctx->pc = 0x2CE104u;
    // 0x2ce104: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ce108: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2ce108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ce10c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ce10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ce110: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2CE110u;
    {
        const bool branch_taken_0x2ce110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE110u;
        // 0x2ce114: 0x53100  sll         $a2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce110) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CE118u;
    // 0x2ce118: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x2ce118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce11c: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2ce11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce120: 0x7fac01d0  sq          $t4, 0x1D0($sp)
    ctx->pc = 0x2ce120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 12));
    // 0x2ce124: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2ce124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2ce128: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x2ce128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2ce12c: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x2ce12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_2ce130:
    // 0x2ce130: 0xc0b335a  jal         func_2CCD68
    ctx->pc = 0x2CE130u;
    SET_GPR_U32(ctx, 31, 0x2CE138u);
    ctx->pc = 0x2CE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE130u;
    // 0x2ce134: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCD68u, 0x2CE130u, 0x2CE138u)) {
        return;
    }
    ctx->pc = 0x2CE138u;
label_2ce138:
    // 0x2ce138: 0x7bac01d0  lq          $t4, 0x1D0($sp)
    ctx->pc = 0x2ce138u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2ce13c: 0x144000ea  bnez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x2CE13Cu;
    {
        const bool branch_taken_0x2ce13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE13Cu;
        // 0x2ce140: 0x7bad01e0  lq          $t5, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce13c) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CE144u;
label_2ce144:
    // 0x2ce144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce14c: 0xe7b5018c  swc1        $f21, 0x18C($sp)
    ctx->pc = 0x2ce14cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2ce150: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2ce150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce154: 0x0  nop
    ctx->pc = 0x2ce154u;
    // NOP
    // 0x2ce158: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE158u;
    {
        const bool branch_taken_0x2ce158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE158u;
        // 0x2ce15c: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce158) {
            ctx->pc = 0x2CE164u;
            goto label_2ce164;
        }
    }
    ctx->pc = 0x2CE160u;
    // 0x2ce160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce164:
    // 0x2ce164: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2ce164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ce168: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2ce168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce16c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce170: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ce170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ce174: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE174u;
    {
        const bool branch_taken_0x2ce174 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE174u;
        // 0x2ce178: 0xafa40180  sw          $a0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce174) {
            ctx->pc = 0x2CE180u;
            goto label_2ce180;
        }
    }
    ctx->pc = 0x2CE17Cu;
    // 0x2ce17c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ce17cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce180:
    // 0x2ce180: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x2ce180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2ce184: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ce188: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2ce188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2ce18c: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2CE18Cu;
    {
        const bool branch_taken_0x2ce18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE18Cu;
        // 0x2ce190: 0xafa50184  sw          $a1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce18c) {
            ctx->pc = 0x2CE4F0u;
            goto label_2ce4f0;
        }
    }
    ctx->pc = 0x2CE194u;
    // 0x2ce194: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x2ce194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2ce198: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2ce198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ce19c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2ce19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ce1a0: 0x504000d4  beql        $v0, $zero, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2CE1A0u;
    {
        const bool branch_taken_0x2ce1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1a0) {
            ctx->pc = 0x2CE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE1A0u;
            // 0x2ce1a4: 0x8fa2016c  lw          $v0, 0x16C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE4F4u;
            goto label_2ce4f4;
        }
    }
    ctx->pc = 0x2CE1A8u;
    // 0x2ce1a8: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE1A8u;
    {
        const bool branch_taken_0x2ce1a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1a8) {
            ctx->pc = 0x2CE1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE1A8u;
            // 0x2ce1ac: 0x8fa60180  lw          $a2, 0x180($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE1C8u;
            goto label_2ce1c8;
        }
    }
    ctx->pc = 0x2CE1B0u;
    // 0x2ce1b0: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2ce1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ce1b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE1B4u;
    {
        const bool branch_taken_0x2ce1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1B4u;
        // 0x2ce1b8: 0x8fa50144  lw          $a1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1b4) {
            ctx->pc = 0x2CE1D0u;
            goto label_2ce1d0;
        }
    }
    ctx->pc = 0x2CE1BCu;
    // 0x2ce1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2CE1C0u;
    {
        const bool branch_taken_0x2ce1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1C0u;
        // 0x2ce1c4: 0xafa50124  sw          $a1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1c0) {
            ctx->pc = 0x2CE328u;
            goto label_2ce328;
        }
    }
    ctx->pc = 0x2CE1C8u;
label_2ce1c8:
    // 0x2ce1c8: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE1C8u;
    {
        const bool branch_taken_0x2ce1c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1C8u;
        // 0x2ce1cc: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1c8) {
            ctx->pc = 0x2CE1ECu;
            goto label_2ce1ec;
        }
    }
    ctx->pc = 0x2CE1D0u;
label_2ce1d0:
    // 0x2ce1d0: 0x8fac0184  lw          $t4, 0x184($sp)
    ctx->pc = 0x2ce1d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2ce1d4: 0x11800004  beqz        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE1D4u;
    {
        const bool branch_taken_0x2ce1d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1D4u;
        // 0x2ce1d8: 0x8fa20148  lw          $v0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1d4) {
            ctx->pc = 0x2CE1E8u;
            goto label_2ce1e8;
        }
    }
    ctx->pc = 0x2CE1DCu;
    // 0x2ce1dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ce1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1e0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2CE1E0u;
    {
        const bool branch_taken_0x2ce1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1E0u;
        // 0x2ce1e4: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1e0) {
            ctx->pc = 0x2CE328u;
            goto label_2ce328;
        }
    }
    ctx->pc = 0x2CE1E8u;
label_2ce1e8:
    // 0x2ce1e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2ce1ec:
    // 0x2ce1ec: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2ce1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce1f0: 0x24633b64  addiu       $v1, $v1, 0x3B64
    ctx->pc = 0x2ce1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15204));
    // 0x2ce1f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce1f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ce1f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce1fc: 0x0  nop
    ctx->pc = 0x2ce1fcu;
    // NOP
    // 0x2ce200: 0x45010175  bc1t        . + 4 + (0x175 << 2)
    ctx->pc = 0x2CE200u;
    {
        const bool branch_taken_0x2ce200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE200u;
        // 0x2ce204: 0x8fa30168  lw          $v1, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce200) {
            ctx->pc = 0x2CE7D8u;
            goto label_2ce7d8;
        }
    }
    ctx->pc = 0x2CE208u;
    // 0x2ce208: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2ce208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ce20c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2ce20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce210: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ce214: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2ce214u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2ce218: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x2ce218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ce21c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ce21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce220: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2ce220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2ce224: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce228: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x2ce228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce22c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2ce22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ce230: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2ce230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce234: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ce238: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2ce238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce23c: 0xc44b0008  lwc1        $f11, 0x8($v0)
    ctx->pc = 0x2ce23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2ce240: 0xc44a0000  lwc1        $f10, 0x0($v0)
    ctx->pc = 0x2ce240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2ce244: 0xc4490004  lwc1        $f9, 0x4($v0)
    ctx->pc = 0x2ce244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2ce248: 0x460b2941  sub.s       $f5, $f5, $f11
    ctx->pc = 0x2ce248u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[11]);
    // 0x2ce24c: 0x460a2101  sub.s       $f4, $f4, $f10
    ctx->pc = 0x2ce24cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2ce250: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x2ce250u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x2ce254: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2ce254u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ce258: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2ce258u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ce25c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2ce25cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ce260: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2ce264: 0x8fac01b4  lw          $t4, 0x1B4($sp)
    ctx->pc = 0x2ce264u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2ce268: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ce26c: 0xcc1023  subu        $v0, $a2, $t4
    ctx->pc = 0x2ce26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2ce270: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2ce270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2ce274: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x2ce274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ce278: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ce278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce27c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2ce27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2ce280: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2ce280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2ce284: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ce284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ce288: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2ce288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce28c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x2ce28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ce290: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce294: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2ce294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ce298: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x2ce298u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2ce29c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ce29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2a0: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x2ce2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ce2a4: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2ce2a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2ce2a8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2ce2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ce2ac: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2ce2acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2ce2b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2ce2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ce2b4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2ce2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ce2b8: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x2ce2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce2bc: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x2ce2bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x2ce2c0: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x2ce2c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x2ce2c4: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x2ce2c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x2ce2c8: 0x46045280  add.s       $f10, $f10, $f4
    ctx->pc = 0x2ce2c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x2ce2cc: 0x46055ac0  add.s       $f11, $f11, $f5
    ctx->pc = 0x2ce2ccu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x2ce2d0: 0x46034a40  add.s       $f9, $f9, $f3
    ctx->pc = 0x2ce2d0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x2ce2d4: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x2ce2d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ce2d8: 0xe7ab0028  swc1        $f11, 0x28($sp)
    ctx->pc = 0x2ce2d8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ce2dc: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x2ce2dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ce2e0: 0xc7a30198  lwc1        $f3, 0x198($sp)
    ctx->pc = 0x2ce2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce2e4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ce2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ce2e8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ce2e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ce2ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ce2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ce2f0: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x2ce2f0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2ce2f4: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x2ce2f4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2ce2f8: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2ce2f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2ce2fc: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x2ce2fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ce300: 0xe7a80038  swc1        $f8, 0x38($sp)
    ctx->pc = 0x2ce300u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ce304: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x2ce304u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ce308: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x2ce308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2ce30c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x2ce30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2ce310: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ce310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ce314: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x2ce314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ce318: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2ce318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2ce31c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2CE31Cu;
    {
        const bool branch_taken_0x2ce31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE31Cu;
        // 0x2ce320: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce31c) {
            ctx->pc = 0x2CE504u;
            goto label_2ce504;
        }
    }
    ctx->pc = 0x2CE324u;
    // 0x2ce324: 0x0  nop
    ctx->pc = 0x2ce324u;
    // NOP
label_2ce328:
    // 0x2ce328: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ce32c: 0x1040015d  beqz        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x2CE32Cu;
    {
        const bool branch_taken_0x2ce32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE32Cu;
        // 0x2ce330: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce32c) {
            ctx->pc = 0x2CE8A4u;
            goto label_2ce8a4;
        }
    }
    ctx->pc = 0x2CE334u;
    // 0x2ce334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce338: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ce338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce33c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ce33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ce340: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE340u;
    {
        const bool branch_taken_0x2ce340 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2CE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE340u;
        // 0x2ce344: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce340) {
            ctx->pc = 0x2CE350u;
            goto label_2ce350;
        }
    }
    ctx->pc = 0x2CE348u;
    // 0x2ce348: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CE348u;
    {
        const bool branch_taken_0x2ce348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE348u;
        // 0x2ce34c: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce348) {
            ctx->pc = 0x2CE3D0u;
            goto label_2ce3d0;
        }
    }
    ctx->pc = 0x2CE350u;
label_2ce350:
    // 0x2ce350: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2ce350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce354: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2ce354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce358: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x2ce358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce35c: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2ce35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ce360: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x2ce360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2ce364: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ce364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce368: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2ce368u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2ce36c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ce36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce370: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ce370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ce374: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2ce374u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2ce378: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2ce378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce37c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ce37cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ce380: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2ce380u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ce384: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2ce384u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ce388: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2ce388u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2ce38c: 0xe5a40000  swc1        $f4, 0x0($t5)
    ctx->pc = 0x2ce38cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2ce390: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ce390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce394: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2ce394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce398: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce39c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce39cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce3a0: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x2ce3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2ce3a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ce3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ce3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce3ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce3b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce3b4: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2ce3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2ce3b8: 0x25a80010  addiu       $t0, $t5, 0x10
    ctx->pc = 0x2ce3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2ce3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce3c0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2ce3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ce3c4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2CE3C4u;
    {
        const bool branch_taken_0x2ce3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3C4u;
        // 0x2ce3c8: 0x24860010  addiu       $a2, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3c4) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CE3CCu;
    // 0x2ce3cc: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2ce3ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3d0:
    // 0x2ce3d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ce3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3d4: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x2ce3d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3d8: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2ce3d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3dc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2ce3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3e0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2ce3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3e4: 0x0  nop
    ctx->pc = 0x2ce3e4u;
    // NOP
label_2ce3e8:
    // 0x2ce3e8: 0xc5860000  lwc1        $f6, 0x0($t4)
    ctx->pc = 0x2ce3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ce3ec: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x2ce3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce3f0: 0xc5a30004  lwc1        $f3, 0x4($t5)
    ctx->pc = 0x2ce3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce3f4: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2ce3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce3f8: 0x46053082  mul.s       $f2, $f6, $f5
    ctx->pc = 0x2ce3f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2ce3fc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ce3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce400: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ce400u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ce404: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ce404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce408: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ce408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ce40c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2ce40cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2ce410: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ce410u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ce414: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2ce414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce418: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x2ce418u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ce41c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2ce41cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2ce420: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x2ce420u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2ce424: 0xe5260000  swc1        $f6, 0x0($t1)
    ctx->pc = 0x2ce424u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2ce428: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ce428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce42c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x2ce42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce430: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce434: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce438: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x2ce438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2ce43c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ce43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce440: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2ce440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce444: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce448: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce44c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2ce44cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2ce450: 0xc5860010  lwc1        $f6, 0x10($t4)
    ctx->pc = 0x2ce450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ce454: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x2ce454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce458: 0xc5a30014  lwc1        $f3, 0x14($t5)
    ctx->pc = 0x2ce458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce45c: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2ce45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce460: 0x46053082  mul.s       $f2, $f6, $f5
    ctx->pc = 0x2ce460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2ce464: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2ce464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce468: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ce468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ce46c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ce46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce470: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ce470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ce474: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2ce474u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2ce478: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x2ce478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce47c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ce47cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ce480: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2ce480u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2ce484: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2ce484u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2ce488: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x2ce488u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2ce48c: 0xe5260010  swc1        $f6, 0x10($t1)
    ctx->pc = 0x2ce48cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x2ce490: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ce490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce494: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x2ce494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce498: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce49c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce4a0: 0xe5410014  swc1        $f1, 0x14($t2)
    ctx->pc = 0x2ce4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x2ce4a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ce4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce4a8: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2ce4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce4ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce4b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce4b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce4b4: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x2ce4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x2ce4b8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2ce4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2ce4bc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2ce4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2ce4c0: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x2ce4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x2ce4c4: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2ce4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2ce4c8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2ce4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2ce4cc: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2ce4ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2ce4d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2ce4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ce4d4: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x2ce4d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2ce4d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2ce4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ce4dc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2CE4DCu;
    {
        const bool branch_taken_0x2ce4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4DCu;
        // 0x2ce4e0: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4dc) {
            ctx->pc = 0x2CE3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce3e8;
        }
    }
    ctx->pc = 0x2CE4E4u;
    // 0x2ce4e4: 0x0  nop
    ctx->pc = 0x2ce4e4u;
    // NOP
label_2ce4e8:
    // 0x2ce4e8: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2CE4E8u;
    {
        const bool branch_taken_0x2ce4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4E8u;
        // 0x2ce4ec: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4e8) {
            ctx->pc = 0x2CE8A4u;
            goto label_2ce8a4;
        }
    }
    ctx->pc = 0x2CE4F0u;
label_2ce4f0:
    // 0x2ce4f0: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2ce4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2ce4f4:
    // 0x2ce4f4: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x2ce4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2ce4f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ce4fc: 0x1443fd60  bne         $v0, $v1, . + 4 + (-0x2A0 << 2)
    ctx->pc = 0x2CE4FCu;
    {
        const bool branch_taken_0x2ce4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4FCu;
        // 0x2ce500: 0xafa2016c  sw          $v0, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4fc) {
            ctx->pc = 0x2CDA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cda80;
        }
    }
    ctx->pc = 0x2CE504u;
label_2ce504:
    // 0x2ce504: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ce508: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2CE508u;
    {
        const bool branch_taken_0x2ce508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE508u;
        // 0x2ce50c: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce508) {
            ctx->pc = 0x2CE8A8u;
            goto label_2ce8a8;
        }
    }
    ctx->pc = 0x2CE510u;
label_2ce510:
    // 0x2ce510: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2ce510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2ce514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce518: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ce518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce51c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ce51cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce520: 0x0  nop
    ctx->pc = 0x2ce520u;
    // NOP
    // 0x2ce524: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2CE524u;
    {
        const bool branch_taken_0x2ce524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE524u;
        // 0x2ce528: 0xc7a10164  lwc1        $f1, 0x164($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce524) {
            ctx->pc = 0x2CE5E0u;
            goto label_2ce5e0;
        }
    }
    ctx->pc = 0x2CE52Cu;
    // 0x2ce52c: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x2ce52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce530: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ce530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce534: 0x0  nop
    ctx->pc = 0x2ce534u;
    // NOP
    // 0x2ce538: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2CE538u;
    {
        const bool branch_taken_0x2ce538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE538u;
        // 0x2ce53c: 0x8fa302f0  lw          $v1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce538) {
            ctx->pc = 0x2CE5E0u;
            goto label_2ce5e0;
        }
    }
    ctx->pc = 0x2CE540u;
    // 0x2ce540: 0x9462007c  lhu         $v0, 0x7C($v1)
    ctx->pc = 0x2ce540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2ce544: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ce544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ce548: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CE548u;
    {
        const bool branch_taken_0x2ce548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE548u;
        // 0x2ce54c: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce548) {
            ctx->pc = 0x2CE5E4u;
            goto label_2ce5e4;
        }
    }
    ctx->pc = 0x2CE550u;
    // 0x2ce550: 0x946200fc  lhu         $v0, 0xFC($v1)
    ctx->pc = 0x2ce550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2ce554: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ce554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ce558: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CE558u;
    {
        const bool branch_taken_0x2ce558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE558u;
        // 0x2ce55c: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce558) {
            ctx->pc = 0x2CE5E4u;
            goto label_2ce5e4;
        }
    }
    ctx->pc = 0x2CE560u;
    // 0x2ce560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ce564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce568: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x2ce568u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2ce56c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2ce56cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2ce570: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2ce570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce574: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2ce574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2ce578: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2ce578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce57c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ce57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce580: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ce580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ce584: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2ce584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce588: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ce588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ce58c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ce58cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ce590: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2ce590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ce594: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2ce594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ce598: 0xe6430008  swc1        $f3, 0x8($s2)
    ctx->pc = 0x2ce598u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2ce59c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x2ce59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce5a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ce5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ce5a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2ce5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2ce5a8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2ce5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce5ac: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2ce5acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ce5b0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ce5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce5b4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ce5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ce5b8: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x2ce5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce5bc: 0xc7a5014c  lwc1        $f5, 0x14C($sp)
    ctx->pc = 0x2ce5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce5c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ce5c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ce5c4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2ce5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2ce5c8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ce5c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ce5cc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2ce5ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2ce5d0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2ce5d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2ce5d4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ce5d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ce5d8: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x2ce5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2ce5dc: 0x0  nop
    ctx->pc = 0x2ce5dcu;
    // NOP
label_2ce5e0:
    // 0x2ce5e0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2ce5e4:
    // 0x2ce5e4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2ce5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ce5e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ce5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ce5ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE5ECu;
    {
        const bool branch_taken_0x2ce5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5ECu;
        // 0x2ce5f0: 0xc7ac0150  lwc1        $f12, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5ec) {
            ctx->pc = 0x2CE610u;
            goto label_2ce610;
        }
    }
    ctx->pc = 0x2CE5F4u;
    // 0x2ce5f4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2ce5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5f8: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2ce5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2ce5fc: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2ce600: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ce600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ce604: 0xc0b335a  jal         func_2CCD68
    ctx->pc = 0x2CE604u;
    SET_GPR_U32(ctx, 31, 0x2CE60Cu);
    ctx->pc = 0x2CE608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE604u;
    // 0x2ce608: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCD68u, 0x2CE604u, 0x2CE60Cu)) {
        return;
    }
    ctx->pc = 0x2CE60Cu;
label_2ce60c:
    // 0x2ce60c: 0x7bad01e0  lq          $t5, 0x1E0($sp)
    ctx->pc = 0x2ce60cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce610:
    // 0x2ce610: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x2ce610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ce618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce61c: 0x0  nop
    ctx->pc = 0x2ce61cu;
    // NOP
    // 0x2ce620: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2CE620u;
    {
        const bool branch_taken_0x2ce620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE620u;
        // 0x2ce624: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce620) {
            ctx->pc = 0x2CE6A0u;
            goto label_2ce6a0;
        }
    }
    ctx->pc = 0x2CE628u;
    // 0x2ce628: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2ce628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ce62c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2ce62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ce630: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CE630u;
    {
        const bool branch_taken_0x2ce630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE630u;
        // 0x2ce634: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce630) {
            ctx->pc = 0x2CE6A0u;
            goto label_2ce6a0;
        }
    }
    ctx->pc = 0x2CE638u;
    // 0x2ce638: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2ce638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce63c: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2ce63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce640: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2ce640u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ce644: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2ce644u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ce648: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2ce648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce64c: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x2ce64cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2ce650: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ce650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce654: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2ce654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce658: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2ce658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2ce65c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2ce65cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2ce660: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2ce660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2ce664: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2ce664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ce668: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2ce668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ce66c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2ce66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ce670: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2ce674: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x2ce674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce678: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2ce678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce67c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ce67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ce680: 0xc0b335a  jal         func_2CCD68
    ctx->pc = 0x2CE680u;
    SET_GPR_U32(ctx, 31, 0x2CE688u);
    ctx->pc = 0x2CE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE680u;
    // 0x2ce684: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCD68u, 0x2CE680u, 0x2CE688u)) {
        return;
    }
    ctx->pc = 0x2CE688u;
label_2ce688:
    // 0x2ce688: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x2ce688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2ce68c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce690: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ce690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2ce694: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x2ce694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2ce698: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2ce698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2ce69c: 0x0  nop
    ctx->pc = 0x2ce69cu;
    // NOP
label_2ce6a0:
    // 0x2ce6a0: 0x8fac0158  lw          $t4, 0x158($sp)
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2ce6a4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2ce6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2ce6a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE6A8u;
    {
        const bool branch_taken_0x2ce6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6a8) {
            ctx->pc = 0x2CE6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6A8u;
            // 0x2ce6ac: 0xc6440008  lwc1        $f4, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE6D0u;
            goto label_2ce6d0;
        }
    }
    ctx->pc = 0x2CE6B0u;
    // 0x2ce6b0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ce6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce6b4: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x2ce6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ce6b8: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x2ce6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ce6bc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2ce6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ce6c0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2ce6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce6c4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2ce6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce6c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CE6C8u;
    {
        const bool branch_taken_0x2ce6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C8u;
        // 0x2ce6cc: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6c8) {
            ctx->pc = 0x2CE758u;
            goto label_2ce758;
        }
    }
    ctx->pc = 0x2CE6D0u;
label_2ce6d0:
    // 0x2ce6d0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2ce6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce6d4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2ce6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce6d8: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x2ce6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ce6dc: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x2ce6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ce6e0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2ce6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce6e4: 0x460440c2  mul.s       $f3, $f8, $f4
    ctx->pc = 0x2ce6e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2ce6e8: 0x46013942  mul.s       $f5, $f7, $f1
    ctx->pc = 0x2ce6e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2ce6ec: 0x46004182  mul.s       $f6, $f8, $f0
    ctx->pc = 0x2ce6ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2ce6f0: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x2ce6f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ce6f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2ce6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ce6f8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2ce6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2ce6fc: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2ce6fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2ce700: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2ce700u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2ce704: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2ce704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2ce708: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x2ce708u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2ce70c: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2ce70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2ce710: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2ce710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2ce714: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x2ce714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ce718: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ce718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce71c: 0x8fac02f0  lw          $t4, 0x2F0($sp)
    ctx->pc = 0x2ce71cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce720: 0x46081902  mul.s       $f4, $f3, $f8
    ctx->pc = 0x2ce720u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2ce724: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ce724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ce728: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2ce728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2ce72c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2ce72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2ce730: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2ce730u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2ce734: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2ce734u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2ce738: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2ce738u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2ce73c: 0xe5840008  swc1        $f4, 0x8($t4)
    ctx->pc = 0x2ce73cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2ce740: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x2ce740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2ce744: 0xe5850000  swc1        $f5, 0x0($t4)
    ctx->pc = 0x2ce744u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x2ce748: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ce748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce74c: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2CE74Cu;
    SET_GPR_U32(ctx, 31, 0x2CE754u);
    ctx->pc = 0x2CE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE74Cu;
    // 0x2ce750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CE74Cu, 0x2CE754u)) {
        return;
    }
    ctx->pc = 0x2CE754u;
label_2ce754:
    // 0x2ce754: 0x0  nop
    ctx->pc = 0x2ce754u;
    // NOP
label_2ce758:
    // 0x2ce758: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ce758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce75c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ce75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce760: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ce760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce764: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2ce764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce768: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ce768u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ce76c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ce76cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ce770: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ce770u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2ce774: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ce774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ce778: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ce778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ce77c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2ce77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ce780: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2ce780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce784: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2ce784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce788: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ce788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ce78c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x2ce78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce790: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2ce790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2ce794: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2ce794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2ce798: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2ce798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2ce79c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ce79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce7a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ce7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce7a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce7a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ce7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ce7ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE7ACu;
    {
        const bool branch_taken_0x2ce7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7ACu;
        // 0x2ce7b0: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7ac) {
            ctx->pc = 0x2CE7E0u;
            goto label_2ce7e0;
        }
    }
    ctx->pc = 0x2CE7B4u;
    // 0x2ce7b4: 0x6a450007  ldl         $a1, 0x7($s2)
    ctx->pc = 0x2ce7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ce7b8: 0x6e450000  ldr         $a1, 0x0($s2)
    ctx->pc = 0x2ce7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ce7bc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x2ce7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ce7c0: 0xb0850087  sdl         $a1, 0x87($a0)
    ctx->pc = 0x2ce7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce7c4: 0xb4850080  sdr         $a1, 0x80($a0)
    ctx->pc = 0x2ce7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce7c8: 0xac860088  sw          $a2, 0x88($a0)
    ctx->pc = 0x2ce7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 6));
    // 0x2ce7cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE7CCu;
    {
        const bool branch_taken_0x2ce7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7CCu;
        // 0x2ce7d0: 0x8fa402f0  lw          $a0, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7cc) {
            ctx->pc = 0x2CE870u;
            goto label_2ce870;
        }
    }
    ctx->pc = 0x2CE7D4u;
    // 0x2ce7d4: 0x0  nop
    ctx->pc = 0x2ce7d4u;
    // NOP
label_2ce7d8:
    // 0x2ce7d8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2CE7D8u;
    {
        const bool branch_taken_0x2ce7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7D8u;
        // 0x2ce7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7d8) {
            ctx->pc = 0x2CE8A4u;
            goto label_2ce8a4;
        }
    }
    ctx->pc = 0x2CE7E0u;
label_2ce7e0:
    // 0x2ce7e0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ce7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce7e4: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2ce7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce7e8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ce7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7ec: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x2ce7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ce7f0: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x2ce7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ce7f4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2ce7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce7f8: 0x46013a02  mul.s       $f8, $f7, $f1
    ctx->pc = 0x2ce7f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2ce7fc: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x2ce7fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2ce800: 0x46003142  mul.s       $f5, $f6, $f0
    ctx->pc = 0x2ce800u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2ce804: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2ce804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ce808: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x2ce808u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ce80c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ce80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ce810: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2ce810u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2ce814: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ce814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ce818: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2ce818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2ce81c: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x2ce81cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2ce820: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x2ce820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2ce824: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2ce824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2ce828: 0x46060942  mul.s       $f5, $f1, $f6
    ctx->pc = 0x2ce828u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2ce82c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ce82cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ce830: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ce830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce834: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x2ce834u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2ce838: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2ce838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ce83c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2ce83cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2ce840: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2ce840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ce844: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2ce844u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ce848: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2ce848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2ce84c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2ce84cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2ce850: 0xe4640088  swc1        $f4, 0x88($v1)
    ctx->pc = 0x2ce850u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x2ce854: 0xe4620084  swc1        $f2, 0x84($v1)
    ctx->pc = 0x2ce854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2ce858: 0xe4650080  swc1        $f5, 0x80($v1)
    ctx->pc = 0x2ce858u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x2ce85c: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x2ce85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2ce860: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2CE860u;
    SET_GPR_U32(ctx, 31, 0x2CE868u);
    ctx->pc = 0x2CE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE860u;
    // 0x2ce864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CE860u, 0x2CE868u)) {
        return;
    }
    ctx->pc = 0x2CE868u;
label_2ce868:
    // 0x2ce868: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ce868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce86c: 0x0  nop
    ctx->pc = 0x2ce86cu;
    // NOP
label_2ce870:
    // 0x2ce870: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2ce870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce874: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2ce874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce878: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2ce878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce87c: 0xc4820084  lwc1        $f2, 0x84($a0)
    ctx->pc = 0x2ce87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce880: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ce880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ce884: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x2ce884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce888: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2ce888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ce88c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2ce88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce890: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ce890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ce894: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ce894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ce898: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ce898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ce89c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce8a0: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x2ce8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_2ce8a4:
    // 0x2ce8a4: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x2ce8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2ce8a8:
    // 0x2ce8a8: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x2ce8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2ce8ac: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x2ce8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2ce8b0: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x2ce8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2ce8b4: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x2ce8b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2ce8b8: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x2ce8b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2ce8bc: 0x7bb60220  lq          $s6, 0x220($sp)
    ctx->pc = 0x2ce8bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2ce8c0: 0x7bb70210  lq          $s7, 0x210($sp)
    ctx->pc = 0x2ce8c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2ce8c4: 0x7bbe0200  lq          $fp, 0x200($sp)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2ce8c8: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x2ce8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2ce8cc: 0xc7bf02e8  lwc1        $f31, 0x2E8($sp)
    ctx->pc = 0x2ce8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2ce8d0: 0xc7be02e0  lwc1        $f30, 0x2E0($sp)
    ctx->pc = 0x2ce8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2ce8d4: 0xc7bd02d8  lwc1        $f29, 0x2D8($sp)
    ctx->pc = 0x2ce8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2ce8d8: 0xc7bc02d0  lwc1        $f28, 0x2D0($sp)
    ctx->pc = 0x2ce8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2ce8dc: 0xc7bb02c8  lwc1        $f27, 0x2C8($sp)
    ctx->pc = 0x2ce8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2ce8e0: 0xc7ba02c0  lwc1        $f26, 0x2C0($sp)
    ctx->pc = 0x2ce8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2ce8e4: 0xc7b902b8  lwc1        $f25, 0x2B8($sp)
    ctx->pc = 0x2ce8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ce8e8: 0xc7b802b0  lwc1        $f24, 0x2B0($sp)
    ctx->pc = 0x2ce8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ce8ec: 0xc7b702a8  lwc1        $f23, 0x2A8($sp)
    ctx->pc = 0x2ce8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ce8f0: 0xc7b602a0  lwc1        $f22, 0x2A0($sp)
    ctx->pc = 0x2ce8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ce8f4: 0xc7b50298  lwc1        $f21, 0x298($sp)
    ctx->pc = 0x2ce8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ce8f8: 0xc7b40290  lwc1        $f20, 0x290($sp)
    ctx->pc = 0x2ce8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ce8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8FCu;
        // 0x2ce900: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE904u;
    // 0x2ce904: 0x0  nop
    ctx->pc = 0x2ce904u;
    // NOP
    ctx->pc = 0x2ce908u;
}
