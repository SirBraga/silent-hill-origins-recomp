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

// Function: sub_002E54E8
// Address: 0x2e54e8 - 0x2e5a18
void sub_002E54E8_0x2e54e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E54E8_0x2e54e8");
#endif

    switch (ctx->pc) {
        case 0x2e5538u: goto label_2e5538;
        case 0x2e575cu: goto label_2e575c;
        case 0x2e5790u: goto label_2e5790;
        case 0x2e5840u: goto label_2e5840;
        case 0x2e58c8u: goto label_2e58c8;
        case 0x2e59c8u: goto label_2e59c8;
        default: break;
    }

    ctx->pc = 0x2e54e8u;

    // 0x2e54e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e54e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e54ec: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2e54ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2e54f0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2e54f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2e54f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e54f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54f8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2e54f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2e54fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e54fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5500: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2e5500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2e5504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e5504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5508: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2e5508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2e550c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e550cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5510: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2e5510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2e5514: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2e5514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5518: 0x129a80b  movn        $s5, $t1, $t1
    ctx->pc = 0x2e5518u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9));
    // 0x2e551c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e5520: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e5520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5524: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2e5524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2e5528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e552c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5530: 0xc0b93b2  jal         func_2E4EC8
    ctx->pc = 0x2E5530u;
    SET_GPR_U32(ctx, 31, 0x2E5538u);
    ctx->pc = 0x2E5534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5530u;
    // 0x2e5534: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4EC8u, 0x2E5530u, 0x2E5538u)) {
        return;
    }
    ctx->pc = 0x2E5538u;
label_2e5538:
    // 0x2e5538: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x2e5538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e553c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e553cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2e5540: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2e5540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e5544: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2e5544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2e5548: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5548u;
    {
        const bool branch_taken_0x2e5548 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5548u;
        // 0x2e554c: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5548) {
            ctx->pc = 0x2E5560u;
            goto label_2e5560;
        }
    }
    ctx->pc = 0x2E5550u;
    // 0x2e5550: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2e5550u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e5554: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e5554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e5558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5558u;
    {
        const bool branch_taken_0x2e5558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5558u;
        // 0x2e555c: 0x9225000d  lbu         $a1, 0xD($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5558) {
            ctx->pc = 0x2E557Cu;
            goto label_2e557c;
        }
    }
    ctx->pc = 0x2E5560u;
label_2e5560:
    // 0x2e5560: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e5560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e5564: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e5564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e5568: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e556c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e556cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e5570: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e5570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e5574: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2e5574u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2e5578: 0x9225000d  lbu         $a1, 0xD($s1)
    ctx->pc = 0x2e5578u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_2e557c:
    // 0x2e557c: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x2e557cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e5580: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x2e5580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2e5584: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e5584u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e558c: 0x9244000d  lbu         $a0, 0xD($s2)
    ctx->pc = 0x2e558cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x2e5590: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e5590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5594: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e5594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5598: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e5598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e559c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e559cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e55a0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2e55a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e55a4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2e55a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e55a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e55a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e55ac: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2e55acu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55b0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e55b0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2e55b4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e55b4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2e55b8: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E55B8u;
    {
        const bool branch_taken_0x2e55b8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2E55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55B8u;
        // 0x2e55bc: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55b8) {
            ctx->pc = 0x2E55D0u;
            goto label_2e55d0;
        }
    }
    ctx->pc = 0x2E55C0u;
    // 0x2e55c0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2e55c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e55c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e55c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e55c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E55C8u;
    {
        const bool branch_taken_0x2e55c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55C8u;
        // 0x2e55cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55c8) {
            ctx->pc = 0x2E55ECu;
            goto label_2e55ec;
        }
    }
    ctx->pc = 0x2E55D0u;
label_2e55d0:
    // 0x2e55d0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2e55d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2e55d4: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2e55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2e55d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e55d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e55dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e55dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e55e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e55e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e55e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e55e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2e55e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e55ec:
    // 0x2e55ec: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E55ECu;
    {
        const bool branch_taken_0x2e55ec = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55ECu;
        // 0x2e55f0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55ec) {
            ctx->pc = 0x2E5604u;
            goto label_2e5604;
        }
    }
    ctx->pc = 0x2E55F4u;
    // 0x2e55f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e55f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e55f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e55f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e55fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E55FCu;
    {
        const bool branch_taken_0x2e55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e55fc) {
            ctx->pc = 0x2E5618u;
            goto label_2e5618;
        }
    }
    ctx->pc = 0x2E5604u;
label_2e5604:
    // 0x2e5604: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e5604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e5608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e560c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e560cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5614: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5618:
    // 0x2e5618: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e5618u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x2e561c: 0x71823  negu        $v1, $a3
    ctx->pc = 0x2e561cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2e5620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5624: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2e5624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2e5628: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e562c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e562cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e5630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e5634: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2e5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e5638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e563c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E563Cu;
    {
        const bool branch_taken_0x2e563c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E563Cu;
        // 0x2e5640: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e563c) {
            ctx->pc = 0x2E5654u;
            goto label_2e5654;
        }
    }
    ctx->pc = 0x2E5644u;
    // 0x2e5644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e564c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E564Cu;
    {
        const bool branch_taken_0x2e564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E564Cu;
        // 0x2e5650: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e564c) {
            ctx->pc = 0x2E566Cu;
            goto label_2e566c;
        }
    }
    ctx->pc = 0x2E5654u;
label_2e5654:
    // 0x2e5654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5658: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e565c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e565cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5664: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e5668: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2e5668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e566c:
    // 0x2e566c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e566cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5670: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x2e5670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x2e5674: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5674u;
    {
        const bool branch_taken_0x2e5674 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5674) {
            ctx->pc = 0x2E5678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5674u;
            // 0x2e5678: 0x2659821  addu        $s3, $s3, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E567Cu;
            goto label_2e567c;
        }
    }
    ctx->pc = 0x2E567Cu;
label_2e567c:
    // 0x2e567c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2e567cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e5680: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2e5680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5684: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5684u;
    {
        const bool branch_taken_0x2e5684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5684u;
        // 0x2e5688: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5684) {
            ctx->pc = 0x2E569Cu;
            goto label_2e569c;
        }
    }
    ctx->pc = 0x2E568Cu;
    // 0x2e568c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2e568cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e5690: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2e5690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5694u;
    {
        const bool branch_taken_0x2e5694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5694u;
        // 0x2e5698: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5694) {
            ctx->pc = 0x2E56A8u;
            goto label_2e56a8;
        }
    }
    ctx->pc = 0x2E569Cu;
label_2e569c:
    // 0x2e569c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2e569cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e56a0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2e56a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e56a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e56a8:
    // 0x2e56a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e56a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e56ac: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x2e56acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x2e56b0: 0x710c2  srl         $v0, $a3, 3
    ctx->pc = 0x2e56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x2e56b4: 0x2c51823  subu        $v1, $s6, $a1
    ctx->pc = 0x2e56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2e56b8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2e56b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e56bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E56BCu;
    {
        const bool branch_taken_0x2e56bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56bc) {
            ctx->pc = 0x2E56C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E56BCu;
            // 0x2e56c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E56C4u;
            goto label_2e56c4;
        }
    }
    ctx->pc = 0x2E56C4u;
label_2e56c4:
    // 0x2e56c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e56c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e56c8: 0x300b82d  daddu       $s7, $t8, $zero
    ctx->pc = 0x2e56c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56cc: 0x2812  mflo        $a1
    ctx->pc = 0x2e56ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2e56d0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E56D0u;
    {
        const bool branch_taken_0x2e56d0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56D0u;
        // 0x2e56d4: 0xa0c82d  daddu       $t9, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56d0) {
            ctx->pc = 0x2E56E8u;
            goto label_2e56e8;
        }
    }
    ctx->pc = 0x2E56D8u;
    // 0x2e56d8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2e56d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e56dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e56dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e56e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E56E0u;
    {
        const bool branch_taken_0x2e56e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56e0) {
            ctx->pc = 0x2E5700u;
            goto label_2e5700;
        }
    }
    ctx->pc = 0x2E56E8u;
label_2e56e8:
    // 0x2e56e8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e56e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e56ec: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e56f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e56f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e56f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e56f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e56f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e56f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e56fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e56fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e5700:
    // 0x2e5700: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5700u;
    {
        const bool branch_taken_0x2e5700 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2E5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5700u;
        // 0x2e5704: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5700) {
            ctx->pc = 0x2E5718u;
            goto label_2e5718;
        }
    }
    ctx->pc = 0x2E5708u;
    // 0x2e5708: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2e5708u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e570c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e570cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5710: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5710u;
    {
        const bool branch_taken_0x2e5710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5710) {
            ctx->pc = 0x2E572Cu;
            goto label_2e572c;
        }
    }
    ctx->pc = 0x2E5718u;
label_2e5718:
    // 0x2e5718: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2e5718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2e571c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5728: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e572c:
    // 0x2e572c: 0x460009c3  div.s       $f7, $f1, $f0
    ctx->pc = 0x2e572cu;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2e5730: 0x2f020002  sltiu       $v0, $t8, 0x2
    ctx->pc = 0x2e5730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e5734: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5734u;
    {
        const bool branch_taken_0x2e5734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5734u;
        // 0x2e5738: 0x181023  negu        $v0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5734) {
            ctx->pc = 0x2E5740u;
            goto label_2e5740;
        }
    }
    ctx->pc = 0x2E573Cu;
    // 0x2e573c: 0xa2c824  and         $t9, $a1, $v0
    ctx->pc = 0x2e573cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2e5740:
    // 0x2e5740: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5740u;
    {
        const bool branch_taken_0x2e5740 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5740) {
            ctx->pc = 0x2E5744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5740u;
            // 0x2e5744: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5760u;
            goto label_2e5760;
        }
    }
    ctx->pc = 0x2E5748u;
    // 0x2e5748: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5748u;
    {
        const bool branch_taken_0x2e5748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5748u;
        // 0x2e574c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5748) {
            ctx->pc = 0x2E5768u;
            goto label_2e5768;
        }
    }
    ctx->pc = 0x2E5750u;
    // 0x2e5750: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5754: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E5754u;
    SET_GPR_U32(ctx, 31, 0x2E575Cu);
    ctx->pc = 0x2E5758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5754u;
    // 0x2e5758: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E5754u, 0x2E575Cu)) {
        return;
    }
    ctx->pc = 0x2E575Cu;
label_2e575c:
    // 0x2e575c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e5760:
    // 0x2e5760: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2E5760u;
    {
        const bool branch_taken_0x2e5760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5760u;
        // 0x2e5764: 0x2c21023  subu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5760) {
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E5768u;
label_2e5768:
    // 0x2e5768: 0x1300002e  beqz        $t8, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E5768u;
    {
        const bool branch_taken_0x2e5768 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5768u;
        // 0x2e576c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5768) {
            ctx->pc = 0x2E5824u;
            goto label_2e5824;
        }
    }
    ctx->pc = 0x2E5770u;
    // 0x2e5770: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2e5770u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5774: 0x2d260003  sltiu       $a2, $t1, 0x3
    ctx->pc = 0x2e5774u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e5778: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2e5778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e577c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2e577cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e5780: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e5780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5784: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e5784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e5788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e578c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2e578cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e5790:
    // 0x2e5790: 0x512c0012  beql        $t1, $t4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5790u;
    {
        const bool branch_taken_0x2e5790 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e5790) {
            ctx->pc = 0x2E5794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5790u;
            // 0x2e5794: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E57DCu;
            goto label_2e57dc;
        }
    }
    ctx->pc = 0x2E5798u;
    // 0x2e5798: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5798u;
    {
        const bool branch_taken_0x2e5798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5798) {
            ctx->pc = 0x2E57B0u;
            goto label_2e57b0;
        }
    }
    ctx->pc = 0x2E57A0u;
    // 0x2e57a0: 0x112b0009  beq         $t1, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E57A0u;
    {
        const bool branch_taken_0x2e57a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x2E57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57A0u;
        // 0x2e57a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57a0) {
            ctx->pc = 0x2E57C8u;
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E57A8u;
    // 0x2e57a8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2E57A8u;
    {
        const bool branch_taken_0x2e57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57A8u;
        // 0x2e57ac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57a8) {
            ctx->pc = 0x2E59ECu;
            goto label_2e59ec;
        }
    }
    ctx->pc = 0x2E57B0u;
label_2e57b0:
    // 0x2e57b0: 0x512a000e  beql        $t1, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E57B0u;
    {
        const bool branch_taken_0x2e57b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2e57b0) {
            ctx->pc = 0x2E57B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E57B0u;
            // 0x2e57b4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E57ECu;
            goto label_2e57ec;
        }
    }
    ctx->pc = 0x2E57B8u;
    // 0x2e57b8: 0x11280010  beq         $t1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E57B8u;
    {
        const bool branch_taken_0x2e57b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x2E57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57B8u;
        // 0x2e57bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57b8) {
            ctx->pc = 0x2E57FCu;
            goto label_2e57fc;
        }
    }
    ctx->pc = 0x2E57C0u;
    // 0x2e57c0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2E57C0u;
    {
        const bool branch_taken_0x2e57c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57C0u;
        // 0x2e57c4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57c0) {
            ctx->pc = 0x2E59ECu;
            goto label_2e59ec;
        }
    }
    ctx->pc = 0x2E57C8u;
label_2e57c8:
    // 0x2e57c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e57c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e57cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e57ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e57d0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e57d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e57d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E57D4u;
    {
        const bool branch_taken_0x2e57d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57D4u;
        // 0x2e57d8: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57d4) {
            ctx->pc = 0x2E580Cu;
            goto label_2e580c;
        }
    }
    ctx->pc = 0x2E57DCu;
label_2e57dc:
    // 0x2e57dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e57dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e57e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e57e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e57e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E57E4u;
    {
        const bool branch_taken_0x2e57e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57E4u;
        // 0x2e57e8: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57e4) {
            ctx->pc = 0x2E580Cu;
            goto label_2e580c;
        }
    }
    ctx->pc = 0x2E57ECu;
label_2e57ec:
    // 0x2e57ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e57ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e57f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e57f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e57f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E57F4u;
    {
        const bool branch_taken_0x2e57f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57F4u;
        // 0x2e57f8: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57f4) {
            ctx->pc = 0x2E580Cu;
            goto label_2e580c;
        }
    }
    ctx->pc = 0x2E57FCu;
label_2e57fc:
    // 0x2e57fc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2e57fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e5800: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e5800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5804: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e5804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e5808: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x2e5808u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2e580c:
    // 0x2e580c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e580cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5810: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e5810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e5814: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e5814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e5818: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x2e5818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x2e581c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2E581Cu;
    {
        const bool branch_taken_0x2e581c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E581Cu;
        // 0x2e5820: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e581c) {
            ctx->pc = 0x2E5790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5790;
        }
    }
    ctx->pc = 0x2E5824u;
label_2e5824:
    // 0x2e5824: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5828: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
    ctx->pc = 0x2E5828u;
    {
        const bool branch_taken_0x2e5828 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5828u;
        // 0x2e582c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5828) {
            ctx->pc = 0x2E59E4u;
            goto label_2e59e4;
        }
    }
    ctx->pc = 0x2E5830u;
    // 0x2e5830: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e5830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5834: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2e5834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2e5838: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e5838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e583c: 0x0  nop
    ctx->pc = 0x2e583cu;
    // NOP
label_2e5840:
    // 0x2e5840: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e5844: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e5844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5848: 0x0  nop
    ctx->pc = 0x2e5848u;
    // NOP
    // 0x2e584c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E584Cu;
    {
        const bool branch_taken_0x2e584c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E584Cu;
        // 0x2e5850: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e584c) {
            ctx->pc = 0x2E5864u;
            goto label_2e5864;
        }
    }
    ctx->pc = 0x2E5854u;
    // 0x2e5854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5858: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e585c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E585Cu;
    {
        const bool branch_taken_0x2e585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E585Cu;
        // 0x2e5860: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e585c) {
            ctx->pc = 0x2E587Cu;
            goto label_2e587c;
        }
    }
    ctx->pc = 0x2E5864u;
label_2e5864:
    // 0x2e5864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e586c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e586cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5874: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e5878: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x2e5878u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e587c:
    // 0x2e587c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e587cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5880: 0x13000049  beqz        $t8, . + 4 + (0x49 << 2)
    ctx->pc = 0x2E5880u;
    {
        const bool branch_taken_0x2e5880 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5880u;
        // 0x2e5884: 0x46070940  add.s       $f5, $f1, $f7 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5880) {
            ctx->pc = 0x2E59A8u;
            goto label_2e59a8;
        }
    }
    ctx->pc = 0x2E5888u;
    // 0x2e5888: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2e5888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e588c: 0xd1840  sll         $v1, $t5, 1
    ctx->pc = 0x2e588cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2e5890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e5890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5894: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e5894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e5898: 0x544021  addu        $t0, $v0, $s4
    ctx->pc = 0x2e5898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e589c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2e589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2e58a0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2e58a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e58a4: 0x2d2b0003  sltiu       $t3, $t1, 0x3
    ctx->pc = 0x2e58a4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e58a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e58a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e58ac: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2e58acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e58b0: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e58b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e58b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58b8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e58b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58bc: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x2e58bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2e58c0: 0x1b32821  addu        $a1, $t5, $s3
    ctx->pc = 0x2e58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x2e58c4: 0x0  nop
    ctx->pc = 0x2e58c4u;
    // NOP
label_2e58c8:
    // 0x2e58c8: 0x5131000d  beql        $t1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E58C8u;
    {
        const bool branch_taken_0x2e58c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e58c8) {
            ctx->pc = 0x2E58CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E58C8u;
            // 0x2e58cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5900u;
            goto label_2e5900;
        }
    }
    ctx->pc = 0x2E58D0u;
    // 0x2e58d0: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E58D0u;
    {
        const bool branch_taken_0x2e58d0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e58d0) {
            ctx->pc = 0x2E58E8u;
            goto label_2e58e8;
        }
    }
    ctx->pc = 0x2E58D8u;
    // 0x2e58d8: 0x51300009  beql        $t1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E58D8u;
    {
        const bool branch_taken_0x2e58d8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e58d8) {
            ctx->pc = 0x2E58DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E58D8u;
            // 0x2e58dc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5900u;
            goto label_2e5900;
        }
    }
    ctx->pc = 0x2E58E0u;
    // 0x2e58e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E58E0u;
    {
        const bool branch_taken_0x2e58e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58E0u;
        // 0x2e58e4: 0x46043001  sub.s       $f0, $f6, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58e0) {
            ctx->pc = 0x2E590Cu;
            goto label_2e590c;
        }
    }
    ctx->pc = 0x2E58E8u;
label_2e58e8:
    // 0x2e58e8: 0x512f0005  beql        $t1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E58E8u;
    {
        const bool branch_taken_0x2e58e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 15));
        if (branch_taken_0x2e58e8) {
            ctx->pc = 0x2E58ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E58E8u;
            // 0x2e58ec: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5900u;
            goto label_2e5900;
        }
    }
    ctx->pc = 0x2E58F0u;
    // 0x2e58f0: 0x512e0003  beql        $t1, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E58F0u;
    {
        const bool branch_taken_0x2e58f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 14));
        if (branch_taken_0x2e58f0) {
            ctx->pc = 0x2E58F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E58F0u;
            // 0x2e58f4: 0x85020000  lh          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5900u;
            goto label_2e5900;
        }
    }
    ctx->pc = 0x2E58F8u;
    // 0x2e58f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E58F8u;
    {
        const bool branch_taken_0x2e58f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58F8u;
        // 0x2e58fc: 0x46043001  sub.s       $f0, $f6, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58f8) {
            ctx->pc = 0x2E590Cu;
            goto label_2e590c;
        }
    }
    ctx->pc = 0x2E5900u;
label_2e5900:
    // 0x2e5900: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e5900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5904: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e5904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e5908: 0x46043001  sub.s       $f0, $f6, $f4
    ctx->pc = 0x2e5908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_2e590c:
    // 0x2e590c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2e590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5910: 0x46041882  mul.s       $f2, $f3, $f4
    ctx->pc = 0x2e5910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e5914: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x2e5914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2e5918: 0x27aa0018  addiu       $t2, $sp, 0x18
    ctx->pc = 0x2e5918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2e591c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e591cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5920: 0x1131000d  beq         $t1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E5920u;
    {
        const bool branch_taken_0x2e5920 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5920u;
        // 0x2e5924: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5920) {
            ctx->pc = 0x2E5958u;
            goto label_2e5958;
        }
    }
    ctx->pc = 0x2E5928u;
    // 0x2e5928: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5928u;
    {
        const bool branch_taken_0x2e5928 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5928) {
            ctx->pc = 0x2E5940u;
            goto label_2e5940;
        }
    }
    ctx->pc = 0x2E5930u;
    // 0x2e5930: 0x11300009  beq         $t1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5930u;
    {
        const bool branch_taken_0x2e5930 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5930u;
        // 0x2e5934: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5930) {
            ctx->pc = 0x2E5958u;
            goto label_2e5958;
        }
    }
    ctx->pc = 0x2E5938u;
    // 0x2e5938: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E5938u;
    {
        const bool branch_taken_0x2e5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5938u;
        // 0x2e593c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5938) {
            ctx->pc = 0x2E597Cu;
            goto label_2e597c;
        }
    }
    ctx->pc = 0x2E5940u;
label_2e5940:
    // 0x2e5940: 0x112f0009  beq         $t1, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5940u;
    {
        const bool branch_taken_0x2e5940 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 15));
        if (branch_taken_0x2e5940) {
            ctx->pc = 0x2E5968u;
            goto label_2e5968;
        }
    }
    ctx->pc = 0x2E5948u;
    // 0x2e5948: 0x112e0007  beq         $t1, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5948u;
    {
        const bool branch_taken_0x2e5948 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 14));
        ctx->pc = 0x2E594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5948u;
        // 0x2e594c: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5948) {
            ctx->pc = 0x2E5968u;
            goto label_2e5968;
        }
    }
    ctx->pc = 0x2E5950u;
    // 0x2e5950: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5950u;
    {
        const bool branch_taken_0x2e5950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5950u;
        // 0x2e5954: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5950) {
            ctx->pc = 0x2E597Cu;
            goto label_2e597c;
        }
    }
    ctx->pc = 0x2E5958u;
label_2e5958:
    // 0x2e5958: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e595c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e595cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5960u;
    {
        const bool branch_taken_0x2e5960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5960u;
        // 0x2e5964: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5960) {
            ctx->pc = 0x2E5974u;
            goto label_2e5974;
        }
    }
    ctx->pc = 0x2E5968u;
label_2e5968:
    // 0x2e5968: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e596c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e596cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5970: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2e5970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2e5974:
    // 0x2e5974: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x2e5974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2e5978: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2e597c:
    // 0x2e597c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5980: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2e5980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2e5984: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5988: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2e5988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2e598c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2e598cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2e5990: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2e5990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2e5994: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2e5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2e5998: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2e5998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e599c: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x2e599cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x2e59a0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2E59A0u;
    {
        const bool branch_taken_0x2e59a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59A0u;
        // 0x2e59a4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59a0) {
            ctx->pc = 0x2E58C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e58c8;
        }
    }
    ctx->pc = 0x2E59A8u;
label_2e59a8:
    // 0x2e59a8: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x2e59a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x2e59ac: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x2e59acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e59b0: 0x0  nop
    ctx->pc = 0x2e59b0u;
    // NOP
    // 0x2e59b4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E59B4u;
    {
        const bool branch_taken_0x2e59b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59B4u;
        // 0x2e59b8: 0x1b9102b  sltu        $v0, $t5, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59b4) {
            ctx->pc = 0x2E59DCu;
            goto label_2e59dc;
        }
    }
    ctx->pc = 0x2E59BCu;
    // 0x2e59bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e59bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e59c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e59c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e59c4: 0x0  nop
    ctx->pc = 0x2e59c4u;
    // NOP
label_2e59c8:
    // 0x2e59c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e59c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e59cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e59ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e59d0: 0x0  nop
    ctx->pc = 0x2e59d0u;
    // NOP
    // 0x2e59d4: 0x4501fffc  bc1t        . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E59D4u;
    {
        const bool branch_taken_0x2e59d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59D4u;
        // 0x2e59d8: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59d4) {
            ctx->pc = 0x2E59C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e59c8;
        }
    }
    ctx->pc = 0x2E59DCu;
label_2e59dc:
    // 0x2e59dc: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2E59DCu;
    {
        const bool branch_taken_0x2e59dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e59dc) {
            ctx->pc = 0x2E5840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5840;
        }
    }
    ctx->pc = 0x2E59E4u;
label_2e59e4:
    // 0x2e59e4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2e59e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e59e8:
    // 0x2e59e8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2e59e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e59ec:
    // 0x2e59ec: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2e59ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e59f0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2e59f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e59f4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2e59f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e59f8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2e59f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e59fc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2e59fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5a00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e5a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5a04: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2e5a04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5a08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A0Cu;
        // 0x2e5a10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5A14u;
    // 0x2e5a14: 0x0  nop
    ctx->pc = 0x2e5a14u;
    // NOP
    ctx->pc = 0x2e5a18u;
}
