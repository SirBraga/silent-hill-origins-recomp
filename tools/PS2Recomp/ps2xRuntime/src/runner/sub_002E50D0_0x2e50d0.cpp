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

// Function: sub_002E50D0
// Address: 0x2e50d0 - 0x2e54e8
void sub_002E50D0_0x2e50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E50D0_0x2e50d0");
#endif

    switch (ctx->pc) {
        case 0x2e5118u: goto label_2e5118;
        case 0x2e52c0u: goto label_2e52c0;
        case 0x2e5308u: goto label_2e5308;
        case 0x2e5378u: goto label_2e5378;
        case 0x2e53c0u: goto label_2e53c0;
        case 0x2e5430u: goto label_2e5430;
        case 0x2e5478u: goto label_2e5478;
        case 0x2e54bcu: goto label_2e54bc;
        default: break;
    }

    ctx->pc = 0x2e50d0u;

    // 0x2e50d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e50d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e50d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e50d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e50dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e50dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e50e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e50e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e50e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e50ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e50ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e50f4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e50f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e50f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e50fc: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x2e50fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5100: 0x129a80b  movn        $s5, $t1, $t1
    ctx->pc = 0x2e5100u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9));
    // 0x2e5104: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e5104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e510c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e510cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5110: 0xc0b93b2  jal         func_2E4EC8
    ctx->pc = 0x2E5110u;
    SET_GPR_U32(ctx, 31, 0x2E5118u);
    ctx->pc = 0x2E5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5110u;
    // 0x2e5114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4EC8u, 0x2E5110u, 0x2E5118u)) {
        return;
    }
    ctx->pc = 0x2E5118u;
label_2e5118:
    // 0x2e5118: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2e5118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e511c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e511cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2e5120: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2e5120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e5124: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x2e5124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2e5128: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x2e5128u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2e512c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E512Cu;
    {
        const bool branch_taken_0x2e512c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E512Cu;
        // 0x2e5130: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e512c) {
            ctx->pc = 0x2E5144u;
            goto label_2e5144;
        }
    }
    ctx->pc = 0x2E5134u;
    // 0x2e5134: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2e5134u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e5138: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e5138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e513c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E513Cu;
    {
        const bool branch_taken_0x2e513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E513Cu;
        // 0x2e5140: 0x9263000c  lbu         $v1, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e513c) {
            ctx->pc = 0x2E5164u;
            goto label_2e5164;
        }
    }
    ctx->pc = 0x2E5144u;
label_2e5144:
    // 0x2e5144: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e5144u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e5148: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e5148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e514c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5150: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e5150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e5154: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e5154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e5158: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2e5158u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2e515c: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x2e515cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2e5160: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x2e5160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_2e5164:
    // 0x2e5164: 0x9284000d  lbu         $a0, 0xD($s4)
    ctx->pc = 0x2e5164u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e5168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e516c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e516cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5170: 0x9265000d  lbu         $a1, 0xD($s3)
    ctx->pc = 0x2e5170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e5174: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2e5174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5178: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e5178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e517c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e517cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5184: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e5184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e5188: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2e5188u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e518c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e518cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e5190: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e5190u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2e5194: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e5194u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2e5198: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5198u;
    {
        const bool branch_taken_0x2e5198 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5198u;
        // 0x2e519c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5198) {
            ctx->pc = 0x2E51B0u;
            goto label_2e51b0;
        }
    }
    ctx->pc = 0x2E51A0u;
    // 0x2e51a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e51a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e51a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e51a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e51a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E51A8u;
    {
        const bool branch_taken_0x2e51a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51A8u;
        // 0x2e51ac: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51a8) {
            ctx->pc = 0x2E51CCu;
            goto label_2e51cc;
        }
    }
    ctx->pc = 0x2E51B0u;
label_2e51b0:
    // 0x2e51b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e51b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e51b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e51b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e51b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e51bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e51bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e51c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e51c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e51c4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e51c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2e51c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e51cc:
    // 0x2e51cc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E51CCu;
    {
        const bool branch_taken_0x2e51cc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51CCu;
        // 0x2e51d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51cc) {
            ctx->pc = 0x2E51E4u;
            goto label_2e51e4;
        }
    }
    ctx->pc = 0x2E51D4u;
    // 0x2e51d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e51d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e51d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e51d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e51dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E51DCu;
    {
        const bool branch_taken_0x2e51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e51dc) {
            ctx->pc = 0x2E51F8u;
            goto label_2e51f8;
        }
    }
    ctx->pc = 0x2E51E4u;
label_2e51e4:
    // 0x2e51e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e51e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e51e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e51e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e51ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e51ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e51f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e51f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e51f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e51f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e51f8:
    // 0x2e51f8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e51f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x2e51fc: 0x71823  negu        $v1, $a3
    ctx->pc = 0x2e51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2e5200: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5204: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2e5204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2e5208: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e520c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e520cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e5210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e5214: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2e5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e5218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e521c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E521Cu;
    {
        const bool branch_taken_0x2e521c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E521Cu;
        // 0x2e5220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e521c) {
            ctx->pc = 0x2E5234u;
            goto label_2e5234;
        }
    }
    ctx->pc = 0x2E5224u;
    // 0x2e5224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e522c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E522Cu;
    {
        const bool branch_taken_0x2e522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E522Cu;
        // 0x2e5230: 0x9262000c  lbu         $v0, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e522c) {
            ctx->pc = 0x2E524Cu;
            goto label_2e524c;
        }
    }
    ctx->pc = 0x2E5234u;
label_2e5234:
    // 0x2e5234: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5238: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e523c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e5248: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2e5248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_2e524c:
    // 0x2e524c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e524cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5250: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2e5250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2e5254: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2e5254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5258: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e5258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e525c: 0x518c2  srl         $v1, $a1, 3
    ctx->pc = 0x2e525cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2e5260: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x2e5260u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2e5264: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5264u;
    {
        const bool branch_taken_0x2e5264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5264) {
            ctx->pc = 0x2E5268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5264u;
            // 0x2e5268: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E526Cu;
            goto label_2e526c;
        }
    }
    ctx->pc = 0x2E526Cu;
label_2e526c:
    // 0x2e526c: 0x4812  mflo        $t1
    ctx->pc = 0x2e526cu;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x2e5270: 0x12200093  beqz        $s1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2E5270u;
    {
        const bool branch_taken_0x2e5270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5270u;
        // 0x2e5274: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5270) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E5278u;
    // 0x2e5278: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e527c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e527cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5280: 0x1220008e  beqz        $s1, . + 4 + (0x8E << 2)
    ctx->pc = 0x2E5280u;
    {
        const bool branch_taken_0x2e5280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5280u;
        // 0x2e5284: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5280) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E5288u;
    // 0x2e5288: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x2e5288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e528c: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E528Cu;
    {
        const bool branch_taken_0x2e528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E528Cu;
        // 0x2e5290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e528c) {
            ctx->pc = 0x2E5338u;
            goto label_2e5338;
        }
    }
    ctx->pc = 0x2E5294u;
    // 0x2e5294: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e5294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e5298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e529c: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E529Cu;
    {
        const bool branch_taken_0x2e529c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e529c) {
            ctx->pc = 0x2E52A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E529Cu;
            // 0x2e52a0: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5340u;
            goto label_2e5340;
        }
    }
    ctx->pc = 0x2E52A4u;
    // 0x2e52a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e52a8: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E52A8u;
    {
        const bool branch_taken_0x2e52a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52A8u;
        // 0x2e52ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52a8) {
            ctx->pc = 0x2E52F8u;
            goto label_2e52f8;
        }
    }
    ctx->pc = 0x2E52B0u;
    // 0x2e52b0: 0x11200082  beqz        $t1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2E52B0u;
    {
        const bool branch_taken_0x2e52b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52B0u;
        // 0x2e52b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52b0) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E52B8u;
    // 0x2e52b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e52b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52bc: 0x0  nop
    ctx->pc = 0x2e52bcu;
    // NOP
label_2e52c0:
    // 0x2e52c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e52c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e52c4: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x2e52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2e52c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e52c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e52cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e52ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e52d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2e52d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e52d4: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x2e52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2e52d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e52d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e52dc: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x2e52dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e52e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e52e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e52e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e52e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e52e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E52E8u;
    {
        const bool branch_taken_0x2e52e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52E8u;
        // 0x2e52ec: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52e8) {
            ctx->pc = 0x2E52C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e52c0;
        }
    }
    ctx->pc = 0x2E52F0u;
    // 0x2e52f0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2E52F0u;
    {
        const bool branch_taken_0x2e52f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52F0u;
        // 0x2e52f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52f0) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E52F8u;
label_2e52f8:
    // 0x2e52f8: 0x11200070  beqz        $t1, . + 4 + (0x70 << 2)
    ctx->pc = 0x2E52F8u;
    {
        const bool branch_taken_0x2e52f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52F8u;
        // 0x2e52fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52f8) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E5300u;
    // 0x2e5300: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5304: 0x0  nop
    ctx->pc = 0x2e5304u;
    // NOP
label_2e5308:
    // 0x2e5308: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e5308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e530c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e5310: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x2e5310u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e5314: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2e5314u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5318: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e531c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e531cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5320: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5324: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2e5324u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5328: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E5328u;
    {
        const bool branch_taken_0x2e5328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5328u;
        // 0x2e532c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5328) {
            ctx->pc = 0x2E5308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5308;
        }
    }
    ctx->pc = 0x2E5330u;
    // 0x2e5330: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2E5330u;
    {
        const bool branch_taken_0x2e5330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5330u;
        // 0x2e5334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5330) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E5338u;
label_2e5338:
    // 0x2e5338: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e5338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e533c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e5340:
    // 0x2e5340: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2E5340u;
    {
        const bool branch_taken_0x2e5340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5340u;
        // 0x2e5344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5340) {
            ctx->pc = 0x2E54B4u;
            goto label_2e54b4;
        }
    }
    ctx->pc = 0x2E5348u;
    // 0x2e5348: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e5348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e534c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5350: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2E5350u;
    {
        const bool branch_taken_0x2e5350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5350u;
        // 0x2e5354: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5350) {
            ctx->pc = 0x2E54B4u;
            goto label_2e54b4;
        }
    }
    ctx->pc = 0x2E5358u;
    // 0x2e5358: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e5358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e535c: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E535Cu;
    {
        const bool branch_taken_0x2e535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E535Cu;
        // 0x2e5360: 0x92620018  lbu         $v0, 0x18($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e535c) {
            ctx->pc = 0x2E5410u;
            goto label_2e5410;
        }
    }
    ctx->pc = 0x2E5364u;
    // 0x2e5364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5368: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5368u;
    {
        const bool branch_taken_0x2e5368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5368u;
        // 0x2e536c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5368) {
            ctx->pc = 0x2E53B4u;
            goto label_2e53b4;
        }
    }
    ctx->pc = 0x2E5370u;
    // 0x2e5370: 0x11200052  beqz        $t1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2E5370u;
    {
        const bool branch_taken_0x2e5370 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5370u;
        // 0x2e5374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5370) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E5378u;
label_2e5378:
    // 0x2e5378: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x2e5378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2e537c: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x2e537cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e5380: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e5380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e5384: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2e5384u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5388: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x2e5388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2e538c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e538cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5390: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e5390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5394: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e5394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e5398: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x2e5398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e539c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e53a0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e53a4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E53A4u;
    {
        const bool branch_taken_0x2e53a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53A4u;
        // 0x2e53a8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53a4) {
            ctx->pc = 0x2E5378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5378;
        }
    }
    ctx->pc = 0x2E53ACu;
    // 0x2e53ac: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2E53ACu;
    {
        const bool branch_taken_0x2e53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53ACu;
        // 0x2e53b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53ac) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E53B4u;
label_2e53b4:
    // 0x2e53b4: 0x11200041  beqz        $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E53B4u;
    {
        const bool branch_taken_0x2e53b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53B4u;
        // 0x2e53b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53b4) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E53BCu;
    // 0x2e53bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e53bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e53c0:
    // 0x2e53c0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2e53c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e53c4: 0x2282821  addu        $a1, $s1, $t0
    ctx->pc = 0x2e53c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2e53c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e53c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e53cc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2e53ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2e53d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2e53d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e53d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e53d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e53d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e53d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e53dc: 0xe9202b  sltu        $a0, $a3, $t1
    ctx->pc = 0x2e53dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e53e0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2e53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2e53e4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2e53e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2e53e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e53ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e53f0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e53f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e53f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e53f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e53f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e53fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e53fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5400: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E5400u;
    {
        const bool branch_taken_0x2e5400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5400u;
        // 0x2e5404: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5400) {
            ctx->pc = 0x2E53C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e53c0;
        }
    }
    ctx->pc = 0x2E5408u;
    // 0x2e5408: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2E5408u;
    {
        const bool branch_taken_0x2e5408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5408u;
        // 0x2e540c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5408) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E5410u;
label_2e5410:
    // 0x2e5410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5414: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5414u;
    {
        const bool branch_taken_0x2e5414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5414) {
            ctx->pc = 0x2E5464u;
            goto label_2e5464;
        }
    }
    ctx->pc = 0x2E541Cu;
    // 0x2e541c: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E541Cu;
    {
        const bool branch_taken_0x2e541c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E541Cu;
        // 0x2e5420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e541c) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E5424u;
    // 0x2e5424: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2e5424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5428: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e542c: 0x0  nop
    ctx->pc = 0x2e542cu;
    // NOP
label_2e5430:
    // 0x2e5430: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e5430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5434: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2e5434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2e5438: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e543c: 0xc9202b  sltu        $a0, $a2, $t1
    ctx->pc = 0x2e543cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e5440: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2e5440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5444: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e544c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e544cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e5450: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2e5450u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5454: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E5454u;
    {
        const bool branch_taken_0x2e5454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5454u;
        // 0x2e5458: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5454) {
            ctx->pc = 0x2E5430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5430;
        }
    }
    ctx->pc = 0x2E545Cu;
    // 0x2e545c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E545Cu;
    {
        const bool branch_taken_0x2e545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E545Cu;
        // 0x2e5460: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e545c) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E5464u;
label_2e5464:
    // 0x2e5464: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5464u;
    {
        const bool branch_taken_0x2e5464 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5464u;
        // 0x2e5468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5464) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E546Cu;
    // 0x2e546c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2e546cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5470: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e5470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5474: 0x0  nop
    ctx->pc = 0x2e5474u;
    // NOP
label_2e5478:
    // 0x2e5478: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x2e5478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e547c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2e547cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2e5480: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2e5480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2e5484: 0xe9282b  sltu        $a1, $a3, $t1
    ctx->pc = 0x2e5484u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e5488: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x2e5488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e548c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2e548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2e5490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e5490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e5494: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2e5494u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e5498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e5498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e549c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e549cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e54a0: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2e54a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e54a4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E54A4u;
    {
        const bool branch_taken_0x2e54a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54A4u;
        // 0x2e54a8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54a4) {
            ctx->pc = 0x2E5478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5478;
        }
    }
    ctx->pc = 0x2E54ACu;
    // 0x2e54ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E54ACu;
    {
        const bool branch_taken_0x2e54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54ACu;
        // 0x2e54b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54ac) {
            ctx->pc = 0x2E54C0u;
            goto label_2e54c0;
        }
    }
    ctx->pc = 0x2E54B4u;
label_2e54b4:
    // 0x2e54b4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E54B4u;
    SET_GPR_U32(ctx, 31, 0x2E54BCu);
    ctx->pc = 0x2E54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54B4u;
    // 0x2e54b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E54B4u, 0x2E54BCu)) {
        return;
    }
    ctx->pc = 0x2E54BCu;
label_2e54bc:
    // 0x2e54bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e54bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e54c0:
    // 0x2e54c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e54c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e54c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e54c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e54c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e54c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e54cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e54ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e54d0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e54d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e54d4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e54d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e54d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e54d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e54dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E54DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54DCu;
        // 0x2e54e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E54DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E54E4u;
    // 0x2e54e4: 0x0  nop
    ctx->pc = 0x2e54e4u;
    // NOP
    ctx->pc = 0x2e54e8u;
}
