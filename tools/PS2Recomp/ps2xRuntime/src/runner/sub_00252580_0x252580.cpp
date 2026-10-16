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

// Function: sub_00252580
// Address: 0x252580 - 0x2526b0
void sub_00252580_0x252580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252580_0x252580");
#endif

    switch (ctx->pc) {
        case 0x252664u: goto label_252664;
        case 0x252680u: goto label_252680;
        case 0x25268cu: goto label_25268c;
        case 0x252698u: goto label_252698;
        default: break;
    }

    ctx->pc = 0x252580u;

label_252580:
    // 0x252580: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x252580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x252584: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x252584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x252588: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x252588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x25258c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25258cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252590: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252594: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x252594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252598: 0x4e10034  bgez        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x252598u;
    {
        const bool branch_taken_0x252598 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x25259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252598u;
        // 0x25259c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252598) {
            ctx->pc = 0x25266Cu;
            goto label_25266c;
        }
    }
    ctx->pc = 0x2525A0u;
    // 0x2525a0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2525a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2525a4: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x2525a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2525a8: 0x8c625620  lw          $v0, 0x5620($v1)
    ctx->pc = 0x2525a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735620u));
    // 0x2525ac: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2525acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2525b0: 0xe6030028  swc1        $f3, 0x28($s0)
    ctx->pc = 0x2525b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2525b4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2525b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525b8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2525b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2525bc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2525bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525c0: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2525c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2525c4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2525c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2525c8: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2525c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2525cc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2525ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525d0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2525d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525d4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2525d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2525d8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2525d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2525DCu;
    {
        const bool branch_taken_0x2525dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2525E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525DCu;
        // 0x2525e0: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525dc) {
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x2525E4u;
    // 0x2525e4: 0xe603001c  swc1        $f3, 0x1C($s0)
    ctx->pc = 0x2525e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2525e8: 0xe6020028  swc1        $f2, 0x28($s0)
    ctx->pc = 0x2525e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2525ec:
    // 0x2525ec: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2525ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525f0: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2525f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2525f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525f8: 0x0  nop
    ctx->pc = 0x2525f8u;
    // NOP
    // 0x2525fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2525FCu;
    {
        const bool branch_taken_0x2525fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2525fc) {
            ctx->pc = 0x252600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2525FCu;
            // 0x252600: 0xc6010024  lwc1        $f1, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x252610u;
            goto label_252610;
        }
    }
    ctx->pc = 0x252604u;
    // 0x252604: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x252604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x252608: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x252608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x25260c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x25260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252610:
    // 0x252610: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x252610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252614: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252618: 0x0  nop
    ctx->pc = 0x252618u;
    // NOP
    // 0x25261c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25261Cu;
    {
        const bool branch_taken_0x25261c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25261Cu;
        // 0x252620: 0x26220048  addiu       $v0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25261c) {
            ctx->pc = 0x25262Cu;
            goto label_25262c;
        }
    }
    ctx->pc = 0x252624u;
    // 0x252624: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x252624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x252628: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x252628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_25262c:
    // 0x25262c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x25262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x252630: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x252630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252634: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x252634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x252638: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x252638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25263c: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x25263cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x252640: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x252640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252644: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x252644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x252648: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x252648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25264c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x25264cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x252650: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x252650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252654: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x252654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x252658: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x252658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25265c: 0xc09494c  jal         func_252530
    ctx->pc = 0x25265Cu;
    SET_GPR_U32(ctx, 31, 0x252664u);
    ctx->pc = 0x252660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25265Cu;
    // 0x252660: 0xe601003c  swc1        $f1, 0x3C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x252530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252530u, 0x25265Cu, 0x252664u)) {
        return;
    }
    ctx->pc = 0x252664u;
label_252664:
    // 0x252664: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x252664u;
    {
        const bool branch_taken_0x252664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252664u;
        // 0x252668: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252664) {
            ctx->pc = 0x252698u;
            goto label_252698;
        }
    }
    ctx->pc = 0x25266Cu;
label_25266c:
    // 0x25266c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x25266cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252670: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x252670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x252674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x252674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252678: 0xc094906  jal         func_252418
    ctx->pc = 0x252678u;
    SET_GPR_U32(ctx, 31, 0x252680u);
    ctx->pc = 0x25267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252678u;
    // 0x25267c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252418u, 0x252678u, 0x252680u)) {
        return;
    }
    ctx->pc = 0x252680u;
label_252680:
    // 0x252680: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x252680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x252684: 0xc094960  jal         func_252580
    ctx->pc = 0x252684u;
    SET_GPR_U32(ctx, 31, 0x25268Cu);
    ctx->pc = 0x252688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252684u;
    // 0x252688: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252580u;
    goto label_252580;
    ctx->pc = 0x25268Cu;
label_25268c:
    // 0x25268c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x25268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x252690: 0xc094960  jal         func_252580
    ctx->pc = 0x252690u;
    SET_GPR_U32(ctx, 31, 0x252698u);
    ctx->pc = 0x252694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252690u;
    // 0x252694: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252580u;
    goto label_252580;
    ctx->pc = 0x252698u;
label_252698:
    // 0x252698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25269c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25269cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2526a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2526a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2526a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2526a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2526a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2526A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2526ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526A8u;
        // 0x2526ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2526A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2526B0u;
}
