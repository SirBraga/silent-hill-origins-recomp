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

// Function: sub_001E6330
// Address: 0x1e6330 - 0x1e6450
void sub_001E6330_0x1e6330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6330_0x1e6330");
#endif

    switch (ctx->pc) {
        case 0x1e6350u: goto label_1e6350;
        case 0x1e635cu: goto label_1e635c;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6438u: goto label_1e6438;
        default: break;
    }

    ctx->pc = 0x1e6330u;

    // 0x1e6330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e6330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e6334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6338: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1e6338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e633c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e633cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6340: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e6340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e6344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6348: 0xc08eab4  jal         func_23AAD0
    ctx->pc = 0x1E6348u;
    SET_GPR_U32(ctx, 31, 0x1E6350u);
    ctx->pc = 0x1E634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6348u;
    // 0x1e634c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23AAD0u, 0x1E6348u, 0x1E6350u)) {
        return;
    }
    ctx->pc = 0x1E6350u;
label_1e6350:
    // 0x1e6350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e6350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6354: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1E6354u;
    SET_GPR_U32(ctx, 31, 0x1E635Cu);
    ctx->pc = 0x1E6358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6354u;
    // 0x1e6358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1E6354u, 0x1E635Cu)) {
        return;
    }
    ctx->pc = 0x1E635Cu;
label_1e635c:
    // 0x1e635c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e635cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6360: 0x0  nop
    ctx->pc = 0x1e6360u;
    // NOP
    // 0x1e6364: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1e6364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6368: 0x0  nop
    ctx->pc = 0x1e6368u;
    // NOP
    // 0x1e636c: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x1E636Cu;
    {
        const bool branch_taken_0x1e636c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E636Cu;
        // 0x1e6370: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e636c) {
            ctx->pc = 0x1E643Cu;
            goto label_1e643c;
        }
    }
    ctx->pc = 0x1E6374u;
    // 0x1e6374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e6374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e6378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e637c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1e637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1e6380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e6380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6384: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1e6384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e6388: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6388u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1e638c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e638cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6390: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e6390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e6394: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1e6394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1e6398: 0x1a000027  blez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E6398u;
    {
        const bool branch_taken_0x1e6398 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1E639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6398u;
        // 0x1e639c: 0x2a03007e  slti        $v1, $s0, 0x7E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)126) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6398) {
            ctx->pc = 0x1E6438u;
            goto label_1e6438;
        }
    }
    ctx->pc = 0x1E63A0u;
    // 0x1e63a0: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x1e63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x1e63a4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1e63a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x1e63a8: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E63A8u;
    SET_GPR_U32(ctx, 31, 0x1E63B0u);
    ctx->pc = 0x1E63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63A8u;
    // 0x1e63ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E63A8u, 0x1E63B0u)) {
        return;
    }
    ctx->pc = 0x1E63B0u;
label_1e63b0:
    // 0x1e63b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e63b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63b4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E63B4u;
    SET_GPR_U32(ctx, 31, 0x1E63BCu);
    ctx->pc = 0x1E63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63B4u;
    // 0x1e63b8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E63B4u, 0x1E63BCu)) {
        return;
    }
    ctx->pc = 0x1E63BCu;
label_1e63bc:
    // 0x1e63bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e63c0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e63c4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e63c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e63c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e63cc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e63ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e63d0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E63D0u;
    SET_GPR_U32(ctx, 31, 0x1E63D8u);
    ctx->pc = 0x1E63D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63D0u;
    // 0x1e63d4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E63D0u, 0x1E63D8u)) {
        return;
    }
    ctx->pc = 0x1E63D8u;
label_1e63d8:
    // 0x1e63d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e63dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e63dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e63e0: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x1e63e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x1e63e4: 0xdc4534c0  ld          $a1, 0x34C0($v0)
    ctx->pc = 0x1e63e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13504)));
    // 0x1e63e8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e63ec: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E63ECu;
    SET_GPR_U32(ctx, 31, 0x1E63F4u);
    ctx->pc = 0x1E63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63ECu;
    // 0x1e63f0: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E63ECu, 0x1E63F4u)) {
        return;
    }
    ctx->pc = 0x1E63F4u;
label_1e63f4:
    // 0x1e63f4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1e63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e63f8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e63fc: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1e63fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e6400: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6400u;
    SET_GPR_U32(ctx, 31, 0x1E6408u);
    ctx->pc = 0x1E6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6400u;
    // 0x1e6404: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6400u, 0x1E6408u)) {
        return;
    }
    ctx->pc = 0x1E6408u;
label_1e6408:
    // 0x1e6408: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e640c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e640cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6410: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6410u;
    SET_GPR_U32(ctx, 31, 0x1E6418u);
    ctx->pc = 0x1E6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6410u;
    // 0x1e6414: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6410u, 0x1E6418u)) {
        return;
    }
    ctx->pc = 0x1E6418u;
label_1e6418:
    // 0x1e6418: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x1e641c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E641Cu;
    SET_GPR_U32(ctx, 31, 0x1E6424u);
    ctx->pc = 0x1E6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E641Cu;
    // 0x1e6420: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E641Cu, 0x1E6424u)) {
        return;
    }
    ctx->pc = 0x1E6424u;
label_1e6424:
    // 0x1e6424: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E6424u;
    SET_GPR_U32(ctx, 31, 0x1E642Cu);
    ctx->pc = 0x1E6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6424u;
    // 0x1e6428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E6424u, 0x1E642Cu)) {
        return;
    }
    ctx->pc = 0x1E642Cu;
label_1e642c:
    // 0x1e642c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1e642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e6430: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x1E6430u;
    SET_GPR_U32(ctx, 31, 0x1E6438u);
    ctx->pc = 0x1E6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6430u;
    // 0x1e6434: 0x24050101  addiu       $a1, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x1E6430u, 0x1E6438u)) {
        return;
    }
    ctx->pc = 0x1E6438u;
label_1e6438:
    // 0x1e6438: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e643c:
    // 0x1e643c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e643cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6444: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1e6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6448: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6448u;
        // 0x1e644c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6450u;
}
