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

// Function: sub_001C6688
// Address: 0x1c6688 - 0x1c6840
void sub_001C6688_0x1c6688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6688_0x1c6688");
#endif

    switch (ctx->pc) {
        case 0x1c66d4u: goto label_1c66d4;
        case 0x1c66fcu: goto label_1c66fc;
        case 0x1c6718u: goto label_1c6718;
        case 0x1c6728u: goto label_1c6728;
        case 0x1c6778u: goto label_1c6778;
        case 0x1c6784u: goto label_1c6784;
        case 0x1c67ccu: goto label_1c67cc;
        case 0x1c67d8u: goto label_1c67d8;
        case 0x1c6804u: goto label_1c6804;
        default: break;
    }

    ctx->pc = 0x1c6688u;

    // 0x1c6688: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1c668c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1c668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x1c6690: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x1c6690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x1c6694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6698: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1c6698u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c669c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1c669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x1c66a0: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1c66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x1c66a4: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1c66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x1c66a8: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1c66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x1c66ac: 0x263302a0  addiu       $s3, $s1, 0x2A0
    ctx->pc = 0x1c66acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1c66b0: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1c66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x1c66b4: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1c66b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x1c66b8: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x1c66b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x1c66bc: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x1c66bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x1c66c0: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x1c66c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x1c66c4: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1c66c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1c66c8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1c66c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1c66cc: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1C66CCu;
    SET_GPR_U32(ctx, 31, 0x1C66D4u);
    ctx->pc = 0x1C66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66CCu;
    // 0x1c66d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C66CCu, 0x1C66D4u)) {
        return;
    }
    ctx->pc = 0x1C66D4u;
label_1c66d4:
    // 0x1c66d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c66d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c66d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c66d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c66dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c66dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c66e0: 0xc6e10080  lwc1        $f1, 0x80($s7)
    ctx->pc = 0x1c66e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c66e4: 0x8e24026c  lw          $a0, 0x26C($s1)
    ctx->pc = 0x1c66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x1c66e8: 0x0  nop
    ctx->pc = 0x1c66e8u;
    // NOP
    // 0x1c66ec: 0x0  nop
    ctx->pc = 0x1c66ecu;
    // NOP
    // 0x1c66f0: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1c66f0u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c66f4: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C66F4u;
    SET_GPR_U32(ctx, 31, 0x1C66FCu);
    ctx->pc = 0x1C66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66F4u;
    // 0x1c66f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C66F4u, 0x1C66FCu)) {
        return;
    }
    ctx->pc = 0x1C66FCu;
label_1c66fc:
    // 0x1c66fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c6700: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1c6700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1c6704: 0x2452f1b8  addiu       $s2, $v0, -0xE48
    ctx->pc = 0x1c6704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
    // 0x1c6708: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c6708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c670c: 0x247e0fc8  addiu       $fp, $v1, 0xFC8
    ctx->pc = 0x1c670cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1c6710: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x1c6710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c6714: 0x26550008  addiu       $s5, $s2, 0x8
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1c6718:
    // 0x1c6718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c671c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6720: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C6720u;
    SET_GPR_U32(ctx, 31, 0x1C6728u);
    ctx->pc = 0x1C6724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6720u;
    // 0x1c6724: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6720u, 0x1C6728u)) {
        return;
    }
    ctx->pc = 0x1C6728u;
label_1c6728:
    // 0x1c6728: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c672c: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C672Cu;
    {
        const bool branch_taken_0x1c672c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C672Cu;
        // 0x1c6730: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c672c) {
            ctx->pc = 0x1C678Cu;
            goto label_1c678c;
        }
    }
    ctx->pc = 0x1C6734u;
    // 0x1c6734: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x1c6734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x1c6738: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C6738u;
    {
        const bool branch_taken_0x1c6738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6738u;
        // 0x1c673c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6738) {
            ctx->pc = 0x1C67D8u;
            goto label_1c67d8;
        }
    }
    ctx->pc = 0x1C6740u;
    // 0x1c6740: 0xc62c02f0  lwc1        $f12, 0x2F0($s1)
    ctx->pc = 0x1c6740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6744: 0xc7d00018  lwc1        $f16, 0x18($fp)
    ctx->pc = 0x1c6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c6748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c674c: 0xc64d00a8  lwc1        $f13, 0xA8($s2)
    ctx->pc = 0x1c674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c6750: 0x2445f120  addiu       $a1, $v0, -0xEE0
    ctx->pc = 0x1c6750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
    // 0x1c6754: 0xc64e00ac  lwc1        $f14, 0xAC($s2)
    ctx->pc = 0x1c6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c6758: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c6758u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c675c: 0xc64f00b0  lwc1        $f15, 0xB0($s2)
    ctx->pc = 0x1c675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c6760: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1c6760u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6764: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1c6764u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6768: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1c6768u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c676c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c676cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6770: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C6770u;
    SET_GPR_U32(ctx, 31, 0x1C6778u);
    ctx->pc = 0x1C6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6770u;
    // 0x1c6774: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C6770u, 0x1C6778u)) {
        return;
    }
    ctx->pc = 0x1C6778u;
label_1c6778:
    // 0x1c6778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c677c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C677Cu;
    SET_GPR_U32(ctx, 31, 0x1C6784u);
    ctx->pc = 0x1C6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C677Cu;
    // 0x1c6780: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C677Cu, 0x1C6784u)) {
        return;
    }
    ctx->pc = 0x1C6784u;
label_1c6784:
    // 0x1c6784: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6784u;
        // 0x1c6788: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C67DCu;
            goto label_1c67dc;
        }
    }
    ctx->pc = 0x1C678Cu;
label_1c678c:
    // 0x1c678c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1c678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6790: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c6794: 0xc7d00018  lwc1        $f16, 0x18($fp)
    ctx->pc = 0x1c6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c6798: 0xc44e000c  lwc1        $f14, 0xC($v0)
    ctx->pc = 0x1c6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c679c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c67a4: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x1c67a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c67a8: 0xc6cf0000  lwc1        $f15, 0x0($s6)
    ctx->pc = 0x1c67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c67ac: 0x2445f120  addiu       $a1, $v0, -0xEE0
    ctx->pc = 0x1c67acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
    // 0x1c67b0: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c67b0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c67b4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1c67b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c67b8: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1c67b8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1c67bc: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1c67bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c67c0: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1c67c0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1c67c4: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C67C4u;
    SET_GPR_U32(ctx, 31, 0x1C67CCu);
    ctx->pc = 0x1C67C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67C4u;
    // 0x1c67c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C67C4u, 0x1C67CCu)) {
        return;
    }
    ctx->pc = 0x1C67CCu;
label_1c67cc:
    // 0x1c67cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c67ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67d0: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C67D0u;
    SET_GPR_U32(ctx, 31, 0x1C67D8u);
    ctx->pc = 0x1C67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67D0u;
    // 0x1c67d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C67D0u, 0x1C67D8u)) {
        return;
    }
    ctx->pc = 0x1C67D8u;
label_1c67d8:
    // 0x1c67d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c67d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c67dc:
    // 0x1c67dc: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1c67dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1c67e0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1c67e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1c67e4: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x1c67e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c67e8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C67E8u;
    {
        const bool branch_taken_0x1c67e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67E8u;
        // 0x1c67ec: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67e8) {
            ctx->pc = 0x1C6718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6718;
        }
    }
    ctx->pc = 0x1C67F0u;
    // 0x1c67f0: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c67f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C67F4u;
    {
        const bool branch_taken_0x1c67f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67F4u;
        // 0x1c67f8: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67f4) {
            ctx->pc = 0x1C6808u;
            goto label_1c6808;
        }
    }
    ctx->pc = 0x1C67FCu;
    // 0x1c67fc: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1C67FCu;
    SET_GPR_U32(ctx, 31, 0x1C6804u);
    ctx->pc = 0x1C6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67FCu;
    // 0x1c6800: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1C67FCu, 0x1C6804u)) {
        return;
    }
    ctx->pc = 0x1C6804u;
label_1c6804:
    // 0x1c6804: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1c6804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1c6808:
    // 0x1c6808: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1c6808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c680c: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1c680cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c6810: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1c6810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6814: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1c6814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c6818: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1c6818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1c681c: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1c681cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c6820: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x1c6820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c6824: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x1c6824u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c6828: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1c6828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c682c: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x1c682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c6830: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x1c6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c6834: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1c6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6838: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6838u;
        // 0x1c683c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6840u;
}
