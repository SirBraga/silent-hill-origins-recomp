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

// Function: sub_00227FD8
// Address: 0x227fd8 - 0x228130
void sub_00227FD8_0x227fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227FD8_0x227fd8");
#endif

    switch (ctx->pc) {
        case 0x228048u: goto label_228048;
        case 0x228060u: goto label_228060;
        case 0x22806cu: goto label_22806c;
        case 0x228078u: goto label_228078;
        case 0x228080u: goto label_228080;
        case 0x2280acu: goto label_2280ac;
        case 0x2280b8u: goto label_2280b8;
        case 0x2280c4u: goto label_2280c4;
        case 0x2280ccu: goto label_2280cc;
        default: break;
    }

    ctx->pc = 0x227fd8u;

    // 0x227fd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x227fdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227fe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227fe4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x227fe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x227fe8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x227fec: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x227fecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x227ff0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x227ff0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x227ff4: 0x46150603  div.s       $f24, $f0, $f21
    ctx->pc = 0x227ff4u;
    ctx->f[24] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x227ff8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x227ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x227ffc: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x227ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E90u));
    // 0x228000: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x228000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x228004: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x228004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x228008: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x228008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22800c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228010: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x228010u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x228014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x228014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228018: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x228018u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22801c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22801cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x228020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x228024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228028: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x228028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22802c: 0xa060010c  sb          $zero, 0x10C($v1)
    ctx->pc = 0x22802cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x228030: 0xe475020c  swc1        $f21, 0x20C($v1)
    ctx->pc = 0x228030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 524), bits); }
    // 0x228034: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x228034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x228038: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x228038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x22803c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x22803cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x228040: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x228040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x228044: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x228044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_228048:
    // 0x228048: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x228048u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22804c: 0x0  nop
    ctx->pc = 0x22804cu;
    // NOP
    // 0x228050: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x228050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x228054: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x228054u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[22]);
    // 0x228058: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x228058u;
    SET_GPR_U32(ctx, 31, 0x228060u);
    ctx->pc = 0x22805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228058u;
    // 0x22805c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x228058u, 0x228060u)) {
        return;
    }
    ctx->pc = 0x228060u;
label_228060:
    // 0x228060: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x228060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x228064: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x228064u;
    SET_GPR_U32(ctx, 31, 0x22806Cu);
    ctx->pc = 0x228068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228064u;
    // 0x228068: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x228064u, 0x22806Cu)) {
        return;
    }
    ctx->pc = 0x22806Cu;
label_22806c:
    // 0x22806c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22806cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228070: 0xc09b214  jal         func_26C850
    ctx->pc = 0x228070u;
    SET_GPR_U32(ctx, 31, 0x228078u);
    ctx->pc = 0x228074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228070u;
    // 0x228074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C850u, 0x228070u, 0x228078u)) {
        return;
    }
    ctx->pc = 0x228078u;
label_228078:
    // 0x228078: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x228078u;
    SET_GPR_U32(ctx, 31, 0x228080u);
    ctx->pc = 0x22807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228078u;
    // 0x22807c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x228078u, 0x228080u)) {
        return;
    }
    ctx->pc = 0x228080u;
label_228080:
    // 0x228080: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x228080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x228084: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x228084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x228088: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x228088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3E90u));
    // 0x22808c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22808cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228090: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x228094: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x228094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x228098: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x228098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22809c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22809cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2280a0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2280a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2280a4: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x2280A4u;
    SET_GPR_U32(ctx, 31, 0x2280ACu);
    ctx->pc = 0x2280A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280A4u;
    // 0x2280a8: 0xa044000c  sb          $a0, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x2280A4u, 0x2280ACu)) {
        return;
    }
    ctx->pc = 0x2280ACu;
label_2280ac:
    // 0x2280ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2280acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2280b0: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x2280B0u;
    SET_GPR_U32(ctx, 31, 0x2280B8u);
    ctx->pc = 0x2280B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280B0u;
    // 0x2280b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x2280B0u, 0x2280B8u)) {
        return;
    }
    ctx->pc = 0x2280B8u;
label_2280b8:
    // 0x2280b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2280b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280bc: 0xc09b214  jal         func_26C850
    ctx->pc = 0x2280BCu;
    SET_GPR_U32(ctx, 31, 0x2280C4u);
    ctx->pc = 0x2280C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280BCu;
    // 0x2280c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C850u, 0x2280BCu, 0x2280C4u)) {
        return;
    }
    ctx->pc = 0x2280C4u;
label_2280c4:
    // 0x2280c4: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x2280C4u;
    SET_GPR_U32(ctx, 31, 0x2280CCu);
    ctx->pc = 0x2280C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280C4u;
    // 0x2280c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x2280C4u, 0x2280CCu)) {
        return;
    }
    ctx->pc = 0x2280CCu;
label_2280cc:
    // 0x2280cc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2280ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2280d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2280d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2280d4: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x2280d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3E90u));
    // 0x2280d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2280dc: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x2280dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x2280e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2280e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2280e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2280e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2280e8: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x2280e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2280ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2280ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2280f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2280f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2280f4: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2280F4u;
    {
        const bool branch_taken_0x2280f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2280F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280F4u;
        // 0x2280f8: 0xa044010c  sb          $a0, 0x10C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 268), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280f4) {
            ctx->pc = 0x228048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228048;
        }
    }
    ctx->pc = 0x2280FCu;
    // 0x2280fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2280fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x228104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228108: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x228108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22810c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22810cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228110: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x228110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x228114: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x228114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x228118: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x228118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22811c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x22811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228120: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x228120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228124: 0x3e00008  jr          $ra
    ctx->pc = 0x228124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228124u;
        // 0x228128: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22812Cu;
    // 0x22812c: 0x0  nop
    ctx->pc = 0x22812cu;
    // NOP
    ctx->pc = 0x228130u;
}
