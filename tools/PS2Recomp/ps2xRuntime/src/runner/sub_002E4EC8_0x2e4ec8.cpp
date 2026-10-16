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

// Function: sub_002E4EC8
// Address: 0x2e4ec8 - 0x2e50d0
void sub_002E4EC8_0x2e4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4EC8_0x2e4ec8");
#endif

    ctx->pc = 0x2e4ec8u;

    // 0x2e4ec8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e4ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ecc: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x2e4eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e4ed0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2e4ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2e4ed4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2e4ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ed8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4ED8u;
    {
        const bool branch_taken_0x2e4ed8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4ED8u;
        // 0x2e4edc: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ed8) {
            ctx->pc = 0x2E4EF0u;
            goto label_2e4ef0;
        }
    }
    ctx->pc = 0x2E4EE0u;
    // 0x2e4ee0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2e4ee0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e4ee4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e4ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e4ee8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4EE8u;
    {
        const bool branch_taken_0x2e4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EE8u;
        // 0x2e4eec: 0x9103000c  lbu         $v1, 0xC($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ee8) {
            ctx->pc = 0x2E4F10u;
            goto label_2e4f10;
        }
    }
    ctx->pc = 0x2E4EF0u;
label_2e4ef0:
    // 0x2e4ef0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e4ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e4ef4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e4ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e4ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e4ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e4efc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e4efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e4f00: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e4f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e4f04: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2e4f04u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2e4f08: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x2e4f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e4f0c: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x2e4f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_2e4f10:
    // 0x2e4f10: 0x90c4000d  lbu         $a0, 0xD($a2)
    ctx->pc = 0x2e4f10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x2e4f14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e4f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e4f18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e4f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4f1c: 0x9105000d  lbu         $a1, 0xD($t0)
    ctx->pc = 0x2e4f1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x2e4f20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2e4f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4f24: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e4f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e4f28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e4f28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4f30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e4f34: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2e4f34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4f38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e4f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e4f3c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e4f3cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2e4f40: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e4f40u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2e4f44: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4F44u;
    {
        const bool branch_taken_0x2e4f44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F44u;
        // 0x2e4f48: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f44) {
            ctx->pc = 0x2E4F5Cu;
            goto label_2e4f5c;
        }
    }
    ctx->pc = 0x2E4F4Cu;
    // 0x2e4f4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e4f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4f50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e4f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e4f54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4F54u;
    {
        const bool branch_taken_0x2e4f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F54u;
        // 0x2e4f58: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f54) {
            ctx->pc = 0x2E4F78u;
            goto label_2e4f78;
        }
    }
    ctx->pc = 0x2E4F5Cu;
label_2e4f5c:
    // 0x2e4f5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e4f60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4f64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e4f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e4f68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e4f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4f6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e4f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e4f70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e4f70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2e4f74: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2e4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2e4f78:
    // 0x2e4f78: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4F78u;
    {
        const bool branch_taken_0x2e4f78 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F78u;
        // 0x2e4f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f78) {
            ctx->pc = 0x2E4F90u;
            goto label_2e4f90;
        }
    }
    ctx->pc = 0x2E4F80u;
    // 0x2e4f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4f88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4F88u;
    {
        const bool branch_taken_0x2e4f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f88) {
            ctx->pc = 0x2E4FA4u;
            goto label_2e4fa4;
        }
    }
    ctx->pc = 0x2E4F90u;
label_2e4f90:
    // 0x2e4f90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4f94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e4f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e4f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4fa0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e4fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e4fa4:
    // 0x2e4fa4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e4fa4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x2e4fa8: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x2e4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e4fac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e4facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fb0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2e4fb0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2e4fb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e4fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e4fb8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2e4fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2e4fbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e4fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e4fc0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e4fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e4fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4fc8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2e4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e4fcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4fd0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4FD0u;
    {
        const bool branch_taken_0x2e4fd0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FD0u;
        // 0x2e4fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fd0) {
            ctx->pc = 0x2E4FE8u;
            goto label_2e4fe8;
        }
    }
    ctx->pc = 0x2E4FD8u;
    // 0x2e4fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4fdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4fe0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4FE0u;
    {
        const bool branch_taken_0x2e4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fe0) {
            ctx->pc = 0x2E4FFCu;
            goto label_2e4ffc;
        }
    }
    ctx->pc = 0x2E4FE8u;
label_2e4fe8:
    // 0x2e4fe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4fec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e4ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4ff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e4ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e4ffc:
    // 0x2e4ffc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e4ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5000: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e5000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5004: 0x0  nop
    ctx->pc = 0x2e5004u;
    // NOP
    // 0x2e5008: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5008u;
    {
        const bool branch_taken_0x2e5008 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5008u;
        // 0x2e500c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5008) {
            ctx->pc = 0x2E5020u;
            goto label_2e5020;
        }
    }
    ctx->pc = 0x2E5010u;
    // 0x2e5010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5014: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e5014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5018: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5018u;
    {
        const bool branch_taken_0x2e5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5018u;
        // 0x2e501c: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5018) {
            ctx->pc = 0x2E5038u;
            goto label_2e5038;
        }
    }
    ctx->pc = 0x2E5020u;
label_2e5020:
    // 0x2e5020: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5024: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e502c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e502cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5030: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e5030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2e5034: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2e5034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2e5038:
    // 0x2e5038: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5038u;
    {
        const bool branch_taken_0x2e5038 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5038u;
        // 0x2e503c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5038) {
            ctx->pc = 0x2E5050u;
            goto label_2e5050;
        }
    }
    ctx->pc = 0x2E5040u;
    // 0x2e5040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5048: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5048u;
    {
        const bool branch_taken_0x2e5048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5048) {
            ctx->pc = 0x2E5064u;
            goto label_2e5064;
        }
    }
    ctx->pc = 0x2E5050u;
label_2e5050:
    // 0x2e5050: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e505c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e505cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5060: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5064:
    // 0x2e5064: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e5064u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2e5068: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5068u;
    {
        const bool branch_taken_0x2e5068 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2E506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5068u;
        // 0x2e506c: 0x91842  srl         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5068) {
            ctx->pc = 0x2E5080u;
            goto label_2e5080;
        }
    }
    ctx->pc = 0x2E5070u;
    // 0x2e5070: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2e5070u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5078u;
    {
        const bool branch_taken_0x2e5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5078u;
        // 0x2e507c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5078) {
            ctx->pc = 0x2E5098u;
            goto label_2e5098;
        }
    }
    ctx->pc = 0x2E5080u;
label_2e5080:
    // 0x2e5080: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x2e5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2e5084: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e508c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e508cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5090: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e5094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e5098:
    // 0x2e5098: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e509c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e509cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e50a0: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2e50a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e50a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E50A4u;
    {
        const bool branch_taken_0x2e50a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50A4u;
        // 0x2e50a8: 0x71042  srl         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50a4) {
            ctx->pc = 0x2E50C4u;
            goto label_2e50c4;
        }
    }
    ctx->pc = 0x2E50ACu;
    // 0x2e50ac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E50ACu;
    {
        const bool branch_taken_0x2e50ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e50ac) {
            ctx->pc = 0x2E50B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E50ACu;
            // 0x2e50b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E50B4u;
            goto label_2e50b4;
        }
    }
    ctx->pc = 0x2E50B4u;
label_2e50b4:
    // 0x2e50b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2e50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e50b8: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x2e50b8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e50bc: 0x1012  mflo        $v0
    ctx->pc = 0x2e50bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e50c0: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x2e50c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e50c4:
    // 0x2e50c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E50C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50C4u;
        // 0x2e50c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E50C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E50CCu;
    // 0x2e50cc: 0x0  nop
    ctx->pc = 0x2e50ccu;
    // NOP
    ctx->pc = 0x2e50d0u;
}
