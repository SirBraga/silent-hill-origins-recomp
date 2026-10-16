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

// Function: sub_001C58B8
// Address: 0x1c58b8 - 0x1c5cb8
void sub_001C58B8_0x1c58b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C58B8_0x1c58b8");
#endif

    switch (ctx->pc) {
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c5928u: goto label_1c5928;
        case 0x1c5948u: goto label_1c5948;
        case 0x1c595cu: goto label_1c595c;
        case 0x1c59bcu: goto label_1c59bc;
        case 0x1c5a24u: goto label_1c5a24;
        case 0x1c5a30u: goto label_1c5a30;
        case 0x1c5a68u: goto label_1c5a68;
        case 0x1c5a80u: goto label_1c5a80;
        case 0x1c5ab4u: goto label_1c5ab4;
        case 0x1c5b18u: goto label_1c5b18;
        case 0x1c5b24u: goto label_1c5b24;
        case 0x1c5b38u: goto label_1c5b38;
        case 0x1c5b4cu: goto label_1c5b4c;
        case 0x1c5b94u: goto label_1c5b94;
        case 0x1c5ba0u: goto label_1c5ba0;
        case 0x1c5bacu: goto label_1c5bac;
        case 0x1c5bc4u: goto label_1c5bc4;
        case 0x1c5c18u: goto label_1c5c18;
        case 0x1c5c60u: goto label_1c5c60;
        case 0x1c5c84u: goto label_1c5c84;
        default: break;
    }

    ctx->pc = 0x1c58b8u;

    // 0x1c58b8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1c58b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1c58bc: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x1c58bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x1c58c0: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x1c58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x1c58c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c58c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58c8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c58c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58cc: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1c58ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x1c58d0: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x1c58d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x1c58d4: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1c58d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x1c58d8: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1c58d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1c58dc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1c58dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c58e0: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1c58e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1c58e4: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1c58e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1c58e8: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1c58e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x1c58ec: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1c58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x1c58f0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1c58f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1c58f4: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1C58F4u;
    SET_GPR_U32(ctx, 31, 0x1C58FCu);
    ctx->pc = 0x1C58F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58F4u;
    // 0x1c58f8: 0x3c14006a  lui         $s4, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C58F4u, 0x1C58FCu)) {
        return;
    }
    ctx->pc = 0x1C58FCu;
label_1c58fc:
    // 0x1c58fc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c58fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c5900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5908: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1c5908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1c590c: 0xc6c10080  lwc1        $f1, 0x80($s6)
    ctx->pc = 0x1c590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5910: 0x24550fc8  addiu       $s5, $v0, 0xFC8
    ctx->pc = 0x1c5910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1c5914: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c5914u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c5918: 0x0  nop
    ctx->pc = 0x1c5918u;
    // NOP
    // 0x1c591c: 0x0  nop
    ctx->pc = 0x1c591cu;
    // NOP
    // 0x1c5920: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1c5920u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c5924: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1c5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1c5928:
    // 0x1c5928: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x1c5928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1c592c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1c592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c5930: 0x8c620290  lw          $v0, 0x290($v1)
    ctx->pc = 0x1c5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1c5934: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C5934u;
    {
        const bool branch_taken_0x1c5934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5934) {
            ctx->pc = 0x1C5938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5934u;
            // 0x1c5938: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A34u;
            goto label_1c5a34;
        }
    }
    ctx->pc = 0x1C593Cu;
    // 0x1c593c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c593cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5940: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C5940u;
    SET_GPR_U32(ctx, 31, 0x1C5948u);
    ctx->pc = 0x1C5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5940u;
    // 0x1c5944: 0x8c440288  lw          $a0, 0x288($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C5940u, 0x1C5948u)) {
        return;
    }
    ctx->pc = 0x1C5948u;
label_1c5948:
    // 0x1c5948: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1c5948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c594c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c594cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5954: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C5954u;
    SET_GPR_U32(ctx, 31, 0x1C595Cu);
    ctx->pc = 0x1C5958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5954u;
    // 0x1c5958: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5954u, 0x1C595Cu)) {
        return;
    }
    ctx->pc = 0x1C595Cu;
label_1c595c:
    // 0x1c595c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1c595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c5960: 0x8c62028c  lw          $v0, 0x28C($v1)
    ctx->pc = 0x1c5960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
    // 0x1c5964: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C5964u;
    {
        const bool branch_taken_0x1c5964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5964u;
        // 0x1c5968: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5964) {
            ctx->pc = 0x1C59C4u;
            goto label_1c59c4;
        }
    }
    ctx->pc = 0x1C596Cu;
    // 0x1c596c: 0xc6b00018  lwc1        $f16, 0x18($s5)
    ctx->pc = 0x1c596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c5970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c5970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5974: 0xc44c0274  lwc1        $f12, 0x274($v0)
    ctx->pc = 0x1c5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5978: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c5978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c597c: 0xc4ae027c  lwc1        $f14, 0x27C($a1)
    ctx->pc = 0x1c597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c5980: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1c5980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1c5984: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c5984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5988: 0xc46d0278  lwc1        $f13, 0x278($v1)
    ctx->pc = 0x1c5988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c598c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1c598cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1c5990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5994: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c5998: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c5998u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c599c: 0x2685ed78  addiu       $a1, $s4, -0x1288
    ctx->pc = 0x1c599cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962552));
    // 0x1c59a0: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1c59a0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1c59a4: 0xc4cf0280  lwc1        $f15, 0x280($a2)
    ctx->pc = 0x1c59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c59a8: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1c59a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1c59ac: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1c59acu;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1c59b0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1c59b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c59b4: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C59B4u;
    SET_GPR_U32(ctx, 31, 0x1C59BCu);
    ctx->pc = 0x1C59B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59B4u;
    // 0x1c59b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C59B4u, 0x1C59BCu)) {
        return;
    }
    ctx->pc = 0x1C59BCu;
label_1c59bc:
    // 0x1c59bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C59BCu;
    {
        const bool branch_taken_0x1c59bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59BCu;
        // 0x1c59c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59bc) {
            ctx->pc = 0x1C5A28u;
            goto label_1c5a28;
        }
    }
    ctx->pc = 0x1C59C4u;
label_1c59c4:
    // 0x1c59c4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1c59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c59c8: 0x8c430298  lw          $v1, 0x298($v0)
    ctx->pc = 0x1c59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
    // 0x1c59cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C59CCu;
    {
        const bool branch_taken_0x1c59cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59CCu;
        // 0x1c59d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59cc) {
            ctx->pc = 0x1C5A24u;
            goto label_1c5a24;
        }
    }
    ctx->pc = 0x1C59D4u;
    // 0x1c59d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c59d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59d8: 0xc4ae026c  lwc1        $f14, 0x26C($a1)
    ctx->pc = 0x1c59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c59dc: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1c59dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1c59e0: 0xc6b00018  lwc1        $f16, 0x18($s5)
    ctx->pc = 0x1c59e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c59e4: 0xc44c0264  lwc1        $f12, 0x264($v0)
    ctx->pc = 0x1c59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c59e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c59e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c59ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c59ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59f0: 0xc46d0268  lwc1        $f13, 0x268($v1)
    ctx->pc = 0x1c59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c59f4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1c59f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1c59f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c59f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c59fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c5a00: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c5a00u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c5a04: 0x2685ed78  addiu       $a1, $s4, -0x1288
    ctx->pc = 0x1c5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962552));
    // 0x1c5a08: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1c5a08u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1c5a0c: 0xc4cf0270  lwc1        $f15, 0x270($a2)
    ctx->pc = 0x1c5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c5a10: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1c5a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1c5a14: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1c5a14u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1c5a18: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1c5a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c5a1c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A24u);
    ctx->pc = 0x1C5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A1Cu;
    // 0x1c5a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C5A1Cu, 0x1C5A24u)) {
        return;
    }
    ctx->pc = 0x1C5A24u;
label_1c5a24:
    // 0x1c5a24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c5a28:
    // 0x1c5a28: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C5A28u;
    SET_GPR_U32(ctx, 31, 0x1C5A30u);
    ctx->pc = 0x1C5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A28u;
    // 0x1c5a2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C5A28u, 0x1C5A30u)) {
        return;
    }
    ctx->pc = 0x1C5A30u;
label_1c5a30:
    // 0x1c5a30: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c5a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1c5a34:
    // 0x1c5a34: 0x641ffbc  bgez        $s2, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1C5A34u;
    {
        const bool branch_taken_0x1c5a34 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1C5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A34u;
        // 0x1c5a38: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a34) {
            ctx->pc = 0x1C5928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5928;
        }
    }
    ctx->pc = 0x1C5A3Cu;
    // 0x1c5a3c: 0x8e6203bc  lw          $v0, 0x3BC($s3)
    ctx->pc = 0x1c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 956)));
    // 0x1c5a40: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C5A40u;
    {
        const bool branch_taken_0x1c5a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a40) {
            ctx->pc = 0x1C5A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5A40u;
            // 0x1c5a44: 0x8e6203c0  lw          $v0, 0x3C0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5B28u;
            goto label_1c5b28;
        }
    }
    ctx->pc = 0x1C5A48u;
    // 0x1c5a48: 0x8e6303b8  lw          $v1, 0x3B8($s3)
    ctx->pc = 0x1c5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 952)));
    // 0x1c5a4c: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x1c5a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x1c5a50: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C5A50u;
    {
        const bool branch_taken_0x1c5a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A50u;
        // 0x1c5a54: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a50) {
            ctx->pc = 0x1C5B24u;
            goto label_1c5b24;
        }
    }
    ctx->pc = 0x1C5A58u;
    // 0x1c5a58: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x1c5a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c5a5c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1c5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1c5a60: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C5A60u;
    SET_GPR_U32(ctx, 31, 0x1C5A68u);
    ctx->pc = 0x1C5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A60u;
    // 0x1c5a64: 0x8c440288  lw          $a0, 0x288($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C5A60u, 0x1C5A68u)) {
        return;
    }
    ctx->pc = 0x1C5A68u;
label_1c5a68:
    // 0x1c5a68: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c5a6c: 0x8e7203b4  lw          $s2, 0x3B4($s3)
    ctx->pc = 0x1c5a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 948)));
    // 0x1c5a70: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a78: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C5A78u;
    SET_GPR_U32(ctx, 31, 0x1C5A80u);
    ctx->pc = 0x1C5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A78u;
    // 0x1c5a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5A78u, 0x1C5A80u)) {
        return;
    }
    ctx->pc = 0x1C5A80u;
label_1c5a80:
    // 0x1c5a80: 0x8e6303b8  lw          $v1, 0x3B8($s3)
    ctx->pc = 0x1c5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 952)));
    // 0x1c5a84: 0x27a50114  addiu       $a1, $sp, 0x114
    ctx->pc = 0x1c5a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1c5a88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c5a8c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x1c5a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c5a90: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x1c5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1c5a94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c5a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a98: 0xc4410280  lwc1        $f1, 0x280($v0)
    ctx->pc = 0x1c5a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5aa0: 0xc460027c  lwc1        $f0, 0x27C($v1)
    ctx->pc = 0x1c5aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5aa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5aa8: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x1c5aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1c5aac: 0xc06cdd2  jal         func_1B3748
    ctx->pc = 0x1C5AACu;
    SET_GPR_U32(ctx, 31, 0x1C5AB4u);
    ctx->pc = 0x1C5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5AACu;
    // 0x1c5ab0: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3748u, 0x1C5AACu, 0x1C5AB4u)) {
        return;
    }
    ctx->pc = 0x1C5AB4u;
label_1c5ab4:
    // 0x1c5ab4: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x1c5ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5ab8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1c5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1c5abc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c5abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ac4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c5ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c5ac8: 0xc7af0114  lwc1        $f15, 0x114($sp)
    ctx->pc = 0x1c5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c5acc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5accu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5ad0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1c5ad0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1c5ad4: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1c5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5ad8: 0x46007b42  mul.s       $f13, $f15, $f0
    ctx->pc = 0x1c5ad8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1c5adc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1c5adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5ae4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ae8: 0x24a5ed78  addiu       $a1, $a1, -0x1288
    ctx->pc = 0x1c5ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962552));
    // 0x1c5aec: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1c5aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1c5af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5af4: 0x460d1b41  sub.s       $f13, $f3, $f13
    ctx->pc = 0x1c5af4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x1c5af8: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1c5af8u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c5afc: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x1c5afcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1c5b00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c5b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c5b04: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c5b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c5b08: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c5b08u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c5b0c: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1c5b0cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1c5b10: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C5B10u;
    SET_GPR_U32(ctx, 31, 0x1C5B18u);
    ctx->pc = 0x1C5B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B10u;
    // 0x1c5b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C5B10u, 0x1C5B18u)) {
        return;
    }
    ctx->pc = 0x1C5B18u;
label_1c5b18:
    // 0x1c5b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b1c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B24u);
    ctx->pc = 0x1C5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B1Cu;
    // 0x1c5b20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C5B1Cu, 0x1C5B24u)) {
        return;
    }
    ctx->pc = 0x1C5B24u;
label_1c5b24:
    // 0x1c5b24: 0x8e6203c0  lw          $v0, 0x3C0($s3)
    ctx->pc = 0x1c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 960)));
label_1c5b28:
    // 0x1c5b28: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C5B28u;
    {
        const bool branch_taken_0x1c5b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b28) {
            ctx->pc = 0x1C5B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5B28u;
            // 0x1c5b2c: 0x8e6403b4  lw          $a0, 0x3B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5BA4u;
            goto label_1c5ba4;
        }
    }
    ctx->pc = 0x1C5B30u;
    // 0x1c5b30: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C5B30u;
    SET_GPR_U32(ctx, 31, 0x1C5B38u);
    ctx->pc = 0x1C5B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B30u;
    // 0x1c5b34: 0x8e6403d0  lw          $a0, 0x3D0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C5B30u, 0x1C5B38u)) {
        return;
    }
    ctx->pc = 0x1C5B38u;
label_1c5b38:
    // 0x1c5b38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c5b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c5b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b44: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C5B44u;
    SET_GPR_U32(ctx, 31, 0x1C5B4Cu);
    ctx->pc = 0x1C5B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B44u;
    // 0x1c5b48: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5B44u, 0x1C5B4Cu)) {
        return;
    }
    ctx->pc = 0x1C5B4Cu;
label_1c5b4c:
    // 0x1c5b4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5b54: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1c5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1c5b58: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1c5b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1c5b5c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c5b60: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1c5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5b64: 0x24a5ed78  addiu       $a1, $a1, -0x1288
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962552));
    // 0x1c5b68: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1c5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b70: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x1c5b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c5b74: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c5b74u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c5b78: 0xc66f000c  lwc1        $f15, 0xC($s3)
    ctx->pc = 0x1c5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c5b7c: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1c5b7cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1c5b80: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1c5b80u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c5b84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c5b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c5b8c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C5B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B94u);
    ctx->pc = 0x1C5B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B8Cu;
    // 0x1c5b90: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C5B8Cu, 0x1C5B94u)) {
        return;
    }
    ctx->pc = 0x1C5B94u;
label_1c5b94:
    // 0x1c5b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b98: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C5B98u;
    SET_GPR_U32(ctx, 31, 0x1C5BA0u);
    ctx->pc = 0x1C5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B98u;
    // 0x1c5b9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C5B98u, 0x1C5BA0u)) {
        return;
    }
    ctx->pc = 0x1C5BA0u;
label_1c5ba0:
    // 0x1c5ba0: 0x8e6403b4  lw          $a0, 0x3B4($s3)
    ctx->pc = 0x1c5ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 948)));
label_1c5ba4:
    // 0x1c5ba4: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1C5BA4u;
    SET_GPR_U32(ctx, 31, 0x1C5BACu);
    ctx->pc = 0x1C5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BA4u;
    // 0x1c5ba8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1C5BA4u, 0x1C5BACu)) {
        return;
    }
    ctx->pc = 0x1C5BACu;
label_1c5bac:
    // 0x1c5bac: 0x8e6203c8  lw          $v0, 0x3C8($s3)
    ctx->pc = 0x1c5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 968)));
    // 0x1c5bb0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C5BB0u;
    {
        const bool branch_taken_0x1c5bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BB0u;
        // 0x1c5bb4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bb0) {
            ctx->pc = 0x1C5C84u;
            goto label_1c5c84;
        }
    }
    ctx->pc = 0x1C5BB8u;
    // 0x1c5bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bbc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C5BBCu;
    SET_GPR_U32(ctx, 31, 0x1C5BC4u);
    ctx->pc = 0x1C5BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BBCu;
    // 0x1c5bc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5BBCu, 0x1C5BC4u)) {
        return;
    }
    ctx->pc = 0x1C5BC4u;
label_1c5bc4:
    // 0x1c5bc4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c5bc8: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c5bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1c5bcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5bd0: 0xc44098d4  lwc1        $f0, -0x672C($v0)
    ctx->pc = 0x1c5bd0u;
    { uint32_t bits = FAST_READ32(0x3398D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5bd4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c5bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c5bd8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c5bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c5bdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c5bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5be0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c5be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c5be4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c5be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c5be8: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c5be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c5bec: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1c5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c5bf0: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x1c5bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c5bf4: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x1c5bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c5bf8: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x1c5bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c5bfc: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x1c5bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c5c00: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1c5c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5c04: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1c5c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5c08: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x1c5c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5c0c: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x1c5c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5c10: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1C5C10u;
    SET_GPR_U32(ctx, 31, 0x1C5C18u);
    ctx->pc = 0x1C5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C10u;
    // 0x1c5c14: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1C5C10u, 0x1C5C18u)) {
        return;
    }
    ctx->pc = 0x1C5C18u;
label_1c5c18:
    // 0x1c5c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c1c: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C5C1Cu;
    {
        const bool branch_taken_0x1c5c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c1c) {
            ctx->pc = 0x1C5C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C1Cu;
            // 0x1c5c20: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C88u;
            goto label_1c5c88;
        }
    }
    ctx->pc = 0x1C5C24u;
    // 0x1c5c24: 0x8e6303e4  lw          $v1, 0x3E4($s3)
    ctx->pc = 0x1c5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 996)));
    // 0x1c5c28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5C28u;
    {
        const bool branch_taken_0x1c5c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C28u;
        // 0x1c5c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c28) {
            ctx->pc = 0x1C5C40u;
            goto label_1c5c40;
        }
    }
    ctx->pc = 0x1C5C30u;
    // 0x1c5c30: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5C30u;
    {
        const bool branch_taken_0x1c5c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C30u;
        // 0x1c5c34: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c30) {
            ctx->pc = 0x1C5C68u;
            goto label_1c5c68;
        }
    }
    ctx->pc = 0x1C5C38u;
    // 0x1c5c38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5C38u;
    {
        const bool branch_taken_0x1c5c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C38u;
        // 0x1c5c3c: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c38) {
            ctx->pc = 0x1C5C88u;
            goto label_1c5c88;
        }
    }
    ctx->pc = 0x1C5C40u;
label_1c5c40:
    // 0x1c5c40: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c5c44: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1c5c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1c5c48: 0x8e6503dc  lw          $a1, 0x3DC($s3)
    ctx->pc = 0x1c5c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 988)));
    // 0x1c5c4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c5c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c50: 0xc44c98d8  lwc1        $f12, -0x6728($v0)
    ctx->pc = 0x1c5c50u;
    { uint32_t bits = FAST_READ32(0x3398D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5c54: 0x24e7ed80  addiu       $a3, $a3, -0x1280
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962560));
    // 0x1c5c58: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1C5C58u;
    SET_GPR_U32(ctx, 31, 0x1C5C60u);
    ctx->pc = 0x1C5C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C58u;
    // 0x1c5c5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C5C58u, 0x1C5C60u)) {
        return;
    }
    ctx->pc = 0x1C5C60u;
label_1c5c60:
    // 0x1c5c60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5C60u;
    {
        const bool branch_taken_0x1c5c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C60u;
        // 0x1c5c64: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c60) {
            ctx->pc = 0x1C5C88u;
            goto label_1c5c88;
        }
    }
    ctx->pc = 0x1C5C68u;
label_1c5c68:
    // 0x1c5c68: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1c5c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1c5c6c: 0x8e6503e0  lw          $a1, 0x3E0($s3)
    ctx->pc = 0x1c5c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 992)));
    // 0x1c5c70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c5c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c74: 0xc44c98d8  lwc1        $f12, -0x6728($v0)
    ctx->pc = 0x1c5c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5c78: 0x24e7ed80  addiu       $a3, $a3, -0x1280
    ctx->pc = 0x1c5c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962560));
    // 0x1c5c7c: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1C5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C84u);
    ctx->pc = 0x1C5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C7Cu;
    // 0x1c5c80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C5C7Cu, 0x1C5C84u)) {
        return;
    }
    ctx->pc = 0x1C5C84u;
label_1c5c84:
    // 0x1c5c84: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1c5c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1c5c88:
    // 0x1c5c88: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1c5c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c5c8c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1c5c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c90: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x1c5c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c5c94: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x1c5c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1c5c98: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x1c5c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c5c9c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x1c5c9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c5ca0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1c5ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c5ca4: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1c5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c5ca8: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1c5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c5cac: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1c5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CB0u;
        // 0x1c5cb4: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CB8u;
}
