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

// Function: sub_001E3FA8
// Address: 0x1e3fa8 - 0x1e4198
void sub_001E3FA8_0x1e3fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3FA8_0x1e3fa8");
#endif

    switch (ctx->pc) {
        case 0x1e4020u: goto label_1e4020;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4064u: goto label_1e4064;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e4148u: goto label_1e4148;
        default: break;
    }

    ctx->pc = 0x1e3fa8u;

    // 0x1e3fa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e3fac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1e3facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1e3fb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e3fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e3fb4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1e3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1e3fb8: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x1e3fb8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e3fbc: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x1e3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1e3fc0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x1e3fc0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e3fc4: 0x24709680  addiu       $s0, $v1, -0x6980
    ctx->pc = 0x1e3fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940288));
    // 0x1e3fc8: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x1e3fc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e3fcc: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1e3fccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e3fd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e3fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e3fd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e3fd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e3fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fdc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e3fe0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1e3fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e3fe4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e3fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e3fe8: 0x241300fb  addiu       $s3, $zero, 0xFB
    ctx->pc = 0x1e3fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1e3fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3ff0: 0x24540003  addiu       $s4, $v0, 0x3
    ctx->pc = 0x1e3ff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1e3ff4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1e3ff4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e3ff8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1e3ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e3ffc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1e3ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1e4000: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e4000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e4004: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1e4004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1e4008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e400c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1e400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1e4010: 0x3c014377  lui         $at, 0x4377
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17271 << 16));
    // 0x1e4014: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e4014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e4018: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1e401c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1e401cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1e4020:
    // 0x1e4020: 0x4491a800  mtc1        $s1, $f21
    ctx->pc = 0x1e4020u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e4024: 0x0  nop
    ctx->pc = 0x1e4024u;
    // NOP
    // 0x1e4028: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1e4028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1e402c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1e402cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1e4030: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e4030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e4034: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e4034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e4038: 0x0  nop
    ctx->pc = 0x1e4038u;
    // NOP
    // 0x1e403c: 0x0  nop
    ctx->pc = 0x1e403cu;
    // NOP
    // 0x1e4040: 0x4617ad43  div.s       $f21, $f21, $f23
    ctx->pc = 0x1e4040u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[23]);
    // 0x1e4044: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x1E4044u;
    SET_GPR_U32(ctx, 31, 0x1E404Cu);
    ctx->pc = 0x1E4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4044u;
    // 0x1e4048: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x1E4044u, 0x1E404Cu)) {
        return;
    }
    ctx->pc = 0x1E404Cu;
label_1e404c:
    // 0x1e404c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1e404cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1e4050: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e4054: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e4054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e4058: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e4058u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e405c: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x1E405Cu;
    SET_GPR_U32(ctx, 31, 0x1E4064u);
    ctx->pc = 0x1E4060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E405Cu;
    // 0x1e4060: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x1E405Cu, 0x1E4064u)) {
        return;
    }
    ctx->pc = 0x1E4064u;
label_1e4064:
    // 0x1e4064: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1e4064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1e4068: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x1e4068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x1e406c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e406cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e4070: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1e4070u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1e4074: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e4078: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e4078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e407c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e407cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e4080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e4080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4084: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1e4084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e4088: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1e4088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e408c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E408Cu;
    {
        const bool branch_taken_0x1e408c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E408Cu;
        // 0x1e4090: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e408c) {
            ctx->pc = 0x1E40A4u;
            goto label_1e40a4;
        }
    }
    ctx->pc = 0x1E4094u;
    // 0x1e4094: 0x28a200fc  slti        $v0, $a1, 0xFC
    ctx->pc = 0x1e4094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1e4098: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e4098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e409c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E409Cu;
    {
        const bool branch_taken_0x1e409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E409Cu;
        // 0x1e40a0: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e409c) {
            ctx->pc = 0x1E40A8u;
            goto label_1e40a8;
        }
    }
    ctx->pc = 0x1E40A4u;
label_1e40a4:
    // 0x1e40a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e40a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e40a8:
    // 0x1e40a8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1e40a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e40ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E40ACu;
    {
        const bool branch_taken_0x1e40ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e40ac) {
            ctx->pc = 0x1E40B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E40ACu;
            // 0x1e40b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E40BCu;
            goto label_1e40bc;
        }
    }
    ctx->pc = 0x1E40B4u;
    // 0x1e40b4: 0x286200fc  slti        $v0, $v1, 0xFC
    ctx->pc = 0x1e40b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1e40b8: 0x262180a  movz        $v1, $s3, $v0
    ctx->pc = 0x1e40b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19));
label_1e40bc:
    // 0x1e40bc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1e40bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e40c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E40C0u;
    {
        const bool branch_taken_0x1e40c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e40c0) {
            ctx->pc = 0x1E40C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E40C0u;
            // 0x1e40c4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E40D4u;
            goto label_1e40d4;
        }
    }
    ctx->pc = 0x1E40C8u;
    // 0x1e40c8: 0x28a200fc  slti        $v0, $a1, 0xFC
    ctx->pc = 0x1e40c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1e40cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e40ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e40d0: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1e40d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_1e40d4:
    // 0x1e40d4: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x1e40d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e40d8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e40dc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1e40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e40e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e40e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e40e4: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1e40e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e40e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e40ec: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x1e40ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e40f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e40f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e40f4: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1e40f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e40f8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1E40F8u;
    {
        const bool branch_taken_0x1e40f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40F8u;
        // 0x1e40fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40f8) {
            ctx->pc = 0x1E4020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4020;
        }
    }
    ctx->pc = 0x1E4100u;
    // 0x1e4100: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1e4104: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x1e4104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x1e4108: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e4108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e410c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e410cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e4110: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1e4110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1e4114: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e4114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e4118: 0x24519a80  addiu       $s1, $v0, -0x6580
    ctx->pc = 0x1e4118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1e411c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1e411cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1e4120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e4120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e4124: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4128:
    // 0x1e4128: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1e4128u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e412c: 0x0  nop
    ctx->pc = 0x1e412cu;
    // NOP
    // 0x1e4130: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1e4130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1e4134: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e4138: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x1e4138u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x1e413c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1e413cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1e4140: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1E4140u;
    SET_GPR_U32(ctx, 31, 0x1E4148u);
    ctx->pc = 0x1E4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4140u;
    // 0x1e4144: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1E4140u, 0x1E4148u)) {
        return;
    }
    ctx->pc = 0x1E4148u;
label_1e4148:
    // 0x1e4148: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e4148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e414c: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x1e414cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1e4150: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e4154: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1e4154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e4158: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E4158u;
    {
        const bool branch_taken_0x1e4158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4158u;
        // 0x1e415c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4158) {
            ctx->pc = 0x1E4128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4128;
        }
    }
    ctx->pc = 0x1E4160u;
    // 0x1e4160: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e4160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4164: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e4164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4168: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e4168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e416c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e416cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4170: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e4170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4178: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x1e4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1e417c: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x1e417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e4180: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x1e4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e4184: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1e4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e4188: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1e4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e418c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1e418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e4190: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4190u;
        // 0x1e4194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4198u;
}
