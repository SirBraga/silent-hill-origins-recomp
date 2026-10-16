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

// Function: sub_001BDA20
// Address: 0x1bda20 - 0x1bdba8
void sub_001BDA20_0x1bda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDA20_0x1bda20");
#endif

    switch (ctx->pc) {
        case 0x1bda40u: goto label_1bda40;
        case 0x1bda70u: goto label_1bda70;
        case 0x1bdaa0u: goto label_1bdaa0;
        case 0x1bdaccu: goto label_1bdacc;
        case 0x1bdb18u: goto label_1bdb18;
        case 0x1bdb24u: goto label_1bdb24;
        default: break;
    }

    ctx->pc = 0x1bda20u;

    // 0x1bda20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bda24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bda24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bda28: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1bda28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bda2c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1bda2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1bda30: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1bda30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bda34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bda34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bda38: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1BDA38u;
    SET_GPR_U32(ctx, 31, 0x1BDA40u);
    ctx->pc = 0x1BDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA38u;
    // 0x1bda3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1BDA38u, 0x1BDA40u)) {
        return;
    }
    ctx->pc = 0x1BDA40u;
label_1bda40:
    // 0x1bda40: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bda40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bda44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bda44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bda48: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1bda48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bda4c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1bda4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bda50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDA50u;
    {
        const bool branch_taken_0x1bda50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bda50) {
            ctx->pc = 0x1BDA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDA50u;
            // 0x1bda54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDA58u;
            goto label_1bda58;
        }
    }
    ctx->pc = 0x1BDA58u;
label_1bda58:
    // 0x1bda58: 0x2010  mfhi        $a0
    ctx->pc = 0x1bda58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bda5c: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1bda5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bda60: 0x0  nop
    ctx->pc = 0x1bda60u;
    // NOP
    // 0x1bda64: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1bda64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1bda68: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1BDA68u;
    SET_GPR_U32(ctx, 31, 0x1BDA70u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1BDA68u, 0x1BDA70u)) {
        return;
    }
    ctx->pc = 0x1BDA70u;
label_1bda70:
    // 0x1bda70: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1bda70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bda74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bda74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bda78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1bda78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bda7c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1bda7cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bda80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDA80u;
    {
        const bool branch_taken_0x1bda80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bda80) {
            ctx->pc = 0x1BDA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDA80u;
            // 0x1bda84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDA88u;
            goto label_1bda88;
        }
    }
    ctx->pc = 0x1BDA88u;
label_1bda88:
    // 0x1bda88: 0x2010  mfhi        $a0
    ctx->pc = 0x1bda88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bda8c: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x1bda8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1bda90: 0x0  nop
    ctx->pc = 0x1bda90u;
    // NOP
    // 0x1bda94: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x1bda94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x1bda98: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1BDA98u;
    SET_GPR_U32(ctx, 31, 0x1BDAA0u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1BDA98u, 0x1BDAA0u)) {
        return;
    }
    ctx->pc = 0x1BDAA0u;
label_1bdaa0:
    // 0x1bdaa0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1bdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bdaa4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1bdaa4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bdaa8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDAA8u;
    {
        const bool branch_taken_0x1bdaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdaa8) {
            ctx->pc = 0x1BDAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDAA8u;
            // 0x1bdaac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDAB0u;
            goto label_1bdab0;
        }
    }
    ctx->pc = 0x1BDAB0u;
label_1bdab0:
    // 0x1bdab0: 0x2010  mfhi        $a0
    ctx->pc = 0x1bdab0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bdab4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bdab8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdabc: 0x0  nop
    ctx->pc = 0x1bdabcu;
    // NOP
    // 0x1bdac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bdac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bdac4: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1BDAC4u;
    SET_GPR_U32(ctx, 31, 0x1BDACCu);
    ctx->pc = 0x1BDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAC4u;
    // 0x1bdac8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1BDAC4u, 0x1BDACCu)) {
        return;
    }
    ctx->pc = 0x1BDACCu;
label_1bdacc:
    // 0x1bdacc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bdaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bdad0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1bdad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1bdad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bdad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdad8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1bdad8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bdadc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1bdadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1bdae0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bdae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bdae4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bdae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdae8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDAE8u;
    {
        const bool branch_taken_0x1bdae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdae8) {
            ctx->pc = 0x1BDAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDAE8u;
            // 0x1bdaec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDAF0u;
            goto label_1bdaf0;
        }
    }
    ctx->pc = 0x1BDAF0u;
label_1bdaf0:
    // 0x1bdaf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bdaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdaf4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1bdaf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1bdaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdafc: 0x3010  mfhi        $a2
    ctx->pc = 0x1bdafcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1bdb00: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x1bdb00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bdb04: 0x0  nop
    ctx->pc = 0x1bdb04u;
    // NOP
    // 0x1bdb08: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1bdb08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1bdb0c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1bdb0cu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x1bdb10: 0xc06fb04  jal         func_1BEC10
    ctx->pc = 0x1BDB10u;
    SET_GPR_U32(ctx, 31, 0x1BDB18u);
    ctx->pc = 0x1BDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB10u;
    // 0x1bdb14: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BEC10u, 0x1BDB10u, 0x1BDB18u)) {
        return;
    }
    ctx->pc = 0x1BDB18u;
label_1bdb18:
    // 0x1bdb18: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bdb1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1BDB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB24u);
    ctx->pc = 0x1BDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB1Cu;
    // 0x1bdb20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1BDB1Cu, 0x1BDB24u)) {
        return;
    }
    ctx->pc = 0x1BDB24u;
label_1bdb24:
    // 0x1bdb24: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bdb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdb28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bdb28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bdb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1bdb30: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1bdb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1bdb34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bdb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bdb38: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x1bdb38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1bdb3c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1bdb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1bdb40: 0xe476000c  swc1        $f22, 0xC($v1)
    ctx->pc = 0x1bdb40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1bdb44: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x1bdb44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1bdb48: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1bdb48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1bdb4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdb50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1bdb54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1bdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1bdb58: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdb5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDB5Cu;
    {
        const bool branch_taken_0x1bdb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb5c) {
            ctx->pc = 0x1BDB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDB5Cu;
            // 0x1bdb60: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB64u;
            goto label_1bdb64;
        }
    }
    ctx->pc = 0x1BDB64u;
label_1bdb64:
    // 0x1bdb64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bdb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bdb68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDB68u;
    {
        const bool branch_taken_0x1bdb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb68) {
            ctx->pc = 0x1BDB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDB68u;
            // 0x1bdb6c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB70u;
            goto label_1bdb70;
        }
    }
    ctx->pc = 0x1BDB70u;
label_1bdb70:
    // 0x1bdb70: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bdb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1bdb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdb78: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bdb7c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bdb80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdb84: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1bdb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1bdb88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdb8c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1bdb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1bdb90: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1bdb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1bdb94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bdb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdb98: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1bdb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bdb9c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1bdb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bdba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBA0u;
        // 0x1bdba4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBA8u;
}
