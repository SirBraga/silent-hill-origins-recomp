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

// Function: sub_001C07C0
// Address: 0x1c07c0 - 0x1c09b8
void sub_001C07C0_0x1c07c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C07C0_0x1c07c0");
#endif

    switch (ctx->pc) {
        case 0x1c0808u: goto label_1c0808;
        case 0x1c0834u: goto label_1c0834;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c08a0u: goto label_1c08a0;
        case 0x1c0978u: goto label_1c0978;
        case 0x1c0988u: goto label_1c0988;
        case 0x1c0994u: goto label_1c0994;
        default: break;
    }

    ctx->pc = 0x1c07c0u;

    // 0x1c07c0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1c07c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1c07c4: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1c07c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1c07c8: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1c07c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1c07cc: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1c07ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1c07d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c07d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07d4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1c07d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1c07d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c07d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07dc: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1c07dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1c07e0: 0x263003bc  addiu       $s0, $s1, 0x3BC
    ctx->pc = 0x1c07e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 956));
    // 0x1c07e4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1c07e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x1c07e8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1c07e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1c07ec: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1c07ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1c07f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c07f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07f4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x1c07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c07f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c07fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c0800: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C0800u;
    SET_GPR_U32(ctx, 31, 0x1C0808u);
    ctx->pc = 0x1C0804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0800u;
    // 0x1c0804: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C0800u, 0x1C0808u)) {
        return;
    }
    ctx->pc = 0x1C0808u;
label_1c0808:
    // 0x1c0808: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c080c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c080cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c0810: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c0814: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c0814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0818: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0818u;
    {
        const bool branch_taken_0x1c0818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0818u;
        // 0x1c081c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0818) {
            ctx->pc = 0x1C0828u;
            goto label_1c0828;
        }
    }
    ctx->pc = 0x1C0820u;
    // 0x1c0820: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c0820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c0824: 0x2453dd38  addiu       $s3, $v0, -0x22C8
    ctx->pc = 0x1c0824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958392));
label_1c0828:
    // 0x1c0828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c082c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C082Cu;
    SET_GPR_U32(ctx, 31, 0x1C0834u);
    ctx->pc = 0x1C0830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C082Cu;
    // 0x1c0830: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C082Cu, 0x1C0834u)) {
        return;
    }
    ctx->pc = 0x1C0834u;
label_1c0834:
    // 0x1c0834: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c0834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c0838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c083c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C083Cu;
    SET_GPR_U32(ctx, 31, 0x1C0844u);
    ctx->pc = 0x1C0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C083Cu;
    // 0x1c0840: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C083Cu, 0x1C0844u)) {
        return;
    }
    ctx->pc = 0x1C0844u;
label_1c0844:
    // 0x1c0844: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1c0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0848: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c0848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c084c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1c084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0850: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c0854: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1c0854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1c0858: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1c085c: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x1c085cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1c0860: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c0864: 0x8c4d830c  lw          $t5, -0x7CF4($v0)
    ctx->pc = 0x1c0864u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1c0868: 0x27a80118  addiu       $t0, $sp, 0x118
    ctx->pc = 0x1c0868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1c086c: 0x6ba20137  ldl         $v0, 0x137($sp)
    ctx->pc = 0x1c086cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c0870: 0x6fa20130  ldr         $v0, 0x130($sp)
    ctx->pc = 0x1c0870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c0874: 0xb3a20127  sdl         $v0, 0x127($sp)
    ctx->pc = 0x1c0874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0878: 0xb7a20120  sdr         $v0, 0x120($sp)
    ctx->pc = 0x1c0878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c087c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1c087cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0884: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c0884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c0888: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x1c0888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1c088c: 0x2649000c  addiu       $t1, $s2, 0xC
    ctx->pc = 0x1c088cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1c0890: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1c0890u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0894: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x1c0894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1c0898: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c089c: 0x0  nop
    ctx->pc = 0x1c089cu;
    // NOP
label_1c08a0:
    // 0x1c08a0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c08a4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1c08a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c08a8: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1c08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c08ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c08acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c08b0: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x1c08b4: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1c08b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1c08b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c08b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c08bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c08bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c08c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c08c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c08c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c08c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c08c8: 0x0  nop
    ctx->pc = 0x1c08c8u;
    // NOP
    // 0x1c08cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c08ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c08d0: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x1c08d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1c08d4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1c08d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c08d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c08d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c08dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c08dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c08e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c08e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c08e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c08e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c08e8: 0x0  nop
    ctx->pc = 0x1c08e8u;
    // NOP
    // 0x1c08ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c08ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c08f0: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x1c08f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1c08f4: 0x8da20198  lw          $v0, 0x198($t5)
    ctx->pc = 0x1c08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 408)));
    // 0x1c08f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C08F8u;
    {
        const bool branch_taken_0x1c08f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c08f8) {
            ctx->pc = 0x1C090Cu;
            goto label_1c090c;
        }
    }
    ctx->pc = 0x1C0900u;
    // 0x1c0900: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1c0900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1c0904: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1c0904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x1c0908: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c0908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c090c:
    // 0x1c090c: 0x0  nop
    ctx->pc = 0x1c090cu;
    // NOP
    // 0x1c0910: 0x0  nop
    ctx->pc = 0x1c0910u;
    // NOP
    // 0x1c0914: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x1c0914u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x1c0918: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c091c: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1c091cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1c0920: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1c0920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1c0924: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x1c0924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x1c0928: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1c0928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c092c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1c092cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1c0930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c0930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c0934: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c0934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c0938: 0x561ffd9  bgez        $t3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C0938u;
    {
        const bool branch_taken_0x1c0938 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x1C093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0938u;
        // 0x1c093c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0938) {
            ctx->pc = 0x1C08A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c08a0;
        }
    }
    ctx->pc = 0x1C0940u;
    // 0x1c0940: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1c0940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1c0944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0948: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c094c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x1c094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1c0950: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1c0950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c0954: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x1c0954u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0958: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1c0958u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c095c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c0960: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1c0960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1c0964: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1c0964u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1c0968: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c0968u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c096c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0970: 0xc06cee0  jal         func_1B3B80
    ctx->pc = 0x1C0970u;
    SET_GPR_U32(ctx, 31, 0x1C0978u);
    ctx->pc = 0x1C0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0970u;
    // 0x1c0974: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3B80u, 0x1C0970u, 0x1C0978u)) {
        return;
    }
    ctx->pc = 0x1C0978u;
label_1c0978:
    // 0x1c0978: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x1c0978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c097c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c097cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c0980: 0xc06cf5a  jal         func_1B3D68
    ctx->pc = 0x1C0980u;
    SET_GPR_U32(ctx, 31, 0x1C0988u);
    ctx->pc = 0x1C0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0980u;
    // 0x1c0984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3D68u, 0x1C0980u, 0x1C0988u)) {
        return;
    }
    ctx->pc = 0x1C0988u;
label_1c0988:
    // 0x1c0988: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c098c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C098Cu;
    SET_GPR_U32(ctx, 31, 0x1C0994u);
    ctx->pc = 0x1C0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C098Cu;
    // 0x1c0990: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C098Cu, 0x1C0994u)) {
        return;
    }
    ctx->pc = 0x1C0994u;
label_1c0994:
    // 0x1c0994: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1c0994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c0998: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1c0998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c099c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1c099cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c09a0: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1c09a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1c09a4: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1c09a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c09a8: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1c09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c09ac: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1c09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c09b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C09B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09B0u;
        // 0x1c09b4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C09B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C09B8u;
}
