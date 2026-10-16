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

// Function: sub_002BD540
// Address: 0x2bd540 - 0x2bd918
void sub_002BD540_0x2bd540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD540_0x2bd540");
#endif

    switch (ctx->pc) {
        case 0x2bd590u: goto label_2bd590;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5f4u: goto label_2bd5f4;
        default: break;
    }

    ctx->pc = 0x2bd540u;

    // 0x2bd540: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2bd540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2bd544: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2bd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2bd548: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x2bd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x2bd54c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2bd54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2bd550: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bd550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd554: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2bd554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2bd558: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2bd558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2bd55c: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x2bd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bd560: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2bd564: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD564u;
    {
        const bool branch_taken_0x2bd564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD564u;
        // 0x2bd568: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd564) {
            ctx->pc = 0x2BD574u;
            goto label_2bd574;
        }
    }
    ctx->pc = 0x2BD56Cu;
    // 0x2bd56c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2BD56Cu;
    {
        const bool branch_taken_0x2bd56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD56Cu;
        // 0x2bd570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd56c) {
            ctx->pc = 0x2BD8F8u;
            goto label_2bd8f8;
        }
    }
    ctx->pc = 0x2BD574u;
label_2bd574:
    // 0x2bd574: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bd578: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2bd57c: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2bd57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2bd580: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2bd580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd584: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x2bd584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2bd588: 0xc0ae84e  jal         func_2BA138
    ctx->pc = 0x2BD588u;
    SET_GPR_U32(ctx, 31, 0x2BD590u);
    ctx->pc = 0x2BD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD588u;
    // 0x2bd58c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA138u, 0x2BD588u, 0x2BD590u)) {
        return;
    }
    ctx->pc = 0x2BD590u;
label_2bd590:
    // 0x2bd590: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x2bd590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bd594: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2bd594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bd598: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x2bd598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x2bd59c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bd59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5a0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bd5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bd5a4: 0x27a70164  addiu       $a3, $sp, 0x164
    ctx->pc = 0x2bd5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x2bd5a8: 0xc0ae84e  jal         func_2BA138
    ctx->pc = 0x2BD5A8u;
    SET_GPR_U32(ctx, 31, 0x2BD5B0u);
    ctx->pc = 0x2BD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5A8u;
    // 0x2bd5ac: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA138u, 0x2BD5A8u, 0x2BD5B0u)) {
        return;
    }
    ctx->pc = 0x2BD5B0u;
label_2bd5b0:
    // 0x2bd5b0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2bd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd5b4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2bd5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd5b8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2bd5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd5bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2bd5bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2bd5c0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2bd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd5c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2bd5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd5c8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2bd5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd5cc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2bd5ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2bd5d0: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x2bd5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2bd5d4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bd5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bd5d8: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x2bd5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2bd5dc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2bd5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2bd5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5e8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2bd5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd5ec: 0xc0ae948  jal         func_2BA520
    ctx->pc = 0x2BD5ECu;
    SET_GPR_U32(ctx, 31, 0x2BD5F4u);
    ctx->pc = 0x2BD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5ECu;
    // 0x2bd5f0: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA520u, 0x2BD5ECu, 0x2BD5F4u)) {
        return;
    }
    ctx->pc = 0x2BD5F4u;
label_2bd5f4:
    // 0x2bd5f4: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2bd5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd5f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd5fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd600: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd604: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x2bd604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bd608: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x2bd608u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bd60c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2bd60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd610: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2bd610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2bd614: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x2bd614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd618: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x2bd618u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bd61c: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x2bd61cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2bd620: 0x46001ac2  mul.s       $f11, $f3, $f0
    ctx->pc = 0x2bd620u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bd624: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2bd624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2bd628: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2bd628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bd62c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x2bd62cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2bd630: 0x46011a82  mul.s       $f10, $f3, $f1
    ctx->pc = 0x2bd630u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bd634: 0xe7a70138  swc1        $f7, 0x138($sp)
    ctx->pc = 0x2bd634u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2bd638: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bd638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bd63c: 0xe7ab0158  swc1        $f11, 0x158($sp)
    ctx->pc = 0x2bd63cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2bd640: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x2bd640u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2bd644: 0xe7a40140  swc1        $f4, 0x140($sp)
    ctx->pc = 0x2bd644u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2bd648: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2bd648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2bd64c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2bd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2bd650: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2bd650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2bd654: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2bd654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2bd658: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2bd658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2bd65c: 0xe7aa0150  swc1        $f10, 0x150($sp)
    ctx->pc = 0x2bd65cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2bd660: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x2bd660u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2bd664: 0xe7a30154  swc1        $f3, 0x154($sp)
    ctx->pc = 0x2bd664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2bd668: 0x46030240  add.s       $f9, $f0, $f3
    ctx->pc = 0x2bd668u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bd66c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x2bd66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2bd670: 0x460b0941  sub.s       $f5, $f1, $f11
    ctx->pc = 0x2bd670u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x2bd674: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2bd674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x2bd678: 0x460a21c1  sub.s       $f7, $f4, $f10
    ctx->pc = 0x2bd678u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2bd67c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x2bd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x2bd680: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bd680u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2bd684: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x2bd684u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x2bd688: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2bd688u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2bd68c: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2bd68cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2bd690: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bd690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bd694: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2bd694u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2bd698: 0x46086201  sub.s       $f8, $f12, $f8
    ctx->pc = 0x2bd698u;
    ctx->f[8] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x2bd69c: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x2bd69cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2bd6a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2bd6a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2bd6a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bd6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bd6a8: 0xe7a800a8  swc1        $f8, 0xA8($sp)
    ctx->pc = 0x2bd6a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2bd6ac: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2bd6acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2bd6b0: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2bd6b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2bd6b4: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x2bd6b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x2bd6b8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2bd6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2bd6bc: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2bd6bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2bd6c0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2bd6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2bd6c4: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x2bd6c4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x2bd6c8: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x2bd6c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bd6cc: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2bd6ccu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2bd6d0: 0xe7ac0094  swc1        $f12, 0x94($sp)
    ctx->pc = 0x2bd6d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2bd6d4: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2bd6d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2bd6d8: 0xe7a900a0  swc1        $f9, 0xA0($sp)
    ctx->pc = 0x2bd6d8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bd6dc: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x2bd6dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2bd6e0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2bd6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bd6e4: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x2bd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bd6e8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2bd6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd6ec: 0x8c87003c  lw          $a3, 0x3C($a0)
    ctx->pc = 0x2bd6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2bd6f0: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x2bd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x2bd6f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD6F4u;
    {
        const bool branch_taken_0x2bd6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6F4u;
        // 0x2bd6f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6f4) {
            ctx->pc = 0x2BD728u;
            goto label_2bd728;
        }
    }
    ctx->pc = 0x2BD6FCu;
    // 0x2bd6fc: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2bd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2bd700: 0x30420808  andi        $v0, $v0, 0x808
    ctx->pc = 0x2bd700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2056);
    // 0x2bd704: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD704u;
    {
        const bool branch_taken_0x2bd704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd704) {
            ctx->pc = 0x2BD708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD704u;
            // 0x2bd708: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD72Cu;
            goto label_2bd72c;
        }
    }
    ctx->pc = 0x2BD70Cu;
    // 0x2bd70c: 0xc4a10090  lwc1        $f1, 0x90($a1)
    ctx->pc = 0x2bd70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd710: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x2bd710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd714: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd718: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd71c: 0x0  nop
    ctx->pc = 0x2bd71cu;
    // NOP
    // 0x2bd720: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD720u;
    {
        const bool branch_taken_0x2bd720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd720) {
            ctx->pc = 0x2BD724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD720u;
            // 0x2bd724: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD728u;
            goto label_2bd728;
        }
    }
    ctx->pc = 0x2BD728u;
label_2bd728:
    // 0x2bd728: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2bd728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2bd72c:
    // 0x2bd72c: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x2bd72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2bd730: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD730u;
    {
        const bool branch_taken_0x2bd730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd730) {
            ctx->pc = 0x2BD734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD730u;
            // 0x2bd734: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD770u;
            goto label_2bd770;
        }
    }
    ctx->pc = 0x2BD738u;
    // 0x2bd738: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2bd738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2bd73c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x2bd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2bd740: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bd740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bd744: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bd744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bd748: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD748u;
    {
        const bool branch_taken_0x2bd748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd748) {
            ctx->pc = 0x2BD74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD748u;
            // 0x2bd74c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD770u;
            goto label_2bd770;
        }
    }
    ctx->pc = 0x2BD750u;
    // 0x2bd750: 0xc4810090  lwc1        $f1, 0x90($a0)
    ctx->pc = 0x2bd750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd754: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x2bd754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd75c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd760: 0x0  nop
    ctx->pc = 0x2bd760u;
    // NOP
    // 0x2bd764: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD764u;
    {
        const bool branch_taken_0x2bd764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd764) {
            ctx->pc = 0x2BD768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD764u;
            // 0x2bd768: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD76Cu;
            goto label_2bd76c;
        }
    }
    ctx->pc = 0x2BD76Cu;
label_2bd76c:
    // 0x2bd76c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2bd770:
    // 0x2bd770: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x2bd770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2bd774: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD774u;
    {
        const bool branch_taken_0x2bd774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd774) {
            ctx->pc = 0x2BD778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD774u;
            // 0x2bd778: 0x8ca3008c  lw          $v1, 0x8C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7B4u;
            goto label_2bd7b4;
        }
    }
    ctx->pc = 0x2BD77Cu;
    // 0x2bd77c: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2bd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2bd780: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x2bd780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2bd784: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bd784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bd788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bd788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bd78c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD78Cu;
    {
        const bool branch_taken_0x2bd78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd78c) {
            ctx->pc = 0x2BD790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD78Cu;
            // 0x2bd790: 0x8ca3008c  lw          $v1, 0x8C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7B4u;
            goto label_2bd7b4;
        }
    }
    ctx->pc = 0x2BD794u;
    // 0x2bd794: 0xc4810094  lwc1        $f1, 0x94($a0)
    ctx->pc = 0x2bd794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd798: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x2bd798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd79c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd7a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd7a4: 0x0  nop
    ctx->pc = 0x2bd7a4u;
    // NOP
    // 0x2bd7a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD7A8u;
    {
        const bool branch_taken_0x2bd7a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd7a8) {
            ctx->pc = 0x2BD7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7A8u;
            // 0x2bd7ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7B0u;
            goto label_2bd7b0;
        }
    }
    ctx->pc = 0x2BD7B0u;
label_2bd7b0:
    // 0x2bd7b0: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x2bd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_2bd7b4:
    // 0x2bd7b4: 0x30620707  andi        $v0, $v1, 0x707
    ctx->pc = 0x2bd7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1799);
    // 0x2bd7b8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2BD7B8u;
    {
        const bool branch_taken_0x2bd7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7B8u;
        // 0x2bd7bc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7b8) {
            ctx->pc = 0x2BD8F8u;
            goto label_2bd8f8;
        }
    }
    ctx->pc = 0x2BD7C0u;
    // 0x2bd7c0: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2bd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2bd7c4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2bd7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2bd7c8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD7C8u;
    {
        const bool branch_taken_0x2bd7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd7c8) {
            ctx->pc = 0x2BD7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7C8u;
            // 0x2bd7cc: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD808u;
            goto label_2bd808;
        }
    }
    ctx->pc = 0x2BD7D0u;
    // 0x2bd7d0: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x2bd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x2bd7d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2bd7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bd7d8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2BD7D8u;
    {
        const bool branch_taken_0x2bd7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd7d8) {
            ctx->pc = 0x2BD7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7D8u;
            // 0x2bd7dc: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD808u;
            goto label_2bd808;
        }
    }
    ctx->pc = 0x2BD7E0u;
    // 0x2bd7e0: 0xc4a000ac  lwc1        $f0, 0xAC($a1)
    ctx->pc = 0x2bd7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd7e4: 0xc4a100a8  lwc1        $f1, 0xA8($a1)
    ctx->pc = 0x2bd7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd7e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bd7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd7ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd7ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd7f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd7f4: 0x0  nop
    ctx->pc = 0x2bd7f4u;
    // NOP
    // 0x2bd7f8: 0x4503003e  bc1tl       . + 4 + (0x3E << 2)
    ctx->pc = 0x2BD7F8u;
    {
        const bool branch_taken_0x2bd7f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd7f8) {
            ctx->pc = 0x2BD7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7F8u;
            // 0x2bd7fc: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8F4u;
            goto label_2bd8f4;
        }
    }
    ctx->pc = 0x2BD800u;
    // 0x2bd800: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2BD800u;
    {
        const bool branch_taken_0x2bd800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD800u;
        // 0x2bd804: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd800) {
            ctx->pc = 0x2BD8F8u;
            goto label_2bd8f8;
        }
    }
    ctx->pc = 0x2BD808u;
label_2bd808:
    // 0x2bd808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd80c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2BD80Cu;
    {
        const bool branch_taken_0x2bd80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd80c) {
            ctx->pc = 0x2BD810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD80Cu;
            // 0x2bd810: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD848u;
            goto label_2bd848;
        }
    }
    ctx->pc = 0x2BD814u;
    // 0x2bd814: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2bd814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2bd818: 0x30420101  andi        $v0, $v0, 0x101
    ctx->pc = 0x2bd818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)257);
    // 0x2bd81c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD81Cu;
    {
        const bool branch_taken_0x2bd81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd81c) {
            ctx->pc = 0x2BD820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD81Cu;
            // 0x2bd820: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD848u;
            goto label_2bd848;
        }
    }
    ctx->pc = 0x2BD824u;
    // 0x2bd824: 0xc4a0009c  lwc1        $f0, 0x9C($a1)
    ctx->pc = 0x2bd824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd828: 0xc4a100a0  lwc1        $f1, 0xA0($a1)
    ctx->pc = 0x2bd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd82c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bd82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd834: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd838: 0x0  nop
    ctx->pc = 0x2bd838u;
    // NOP
    // 0x2bd83c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD83Cu;
    {
        const bool branch_taken_0x2bd83c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd83c) {
            ctx->pc = 0x2BD840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD83Cu;
            // 0x2bd840: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD844u;
            goto label_2bd844;
        }
    }
    ctx->pc = 0x2BD844u;
label_2bd844:
    // 0x2bd844: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2bd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2bd848:
    // 0x2bd848: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2bd848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2bd84c: 0x23027  nor         $a2, $zero, $v0
    ctx->pc = 0x2bd84cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2bd850: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2BD850u;
    {
        const bool branch_taken_0x2bd850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD850u;
        // 0x2bd854: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd850) {
            ctx->pc = 0x2BD8F8u;
            goto label_2bd8f8;
        }
    }
    ctx->pc = 0x2BD858u;
    // 0x2bd858: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2bd858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2bd85c: 0x30420606  andi        $v0, $v0, 0x606
    ctx->pc = 0x2bd85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1542);
    // 0x2bd860: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BD860u;
    {
        const bool branch_taken_0x2bd860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD860u;
        // 0x2bd864: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd860) {
            ctx->pc = 0x2BD8F4u;
            goto label_2bd8f4;
        }
    }
    ctx->pc = 0x2BD868u;
    // 0x2bd868: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x2bd868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2bd86c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd870: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd878: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BD878u;
    {
        const bool branch_taken_0x2bd878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD878u;
        // 0x2bd87c: 0x460000c0  add.s       $f3, $f0, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd878) {
            ctx->pc = 0x2BD8B4u;
            goto label_2bd8b4;
        }
    }
    ctx->pc = 0x2BD880u;
    // 0x2bd880: 0xc78081f8  lwc1        $f0, -0x7E08($gp)
    ctx->pc = 0x2bd880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd884: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2bd884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd888: 0x0  nop
    ctx->pc = 0x2bd888u;
    // NOP
    // 0x2bd88c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2BD88Cu;
    {
        const bool branch_taken_0x2bd88c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD88Cu;
        // 0x2bd890: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd88c) {
            ctx->pc = 0x2BD8B8u;
            goto label_2bd8b8;
        }
    }
    ctx->pc = 0x2BD894u;
    // 0x2bd894: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x2bd894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd898: 0xc4a100ac  lwc1        $f1, 0xAC($a1)
    ctx->pc = 0x2bd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd89c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bd89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd8a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd8a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd8a8: 0x0  nop
    ctx->pc = 0x2bd8a8u;
    // NOP
    // 0x2bd8ac: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD8ACu;
    {
        const bool branch_taken_0x2bd8ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd8ac) {
            ctx->pc = 0x2BD8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8ACu;
            // 0x2bd8b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8B8u;
            goto label_2bd8b8;
        }
    }
    ctx->pc = 0x2BD8B4u;
label_2bd8b4:
    // 0x2bd8b4: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x2bd8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_2bd8b8:
    // 0x2bd8b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD8B8u;
    {
        const bool branch_taken_0x2bd8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8B8u;
        // 0x2bd8bc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8b8) {
            ctx->pc = 0x2BD8F8u;
            goto label_2bd8f8;
        }
    }
    ctx->pc = 0x2BD8C0u;
    // 0x2bd8c0: 0xc78081fc  lwc1        $f0, -0x7E04($gp)
    ctx->pc = 0x2bd8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8c4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2bd8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd8c8: 0x0  nop
    ctx->pc = 0x2bd8c8u;
    // NOP
    // 0x2bd8cc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2BD8CCu;
    {
        const bool branch_taken_0x2bd8cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8CCu;
        // 0x2bd8d0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8cc) {
            ctx->pc = 0x2BD8FCu;
            goto label_2bd8fc;
        }
    }
    ctx->pc = 0x2BD8D4u;
    // 0x2bd8d4: 0xc4a000ac  lwc1        $f0, 0xAC($a1)
    ctx->pc = 0x2bd8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8d8: 0xc4a100a8  lwc1        $f1, 0xA8($a1)
    ctx->pc = 0x2bd8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bd8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd8e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd8e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd8e8: 0x0  nop
    ctx->pc = 0x2bd8e8u;
    // NOP
    // 0x2bd8ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD8ECu;
    {
        const bool branch_taken_0x2bd8ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd8ec) {
            ctx->pc = 0x2BD8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8ECu;
            // 0x2bd8f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8F4u;
            goto label_2bd8f4;
        }
    }
    ctx->pc = 0x2BD8F4u;
label_2bd8f4:
    // 0x2bd8f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2bd8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bd8f8:
    // 0x2bd8f8: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x2bd8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2bd8fc:
    // 0x2bd8fc: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x2bd8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bd900: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x2bd900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bd904: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x2bd904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bd908: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2bd908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bd90c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD90Cu;
        // 0x2bd910: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD914u;
    // 0x2bd914: 0x0  nop
    ctx->pc = 0x2bd914u;
    // NOP
    ctx->pc = 0x2bd918u;
}
