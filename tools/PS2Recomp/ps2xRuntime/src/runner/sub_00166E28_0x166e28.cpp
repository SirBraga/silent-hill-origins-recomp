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

// Function: sub_00166E28
// Address: 0x166e28 - 0x166fd8
void sub_00166E28_0x166e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166E28_0x166e28");
#endif

    switch (ctx->pc) {
        case 0x166e78u: goto label_166e78;
        case 0x166e9cu: goto label_166e9c;
        case 0x166eecu: goto label_166eec;
        case 0x166f14u: goto label_166f14;
        default: break;
    }

    ctx->pc = 0x166e28u;

    // 0x166e28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x166e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x166e2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x166e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x166e30: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x166e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x166e34: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x166e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x166e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x166e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x166e40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e44: 0x8c428670  lw          $v0, -0x7990($v0)
    ctx->pc = 0x166e44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338670u));
    // 0x166e48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x166e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x166e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x166e50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x166e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166e54: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x166e54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x166e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166E58u;
    {
        const bool branch_taken_0x166e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E58u;
        // 0x166e5c: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e58) {
            ctx->pc = 0x166E68u;
            goto label_166e68;
        }
    }
    ctx->pc = 0x166E60u;
    // 0x166e60: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x166E60u;
    {
        const bool branch_taken_0x166e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E60u;
        // 0x166e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e60) {
            ctx->pc = 0x166FB0u;
            goto label_166fb0;
        }
    }
    ctx->pc = 0x166E68u;
label_166e68:
    // 0x166e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e6c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x166e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e70: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x166e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x166e74: 0x0  nop
    ctx->pc = 0x166e74u;
    // NOP
label_166e78:
    // 0x166e78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x166e7c: 0x8e10006c  lw          $s0, 0x6C($s0)
    ctx->pc = 0x166e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x166e80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166E80u;
    {
        const bool branch_taken_0x166e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E80u;
        // 0x166e84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e80) {
            ctx->pc = 0x166E94u;
            goto label_166e94;
        }
    }
    ctx->pc = 0x166E88u;
    // 0x166e88: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x166e8c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x166E8Cu;
    {
        const bool branch_taken_0x166e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166e8c) {
            ctx->pc = 0x166E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166E8Cu;
            // 0x166e90: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166e78;
        }
    }
    ctx->pc = 0x166E94u;
label_166e94:
    // 0x166e94: 0xc0c580c  jal         func_316030
    ctx->pc = 0x166E94u;
    SET_GPR_U32(ctx, 31, 0x166E9Cu);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x166E94u, 0x166E9Cu)) {
        return;
    }
    ctx->pc = 0x166E9Cu;
label_166e9c:
    // 0x166e9c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x166ea0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x166ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x166ea4: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x166ea4u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x166ea8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x166EA8u;
    {
        const bool branch_taken_0x166ea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ea8) {
            ctx->pc = 0x166EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166EA8u;
            // 0x166eac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166EB0u;
            goto label_166eb0;
        }
    }
    ctx->pc = 0x166EB0u;
label_166eb0:
    // 0x166eb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x166eb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x166eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x166eb8: 0x1810  mfhi        $v1
    ctx->pc = 0x166eb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x166ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166ec0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x166ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x166ec4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x166ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166ec8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166ecc: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x166eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166ed0: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x166ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x166ed4: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x166ed8: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x166ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166edc: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x166edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ee0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x166ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x166ee4: 0xc0c580c  jal         func_316030
    ctx->pc = 0x166EE4u;
    SET_GPR_U32(ctx, 31, 0x166EECu);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x166EE4u, 0x166EECu)) {
        return;
    }
    ctx->pc = 0x166EECu;
label_166eec:
    // 0x166eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166ef0: 0x0  nop
    ctx->pc = 0x166ef0u;
    // NOP
    // 0x166ef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166ef8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x166ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166efc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x166efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x166f00: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x166f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x166f04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x166f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x166f08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x166f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x166f0c: 0xc0c580c  jal         func_316030
    ctx->pc = 0x166F0Cu;
    SET_GPR_U32(ctx, 31, 0x166F14u);
    ctx->pc = 0x166F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F0Cu;
    // 0x166f10: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x166F0Cu, 0x166F14u)) {
        return;
    }
    ctx->pc = 0x166F14u;
label_166f14:
    // 0x166f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166f18: 0x0  nop
    ctx->pc = 0x166f18u;
    // NOP
    // 0x166f1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166f20: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x166f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166f24: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x166f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x166f28: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x166f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x166f2c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x166f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x166f30: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x166f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x166f34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x166f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x166f38: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x166f38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x166f3c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x166f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x166f40: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x166f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166f44: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x166f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166f48: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x166f48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x166f4c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x166f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166f50: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x166f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x166f54: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x166f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x166f58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166f5c: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x166f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x166f60: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x166f60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x166f64: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x166f64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x166f68: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x166f68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x166f6c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x166f6cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x166f70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x166f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166f74: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x166f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166f78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x166f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x166f7c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x166f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166f80: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x166f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x166f84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x166f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x166f88: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x166f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x166f8c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x166f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166f90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x166f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x166f94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x166f94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x166f98: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x166f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x166f9c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x166f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166fa0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x166fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x166fa4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x166fa4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x166fa8: 0xe6240008  swc1        $f4, 0x8($s1)
    ctx->pc = 0x166fa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x166fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166fb0:
    // 0x166fb0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x166fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166fb4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x166fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166fb8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x166fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166fbc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x166fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166fc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166fc4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x166fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166fc8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x166fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x166FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FCCu;
        // 0x166fd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166FD4u;
    // 0x166fd4: 0x0  nop
    ctx->pc = 0x166fd4u;
    // NOP
    ctx->pc = 0x166fd8u;
}
