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

// Function: sub_002BE8C8
// Address: 0x2be8c8 - 0x2bec98
void sub_002BE8C8_0x2be8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE8C8_0x2be8c8");
#endif

    switch (ctx->pc) {
        case 0x2be960u: goto label_2be960;
        case 0x2be9e4u: goto label_2be9e4;
        case 0x2bea40u: goto label_2bea40;
        case 0x2bec38u: goto label_2bec38;
        default: break;
    }

    ctx->pc = 0x2be8c8u;

    // 0x2be8c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2be8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2be8cc: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2be8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2be8d0: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2be8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2be8d4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2be8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2be8d8: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2be8d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2be8dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2be8dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8e0: 0xffa70030  sd          $a3, 0x30($sp)
    ctx->pc = 0x2be8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 7));
    // 0x2be8e4: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2be8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2be8e8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2be8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2be8ec: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2be8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2be8f0: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2be8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2be8f4: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2be8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2be8f8: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2be8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2be8fc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2be8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2be900: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x2be900u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2be904: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2be904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2be908: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2be908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2be90c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2be90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2be910: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x2be910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x2be914: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x2be914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x2be918: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2be918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2be91c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2be91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2be920: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2be920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2be924: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2be924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be928: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2be928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be92c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2be92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2be930: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2be930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2be934: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2be934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2be938: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2BE938u;
    {
        const bool branch_taken_0x2be938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE938u;
        // 0x2be93c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be938) {
            ctx->pc = 0x2BEC58u;
            goto label_2bec58;
        }
    }
    ctx->pc = 0x2BE940u;
    // 0x2be940: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be944: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2be944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2be948: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2be948u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be94c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be950: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2be950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2be954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2be954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be958: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2be958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be95c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2be95cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be960:
    // 0x2be960: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2be960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2be964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2be964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be968: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2be968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2be96c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2be96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be970: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2be970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be974: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2be974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2be978: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2be978u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be97c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2be97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2be980: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2be980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2be984: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x2be984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be988: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2be988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2be98c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2be98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be990: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2be990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2be994: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be998: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x2be998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be99c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2BE99Cu;
    {
        const bool branch_taken_0x2be99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE99Cu;
        // 0x2be9a0: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be99c) {
            ctx->pc = 0x2BEA28u;
            goto label_2bea28;
        }
    }
    ctx->pc = 0x2BE9A4u;
    // 0x2be9a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be9a8: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2be9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2be9ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2be9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be9b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2be9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be9b4: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2be9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be9b8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2be9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2be9bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2be9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be9c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9c4: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x2be9c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be9c8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2be9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2be9cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2be9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2be9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2be9d4: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2be9d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2be9d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2be9d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2be9dc: 0xc0af7de  jal         func_2BDF78
    ctx->pc = 0x2BE9DCu;
    SET_GPR_U32(ctx, 31, 0x2BE9E4u);
    ctx->pc = 0x2BE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9DCu;
    // 0x2be9e0: 0x4615a302  mul.s       $f12, $f20, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDF78u, 0x2BE9DCu, 0x2BE9E4u)) {
        return;
    }
    ctx->pc = 0x2BE9E4u;
label_2be9e4:
    // 0x2be9e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be9e8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2be9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be9ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2be9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be9f0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2be9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be9f4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2be9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9f8: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2be9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be9fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be9fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bea00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bea00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bea04: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2bea04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bea08: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2bea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bea0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bea10: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bea10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bea14: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2bea14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bea18: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2bea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea1c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bea1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bea20: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2bea20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2bea24: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2bea24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2bea28:
    // 0x2bea28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bea2c: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2bea2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2bea30: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2bea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bea34: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bea34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2bea38: 0xc0af83e  jal         func_2BE0F8
    ctx->pc = 0x2BEA38u;
    SET_GPR_U32(ctx, 31, 0x2BEA40u);
    ctx->pc = 0x2BEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA38u;
    // 0x2bea3c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE0F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE0F8u, 0x2BEA38u, 0x2BEA40u)) {
        return;
    }
    ctx->pc = 0x2BEA40u;
label_2bea40:
    // 0x2bea40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2bea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bea44: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x2bea44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2bea48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2bea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2bea4c: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x2bea4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bea50: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x2bea50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bea54: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x2bea54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2bea58: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x2bea58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bea5c: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x2bea5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bea60: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x2bea60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x2bea64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bea68: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2bea68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bea6c: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2bea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bea70: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2bea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bea74: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2bea74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2bea78: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2bea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bea7c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2bea7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bea80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2bea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea84: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bea84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bea88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bea88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bea8c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2bea8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2bea90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bea90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bea94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bea94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bea98: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x2bea98u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x2bea9c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2bea9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2beaa0: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x2beaa0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2beaa4: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2beaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2beaa8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2beaa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2beaac: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x2beaacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2beab0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2beab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2beab4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2beab4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2beab8: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x2beab8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2beabc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2beabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beac0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2beac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2beac4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2beac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2beac8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2beac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beacc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2beaccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bead0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2bead0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2bead4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2bead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bead8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bead8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2beadc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2beadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2beae0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2beae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beae4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2beae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2beae8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2beae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beaec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2beaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2beaf0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2beaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2beaf4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2beaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2beaf8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2beaf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2beafc: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2beafcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2beb00: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2beb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb04: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2beb04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2beb08: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2beb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2beb0c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2beb0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2beb10: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2beb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb14: 0x4602b081  sub.s       $f2, $f22, $f2
    ctx->pc = 0x2beb14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x2beb18: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2beb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2beb1c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2beb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2beb20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2beb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb24: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2beb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2beb28: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2beb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2beb2c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2beb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb30: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2beb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2beb34: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x2beb34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2beb38: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2beb38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2beb3c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2beb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb40: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2beb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2beb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2beb48: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2beb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2beb4c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2beb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb50: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2beb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2beb54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2beb58: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2beb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2beb5c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2beb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb60: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2beb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2beb64: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2beb64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2beb68: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2beb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2beb6c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2beb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb70: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2beb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2beb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2beb78: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2beb78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2beb7c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2beb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2beb80: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2beb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb84: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2beb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2beb88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2beb8c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2beb8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2beb90: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2beb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb94: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2beb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2beb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2beb9c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2beb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2beba0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2beba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beba4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2beba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beba8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2beba8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bebac: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x2bebacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2bebb0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2bebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bebb4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2bebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bebb8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2bebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2bebbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bebbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bebc0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2bebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2bebc4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2bebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2bebc8: 0xac97000c  sw          $s7, 0xC($a0)
    ctx->pc = 0x2bebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 23));
    // 0x2bebcc: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2bebccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2bebd0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2bebd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2bebd4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2bebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2bebd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bebdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2bebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bebe0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bebe4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2bebe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2bebe8: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2bebe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2bebec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bebf0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2bebf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2bebf4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2bebf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2bebf8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bebfc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2bebfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2bec00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2bec00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2bec04: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x2bec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bec08: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2bec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bec0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bec0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bec10: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x2bec10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2bec14: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2bec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bec18: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2bec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bec1c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2bec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bec20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bec20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bec24: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2bec24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2bec28: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2bec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bec2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bec2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bec30: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2BEC30u;
    SET_GPR_U32(ctx, 31, 0x2BEC38u);
    ctx->pc = 0x2BEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC30u;
    // 0x2bec34: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2BEC30u, 0x2BEC38u)) {
        return;
    }
    ctx->pc = 0x2BEC38u;
label_2bec38:
    // 0x2bec38: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2bec3c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2bec3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2bec40: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x2bec40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2bec44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bec48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2bec48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2bec4c: 0x16c2ff44  bne         $s6, $v0, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2BEC4Cu;
    {
        const bool branch_taken_0x2bec4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC4Cu;
        // 0x2bec50: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec4c) {
            ctx->pc = 0x2BE960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be960;
        }
    }
    ctx->pc = 0x2BEC54u;
    // 0x2bec54: 0x0  nop
    ctx->pc = 0x2bec54u;
    // NOP
label_2bec58:
    // 0x2bec58: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2bec58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bec5c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2bec5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bec60: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2bec60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bec64: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2bec64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bec68: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2bec68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bec6c: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2bec6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bec70: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2bec70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bec74: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2bec74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bec78: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2bec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bec7c: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x2bec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bec80: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x2bec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bec84: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2bec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bec88: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2bec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC8Cu;
        // 0x2bec90: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEC94u;
    // 0x2bec94: 0x0  nop
    ctx->pc = 0x2bec94u;
    // NOP
    ctx->pc = 0x2bec98u;
}
